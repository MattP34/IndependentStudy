// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from dwb_msgs:msg/CriticScore.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "dwb_msgs/msg/critic_score__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "dwb_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "dwb_msgs/msg/detail/critic_score__struct.h"
#include "dwb_msgs/msg/detail/critic_score__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "dwb_msgs/msg/dds_connext/CriticScore_Support.h"
#include "dwb_msgs/msg/dds_connext/CriticScore_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'name'
#include "rosidl_runtime_c/string_functions.h"

// forward declare type support functions

static DDS_TypeCode *
_CriticScore__get_type_code()
{
  return dwb_msgs::msg::dds_::CriticScore_TypeSupport::get_typecode();
}

static bool
_CriticScore__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs__msg__CriticScore * ros_message =
    static_cast<const dwb_msgs__msg__CriticScore *>(untyped_ros_message);
  dwb_msgs::msg::dds_::CriticScore_ * dds_message =
    static_cast<dwb_msgs::msg::dds_::CriticScore_ *>(untyped_dds_message);
  // Member name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->name_ = DDS_String_dup(str->data);
  }
  // Member name: raw_score
  {
    dds_message->raw_score_ = ros_message->raw_score;
  }
  // Member name: scale
  {
    dds_message->scale_ = ros_message->scale;
  }
  return true;
}

static bool
_CriticScore__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs::msg::dds_::CriticScore_ * dds_message =
    static_cast<const dwb_msgs::msg::dds_::CriticScore_ *>(untyped_dds_message);
  dwb_msgs__msg__CriticScore * ros_message =
    static_cast<dwb_msgs__msg__CriticScore *>(untyped_ros_message);
  // Member name: name
  {
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      dds_message->name_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }
  // Member name: raw_score
  {
    ros_message->raw_score = dds_message->raw_score_;
  }
  // Member name: scale
  {
    ros_message->scale = dds_message->scale_;
  }
  return true;
}


static bool
_CriticScore__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const dwb_msgs__msg__CriticScore * ros_message =
    static_cast<const dwb_msgs__msg__CriticScore *>(untyped_ros_message);
  dwb_msgs::msg::dds_::CriticScore_ dds_message;
  if (!_CriticScore__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (dwb_msgs::msg::dds_::CriticScore_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call dwb_msgs::msg::dds_::CriticScore_Plugin_serialize_to_cdr_buffer()\n");
    return false;
  }
  if (expected_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "expected_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (cdr_stream->buffer_capacity < expected_length) {
    uint8_t * new_buffer = static_cast<uint8_t *>(cdr_stream->allocator.allocate(expected_length, cdr_stream->allocator.state));
    if (NULL == new_buffer) {
      fprintf(stderr, "failed to allocate memory for cdr data\n");
      return false;
    }
    cdr_stream->allocator.deallocate(cdr_stream->buffer, cdr_stream->allocator.state);
    cdr_stream->buffer = new_buffer;
    cdr_stream->buffer_capacity = expected_length;
  }
  // call the function again and fill the buffer this time
  unsigned int buffer_length_uint = static_cast<unsigned int>(expected_length);
  if (dwb_msgs::msg::dds_::CriticScore_Plugin_serialize_to_cdr_buffer(
      reinterpret_cast<char *>(cdr_stream->buffer),
      &buffer_length_uint,
      &dds_message) != RTI_TRUE)
  {
    cdr_stream->buffer_length = 0;
    return false;
  }
  cdr_stream->buffer_length = expected_length;

  return true;
}

static bool
_CriticScore__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  dwb_msgs::msg::dds_::CriticScore_ * dds_message =
    dwb_msgs::msg::dds_::CriticScore_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (dwb_msgs::msg::dds_::CriticScore_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _CriticScore__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (dwb_msgs::msg::dds_::CriticScore_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _CriticScore__callbacks = {
  "dwb_msgs::msg",  // message_namespace
  "CriticScore",  // message_name
  _CriticScore__get_type_code,  // get_type_code
  _CriticScore__convert_ros_to_dds,  // convert_ros_to_dds
  _CriticScore__convert_dds_to_ros,  // convert_dds_to_ros
  _CriticScore__to_cdr_stream,  // to_cdr_stream
  _CriticScore__to_message  // to_message
};

static rosidl_message_type_support_t _CriticScore__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_CriticScore__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, msg,
  CriticScore)()
{
  return &_CriticScore__type_support;
}

#if defined(__cplusplus)
}
#endif
