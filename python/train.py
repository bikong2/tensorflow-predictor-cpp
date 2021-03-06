#!/usr/bin/env python

import sys
import os
import datetime
import tensorflow as tf
from deep_model import Model
from data import Data

# Train model
# It use tfrecord as input

# config
flags = tf.app.flags
FLAGS = flags.FLAGS
flags.DEFINE_float('learning_rate', 0.01, 'learning rate')
flags.DEFINE_integer('max_epoch', 100, ' max train epochs')
flags.DEFINE_integer("batch_size", 100, "batch size for sgd")
flags.DEFINE_integer("valid_batch_size", 100, "validate set batch size")
flags.DEFINE_integer("thread_num", 1, "number of thread to read data")
flags.DEFINE_integer("min_after_dequeue", 100, "min_after_dequeue for shuffle queue")
flags.DEFINE_string("model_dir", "./model/", "model dirctory")
flags.DEFINE_string("checkpoint_dir", "./checkpoint", "checkpoint dirctory")
flags.DEFINE_string("tensorboard_dir", "./tensorboard/", "summary data saved for tensorboard")
flags.DEFINE_string("optimizer", "adagrad", "optimization algorithm")
flags.DEFINE_integer('steps_to_validate', 1, 'steps to validate and print')
flags.DEFINE_bool("train_from_checkpoint", False, "reload model from checkpoint and go on training")
flags.DEFINE_string('dict', './libfm.dict', 'field feature dict')
flags.DEFINE_string('train_file', './libfm.tfrecord', 'train file')
flags.DEFINE_string('valid_file', './libfm.tfrecord', 'valid file')
flags.DEFINE_string('sparse_fields', '', 'sparse fields. example 0,1,2')
flags.DEFINE_string('hidden_layer', '100,100,50', 'hidden size for eacy layer')
flags.DEFINE_integer('embedding_size', 10, 'embedding size')
flags.DEFINE_float('l1', '0.001', 'l1 regularizetion')
flags.DEFINE_float('l2', '0.001', 'l2 regularizetion')

if not os.path.exists(FLAGS.model_dir):
    os.makedirs(FLAGS.model_dir)
if not os.path.exists(FLAGS.checkpoint_dir):
    os.makedirs(FLAGS.checkpoint_dir)
if not os.path.exists(FLAGS.tensorboard_dir):
    os.makedirs(FLAGS.tensorboard_dir)

# data iter
data = Data(FLAGS.dict, FLAGS.sparse_fields)
train_label, train_sparse_id, train_sparse_val = data.ReadBatch(FLAGS.train_file,
                                                                FLAGS.max_epoch,
                                                                FLAGS.batch_size,
                                                                FLAGS.thread_num,
                                                                FLAGS.min_after_dequeue)
valid_label, valid_sparse_id, valid_sparse_val = data.ReadBatch(FLAGS.valid_file,
                                                                FLAGS.max_epoch,
                                                                FLAGS.batch_size,
                                                                FLAGS.thread_num,
                                                                FLAGS.min_after_dequeue)

# define model
model = Model(FLAGS.embedding_size, data.Dict(), FLAGS.sparse_fields, FLAGS.hidden_layer)

# define loss
logits, all_parameter = model.forward(train_sparse_id, train_sparse_val)
train_label = tf.to_int64(train_label)
cross_entropy = tf.nn.sparse_softmax_cross_entropy_with_logits(logits=logits, labels=train_label, name='cross_entropy')
loss = tf.reduce_mean(cross_entropy, name='loss')
l1_regularizer = tf.contrib.layers.l1_regularizer(scale=FLAGS.l1, scope=None)
l2_regularizer = tf.contrib.layers.l2_regularizer(scale=FLAGS.l2, scope=None)
l1_penalty = tf.contrib.layers.apply_regularization(l1_regularizer, all_parameter)
l2_penalty = tf.contrib.layers.apply_regularization(l2_regularizer, all_parameter)
cost = tf.reduce_mean(loss + l2_penalty + l1_penalty, name='cost')

