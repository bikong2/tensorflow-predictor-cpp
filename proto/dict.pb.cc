// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dict.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dict.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protobuf {
class Dict_Featureid2sortidEntryDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Dict::Dict_Featureid2sortidEntry>
     _instance;
} _Dict_Featureid2sortidEntry_default_instance_;
class Dict_Field2missidEntryDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Dict::Dict_Field2missidEntry>
     _instance;
} _Dict_Field2missidEntry_default_instance_;
class Dict_Field2feanumEntryDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Dict::Dict_Field2feanumEntry>
     _instance;
} _Dict_Field2feanumEntry_default_instance_;
class DictDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Dict>
     _instance;
} _Dict_default_instance_;

namespace protobuf_dict_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[4];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dict, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dict, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dict, featureid2sortid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dict, field2missid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dict, field2feanum_),
  ~0u,
  ~0u,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(Dict)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Dict_Featureid2sortidEntry_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Dict_Field2missidEntry_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Dict_Field2feanumEntry_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Dict_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "dict.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
file_level_metadata[0].reflection = Dict::Dict_Featureid2sortidEntry::CreateReflection(file_level_metadata[0].descriptor, _Dict_Featureid2sortidEntry_default_instance_._instance.get_mutable());
file_level_metadata[1].reflection = Dict::Dict_Field2missidEntry::CreateReflection(file_level_metadata[1].descriptor, _Dict_Field2missidEntry_default_instance_._instance.get_mutable());
file_level_metadata[2].reflection = Dict::Dict_Field2feanumEntry::CreateReflection(file_level_metadata[2].descriptor, _Dict_Field2feanumEntry_default_instance_._instance.get_mutable());
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 4);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Dict_Featureid2sortidEntry_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Dict_Featureid2sortidEntry_default_instance_);_Dict_Field2missidEntry_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Dict_Field2missidEntry_default_instance_);_Dict_Field2feanumEntry_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Dict_Field2feanumEntry_default_instance_);_Dict_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Dict_default_instance_);_Dict_Featureid2sortidEntry_default_instance_._instance.get_mutable()->set_default_instance(_Dict_Featureid2sortidEntry_default_instance_._instance.get_mutable());
  _Dict_Featureid2sortidEntry_default_instance_._instance.get_mutable()->InitAsDefaultInstance();
  _Dict_Field2missidEntry_default_instance_._instance.get_mutable()->set_default_instance(_Dict_Field2missidEntry_default_instance_._instance.get_mutable());
  _Dict_Field2missidEntry_default_instance_._instance.get_mutable()->InitAsDefaultInstance();
  _Dict_Field2feanumEntry_default_instance_._instance.get_mutable()->set_default_instance(_Dict_Field2feanumEntry_default_instance_._instance.get_mutable());
  _Dict_Field2feanumEntry_default_instance_._instance.get_mutable()->InitAsDefaultInstance();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\ndict.proto\022\010protobuf\"\331\002\n\004Dict\022>\n\020featu"
      "reid2sortid\030\001 \003(\0132$.protobuf.Dict.Featur"
      "eid2sortidEntry\0226\n\014field2missid\030\002 \003(\0132 ."
      "protobuf.Dict.Field2missidEntry\0226\n\014field"
      "2feanum\030\003 \003(\0132 .protobuf.Dict.Field2fean"
      "umEntry\0327\n\025Featureid2sortidEntry\022\013\n\003key\030"
      "\001 \001(\004\022\r\n\005value\030\002 \001(\004:\0028\001\0323\n\021Field2missid"
      "Entry\022\013\n\003key\030\001 \001(\r\022\r\n\005value\030\002 \001(\004:\0028\001\0323\n"
      "\021Field2feanumEntry\022\013\n\003key\030\001 \001(\r\022\r\n\005value"
      "\030\002 \001(\004:\0028\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 370);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dict.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_dict_2eproto


// ===================================================================

