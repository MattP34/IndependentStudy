// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from dwb_msgs:msg/LocalPlanEvaluation.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "dwb_msgs/msg/local_plan_evaluation__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "dwb_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "dwb_msgs/msg/detail/local_plan_evaluation__struct.h"
#include "dwb_msgs/msg/detail/local_plan_evaluation__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "dwb_msgs/msg/dds_connext/LocalPlanEvaluation_Support.h"
#include "dwb_msgs/msg/dds_connext/LocalPlanEvaluation_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'header'
#include "std_msgs/msg/detail/header__functions.h"
// Member 'twists'
#include "dwb_msgs/msg/detail/trajectory_score__struct.h"
// Member 'twists'
#include "dwb_msgs/msg/detail/trajectory_score__functions.h"

// forward declare type support functions
// Member 'header'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  std_msgs, msg,
  Header)();
// Member 'twists'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, msg,
  TrajectoryScore)();

static DDS_TypeCode *
_LocalPlanEvaluation__get_type_code()
{
  return dwb_msgs::msg::dds_::LocalPlanEvaluation_TypeSupport::get_typecode();
}

static bool
_LocalPlanEvaluation__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs__msg__LocalPlanEvaluation * ros_message =
    static_cast<const dwb_msgs__msg__LocalPlanEvaluation *>(untyped_ros_message);
  dwb_msgs::msg::dds_::LocalPlanEvaluation_ * dds_message =
    static_cast<dwb_msgs::msg::dds_::LocalPlanEvaluation_ *>(untyped_dds_message);
  // Member name: header
  {
    const message_type_support_callbacks_t * std_msgs__msg__Header__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, std_msgs, msg, Header
      )()->data);
    if (!std_msgs__msg__Header__callbacks->convert_ros_to_dds(
        &ros_message->header, &dds_message->header_))
    {
      return false;
    }
  }
  // Member name: twists
  {
    const message_type_support_callbacks_t * dwb_msgs__msg__TrajectoryScore__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, dwb_msgs, msg, TrajectoryScore
      )()->data);
    size_t size = ros_message->twists.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->twists_.maximum()) {
      if (!dds_message->twists_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->twists_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->twists.data[i];
      if (!dwb_msgs__msg__TrajectoryScore__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->twists_[i]))
      {
        return false;
      }
    }
  }
  // Member name: best_index
  {
    dds_message->best_index_ = ros_message->best_index;
  }
  // Member name: worst_index
  {
    dds_message->worst_index_ = ros_message->worst_index;
  }
  return true;
}

static bool
_LocalPlanEvaluation__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs::msg::dds_::LocalPlanEvaluation_ * dds_message =
    static_cast<const dwb_msgs::msg::dds_::LocalPlanEvaluation_ *>(untyped_dds_message);
  dwb_msgs__msg__LocalPlanEvaluation * ros_message =
    static_cast<dwb_msgs__msg__LocalPlanEvaluation *>(untyped_ros_message);
  // Member name: header
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      std_msgs, msg,
      Header)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->header_, &ros_message->header);
  }
  // Member name: twists
  {
    DDS_Long size = dds_message->twists_.length();
    if (ros_message->twists.data) {
      dwb_msgs__msg__TrajectoryScore__Sequence__fini(&ros_message->twists);
    }
    if (!dwb_msgs__msg__TrajectoryScore__Sequence__init(&ros_message->twists, size)) {
      return "failed to create array for field 'twists'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->twists.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        dwb_msgs, msg,
        TrajectoryScore)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->twists_[i], &ros_i);
    }
  }
  // Member name: best_index
  {
    ros_message->best_index = dds_message->best_index_;
  }
  // Member name: worst_index
  {
    ros_message->worst_index = dds_message->worst_index_;
  }
  return true;
}


static bool
_LocalPlanEvaluation__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const dwb_msgs__msg__LocalPlanEvaluation * ros_message =
    static_cast<const dwb_msgs__msg__LocalPlanEvaluation *>(untyped_ros_message);
  dwb_msgs::msg::dds_::LocalPlanEvaluation_ dds_message;
  if (!_LocalPlanEvaluation__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (dwb_msgs::msg::dds_::LocalPlanEvaluation_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call dwb_msgs::msg::dds_::LocalPlanEvaluation_Plugin_serialize_to_cdr_buffer()\n");
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
  if (dwb_msgs::msg::dds_::LocalPlanEvaluation_Plugin_serialize_to_cdr_buffer(
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
_LocalPlanEvaluation__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  dwb_msgs::msg::dds_::LocalPlanEvaluation_ * dds_message =
    dwb_msgs::msg::dds_::LocalPlanEvaluation_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (dwb_msgs::msg::dds_::LocalPlanEvaluation_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _LocalPlanEvaluation__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (dwb_msgs::msg::dds_::LocalPlanEvaluation_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _LocalPlanEvaluation__callbacks = {
  "dwb_msgs::msg",  // message_namespace
  "LocalPlanEvaluation",  // message_name
  _LocalPlanEvaluation__get_type_code,  // get_type_code
  _LocalPlanEvaluation__convert_ros_to_dds,  // convert_ros_to_dds
  _LocalPlanEvaluation__convert_dds_to_ros,  // convert_dds_to_ros
  _LocalPlanEvaluation__to_cdr_stream,  // to_cdr_stream
  _LocalPlanEvaluation__to_message  // to_message
};

static rosidl_message_type_support_t _LocalPlanEvaluation__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_LocalPlanEvaluation__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, msg,
  LocalPlanEvaluation)()
{
  return &_LocalPlanEvaluation__type_support;
}

#if defined(__cplusplus)
}
#endif
