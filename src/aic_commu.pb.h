// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: aic_commu.proto

#ifndef PROTOBUF_aic_5fcommu_2eproto__INCLUDED
#define PROTOBUF_aic_5fcommu_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_aic_5fcommu_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsmessage_packImpl();
void InitDefaultsmessage_pack();
inline void InitDefaults() {
  InitDefaultsmessage_pack();
}
}  // namespace protobuf_aic_5fcommu_2eproto
namespace aic_commu_proto {
class message_pack;
class message_packDefaultTypeInternal;
extern message_packDefaultTypeInternal _message_pack_default_instance_;
}  // namespace aic_commu_proto
namespace aic_commu_proto {

// ===================================================================

class message_pack : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:aic_commu_proto.message_pack) */ {
 public:
  message_pack();
  virtual ~message_pack();

  message_pack(const message_pack& from);

  inline message_pack& operator=(const message_pack& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  message_pack(message_pack&& from) noexcept
    : message_pack() {
    *this = ::std::move(from);
  }

  inline message_pack& operator=(message_pack&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const message_pack& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const message_pack* internal_default_instance() {
    return reinterpret_cast<const message_pack*>(
               &_message_pack_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(message_pack* other);
  friend void swap(message_pack& a, message_pack& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline message_pack* New() const PROTOBUF_FINAL { return New(NULL); }

  message_pack* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const message_pack& from);
  void MergeFrom(const message_pack& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(message_pack* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string identity = 1;
  void clear_identity();
  static const int kIdentityFieldNumber = 1;
  const ::std::string& identity() const;
  void set_identity(const ::std::string& value);
  #if LANG_CXX11
  void set_identity(::std::string&& value);
  #endif
  void set_identity(const char* value);
  void set_identity(const char* value, size_t size);
  ::std::string* mutable_identity();
  ::std::string* release_identity();
  void set_allocated_identity(::std::string* identity);

  // bytes data = 4;
  void clear_data();
  static const int kDataFieldNumber = 4;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  #if LANG_CXX11
  void set_data(::std::string&& value);
  #endif
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // int64 timestamp = 3;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 3;
  ::google::protobuf::int64 timestamp() const;
  void set_timestamp(::google::protobuf::int64 value);

  // int32 req_id = 2;
  void clear_req_id();
  static const int kReqIdFieldNumber = 2;
  ::google::protobuf::int32 req_id() const;
  void set_req_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:aic_commu_proto.message_pack)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr identity_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  ::google::protobuf::int64 timestamp_;
  ::google::protobuf::int32 req_id_;
  mutable int _cached_size_;
  friend struct ::protobuf_aic_5fcommu_2eproto::TableStruct;
  friend void ::protobuf_aic_5fcommu_2eproto::InitDefaultsmessage_packImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// message_pack

// string identity = 1;
inline void message_pack::clear_identity() {
  identity_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& message_pack::identity() const {
  // @@protoc_insertion_point(field_get:aic_commu_proto.message_pack.identity)
  return identity_.GetNoArena();
}
inline void message_pack::set_identity(const ::std::string& value) {
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aic_commu_proto.message_pack.identity)
}
#if LANG_CXX11
inline void message_pack::set_identity(::std::string&& value) {
  
  identity_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aic_commu_proto.message_pack.identity)
}
#endif
inline void message_pack::set_identity(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aic_commu_proto.message_pack.identity)
}
inline void message_pack::set_identity(const char* value, size_t size) {
  
  identity_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aic_commu_proto.message_pack.identity)
}
inline ::std::string* message_pack::mutable_identity() {
  
  // @@protoc_insertion_point(field_mutable:aic_commu_proto.message_pack.identity)
  return identity_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* message_pack::release_identity() {
  // @@protoc_insertion_point(field_release:aic_commu_proto.message_pack.identity)
  
  return identity_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void message_pack::set_allocated_identity(::std::string* identity) {
  if (identity != NULL) {
    
  } else {
    
  }
  identity_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), identity);
  // @@protoc_insertion_point(field_set_allocated:aic_commu_proto.message_pack.identity)
}

// int32 req_id = 2;
inline void message_pack::clear_req_id() {
  req_id_ = 0;
}
inline ::google::protobuf::int32 message_pack::req_id() const {
  // @@protoc_insertion_point(field_get:aic_commu_proto.message_pack.req_id)
  return req_id_;
}
inline void message_pack::set_req_id(::google::protobuf::int32 value) {
  
  req_id_ = value;
  // @@protoc_insertion_point(field_set:aic_commu_proto.message_pack.req_id)
}

// int64 timestamp = 3;
inline void message_pack::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 message_pack::timestamp() const {
  // @@protoc_insertion_point(field_get:aic_commu_proto.message_pack.timestamp)
  return timestamp_;
}
inline void message_pack::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:aic_commu_proto.message_pack.timestamp)
}

// bytes data = 4;
inline void message_pack::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& message_pack::data() const {
  // @@protoc_insertion_point(field_get:aic_commu_proto.message_pack.data)
  return data_.GetNoArena();
}
inline void message_pack::set_data(const ::std::string& value) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aic_commu_proto.message_pack.data)
}
#if LANG_CXX11
inline void message_pack::set_data(::std::string&& value) {
  
  data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aic_commu_proto.message_pack.data)
}
#endif
inline void message_pack::set_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aic_commu_proto.message_pack.data)
}
inline void message_pack::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aic_commu_proto.message_pack.data)
}
inline ::std::string* message_pack::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:aic_commu_proto.message_pack.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* message_pack::release_data() {
  // @@protoc_insertion_point(field_release:aic_commu_proto.message_pack.data)
  
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void message_pack::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:aic_commu_proto.message_pack.data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace aic_commu_proto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_aic_5fcommu_2eproto__INCLUDED