Dict::Dict_Featureid2sortidEntry::Dict_Featureid2sortidEntry() {}
Dict::Dict_Featureid2sortidEntry::Dict_Featureid2sortidEntry(::google::protobuf::Arena* arena) : SuperType(arena) {}
::google::protobuf::Metadata Dict::Dict_Featureid2sortidEntry::GetMetadata() const {
  protobuf_dict_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_dict_2eproto::file_level_metadata[0];
}
void Dict::Dict_Featureid2sortidEntry::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}
void Dict::Dict_Featureid2sortidEntry::MergeFrom(const Dict_Featureid2sortidEntry& other) {
  MergeFromInternal(other);
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

Dict::Dict_Field2missidEntry::Dict_Field2missidEntry() {}
Dict::Dict_Field2missidEntry::Dict_Field2missidEntry(::google::protobuf::Arena* arena) : SuperType(arena) {}
::google::protobuf::Metadata Dict::Dict_Field2missidEntry::GetMetadata() const {
  protobuf_dict_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_dict_2eproto::file_level_metadata[1];
}
void Dict::Dict_Field2missidEntry::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}
void Dict::Dict_Field2missidEntry::MergeFrom(const Dict_Field2missidEntry& other) {
  MergeFromInternal(other);
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

Dict::Dict_Field2feanumEntry::Dict_Field2feanumEntry() {}
Dict::Dict_Field2feanumEntry::Dict_Field2feanumEntry(::google::protobuf::Arena* arena) : SuperType(arena) {}
::google::protobuf::Metadata Dict::Dict_Field2feanumEntry::GetMetadata() const {
  protobuf_dict_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_dict_2eproto::file_level_metadata[2];
}
void Dict::Dict_Field2feanumEntry::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}
void Dict::Dict_Field2feanumEntry::MergeFrom(const Dict_Field2feanumEntry& other) {
  MergeFromInternal(other);
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Dict::kFeatureid2SortidFieldNumber;
const int Dict::kField2MissidFieldNumber;
const int Dict::kField2FeanumFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Dict::Dict()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_dict_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf.Dict)
}
Dict::Dict(const Dict& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  featureid2sortid_.MergeFrom(from.featureid2sortid_);
  field2missid_.MergeFrom(from.field2missid_);
  field2feanum_.MergeFrom(from.field2feanum_);
  // @@protoc_insertion_point(copy_constructor:protobuf.Dict)
}

void Dict::SharedCtor() {
  _cached_size_ = 0;
}

Dict::~Dict() {
  // @@protoc_insertion_point(destructor:protobuf.Dict)
  SharedDtor();
}

void Dict::SharedDtor() {
}

void Dict::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Dict::descriptor() {
  protobuf_dict_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_dict_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Dict& Dict::default_instance() {
  protobuf_dict_2eproto::InitDefaults();
  return *internal_default_instance();
}

Dict* Dict::New(::google::protobuf::Arena* arena) const {
  Dict* n = new Dict;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Dict::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf.Dict)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  featureid2sortid_.Clear();
  field2missid_.Clear();
  field2feanum_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Dict::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf.Dict)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<uint64, uint64> featureid2sortid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          Dict_Featureid2sortidEntry::Parser< ::google::protobuf::internal::MapField<
              Dict_Featureid2sortidEntry,
              ::google::protobuf::uint64, ::google::protobuf::uint64,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 > > parser(&featureid2sortid_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, uint64> field2missid = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          Dict_Field2missidEntry::Parser< ::google::protobuf::internal::MapField<
              Dict_Field2missidEntry,
              ::google::protobuf::uint32, ::google::protobuf::uint64,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 > > parser(&field2missid_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<uint32, uint64> field2feanum = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          Dict_Field2feanumEntry::Parser< ::google::protobuf::internal::MapField<
              Dict_Field2feanumEntry,
              ::google::protobuf::uint32, ::google::protobuf::uint64,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT64,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 > > parser(&field2feanum_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protobuf.Dict)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf.Dict)
  return false;
#undef DO_
}

void Dict::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf.Dict)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, uint64> featureid2sortid = 1;
  if (!this->featureid2sortid().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->featureid2sortid().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->featureid2sortid().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 >::const_iterator
          it = this->featureid2sortid().begin();
          it != this->featureid2sortid().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Dict_Featureid2sortidEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(featureid2sortid_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<Dict_Featureid2sortidEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 >::const_iterator
          it = this->featureid2sortid().begin();
          it != this->featureid2sortid().end(); ++it) {
        entry.reset(featureid2sortid_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            1, *entry, output);
      }
    }
  }

  // map<uint32, uint64> field2missid = 2;
  if (!this->field2missid().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->field2missid().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->field2missid().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_iterator
          it = this->field2missid().begin();
          it != this->field2missid().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Dict_Field2missidEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(field2missid_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<Dict_Field2missidEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_iterator
          it = this->field2missid().begin();
          it != this->field2missid().end(); ++it) {
        entry.reset(field2missid_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
      }
    }
  }

  // map<uint32, uint64> field2feanum = 3;
  if (!this->field2feanum().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->field2feanum().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->field2feanum().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_iterator
          it = this->field2feanum().begin();
          it != this->field2feanum().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Dict_Field2feanumEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(field2feanum_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            3, *entry, output);
      }
    } else {
      ::google::protobuf::scoped_ptr<Dict_Field2feanumEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_iterator
          it = this->field2feanum().begin();
          it != this->field2feanum().end(); ++it) {
        entry.reset(field2feanum_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            3, *entry, output);
      }
    }
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protobuf.Dict)
}

