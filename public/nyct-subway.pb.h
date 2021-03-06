// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nyct-subway.proto

#ifndef PROTOBUF_nyct_2dsubway_2eproto__INCLUDED
#define PROTOBUF_nyct_2dsubway_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "gtfs-realtime.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_nyct_2dsubway_2eproto();
void protobuf_AssignDesc_nyct_2dsubway_2eproto();
void protobuf_ShutdownFile_nyct_2dsubway_2eproto();

class TripReplacementPeriod;
class NyctFeedHeader;
class NyctTripDescriptor;
class NyctStopTimeUpdate;

enum NyctTripDescriptor_Direction {
  NyctTripDescriptor_Direction_NORTH = 1,
  NyctTripDescriptor_Direction_EAST = 2,
  NyctTripDescriptor_Direction_SOUTH = 3,
  NyctTripDescriptor_Direction_WEST = 4
};
bool NyctTripDescriptor_Direction_IsValid(int value);
const NyctTripDescriptor_Direction NyctTripDescriptor_Direction_Direction_MIN = NyctTripDescriptor_Direction_NORTH;
const NyctTripDescriptor_Direction NyctTripDescriptor_Direction_Direction_MAX = NyctTripDescriptor_Direction_WEST;
const int NyctTripDescriptor_Direction_Direction_ARRAYSIZE = NyctTripDescriptor_Direction_Direction_MAX + 1;

const ::google::protobuf::EnumDescriptor* NyctTripDescriptor_Direction_descriptor();
inline const ::std::string& NyctTripDescriptor_Direction_Name(NyctTripDescriptor_Direction value) {
  return ::google::protobuf::internal::NameOfEnum(
    NyctTripDescriptor_Direction_descriptor(), value);
}
inline bool NyctTripDescriptor_Direction_Parse(
    const ::std::string& name, NyctTripDescriptor_Direction* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NyctTripDescriptor_Direction>(
    NyctTripDescriptor_Direction_descriptor(), name, value);
}
// ===================================================================

class TripReplacementPeriod : public ::google::protobuf::Message {
 public:
  TripReplacementPeriod();
  virtual ~TripReplacementPeriod();

  TripReplacementPeriod(const TripReplacementPeriod& from);

  inline TripReplacementPeriod& operator=(const TripReplacementPeriod& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TripReplacementPeriod& default_instance();

  void Swap(TripReplacementPeriod* other);

  // implements Message ----------------------------------------------

  inline TripReplacementPeriod* New() const { return New(NULL); }

  TripReplacementPeriod* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TripReplacementPeriod& from);
  void MergeFrom(const TripReplacementPeriod& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TripReplacementPeriod* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string route_id = 1;
  bool has_route_id() const;
  void clear_route_id();
  static const int kRouteIdFieldNumber = 1;
  const ::std::string& route_id() const;
  void set_route_id(const ::std::string& value);
  void set_route_id(const char* value);
  void set_route_id(const char* value, size_t size);
  ::std::string* mutable_route_id();
  ::std::string* release_route_id();
  void set_allocated_route_id(::std::string* route_id);

  // optional .transit_realtime.TimeRange replacement_period = 2;
  bool has_replacement_period() const;
  void clear_replacement_period();
  static const int kReplacementPeriodFieldNumber = 2;
  const ::transit_realtime::TimeRange& replacement_period() const;
  ::transit_realtime::TimeRange* mutable_replacement_period();
  ::transit_realtime::TimeRange* release_replacement_period();
  void set_allocated_replacement_period(::transit_realtime::TimeRange* replacement_period);

  // @@protoc_insertion_point(class_scope:TripReplacementPeriod)
 private:
  inline void set_has_route_id();
  inline void clear_has_route_id();
  inline void set_has_replacement_period();
  inline void clear_has_replacement_period();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr route_id_;
  ::transit_realtime::TimeRange* replacement_period_;
  friend void  protobuf_AddDesc_nyct_2dsubway_2eproto();
  friend void protobuf_AssignDesc_nyct_2dsubway_2eproto();
  friend void protobuf_ShutdownFile_nyct_2dsubway_2eproto();

  void InitAsDefaultInstance();
  static TripReplacementPeriod* default_instance_;
};
// -------------------------------------------------------------------

class NyctFeedHeader : public ::google::protobuf::Message {
 public:
  NyctFeedHeader();
  virtual ~NyctFeedHeader();

