// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice


#ifndef DWB_MSGS__MSG__TRAJECTORY_SCORE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define DWB_MSGS__MSG__TRAJECTORY_SCORE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "dwb_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "dwb_msgs/msg/detail/trajectory_score__struct.hpp"

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
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace dwb_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__TrajectoryScore();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
convert_ros_message_to_dds(
  const dwb_msgs::msg::TrajectoryScore & ros_message,
  dwb_msgs::msg::dds_::TrajectoryScore_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
convert_dds_message_to_ros(
  const dwb_msgs::msg::dds_::TrajectoryScore_ & dds_message,
  dwb_msgs::msg::TrajectoryScore & ros_message);

bool
to_cdr_stream__TrajectoryScore(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__TrajectoryScore(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace dwb_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  dwb_msgs, msg,
  TrajectoryScore)();

#ifdef __cplusplus
}
#endif


#endif  // DWB_MSGS__MSG__TRAJECTORY_SCORE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
