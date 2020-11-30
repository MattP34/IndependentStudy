// generated from rosidl_typesupport_connext_c/resource/idl__dds_connext__type_support_c.cpp.em
// with input from dwb_msgs:srv/GetCriticScore.idl
// generated code does not contain a copyright notice

#include <cassert>
#include <limits>

#ifdef Connext_GLIBCXX_USE_CXX11_ABI_ZERO
#define _GLIBCXX_USE_CXX11_ABI 0
#endif

#ifndef _WIN32
# pragma GCC diagnostic push
# if __GNUC__ >= 9
#  pragma GCC diagnostic ignored "-Wclass-memaccess"
# endif
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include <ndds/connext_cpp/connext_cpp_requester_details.h>
#include <ndds/ndds_cpp.h>
#include <ndds/ndds_requestreply_cpp.h>

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "dwb_msgs/srv/get_critic_score__rosidl_typesupport_connext_c.h"
#include "rosidl_typesupport_connext_cpp/service_type_support.h"
#include "rosidl_typesupport_connext_cpp/message_type_support.h"
#include "rmw/rmw.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_connext_c/identifier.h"
#include "dwb_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "dwb_msgs/srv/dds_connext/GetCriticScore_Support.h"
#include "dwb_msgs/srv/get_critic_score.h"
#include "dwb_msgs/srv/get_critic_score__rosidl_typesupport_connext_cpp.hpp"

// already included above
// #include "dwb_msgs/srv/get_critic_score__rosidl_typesupport_connext_c.h"
#include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
#include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
#include "dwb_msgs/srv/detail/get_critic_score__struct.h"
#include "dwb_msgs/srv/detail/get_critic_score__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "dwb_msgs/srv/dds_connext/GetCriticScore_Support.h"
#include "dwb_msgs/srv/dds_connext/GetCriticScore_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'pose'
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__struct.h"
// Member 'pose'
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__functions.h"
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__struct.h"
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__functions.h"
// Member 'global_plan'
#include "nav_2d_msgs/msg/detail/path2_d__struct.h"
// Member 'global_plan'
#include "nav_2d_msgs/msg/detail/path2_d__functions.h"
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__struct.h"
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__functions.h"
// Member 'critic_name'
#include "rosidl_runtime_c/string.h"
// Member 'critic_name'
#include "rosidl_runtime_c/string_functions.h"

// forward declare type support functions
// Member 'pose'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  nav_2d_msgs, msg,
  Pose2DStamped)();
// Member 'velocity'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  nav_2d_msgs, msg,
  Twist2D)();
// Member 'global_plan'
ROSIDL_TYPESUPPORT_CONNEXT_C_IMPORT_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  nav_2d_msgs, msg,
  Path2D)();
// Member 'traj'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, msg,
  Trajectory2D)();

static DDS_TypeCode *
_GetCriticScore_Request__get_type_code()
{
  return dwb_msgs::srv::dds_::GetCriticScore_Request_TypeSupport::get_typecode();
}

static bool
_GetCriticScore_Request__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs__srv__GetCriticScore_Request * ros_message =
    static_cast<const dwb_msgs__srv__GetCriticScore_Request *>(untyped_ros_message);
  dwb_msgs::srv::dds_::GetCriticScore_Request_ * dds_message =
    static_cast<dwb_msgs::srv::dds_::GetCriticScore_Request_ *>(untyped_dds_message);
  // Member name: pose
  {
    const message_type_support_callbacks_t * nav_2d_msgs__msg__Pose2DStamped__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, nav_2d_msgs, msg, Pose2DStamped
      )()->data);
    if (!nav_2d_msgs__msg__Pose2DStamped__callbacks->convert_ros_to_dds(
        &ros_message->pose, &dds_message->pose_))
    {
      return false;
    }
  }
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
  // Member name: global_plan
  {
    const message_type_support_callbacks_t * nav_2d_msgs__msg__Path2D__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, nav_2d_msgs, msg, Path2D
      )()->data);
    if (!nav_2d_msgs__msg__Path2D__callbacks->convert_ros_to_dds(
        &ros_message->global_plan, &dds_message->global_plan_))
    {
      return false;
    }
  }
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
  // Member name: critic_name
  {
    const rosidl_runtime_c__String * str = &ros_message->critic_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    dds_message->critic_name_ = DDS_String_dup(str->data);
  }
  return true;
}