  NyctFeedHeader(const NyctFeedHeader& from);

  inline NyctFeedHeader& operator=(const NyctFeedHeader& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NyctFeedHeader& default_instance();

  void Swap(NyctFeedHeader* other);

  // implements Message ----------------------------------------------

  inline NyctFeedHeader* New() const { return New(NULL); }

  NyctFeedHeader* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NyctFeedHeader& from);
  void MergeFrom(const NyctFeedHeader& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(NyctFeedHeader* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string nyct_subway_version = 1;
  bool has_nyct_subway_version() const;
  void clear_nyct_subway_version();
  static const int kNyctSubwayVersionFieldNumber = 1;
  const ::std::string& nyct_subway_version() const;
  void set_nyct_subway_version(const ::std::string& value);
  void set_nyct_subway_version(const char* value);
  void set_nyct_subway_version(const char* value, size_t size);
  ::std::string* mutable_nyct_subway_version();
  ::std::string* release_nyct_subway_version();
  void set_allocated_nyct_subway_version(::std::string* nyct_subway_version);

  // repeated .TripReplacementPeriod trip_replacement_period = 2;
  int trip_replacement_period_size() const;
  void clear_trip_replacement_period();
  static const int kTripReplacementPeriodFieldNumber = 2;
  const ::TripReplacementPeriod& trip_replacement_period(int index) const;
  ::TripReplacementPeriod* mutable_trip_replacement_period(int index);
  ::TripReplacementPeriod* add_trip_replacement_period();
  const ::google::protobuf::RepeatedPtrField< ::TripReplacementPeriod >&
      trip_replacement_period() const;
  ::google::protobuf::RepeatedPtrField< ::TripReplacementPeriod >*
      mutable_trip_replacement_period();

  // @@protoc_insertion_point(class_scope:NyctFeedHeader)
 private:
  inline void set_has_nyct_subway_version();
  inline void clear_has_nyct_subway_version();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr nyct_subway_version_;
  ::google::protobuf::RepeatedPtrField< ::TripReplacementPeriod > trip_replacement_period_;
  friend void  protobuf_AddDesc_nyct_2dsubway_2eproto();
  friend void protobuf_AssignDesc_nyct_2dsubway_2eproto();
  friend void protobuf_ShutdownFile_nyct_2dsubway_2eproto();

  void InitAsDefaultInstance();
  static NyctFeedHeader* default_instance_;
};
// -------------------------------------------------------------------

class NyctTripDescriptor : public ::google::protobuf::Message {
 public:
  NyctTripDescriptor();
  virtual ~NyctTripDescriptor();

  NyctTripDescriptor(const NyctTripDescriptor& from);

  inline NyctTripDescriptor& operator=(const NyctTripDescriptor& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NyctTripDescriptor& default_instance();

  void Swap(NyctTripDescriptor* other);

  // implements Message ----------------------------------------------

  inline NyctTripDescriptor* New() const { return New(NULL); }

  NyctTripDescriptor* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NyctTripDescriptor& from);
  void MergeFrom(const NyctTripDescriptor& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(NyctTripDescriptor* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef NyctTripDescriptor_Direction Direction;
  static const Direction NORTH = NyctTripDescriptor_Direction_NORTH;
  static const Direction EAST = NyctTripDescriptor_Direction_EAST;
  static const Direction SOUTH = NyctTripDescriptor_Direction_SOUTH;
  static const Direction WEST = NyctTripDescriptor_Direction_WEST;
  static inline bool Direction_IsValid(int value) {
    return NyctTripDescriptor_Direction_IsValid(value);
  }
  static const Direction Direction_MIN =
    NyctTripDescriptor_Direction_Direction_MIN;
  static const Direction Direction_MAX =
    NyctTripDescriptor_Direction_Direction_MAX;
  static const int Direction_ARRAYSIZE =
    NyctTripDescriptor_Direction_Direction_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Direction_descriptor() {
    return NyctTripDescriptor_Direction_descriptor();
  }
  static inline const ::std::string& Direction_Name(Direction value) {
    return NyctTripDescriptor_Direction_Name(value);
  }
  static inline bool Direction_Parse(const ::std::string& name,
      Direction* value) {
    return NyctTripDescriptor_Direction_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional string train_id = 1;
  bool has_train_id() const;
  void clear_train_id();
  static const int kTrainIdFieldNumber = 1;
  const ::std::string& train_id() const;
  void set_train_id(const ::std::string& value);
  void set_train_id(const char* value);
  void set_train_id(const char* value, size_t size);
  ::std::string* mutable_train_id();
  ::std::string* release_train_id();
  void set_allocated_train_id(::std::string* train_id);

  // optional bool is_assigned = 2;
  bool has_is_assigned() const;
  void clear_is_assigned();
  static const int kIsAssignedFieldNumber = 2;
  bool is_assigned() const;
  void set_is_assigned(bool value);

  // optional .NyctTripDescriptor.Direction direction = 3;
  bool has_direction() const;
  void clear_direction();
  static const int kDirectionFieldNumber = 3;
  ::NyctTripDescriptor_Direction direction() const;
  void set_direction(::NyctTripDescriptor_Direction value);

  // @@protoc_insertion_point(class_scope:NyctTripDescriptor)
 private:
  inline void set_has_train_id();
  inline void clear_has_train_id();
  inline void set_has_is_assigned();
  inline void clear_has_is_assigned();
  inline void set_has_direction();
  inline void clear_has_direction();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr train_id_;
  bool is_assigned_;
  int direction_;
  friend void  protobuf_AddDesc_nyct_2dsubway_2eproto();
  friend void protobuf_AssignDesc_nyct_2dsubway_2eproto();
  friend void protobuf_ShutdownFile_nyct_2dsubway_2eproto();

  void InitAsDefaultInstance();
  static NyctTripDescriptor* default_instance_;
};
// -------------------------------------------------------------------

class NyctStopTimeUpdate : public ::google::protobuf::Message {
 public:
  NyctStopTimeUpdate();
  virtual ~NyctStopTimeUpdate();

  NyctStopTimeUpdate(const NyctStopTimeUpdate& from);

  inline NyctStopTimeUpdate& operator=(const NyctStopTimeUpdate& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NyctStopTimeUpdate& default_instance();

  void Swap(NyctStopTimeUpdate* other);

  // implements Message ----------------------------------------------

  inline NyctStopTimeUpdate* New() const { return New(NULL); }

  NyctStopTimeUpdate* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NyctStopTimeUpdate& from);
  void MergeFrom(const NyctStopTimeUpdate& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(NyctStopTimeUpdate* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string scheduled_track = 1;
  bool has_scheduled_track() const;
  void clear_scheduled_track();
  static const int kScheduledTrackFieldNumber = 1;
  const ::std::string& scheduled_track() const;
  void set_scheduled_track(const ::std::string& value);
  void set_scheduled_track(const char* value);
  void set_scheduled_track(const char* value, size_t size);
  ::std::string* mutable_scheduled_track();
  ::std::string* release_scheduled_track();
  void set_allocated_scheduled_track(::std::string* scheduled_track);

  // optional string actual_track = 2;
  bool has_actual_track() const;
  void clear_actual_track();
  static const int kActualTrackFieldNumber = 2;
  const ::std::string& actual_track() const;
  void set_actual_track(const ::std::string& value);
  void set_actual_track(const char* value);
  void set_actual_track(const char* value, size_t size);
  ::std::string* mutable_actual_track();
  ::std::string* release_actual_track();
  void set_allocated_actual_track(::std::string* actual_track);

  // @@protoc_insertion_point(class_scope:NyctStopTimeUpdate)
 private:
  inline void set_has_scheduled_track();
  inline void clear_has_scheduled_track();
  inline void set_has_actual_track();
  inline void clear_has_actual_track();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr scheduled_track_;
  ::google::protobuf::internal::ArenaStringPtr actual_track_;
  friend void  protobuf_AddDesc_nyct_2dsubway_2eproto();
  friend void protobuf_AssignDesc_nyct_2dsubway_2eproto();
  friend void protobuf_ShutdownFile_nyct_2dsubway_2eproto();

  void InitAsDefaultInstance();
  static NyctStopTimeUpdate* default_instance_;
};
// ===================================================================

static const int kNyctFeedHeaderFieldNumber = 1001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::transit_realtime::FeedHeader,
    ::google::protobuf::internal::MessageTypeTraits< ::NyctFeedHeader >, 11, false >
  nyct_feed_header;
static const int kNyctTripDescriptorFieldNumber = 1001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::transit_realtime::TripDescriptor,
    ::google::protobuf::internal::MessageTypeTraits< ::NyctTripDescriptor >, 11, false >
  nyct_trip_descriptor;
static const int kNyctStopTimeUpdateFieldNumber = 1001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::transit_realtime::TripUpdate_StopTimeUpdate,
    ::google::protobuf::internal::MessageTypeTraits< ::NyctStopTimeUpdate >, 11, false >
  nyct_stop_time_update;

// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TripReplacementPeriod

// optional string route_id = 1;
inline bool TripReplacementPeriod::has_route_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TripReplacementPeriod::set_has_route_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TripReplacementPeriod::clear_has_route_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TripReplacementPeriod::clear_route_id() {
  route_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_route_id();
}
inline const ::std::string& TripReplacementPeriod::route_id() const {
  // @@protoc_insertion_point(field_get:TripReplacementPeriod.route_id)
  return route_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TripReplacementPeriod::set_route_id(const ::std::string& value) {
  set_has_route_id();
  route_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:TripReplacementPeriod.route_id)
}
inline void TripReplacementPeriod::set_route_id(const char* value) {
  set_has_route_id();
  route_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TripReplacementPeriod.route_id)
}
inline void TripReplacementPeriod::set_route_id(const char* value, size_t size) {
  set_has_route_id();
  route_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TripReplacementPeriod.route_id)
}
inline ::std::string* TripReplacementPeriod::mutable_route_id() {
  set_has_route_id();
  // @@protoc_insertion_point(field_mutable:TripReplacementPeriod.route_id)
  return route_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TripReplacementPeriod::release_route_id() {
  clear_has_route_id();
  return route_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TripReplacementPeriod::set_allocated_route_id(::std::string* route_id) {
  if (route_id != NULL) {
    set_has_route_id();
  } else {
    clear_has_route_id();
  }
  route_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), route_id);
  // @@protoc_insertion_point(field_set_allocated:TripReplacementPeriod.route_id)
}

// optional .transit_realtime.TimeRange replacement_period = 2;
inline bool TripReplacementPeriod::has_replacement_period() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TripReplacementPeriod::set_has_replacement_period() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TripReplacementPeriod::clear_has_replacement_period() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TripReplacementPeriod::clear_replacement_period() {
  if (replacement_period_ != NULL) replacement_period_->::transit_realtime::TimeRange::Clear();
  clear_has_replacement_period();
}
inline const ::transit_realtime::TimeRange& TripReplacementPeriod::replacement_period() const {
  // @@protoc_insertion_point(field_get:TripReplacementPeriod.replacement_period)
  return replacement_period_ != NULL ? *replacement_period_ : *default_instance_->replacement_period_;
}
inline ::transit_realtime::TimeRange* TripReplacementPeriod::mutable_replacement_period() {
  set_has_replacement_period();
  if (replacement_period_ == NULL) {
    replacement_period_ = new ::transit_realtime::TimeRange;
  }
  // @@protoc_insertion_point(field_mutable:TripReplacementPeriod.replacement_period)
  return replacement_period_;
}
inline ::transit_realtime::TimeRange* TripReplacementPeriod::release_replacement_period() {
  clear_has_replacement_period();
  ::transit_realtime::TimeRange* temp = replacement_period_;
  replacement_period_ = NULL;
  return temp;
}
inline void TripReplacementPeriod::set_allocated_replacement_period(::transit_realtime::TimeRange* replacement_period) {
  delete replacement_period_;
  replacement_period_ = replacement_period;
  if (replacement_period) {
    set_has_replacement_period();
  } else {
    clear_has_replacement_period();
  }
  // @@protoc_insertion_point(field_set_allocated:TripReplacementPeriod.replacement_period)
}

// -------------------------------------------------------------------

// NyctFeedHeader

// required string nyct_subway_version = 1;
inline bool NyctFeedHeader::has_nyct_subway_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NyctFeedHeader::set_has_nyct_subway_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NyctFeedHeader::clear_has_nyct_subway_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NyctFeedHeader::clear_nyct_subway_version() {
  nyct_subway_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_nyct_subway_version();
}
inline const ::std::string& NyctFeedHeader::nyct_subway_version() const {
  // @@protoc_insertion_point(field_get:NyctFeedHeader.nyct_subway_version)
  return nyct_subway_version_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NyctFeedHeader::set_nyct_subway_version(const ::std::string& value) {
  set_has_nyct_subway_version();
  nyct_subway_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NyctFeedHeader.nyct_subway_version)
}
inline void NyctFeedHeader::set_nyct_subway_version(const char* value) {
  set_has_nyct_subway_version();
  nyct_subway_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NyctFeedHeader.nyct_subway_version)
}
inline void NyctFeedHeader::set_nyct_subway_version(const char* value, size_t size) {
  set_has_nyct_subway_version();
  nyct_subway_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NyctFeedHeader.nyct_subway_version)
}
inline ::std::string* NyctFeedHeader::mutable_nyct_subway_version() {
  set_has_nyct_subway_version();
  // @@protoc_insertion_point(field_mutable:NyctFeedHeader.nyct_subway_version)
  return nyct_subway_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NyctFeedHeader::release_nyct_subway_version() {
  clear_has_nyct_subway_version();
  return nyct_subway_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NyctFeedHeader::set_allocated_nyct_subway_version(::std::string* nyct_subway_version) {
  if (nyct_subway_version != NULL) {
    set_has_nyct_subway_version();
  } else {
    clear_has_nyct_subway_version();
  }
  nyct_subway_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nyct_subway_version);
  // @@protoc_insertion_point(field_set_allocated:NyctFeedHeader.nyct_subway_version)
}

// repeated .TripReplacementPeriod trip_replacement_period = 2;
inline int NyctFeedHeader::trip_replacement_period_size() const {
  return trip_replacement_period_.size();
}
inline void NyctFeedHeader::clear_trip_replacement_period() {
  trip_replacement_period_.Clear();
}
inline const ::TripReplacementPeriod& NyctFeedHeader::trip_replacement_period(int index) const {
  // @@protoc_insertion_point(field_get:NyctFeedHeader.trip_replacement_period)
  return trip_replacement_period_.Get(index);
}
inline ::TripReplacementPeriod* NyctFeedHeader::mutable_trip_replacement_period(int index) {
  // @@protoc_insertion_point(field_mutable:NyctFeedHeader.trip_replacement_period)
  return trip_replacement_period_.Mutable(index);
}
inline ::TripReplacementPeriod* NyctFeedHeader::add_trip_replacement_period() {
  // @@protoc_insertion_point(field_add:NyctFeedHeader.trip_replacement_period)
  return trip_replacement_period_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::TripReplacementPeriod >&
NyctFeedHeader::trip_replacement_period() const {
  // @@protoc_insertion_point(field_list:NyctFeedHeader.trip_replacement_period)
  return trip_replacement_period_;
}
inline ::google::protobuf::RepeatedPtrField< ::TripReplacementPeriod >*
NyctFeedHeader::mutable_trip_replacement_period() {
  // @@protoc_insertion_point(field_mutable_list:NyctFeedHeader.trip_replacement_period)
  return &trip_replacement_period_;
}

// -------------------------------------------------------------------

// NyctTripDescriptor

// optional string train_id = 1;
inline bool NyctTripDescriptor::has_train_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NyctTripDescriptor::set_has_train_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NyctTripDescriptor::clear_has_train_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NyctTripDescriptor::clear_train_id() {
  train_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_train_id();
}
inline const ::std::string& NyctTripDescriptor::train_id() const {
  // @@protoc_insertion_point(field_get:NyctTripDescriptor.train_id)
  return train_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NyctTripDescriptor::set_train_id(const ::std::string& value) {
  set_has_train_id();
  train_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NyctTripDescriptor.train_id)
}
inline void NyctTripDescriptor::set_train_id(const char* value) {
  set_has_train_id();
  train_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NyctTripDescriptor.train_id)
}
inline void NyctTripDescriptor::set_train_id(const char* value, size_t size) {
  set_has_train_id();
  train_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NyctTripDescriptor.train_id)
}
inline ::std::string* NyctTripDescriptor::mutable_train_id() {
  set_has_train_id();
  // @@protoc_insertion_point(field_mutable:NyctTripDescriptor.train_id)
  return train_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NyctTripDescriptor::release_train_id() {
  clear_has_train_id();
  return train_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NyctTripDescriptor::set_allocated_train_id(::std::string* train_id) {
  if (train_id != NULL) {
    set_has_train_id();
  } else {
    clear_has_train_id();
  }
  train_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), train_id);
  // @@protoc_insertion_point(field_set_allocated:NyctTripDescriptor.train_id)
}

// optional bool is_assigned = 2;
inline bool NyctTripDescriptor::has_is_assigned() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NyctTripDescriptor::set_has_is_assigned() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NyctTripDescriptor::clear_has_is_assigned() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NyctTripDescriptor::clear_is_assigned() {
  is_assigned_ = false;
  clear_has_is_assigned();
}
inline bool NyctTripDescriptor::is_assigned() const {
  // @@protoc_insertion_point(field_get:NyctTripDescriptor.is_assigned)
  return is_assigned_;
}
inline void NyctTripDescriptor::set_is_assigned(bool value) {
  set_has_is_assigned();
  is_assigned_ = value;
  // @@protoc_insertion_point(field_set:NyctTripDescriptor.is_assigned)
}

// optional .NyctTripDescriptor.Direction direction = 3;
inline bool NyctTripDescriptor::has_direction() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NyctTripDescriptor::set_has_direction() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NyctTripDescriptor::clear_has_direction() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NyctTripDescriptor::clear_direction() {
  direction_ = 1;
  clear_has_direction();
}
inline ::NyctTripDescriptor_Direction NyctTripDescriptor::direction() const {
  // @@protoc_insertion_point(field_get:NyctTripDescriptor.direction)
  return static_cast< ::NyctTripDescriptor_Direction >(direction_);
}
inline void NyctTripDescriptor::set_direction(::NyctTripDescriptor_Direction value) {
  assert(::NyctTripDescriptor_Direction_IsValid(value));
  set_has_direction();
  direction_ = value;
  // @@protoc_insertion_point(field_set:NyctTripDescriptor.direction)
}

// -------------------------------------------------------------------

// NyctStopTimeUpdate

// optional string scheduled_track = 1;
inline bool NyctStopTimeUpdate::has_scheduled_track() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NyctStopTimeUpdate::set_has_scheduled_track() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NyctStopTimeUpdate::clear_has_scheduled_track() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NyctStopTimeUpdate::clear_scheduled_track() {
  scheduled_track_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_scheduled_track();
}
inline const ::std::string& NyctStopTimeUpdate::scheduled_track() const {
  // @@protoc_insertion_point(field_get:NyctStopTimeUpdate.scheduled_track)
  return scheduled_track_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NyctStopTimeUpdate::set_scheduled_track(const ::std::string& value) {
  set_has_scheduled_track();
  scheduled_track_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NyctStopTimeUpdate.scheduled_track)
}
inline void NyctStopTimeUpdate::set_scheduled_track(const char* value) {
  set_has_scheduled_track();
  scheduled_track_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NyctStopTimeUpdate.scheduled_track)
}
inline void NyctStopTimeUpdate::set_scheduled_track(const char* value, size_t size) {
  set_has_scheduled_track();
  scheduled_track_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NyctStopTimeUpdate.scheduled_track)
}
inline ::std::string* NyctStopTimeUpdate::mutable_scheduled_track() {
  set_has_scheduled_track();
  // @@protoc_insertion_point(field_mutable:NyctStopTimeUpdate.scheduled_track)
  return scheduled_track_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NyctStopTimeUpdate::release_scheduled_track() {
  clear_has_scheduled_track();
  return scheduled_track_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NyctStopTimeUpdate::set_allocated_scheduled_track(::std::string* scheduled_track) {
  if (scheduled_track != NULL) {
    set_has_scheduled_track();
  } else {
    clear_has_scheduled_track();
  }
  scheduled_track_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), scheduled_track);
  // @@protoc_insertion_point(field_set_allocated:NyctStopTimeUpdate.scheduled_track)
}

// optional string actual_track = 2;
inline bool NyctStopTimeUpdate::has_actual_track() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NyctStopTimeUpdate::set_has_actual_track() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NyctStopTimeUpdate::clear_has_actual_track() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NyctStopTimeUpdate::clear_actual_track() {
  actual_track_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_actual_track();
}
inline const ::std::string& NyctStopTimeUpdate::actual_track() const {
  // @@protoc_insertion_point(field_get:NyctStopTimeUpdate.actual_track)
  return actual_track_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NyctStopTimeUpdate::set_actual_track(const ::std::string& value) {
  set_has_actual_track();
  actual_track_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NyctStopTimeUpdate.actual_track)
}
inline void NyctStopTimeUpdate::set_actual_track(const char* value) {
  set_has_actual_track();
  actual_track_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NyctStopTimeUpdate.actual_track)
}
inline void NyctStopTimeUpdate::set_actual_track(const char* value, size_t size) {
  set_has_actual_track();
  actual_track_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NyctStopTimeUpdate.actual_track)
}
inline ::std::string* NyctStopTimeUpdate::mutable_actual_track() {
  set_has_actual_track();
  // @@protoc_insertion_point(field_mutable:NyctStopTimeUpdate.actual_track)
  return actual_track_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* NyctStopTimeUpdate::release_actual_track() {
  clear_has_actual_track();
  return actual_track_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void NyctStopTimeUpdate::set_allocated_actual_track(::std::string* actual_track) {
  if (actual_track != NULL) {
    set_has_actual_track();
  } else {
    clear_has_actual_track();
  }
  actual_track_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), actual_track);
  // @@protoc_insertion_point(field_set_allocated:NyctStopTimeUpdate.actual_track)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::NyctTripDescriptor_Direction> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NyctTripDescriptor_Direction>() {
  return ::NyctTripDescriptor_Direction_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_nyct_2dsubway_2eproto__INCLUDED
