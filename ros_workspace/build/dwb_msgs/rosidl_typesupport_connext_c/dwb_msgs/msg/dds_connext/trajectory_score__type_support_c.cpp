// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "dwb_msgs/msg/trajectory_score__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "dwb_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "dwb_msgs/msg/detail/trajectory_score__struct.h"
#include "dwb_msgs/msg/detail/trajectory_score__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "dwb_msgs/msg/dds_connext/TrajectoryScore_Support.h"
#include "dwb_msgs/msg/dds_connext/TrajectoryScore_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__struct.h"
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"
// Member 'scores'
#include "dwb_msgs/msg/detail/critic_score__struct.h"
// Member 'scores'
#include "dwb_msgs/msg/detail/critic_score__functions.h"

// forward declare type support functions
// Member 'traj'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, msg,
  Trajectory2D)();
// Member 'scores'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, msg,
  CriticScore)();

static DDS_TypeCode *
_TrajectoryScore__get_type_code()
{
  return dwb_msgs::msg::dds_::TrajectoryScore_TypeSupport::get_typecode();
}

static bool
_TrajectoryScore__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs__msg__TrajectoryScore * ros_message =
    static_cast<const dwb_msgs__msg__TrajectoryScore *>(untyped_ros_message);
  dwb_msgs::msg::dds_::TrajectoryScore_ * dds_message =
    static_cast<dwb_msgs::msg::dds_::TrajectoryScore_ *>(untyped_dds_message);
  // Member name: traj
  {
    const message_type_support_callbacks_t * dwb_msgs__msg__Trajectory2D__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, dwb_msgs, msg, Trajectory2D
      )()->data);
    if (!dwb_msgs__msg__Trajectory2D__callbacks->convert_ros_to_dds(
        &ros_message->traj, &dds_message->traj_))
    {
      return false;
    }
  }
  // Member name: scores
  {
    const message_type_support_callbacks_t * dwb_msgs__msg__CriticScore__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, dwb_msgs, msg, CriticScore
      )()->data);
    size_t size = ros_message->scores.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->scores_.maximum()) {
      if (!dds_message->scores_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->scores_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->scores.data[i];
      if (!dwb_msgs__msg__CriticScore__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->scores_[i]))
      {
        return false;
      }
    }
  }
  // Member name: total
  {
    dds_message->total_ = ros_message->total;
  }
  return true;
}

static bool
_TrajectoryScore__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs::msg::dds_::TrajectoryScore_ * dds_message =
    static_cast<const dwb_msgs::msg::dds_::TrajectoryScore_ *>(untyped_dds_message);
  dwb_msgs__msg__TrajectoryScore * ros_message =
    static_cast<dwb_msgs__msg__TrajectoryScore *>(untyped_ros_message);
  // Member name: traj
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      dwb_msgs, msg,
      Trajectory2D)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->traj_, &ros_message->traj);
  }
  // Member name: scores
  {
    DDS_Long size = dds_message->scores_.length();
    if (ros_message->scores.data) {
      dwb_msgs__msg__CriticScore__Sequence__fini(&ros_message->scores);
    }
    if (!dwb_msgs__msg__CriticScore__Sequence__init(&ros_message->scores, size)) {
      return "failed to create array for field 'scores'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->scores.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        dwb_msgs, msg,
        CriticScore)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->scores_[i], &ros_i);
    }
  }
  // Member name: total
  {
    ros_message->total = dds_message->total_;
  }
  return true;
}


static bool
_TrajectoryScore__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const dwb_msgs__msg__TrajectoryScore * ros_message =
    static_cast<const dwb_msgs__msg__TrajectoryScore *>(untyped_ros_message);
  dwb_msgs::msg::dds_::TrajectoryScore_ dds_message;
  if (!_TrajectoryScore__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (dwb_msgs::msg::dds_::TrajectoryScore_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call dwb_msgs::msg::dds_::TrajectoryScore_Plugin_serialize_to_cdr_buffer()\n");
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
  if (dwb_msgs::msg::dds_::TrajectoryScore_Plugin_serialize_to_cdr_buffer(
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
_TrajectoryScore__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  dwb_msgs::msg::dds_::TrajectoryScore_ * dds_message =
    dwb_msgs::msg::dds_::TrajectoryScore_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (dwb_msgs::msg::dds_::TrajectoryScore_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _TrajectoryScore__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (dwb_msgs::msg::dds_::TrajectoryScore_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _TrajectoryScore__callbacks = {
  "dwb_msgs::msg",  // message_namespace
  "TrajectoryScore",  // message_name
  _TrajectoryScore__get_type_code,  // get_type_code
  _TrajectoryScore__convert_ros_to_dds,  // convert_ros_to_dds
  _TrajectoryScore__convert_dds_to_ros,  // convert_dds_to_ros
  _TrajectoryScore__to_cdr_stream,  // to_cdr_stream
  _TrajectoryScore__to_message  // to_message
};

static rosidl_message_type_support_t _TrajectoryScore__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_TrajectoryScore__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, msg,
  TrajectoryScore)()
{
  return &_TrajectoryScore__type_support;
}

#if defined(__cplusplus)
}
#endif