static bool
_GetCriticScore_Request__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs::srv::dds_::GetCriticScore_Request_ * dds_message =
    static_cast<const dwb_msgs::srv::dds_::GetCriticScore_Request_ *>(untyped_dds_message);
  dwb_msgs__srv__GetCriticScore_Request * ros_message =
    static_cast<dwb_msgs__srv__GetCriticScore_Request *>(untyped_ros_message);
  // Member name: pose
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      nav_2d_msgs, msg,
      Pose2DStamped)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->pose_, &ros_message->pose);
  }
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
  // Member name: global_plan
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      nav_2d_msgs, msg,
      Path2D)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->global_plan_, &ros_message->global_plan);
  }
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
  // Member name: critic_name
  {
    if (!ros_message->critic_name.data) {
      rosidl_runtime_c__String__init(&ros_message->critic_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->critic_name,
      dds_message->critic_name_);
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'critic_name'\n");
      return false;
    }
  }
  return true;
}


static bool
_GetCriticScore_Request__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const dwb_msgs__srv__GetCriticScore_Request * ros_message =
    static_cast<const dwb_msgs__srv__GetCriticScore_Request *>(untyped_ros_message);
  dwb_msgs::srv::dds_::GetCriticScore_Request_ dds_message;
  if (!_GetCriticScore_Request__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (dwb_msgs::srv::dds_::GetCriticScore_Request_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call dwb_msgs::srv::dds_::GetCriticScore_Request_Plugin_serialize_to_cdr_buffer()\n");
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
  if (dwb_msgs::srv::dds_::GetCriticScore_Request_Plugin_serialize_to_cdr_buffer(
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
_GetCriticScore_Request__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  dwb_msgs::srv::dds_::GetCriticScore_Request_ * dds_message =
    dwb_msgs::srv::dds_::GetCriticScore_Request_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (dwb_msgs::srv::dds_::GetCriticScore_Request_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _GetCriticScore_Request__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (dwb_msgs::srv::dds_::GetCriticScore_Request_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _GetCriticScore_Request__callbacks = {
  "dwb_msgs::srv",  // message_namespace
  "GetCriticScore_Request",  // message_name
  _GetCriticScore_Request__get_type_code,  // get_type_code
  _GetCriticScore_Request__convert_ros_to_dds,  // convert_ros_to_dds
  _GetCriticScore_Request__convert_dds_to_ros,  // convert_dds_to_ros
  _GetCriticScore_Request__to_cdr_stream,  // to_cdr_stream
  _GetCriticScore_Request__to_message  // to_message
};

static rosidl_message_type_support_t _GetCriticScore_Request__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_GetCriticScore_Request__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, srv,
  GetCriticScore_Request)()
{
  return &_GetCriticScore_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "dwb_msgs/srv/get_critic_score__rosidl_typesupport_connext_c.h"
// already included above
// #include "rcutils/types/uint8_array.h"
// already included above
// #include "rosidl_typesupport_connext_c/identifier.h"
// already included above
// #include "rosidl_typesupport_connext_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_connext_cpp/message_type_support.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_connext_c__visibility_control.h"
// already included above
// #include "dwb_msgs/srv/detail/get_critic_score__struct.h"
// already included above
// #include "dwb_msgs/srv/detail/get_critic_score__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "dwb_msgs/srv/dds_connext/GetCriticScore_Support.h"
// already included above
// #include "dwb_msgs/srv/dds_connext/GetCriticScore_Plugin.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions
#if defined(__cplusplus)
extern "C"
{
#endif

// Include directives for member types
// Member 'score'
#include "dwb_msgs/msg/detail/critic_score__struct.h"
// Member 'score'
#include "dwb_msgs/msg/detail/critic_score__functions.h"

// forward declare type support functions
// Member 'score'
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, msg,
  CriticScore)();

static DDS_TypeCode *
_GetCriticScore_Response__get_type_code()
{
  return dwb_msgs::srv::dds_::GetCriticScore_Response_TypeSupport::get_typecode();
}

static bool
_GetCriticScore_Response__convert_ros_to_dds(const void * untyped_ros_message, void * untyped_dds_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs__srv__GetCriticScore_Response * ros_message =
    static_cast<const dwb_msgs__srv__GetCriticScore_Response *>(untyped_ros_message);
  dwb_msgs::srv::dds_::GetCriticScore_Response_ * dds_message =
    static_cast<dwb_msgs::srv::dds_::GetCriticScore_Response_ *>(untyped_dds_message);
  // Member name: score
  {
    const message_type_support_callbacks_t * dwb_msgs__msg__CriticScore__callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_connext_c, dwb_msgs, msg, CriticScore
      )()->data);
    if (!dwb_msgs__msg__CriticScore__callbacks->convert_ros_to_dds(
        &ros_message->score, &dds_message->score_))
    {
      return false;
    }
  }
  return true;
}

static bool
_GetCriticScore_Response__convert_dds_to_ros(const void * untyped_dds_message, void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  if (!untyped_dds_message) {
    fprintf(stderr, "dds message handle is null\n");
    return false;
  }
  const dwb_msgs::srv::dds_::GetCriticScore_Response_ * dds_message =
    static_cast<const dwb_msgs::srv::dds_::GetCriticScore_Response_ *>(untyped_dds_message);
  dwb_msgs__srv__GetCriticScore_Response * ros_message =
    static_cast<dwb_msgs__srv__GetCriticScore_Response *>(untyped_ros_message);
  // Member name: score
  {
    const rosidl_message_type_support_t * ts =
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
      rosidl_typesupport_connext_c,
      dwb_msgs, msg,
      CriticScore)();
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(ts->data);
    callbacks->convert_dds_to_ros(&dds_message->score_, &ros_message->score);
  }
  return true;
}


static bool
_GetCriticScore_Response__to_cdr_stream(
  const void * untyped_ros_message,
  rcutils_uint8_array_t * cdr_stream)
{
  if (!untyped_ros_message) {
    return false;
  }
  if (!cdr_stream) {
    return false;
  }
  const dwb_msgs__srv__GetCriticScore_Response * ros_message =
    static_cast<const dwb_msgs__srv__GetCriticScore_Response *>(untyped_ros_message);
  dwb_msgs::srv::dds_::GetCriticScore_Response_ dds_message;
  if (!_GetCriticScore_Response__convert_ros_to_dds(ros_message, &dds_message)) {
    return false;
  }

  // call the serialize function for the first time to get the expected length of the message
  unsigned int expected_length;
  if (dwb_msgs::srv::dds_::GetCriticScore_Response_Plugin_serialize_to_cdr_buffer(
      NULL, &expected_length, &dds_message) != RTI_TRUE)
  {
    fprintf(stderr, "failed to call dwb_msgs::srv::dds_::GetCriticScore_Response_Plugin_serialize_to_cdr_buffer()\n");
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
  if (dwb_msgs::srv::dds_::GetCriticScore_Response_Plugin_serialize_to_cdr_buffer(
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
_GetCriticScore_Response__to_message(
  const rcutils_uint8_array_t * cdr_stream,
  void * untyped_ros_message)
{
  if (!cdr_stream) {
    return false;
  }
  if (!untyped_ros_message) {
    return false;
  }

  dwb_msgs::srv::dds_::GetCriticScore_Response_ * dds_message =
    dwb_msgs::srv::dds_::GetCriticScore_Response_TypeSupport::create_data();
  if (cdr_stream->buffer_length > (std::numeric_limits<unsigned int>::max)()) {
    fprintf(stderr, "cdr_stream->buffer_length, unexpectedly larger than max unsigned int\n");
    return false;
  }
  if (dwb_msgs::srv::dds_::GetCriticScore_Response_Plugin_deserialize_from_cdr_buffer(
      dds_message,
      reinterpret_cast<char *>(cdr_stream->buffer),
      static_cast<unsigned int>(cdr_stream->buffer_length)) != RTI_TRUE)
  {
    fprintf(stderr, "deserialize from cdr buffer failed\n");
    return false;
  }
  bool success = _GetCriticScore_Response__convert_dds_to_ros(dds_message, untyped_ros_message);
  if (dwb_msgs::srv::dds_::GetCriticScore_Response_TypeSupport::delete_data(dds_message) != DDS_RETCODE_OK) {
    return false;
  }
  return success;
}

static message_type_support_callbacks_t _GetCriticScore_Response__callbacks = {
  "dwb_msgs::srv",  // message_namespace
  "GetCriticScore_Response",  // message_name
  _GetCriticScore_Response__get_type_code,  // get_type_code
  _GetCriticScore_Response__convert_ros_to_dds,  // convert_ros_to_dds
  _GetCriticScore_Response__convert_dds_to_ros,  // convert_dds_to_ros
  _GetCriticScore_Response__to_cdr_stream,  // to_cdr_stream
  _GetCriticScore_Response__to_message  // to_message
};

static rosidl_message_type_support_t _GetCriticScore_Response__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_GetCriticScore_Response__callbacks,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, srv,
  GetCriticScore_Response)()
{
  return &_GetCriticScore_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

class DDSDomainParticipant;
class DDSDataReader;
struct DDS_SampleIdentity_t;

#if defined(__cplusplus)
extern "C"
{
#endif

static void * create_requester__GetCriticScore(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  return dwb_msgs::srv::typesupport_connext_cpp::create_requester__GetCriticScore(
    untyped_participant,
    request_topic_str,
    response_topic_str,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    untyped_reader,
    untyped_writer,
    allocator);
}
static const char * destroy_requester__GetCriticScore(
  void * untyped_requester,
  void (* deallocator)(void *))
{
  return dwb_msgs::srv::typesupport_connext_cpp::destroy_requester__GetCriticScore(
    untyped_requester, deallocator);
}

static int64_t send_request__GetCriticScore(
  void * untyped_requester,
  const void * untyped_ros_request)
{
  using RequesterType = connext::Requester<
    dwb_msgs::srv::dds_::GetCriticScore_Request_,
    dwb_msgs::srv::dds_::GetCriticScore_Response_
  >;
  connext::WriteSample<dwb_msgs::srv::dds_::GetCriticScore_Request_> request;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    dwb_msgs, srv,
    GetCriticScore_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_ros_to_dds(
    untyped_ros_request, static_cast<void *>(&request.data()));
  if (!converted) {
    fprintf(stderr, "Unable to convert request!\n");
    return -1;
  }

  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);

  requester->send_request(request);
  int64_t sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 |
    request.identity().sequence_number.low;
  return sequence_number;
}

static void * create_replier__GetCriticScore(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t))
{
  return dwb_msgs::srv::typesupport_connext_cpp::create_replier__GetCriticScore(
    untyped_participant,
    request_topic_str,
    response_topic_str,
    untyped_datareader_qos,
    untyped_datawriter_qos,
    untyped_reader,
    untyped_writer,
    allocator);
}

static const char * destroy_replier__GetCriticScore(
  void * untyped_replier,
  void (* deallocator)(void *))
{
  return dwb_msgs::srv::typesupport_connext_cpp::destroy_replier__GetCriticScore(
    untyped_replier, deallocator);
}

static bool take_request__GetCriticScore(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request)
{
  using ReplierType = connext::Replier<
    dwb_msgs::srv::dds_::GetCriticScore_Request_,
    dwb_msgs::srv::dds_::GetCriticScore_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_request) {
    return false;
  }

  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);

  connext::Sample<dwb_msgs::srv::dds_::GetCriticScore_Request_> request;
  bool taken = replier->take_request(request);
  if (!taken) {
    return false;
  }
  if (!request.info().valid_data) {
    return false;
  }

  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    dwb_msgs, srv,
    GetCriticScore_Request)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_dds_to_ros(
    static_cast<const void *>(&request.data()), untyped_ros_request);
  if (!converted) {
    return false;
  }

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(&(request_header->request_id.writer_guid[0]), request.identity().writer_guid.value, SAMPLE_IDENTITY_SIZE);

  request_header->request_id.sequence_number = ((int64_t)request.identity().sequence_number.high) << 32 | request.identity().sequence_number.low;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;
  return true;
}

static bool take_response__GetCriticScore(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response)
{
  using RequesterType = connext::Requester<
    dwb_msgs::srv::dds_::GetCriticScore_Request_,
    dwb_msgs::srv::dds_::GetCriticScore_Response_
  >;
  if (!untyped_requester || !request_header || !untyped_ros_response) {
    return false;
  }

  RequesterType * requester = reinterpret_cast<RequesterType *>(untyped_requester);

  connext::Sample<dwb_msgs::srv::dds_::GetCriticScore_Response_> response;
  bool received = requester->take_reply(response);
  if (!received) {
    return false;
  }
  if (!response.info().valid_data) {
    return false;
  }

  int64_t sequence_number =
    (((int64_t)response.related_identity().sequence_number.high) << 32) |
    response.related_identity().sequence_number.low;
  request_header->request_id.sequence_number = sequence_number;
  request_header->source_timestamp = 0;
  request_header->received_timestamp = 0;

  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    dwb_msgs, srv,
    GetCriticScore_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_dds_to_ros(
    static_cast<const void *>(&response.data()), untyped_ros_response);
  return converted;
}

bool send_response__GetCriticScore(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response)
{
  using ReplierType = connext::Replier<
    dwb_msgs::srv::dds_::GetCriticScore_Request_,
    dwb_msgs::srv::dds_::GetCriticScore_Response_
  >;
  if (!untyped_replier || !request_header || !untyped_ros_response) {
    return false;
  }

  connext::WriteSample<dwb_msgs::srv::dds_::GetCriticScore_Response_> response;
  const rosidl_message_type_support_t * ts =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_connext_c,
    dwb_msgs, srv,
    GetCriticScore_Response)();
  const message_type_support_callbacks_t * callbacks =
    static_cast<const message_type_support_callbacks_t *>(ts->data);
  bool converted = callbacks->convert_ros_to_dds(
    untyped_ros_response, static_cast<void *>(&response.data()));
  if (!converted) {
    return false;
  }

  DDS_SampleIdentity_t request_identity;

  size_t SAMPLE_IDENTITY_SIZE = 16;
  memcpy(request_identity.writer_guid.value, &request_header->writer_guid[0], SAMPLE_IDENTITY_SIZE);

  request_identity.sequence_number.high = (int32_t)((request_header->sequence_number & 0xFFFFFFFF00000000) >> 32);
  request_identity.sequence_number.low = (uint32_t)(request_header->sequence_number & 0xFFFFFFFF);

  ReplierType * replier = reinterpret_cast<ReplierType *>(untyped_replier);

  replier->send_reply(response, request_identity);
  return true;
}

static void *
get_request_datawriter__GetCriticScore(void * untyped_requester)
{
  return dwb_msgs::srv::typesupport_connext_cpp::get_request_datawriter__GetCriticScore(
    untyped_requester);
}

static void *
get_reply_datareader__GetCriticScore(void * untyped_requester)
{
  return dwb_msgs::srv::typesupport_connext_cpp::get_reply_datareader__GetCriticScore(
    untyped_requester);
}

static void *
get_request_datareader__GetCriticScore(void * untyped_replier)
{
  return dwb_msgs::srv::typesupport_connext_cpp::get_request_datareader__GetCriticScore(
    untyped_replier);
}

static void *
get_reply_datawriter__GetCriticScore(void * untyped_replier)
{
  return dwb_msgs::srv::typesupport_connext_cpp::get_reply_datawriter__GetCriticScore(
    untyped_replier);
}

static service_type_support_callbacks_t _GetCriticScore__callbacks = {
  "dwb_msgs::srv",  // service_namespace
  "GetCriticScore",
  &create_requester__GetCriticScore,
  &destroy_requester__GetCriticScore,
  &create_replier__GetCriticScore,
  &destroy_replier__GetCriticScore,
  &send_request__GetCriticScore,
  &take_request__GetCriticScore,
  &send_response__GetCriticScore,
  &take_response__GetCriticScore,
  &get_request_datawriter__GetCriticScore,
  &get_reply_datareader__GetCriticScore,
  &get_request_datareader__GetCriticScore,
  &get_reply_datawriter__GetCriticScore
};

static rosidl_service_type_support_t _GetCriticScore__type_support = {
  rosidl_typesupport_connext_c__identifier,
  &_GetCriticScore__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_c,
  dwb_msgs, srv,
  GetCriticScore)()
{
  return &_GetCriticScore__type_support;
}

#if defined(__cplusplus)
}
#endif
