// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sensorsreport.proto

#ifndef PROTOBUF_sensorsreport_2eproto__INCLUDED
#define PROTOBUF_sensorsreport_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_sensorsreport_2eproto();
void protobuf_AssignDesc_sensorsreport_2eproto();
void protobuf_ShutdownFile_sensorsreport_2eproto();

class SensorsReport;
class SensorsReport_SensorStatus;

enum SensorsReport_SensorType {
  SensorsReport_SensorType_HUMIDITY = 0,
  SensorsReport_SensorType_LUMINOSITY = 1,
  SensorsReport_SensorType_MOTION = 2,
  SensorsReport_SensorType_TEMPERATURE = 3
};
bool SensorsReport_SensorType_IsValid(int value);
const SensorsReport_SensorType SensorsReport_SensorType_SensorType_MIN = SensorsReport_SensorType_HUMIDITY;
const SensorsReport_SensorType SensorsReport_SensorType_SensorType_MAX = SensorsReport_SensorType_TEMPERATURE;
const int SensorsReport_SensorType_SensorType_ARRAYSIZE = SensorsReport_SensorType_SensorType_MAX + 1;

const ::google::protobuf::EnumDescriptor* SensorsReport_SensorType_descriptor();
inline const ::std::string& SensorsReport_SensorType_Name(SensorsReport_SensorType value) {
  return ::google::protobuf::internal::NameOfEnum(
    SensorsReport_SensorType_descriptor(), value);
}
inline bool SensorsReport_SensorType_Parse(
    const ::std::string& name, SensorsReport_SensorType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SensorsReport_SensorType>(
    SensorsReport_SensorType_descriptor(), name, value);
}
// ===================================================================

class SensorsReport_SensorStatus : public ::google::protobuf::Message {
 public:
  SensorsReport_SensorStatus();
  virtual ~SensorsReport_SensorStatus();

  SensorsReport_SensorStatus(const SensorsReport_SensorStatus& from);

  inline SensorsReport_SensorStatus& operator=(const SensorsReport_SensorStatus& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SensorsReport_SensorStatus& default_instance();

  void Swap(SensorsReport_SensorStatus* other);

  // implements Message ----------------------------------------------

  SensorsReport_SensorStatus* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SensorsReport_SensorStatus& from);
  void MergeFrom(const SensorsReport_SensorStatus& from);
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
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .SensorsReport.SensorType type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::SensorsReport_SensorType type() const;
  inline void set_type(::SensorsReport_SensorType value);

  // required int32 value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline ::google::protobuf::int32 value() const;
  inline void set_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SensorsReport.SensorStatus)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int type_;
  ::google::protobuf::int32 value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_sensorsreport_2eproto();
  friend void protobuf_AssignDesc_sensorsreport_2eproto();
  friend void protobuf_ShutdownFile_sensorsreport_2eproto();

  void InitAsDefaultInstance();
  static SensorsReport_SensorStatus* default_instance_;
};
// -------------------------------------------------------------------

class SensorsReport : public ::google::protobuf::Message {
 public:
  SensorsReport();
  virtual ~SensorsReport();

  SensorsReport(const SensorsReport& from);

  inline SensorsReport& operator=(const SensorsReport& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SensorsReport& default_instance();

  void Swap(SensorsReport* other);

  // implements Message ----------------------------------------------

  SensorsReport* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SensorsReport& from);
  void MergeFrom(const SensorsReport& from);
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
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef SensorsReport_SensorStatus SensorStatus;

