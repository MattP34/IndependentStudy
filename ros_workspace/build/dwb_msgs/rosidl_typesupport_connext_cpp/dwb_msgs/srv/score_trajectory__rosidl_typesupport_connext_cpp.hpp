// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from dwb_msgs:srv/ScoreTrajectory.idl
// generated code does not contain a copyright notice


#ifndef DWB_MSGS__SRV__SCORE_TRAJECTORY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define DWB_MSGS__SRV__SCORE_TRAJECTORY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "dwb_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "dwb_msgs/srv/detail/score_trajectory__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "dwb_msgs/srv/dds_connext/ScoreTrajectory_Support.h"
#include "dwb_msgs/srv/dds_connext/ScoreTrajectory_Plugin.h"
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

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__ScoreTrajectory_Request();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
convert_ros_message_to_dds(
  const dwb_msgs::srv::ScoreTrajectory_Request & ros_message,
  dwb_msgs::srv::dds_::ScoreTrajectory_Request_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
convert_dds_message_to_ros(
  const dwb_msgs::srv::dds_::ScoreTrajectory_Request_ & dds_message,
  dwb_msgs::srv::ScoreTrajectory_Request & ros_message);

bool
to_cdr_stream__ScoreTrajectory_Request(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__ScoreTrajectory_Request(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace dwb_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  dwb_msgs, srv,
  ScoreTrajectory_Request)();

#ifdef __cplusplus
}
#endif


// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
// already included above
// #include "dwb_msgs/srv/detail/score_trajectory__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

// already included above
// #include "dwb_msgs/srv/dds_connext/ScoreTrajectory_Support.h"
// already included above
// #include "dwb_msgs/srv/dds_connext/ScoreTrajectory_Plugin.h"
// already included above
// #include "ndds/ndds_cpp.h"

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

namespace srv
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__ScoreTrajectory_Response();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
convert_ros_message_to_dds(
  const dwb_msgs::srv::ScoreTrajectory_Response & ros_message,
  dwb_msgs::srv::dds_::ScoreTrajectory_Response_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
convert_dds_message_to_ros(
  const dwb_msgs::srv::dds_::ScoreTrajectory_Response_ & dds_message,
  dwb_msgs::srv::ScoreTrajectory_Response & ros_message);

bool
to_cdr_stream__ScoreTrajectory_Response(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__ScoreTrajectory_Response(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace srv

}  // namespace dwb_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  dwb_msgs, srv,
  ScoreTrajectory_Response)();

#ifdef __cplusplus
}
#endif


#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dwb_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"

namespace dwb_msgs
{
namespace srv
{
namespace typesupport_connext_cpp
{

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
void *
create_requester__ScoreTrajectory(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
const char *
destroy_requester__ScoreTrajectory(
  void * untyped_requester,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
int64_t
send_request__ScoreTrajectory(
  void * untyped_requester,
  const void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
void *
create_replier__ScoreTrajectory(
  void * untyped_participant,
  const char * request_topic_str,
  const char * response_topic_str,
  const void * untyped_datareader_qos,
  const void * untyped_datawriter_qos,
  void ** untyped_reader,
  void ** untyped_writer,
  void * (*allocator)(size_t));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
const char *
destroy_replier__ScoreTrajectory(
  void * untyped_replier,
  void (* deallocator)(void *));

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
bool
take_request__ScoreTrajectory(
  void * untyped_replier,
  rmw_service_info_t * request_header,
  void * untyped_ros_request);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
bool
take_response__ScoreTrajectory(
  void * untyped_requester,
  rmw_service_info_t * request_header,
  void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
bool
send_response__ScoreTrajectory(
  void * untyped_replier,
  const rmw_request_id_t * request_header,
  const void * untyped_ros_response);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
void *
get_request_datawriter__ScoreTrajectory(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
void *
get_reply_datareader__ScoreTrajectory(void * untyped_requester);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
void *
get_request_datareader__ScoreTrajectory(void * untyped_replier);

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
void *
get_reply_datawriter__ScoreTrajectory(void * untyped_replier);

}  // namespace typesupport_connext_cpp
}  // namespace srv
}  // namespace dwb_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_dwb_msgs
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  dwb_msgs, srv,
  ScoreTrajectory)();

#ifdef __cplusplus
}
#endif

#endif  // DWB_MSGS__SRV__SCORE_TRAJECTORY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