# define optimizer
print("Optimization algorithm: {}".format(FLAGS.optimizer))
if FLAGS.optimizer == "sgd":
    optimizer = tf.train.GradientDescentOptimizer(FLAGS.learning_rate)
elif FLAGS.optimizer == "adadelta":
    optimizer = tf.train.AdadeltaOptimizer(FLAGS.learning_rate)
elif FLAGS.optimizer == "adagrad":
    optimizer = tf.train.AdagradOptimizer(FLAGS.learning_rate)
elif FLAGS.optimizer == "adam":
    optimizer = tf.train.AdamOptimizer(FLAGS.learning_rate)
elif FLAGS.optimizer == "ftrl":
    optimizer = tf.train.FtrlOptimizer(FLAGS.learning_rate)
elif FLAGS.optimizer == "rmsprop":
    optimizer = tf.train.RMSPropOptimizer(FLAGS.learning_rate)
else:
    print("Error: unknown optimizer: {}".format(FLAGS.optimizer))
    exit(1)

with tf.device("/cpu:0"):
    global_step = tf.Variable(0, name='global_step', trainable=False)
train_op = optimizer.minimize(cost, global_step=global_step)

# eval
tf.get_variable_scope().reuse_variables()

# train cross entropy loss
train_logits, _ = model.forward(train_sparse_id, train_sparse_val)
train_label = tf.to_int64(train_label)
train_cross_entropy = tf.nn.sparse_softmax_cross_entropy_with_logits(logits=train_logits, labels=train_label)
train_loss_op = tf.reduce_mean(train_cross_entropy)

# train auc
train_auc, _ = tf.metrics.auc(predictions=train_logits, labels=train_label)

# valid cross entropy loss
valid_logits, _ = model.forward(valid_sparse_id, valid_sparse_val)
valid_label = tf.to_int64(valid_label)
valid_cross_entropy = tf.nn.sparse_softmax_cross_entropy_with_logits(logits=valid_logits, labels=valid_label)
valid_loss_op = tf.reduce_mean(valid_cross_entropy)

# valid auc
valid_auc, _ = tf.metrics.auc(predictions=valid_logits, labels=valid_label)

# saver
checkpoint_file = FLAGS.checkpoint_dir + "/model.checkpoint"
saver = tf.train.Saver()

# train loop
with tf.Session() as sess:
    sess.run(tf.initialize_all_variables())
    sess.run(tf.initialize_local_variables())

    if FLAGS.train_from_checkpoint:
        checkpoint_state = tf.train.get_checkpoint_state(FLAGS.checkpoint_dir)
        if checkpoint_state and checkpoint_state.model_checkpoint_path:
            print("Continue training from checkpoint {}".format(checkpoint_state.model_checkpoint_path))
            saver.restore(sess, checkpoint_state.model_checkpoint_path)

    coord = tf.train.Coordinator()
    threads = tf.train.start_queue_runners(coord=coord, sess=sess)
    try:
        while not coord.should_stop():
            _, step = sess.run([train_op, global_step])
            if step % FLAGS.steps_to_validate == 0:
                train_loss_val, train_auc_val, valid_loss_val, valid_auc_val = sess.run([train_loss_op, train_auc, valid_loss_op, valid_auc])
                print("Step: {}, train loss: {}, train auc: {}, valid loss: {}, valid auc: {}".format(
                        step, train_loss_val, train_auc_val, valid_loss_val, valid_auc_val))
    except tf.errors.OutOfRangeError:
        print("training done")
    finally:
        coord.request_stop()

    saver.save(sess, checkpoint_file)
    tf.train.write_graph(sess.graph.as_graph_def(), FLAGS.model_dir, 'graph.pb', as_text=False)
    tf.train.write_graph(sess.graph.as_graph_def(), FLAGS.model_dir, 'graph.txt', as_text=True)

    # wait for threads to exit
    coord.join(threads)
    sess.close()