  typedef SensorsReport_SensorType SensorType;
  static const SensorType HUMIDITY = SensorsReport_SensorType_HUMIDITY;
  static const SensorType LUMINOSITY = SensorsReport_SensorType_LUMINOSITY;
  static const SensorType MOTION = SensorsReport_SensorType_MOTION;
  static const SensorType TEMPERATURE = SensorsReport_SensorType_TEMPERATURE;
  static inline bool SensorType_IsValid(int value) {
    return SensorsReport_SensorType_IsValid(value);
  }
  static const SensorType SensorType_MIN =
    SensorsReport_SensorType_SensorType_MIN;
  static const SensorType SensorType_MAX =
    SensorsReport_SensorType_SensorType_MAX;
  static const int SensorType_ARRAYSIZE =
    SensorsReport_SensorType_SensorType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  SensorType_descriptor() {
    return SensorsReport_SensorType_descriptor();
  }
  static inline const ::std::string& SensorType_Name(SensorType value) {
    return SensorsReport_SensorType_Name(value);
  }
  static inline bool SensorType_Parse(const ::std::string& name,
      SensorType* value) {
    return SensorsReport_SensorType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required string deviceName = 1;
  inline bool has_devicename() const;
  inline void clear_devicename();
  static const int kDeviceNameFieldNumber = 1;
  inline const ::std::string& devicename() const;
  inline void set_devicename(const ::std::string& value);
  inline void set_devicename(const char* value);
  inline void set_devicename(const char* value, size_t size);
  inline ::std::string* mutable_devicename();
  inline ::std::string* release_devicename();
  inline void set_allocated_devicename(::std::string* devicename);

  // required uint64 timestamp = 2;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 2;
  inline ::google::protobuf::uint64 timestamp() const;
  inline void set_timestamp(::google::protobuf::uint64 value);

  // repeated .SensorsReport.SensorStatus sensors = 3;
  inline int sensors_size() const;
  inline void clear_sensors();
  static const int kSensorsFieldNumber = 3;
  inline const ::SensorsReport_SensorStatus& sensors(int index) const;
  inline ::SensorsReport_SensorStatus* mutable_sensors(int index);
  inline ::SensorsReport_SensorStatus* add_sensors();
  inline const ::google::protobuf::RepeatedPtrField< ::SensorsReport_SensorStatus >&
      sensors() const;
  inline ::google::protobuf::RepeatedPtrField< ::SensorsReport_SensorStatus >*
      mutable_sensors();

  // @@protoc_insertion_point(class_scope:SensorsReport)
 private:
  inline void set_has_devicename();
  inline void clear_has_devicename();
  inline void set_has_timestamp();
  inline void clear_has_timestamp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* devicename_;
  ::google::protobuf::uint64 timestamp_;
  ::google::protobuf::RepeatedPtrField< ::SensorsReport_SensorStatus > sensors_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_sensorsreport_2eproto();
  friend void protobuf_AssignDesc_sensorsreport_2eproto();
  friend void protobuf_ShutdownFile_sensorsreport_2eproto();

  void InitAsDefaultInstance();
  static SensorsReport* default_instance_;
};
// ===================================================================


// ===================================================================

// SensorsReport_SensorStatus

// required .SensorsReport.SensorType type = 1;
inline bool SensorsReport_SensorStatus::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SensorsReport_SensorStatus::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SensorsReport_SensorStatus::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SensorsReport_SensorStatus::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::SensorsReport_SensorType SensorsReport_SensorStatus::type() const {
  return static_cast< ::SensorsReport_SensorType >(type_);
}
inline void SensorsReport_SensorStatus::set_type(::SensorsReport_SensorType value) {
  assert(::SensorsReport_SensorType_IsValid(value));
  set_has_type();
  type_ = value;
}

// required int32 value = 2;
inline bool SensorsReport_SensorStatus::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SensorsReport_SensorStatus::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SensorsReport_SensorStatus::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SensorsReport_SensorStatus::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline ::google::protobuf::int32 SensorsReport_SensorStatus::value() const {
  return value_;
}
inline void SensorsReport_SensorStatus::set_value(::google::protobuf::int32 value) {
  set_has_value();
  value_ = value;
}

// -------------------------------------------------------------------

// SensorsReport

// required string deviceName = 1;
inline bool SensorsReport::has_devicename() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SensorsReport::set_has_devicename() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SensorsReport::clear_has_devicename() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SensorsReport::clear_devicename() {
  if (devicename_ != &::google::protobuf::internal::kEmptyString) {
    devicename_->clear();
  }
  clear_has_devicename();
}
inline const ::std::string& SensorsReport::devicename() const {
  return *devicename_;
}
inline void SensorsReport::set_devicename(const ::std::string& value) {
  set_has_devicename();
  if (devicename_ == &::google::protobuf::internal::kEmptyString) {
    devicename_ = new ::std::string;
  }
  devicename_->assign(value);
}
inline void SensorsReport::set_devicename(const char* value) {
  set_has_devicename();
  if (devicename_ == &::google::protobuf::internal::kEmptyString) {
    devicename_ = new ::std::string;
  }
  devicename_->assign(value);
}
inline void SensorsReport::set_devicename(const char* value, size_t size) {
  set_has_devicename();
  if (devicename_ == &::google::protobuf::internal::kEmptyString) {
    devicename_ = new ::std::string;
  }
  devicename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SensorsReport::mutable_devicename() {
  set_has_devicename();
  if (devicename_ == &::google::protobuf::internal::kEmptyString) {
    devicename_ = new ::std::string;
  }
  return devicename_;
}
inline ::std::string* SensorsReport::release_devicename() {
  clear_has_devicename();
  if (devicename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = devicename_;
    devicename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void SensorsReport::set_allocated_devicename(::std::string* devicename) {
  if (devicename_ != &::google::protobuf::internal::kEmptyString) {
    delete devicename_;
  }
  if (devicename) {
    set_has_devicename();
    devicename_ = devicename;
  } else {
    clear_has_devicename();
    devicename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint64 timestamp = 2;
inline bool SensorsReport::has_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SensorsReport::set_has_timestamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SensorsReport::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SensorsReport::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::uint64 SensorsReport::timestamp() const {
  return timestamp_;
}
inline void SensorsReport::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
}

// repeated .SensorsReport.SensorStatus sensors = 3;
inline int SensorsReport::sensors_size() const {
  return sensors_.size();
}
inline void SensorsReport::clear_sensors() {
  sensors_.Clear();
}
inline const ::SensorsReport_SensorStatus& SensorsReport::sensors(int index) const {
  return sensors_.Get(index);
}
inline ::SensorsReport_SensorStatus* SensorsReport::mutable_sensors(int index) {
  return sensors_.Mutable(index);
}
inline ::SensorsReport_SensorStatus* SensorsReport::add_sensors() {
  return sensors_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::SensorsReport_SensorStatus >&
SensorsReport::sensors() const {
  return sensors_;
}
inline ::google::protobuf::RepeatedPtrField< ::SensorsReport_SensorStatus >*
SensorsReport::mutable_sensors() {
  return &sensors_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SensorsReport_SensorType>() {
  return ::SensorsReport_SensorType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sensorsreport_2eproto__INCLUDED