::google::protobuf::uint8* Dict::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protobuf.Dict)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // map<uint64, uint64> featureid2sortid = 1;
  if (!this->featureid2sortid().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->featureid2sortid().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->featureid2sortid().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 >::const_iterator
          it = this->featureid2sortid().begin();
          it != this->featureid2sortid().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Dict_Featureid2sortidEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(featureid2sortid_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<Dict_Featureid2sortidEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 >::const_iterator
          it = this->featureid2sortid().begin();
          it != this->featureid2sortid().end(); ++it) {
        entry.reset(featureid2sortid_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       1, *entry, deterministic, target);
;
      }
    }
  }

  // map<uint32, uint64> field2missid = 2;
  if (!this->field2missid().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->field2missid().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->field2missid().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_iterator
          it = this->field2missid().begin();
          it != this->field2missid().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Dict_Field2missidEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(field2missid_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<Dict_Field2missidEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_iterator
          it = this->field2missid().begin();
          it != this->field2missid().end(); ++it) {
        entry.reset(field2missid_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
      }
    }
  }

  // map<uint32, uint64> field2feanum = 3;
  if (!this->field2feanum().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::uint32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->field2feanum().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->field2feanum().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_iterator
          it = this->field2feanum().begin();
          it != this->field2feanum().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::google::protobuf::scoped_ptr<Dict_Field2feanumEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(field2feanum_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       3, *entry, deterministic, target);
;
      }
    } else {
      ::google::protobuf::scoped_ptr<Dict_Field2feanumEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_iterator
          it = this->field2feanum().begin();
          it != this->field2feanum().end(); ++it) {
        entry.reset(field2feanum_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       3, *entry, deterministic, target);
;
      }
    }
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf.Dict)
  return target;
}

size_t Dict::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf.Dict)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // map<uint64, uint64> featureid2sortid = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->featureid2sortid_size());
  {
    ::google::protobuf::scoped_ptr<Dict_Featureid2sortidEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 >::const_iterator
        it = this->featureid2sortid().begin();
        it != this->featureid2sortid().end(); ++it) {
      entry.reset(featureid2sortid_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // map<uint32, uint64> field2missid = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->field2missid_size());
  {
    ::google::protobuf::scoped_ptr<Dict_Field2missidEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_iterator
        it = this->field2missid().begin();
        it != this->field2missid().end(); ++it) {
      entry.reset(field2missid_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // map<uint32, uint64> field2feanum = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->field2feanum_size());
  {
    ::google::protobuf::scoped_ptr<Dict_Field2feanumEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >::const_iterator
        it = this->field2feanum().begin();
        it != this->field2feanum().end(); ++it) {
      entry.reset(field2feanum_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Dict::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf.Dict)
  GOOGLE_DCHECK_NE(&from, this);
  const Dict* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Dict>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf.Dict)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf.Dict)
    MergeFrom(*source);
  }
}

void Dict::MergeFrom(const Dict& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf.Dict)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  featureid2sortid_.MergeFrom(from.featureid2sortid_);
  field2missid_.MergeFrom(from.field2missid_);
  field2feanum_.MergeFrom(from.field2feanum_);
}

void Dict::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf.Dict)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Dict::CopyFrom(const Dict& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf.Dict)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Dict::IsInitialized() const {
  return true;
}

void Dict::Swap(Dict* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Dict::InternalSwap(Dict* other) {
  using std::swap;
  featureid2sortid_.Swap(&other->featureid2sortid_);
  field2missid_.Swap(&other->field2missid_);
  field2feanum_.Swap(&other->field2feanum_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Dict::GetMetadata() const {
  protobuf_dict_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_dict_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Dict

// map<uint64, uint64> featureid2sortid = 1;
int Dict::featureid2sortid_size() const {
  return featureid2sortid_.size();
}
void Dict::clear_featureid2sortid() {
  featureid2sortid_.Clear();
}
 const ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 >&
Dict::featureid2sortid() const {
  // @@protoc_insertion_point(field_map:protobuf.Dict.featureid2sortid)
  return featureid2sortid_.GetMap();
}
 ::google::protobuf::Map< ::google::protobuf::uint64, ::google::protobuf::uint64 >*
Dict::mutable_featureid2sortid() {
  // @@protoc_insertion_point(field_mutable_map:protobuf.Dict.featureid2sortid)
  return featureid2sortid_.MutableMap();
}

// map<uint32, uint64> field2missid = 2;
int Dict::field2missid_size() const {
  return field2missid_.size();
}
void Dict::clear_field2missid() {
  field2missid_.Clear();
}
 const ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >&
Dict::field2missid() const {
  // @@protoc_insertion_point(field_map:protobuf.Dict.field2missid)
  return field2missid_.GetMap();
}
 ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >*
Dict::mutable_field2missid() {
  // @@protoc_insertion_point(field_mutable_map:protobuf.Dict.field2missid)
  return field2missid_.MutableMap();
}

// map<uint32, uint64> field2feanum = 3;
int Dict::field2feanum_size() const {
  return field2feanum_.size();
}
void Dict::clear_field2feanum() {
  field2feanum_.Clear();
}
 const ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >&
Dict::field2feanum() const {
  // @@protoc_insertion_point(field_map:protobuf.Dict.field2feanum)
  return field2feanum_.GetMap();
}
 ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint64 >*
Dict::mutable_field2feanum() {
  // @@protoc_insertion_point(field_mutable_map:protobuf.Dict.field2feanum)
  return field2feanum_.MutableMap();
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf

// @@protoc_insertion_point(global_scope)