// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#include "dwb_msgs/msg/trajectory2_d__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "dwb_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "dwb_msgs/msg/detail/trajectory2_d__struct.h"
#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "dwb_msgs/msg/dds_connext/Trajectory2D_Support.h"
#include "dwb_msgs/msg/dds_connext/Trajectory2D_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__struct.h"
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"
// Member 'time_offsets'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'time_offsets'
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

// forward declare type support functions
// Member 'velocity'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  nav_2d_msgs, msg,
  Twist2D)();
// Member 'time_offsets'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  builtin_interfaces, msg,
  Duration)();
// Member 'poses'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  geometry_msgs, msg,
  Pose2D)();

static DDS_TypeCode *
_Trajectory2D__get_type_code()
{
  return dwb_msgs::msg::dds_::Trajectory2D_TypeSupport::get_typecode();
}

static bool
_Trajectory2D__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs__msg__Trajectory2D * ros_message =
    static_cast<const dwb_msgs__msg__Trajectory2D *>(untyped_ros_message);
  dwb_msgs::msg::dds_::Trajectory2D_ * dds_message =
    static_cast<dwb_msgs::msg::dds_::Trajectory2D_ *>(untyped_dds_message);
  // Member name: velocity
  {
    const message_type_support_callbacks_t * nav_2d_msgs__msg__Twist2D__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, nav_2d_msgs, msg, Twist2D
      )()->data);
    if (!nav_2d_msgs__msg__Twist2D__callbacks->convert_ros_to_dds(
        &ros_message->velocity, &dds_message->velocity_))
    {
      return false;
    }
  }
  // Member name: time_offsets
  {
    const message_type_support_callbacks_t * builtin_interfaces__msg__Duration__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, builtin_interfaces, msg, Duration
      )()->data);
    size_t size = ros_message->time_offsets.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->time_offsets_.maximum()) {
      if (!dds_message->time_offsets_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->time_offsets_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->time_offsets.data[i];
      if (!builtin_interfaces__msg__Duration__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->time_offsets_[i]))
      {
        return false;
      }
    }
  }
  // Member name: poses
  {
    const message_type_support_callbacks_t * geometry_msgs__msg__Pose2D__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, geometry_msgs, msg, Pose2D
      )()->data);
    size_t size = ros_message->poses.size;
    if (size > (std::numeric_limits<size_t>::max)()) {
      fprintf(stderr, "array size exceeds maximum DDS sequence size\n");
      return false;
    }
    DDS_Long length = static_cast<DDS_Long>(size);
    if (length > dds_message->poses_.maximum()) {
      if (!dds_message->poses_.maximum(length)) {
        fprintf(stderr, "failed to set maximum of sequence\n");
        return false;
      }
    }
    if (!dds_message->poses_.length(length)) {
      fprintf(stderr, "failed to set length of sequence\n");
      return false;
    }
    for (DDS_Long i = 0; i < static_cast<DDS_Long>(size); ++i) {
      auto & ros_i = ros_message->poses.data[i];
      if (!geometry_msgs__msg__Pose2D__callbacks->convert_ros_to_dds(
          &ros_i, &dds_message->poses_[i]))
      {
        return false;
      }
    }
  }
  return true;
}

static bool
_Trajectory2D__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs::msg::dds_::Trajectory2D_ * dds_message =
    static_cast<const dwb_msgs::msg::dds_::Trajectory2D_ *>(untyped_dds_message);
  dwb_msgs__msg__Trajectory2D * ros_message =
    static_cast<dwb_msgs__msg__Trajectory2D *>(untyped_ros_message);
  // Member name: velocity
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      nav_2d_msgs, msg,
      Twist2D)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->velocity_, &ros_message->velocity);
  }
  // Member name: time_offsets
  {
    DDS_Long size = dds_message->time_offsets_.length();
    if (ros_message->time_offsets.data) {
      builtin_interfaces__msg__Duration__Sequence__fini(&ros_message->time_offsets);
    }
    if (!builtin_interfaces__msg__Duration__Sequence__init(&ros_message->time_offsets, size)) {
      return "failed to create array for field 'time_offsets'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->time_offsets.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        builtin_interfaces, msg,
        Duration)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->time_offsets_[i], &ros_i);
    }
  }
  // Member name: poses
  {
    DDS_Long size = dds_message->poses_.length();
    if (ros_message->poses.data) {
      geometry_msgs__msg__Pose2D__Sequence__fini(&ros_message->poses);
    }
    if (!geometry_msgs__msg__Pose2D__Sequence__init(&ros_message->poses, size)) {
      return "failed to create array for field 'poses'";
    }
    for (DDS_Long i = 0; i < size; i++) {
      auto & ros_i = ros_message->poses.data[i];
      const rosidl_message_type_support_t * ts =
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c,
        geometry_msgs, msg,
        Pose2D)();
      const message_type_support_callbacks_t * callbacks =
        static_cast<const message_type_support_callbacks_t *>(ts->data);
      callbacks->convert_dds_to_ros(&dds_message->poses_[i], &ros_i);
    }
  }
  return true;
}


static bool
_Trajectory2D__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const dwb_msgs__msg__Trajectory2D * ros_message =
    static_cast<const dwb_msgs__msg__Trajectory2D *>(untyped_ros_message);
  dwb_msgs::msg::dds_::Trajectory2D_ dds_message;
  if (!_Trajectory2D__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (dwb_msgs::msg::dds_::Trajectory2D_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call dwb_msgs::msg::dds_::Trajectory2D_Plugin_serialize_to_cdr_buffer()\n");
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
  if (dwb_msgs::msg::dds_::Trajectory2D_Plugin_serialize_to_cdr_buffer(
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
_Trajectory2D__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  dwb_msgs::msg::dds_::Trajectory2D_ * dds_message =
    dwb_msgs::msg::dds_::Trajectory2D_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (dwb_msgs::msg::dds_::Trajectory2D_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _Trajectory2D__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (dwb_msgs::msg::dds_::Trajectory2D_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _Trajectory2D__callbacks = {
  "dwb_msgs::msg",  // message_namespace
  "Trajectory2D",  // message_name
  _Trajectory2D__get_type_code,  // get_type_code
  _Trajectory2D__convert_ros_to_dds,  // convert_ros_to_dds
  _Trajectory2D__convert_dds_to_ros,  // convert_dds_to_ros
  _Trajectory2D__to_cdr_stream,  // to_cdr_stream
  _Trajectory2D__to_message  // to_message
};

static rosidl_message_type_support_t _Trajectory2D__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_Trajectory2D__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, msg,
  Trajectory2D)()
{
  return &_Trajectory2D__type_support;
}

#if defined(__cplusplus)
}
#endif
