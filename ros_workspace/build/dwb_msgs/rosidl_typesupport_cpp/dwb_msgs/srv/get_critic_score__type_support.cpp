// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dwb_msgs:srv/GetCriticScore.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dwb_msgs/srv/detail/get_critic_score__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/type_support_map.h"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dwb_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCriticScore_Request_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetCriticScore_Request_type_support_ids_t;

static const _GetCriticScore_Request_type_support_ids_t _GetCriticScore_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCriticScore_Request_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetCriticScore_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCriticScore_Request_type_support_symbol_names_t _GetCriticScore_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, dwb_msgs, srv, GetCriticScore_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, GetCriticScore_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dwb_msgs, srv, GetCriticScore_Request)),
  }
};

typedef struct _GetCriticScore_Request_type_support_data_t
{
  void * data[3];
} _GetCriticScore_Request_type_support_data_t;

static _GetCriticScore_Request_type_support_data_t _GetCriticScore_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCriticScore_Request_message_typesupport_map = {
  3,
  "dwb_msgs",
  &_GetCriticScore_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetCriticScore_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetCriticScore_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCriticScore_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCriticScore_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::srv::GetCriticScore_Request>()
{
  return &::dwb_msgs::srv::rosidl_typesupport_cpp::GetCriticScore_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dwb_msgs, srv, GetCriticScore_Request)() {
  return get_message_type_support_handle<dwb_msgs::srv::GetCriticScore_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dwb_msgs/srv/detail/get_critic_score__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dwb_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCriticScore_Response_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetCriticScore_Response_type_support_ids_t;

static const _GetCriticScore_Response_type_support_ids_t _GetCriticScore_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCriticScore_Response_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetCriticScore_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCriticScore_Response_type_support_symbol_names_t _GetCriticScore_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, dwb_msgs, srv, GetCriticScore_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, GetCriticScore_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dwb_msgs, srv, GetCriticScore_Response)),
  }
};

typedef struct _GetCriticScore_Response_type_support_data_t
{
  void * data[3];
} _GetCriticScore_Response_type_support_data_t;

static _GetCriticScore_Response_type_support_data_t _GetCriticScore_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCriticScore_Response_message_typesupport_map = {
  3,
  "dwb_msgs",
  &_GetCriticScore_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetCriticScore_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetCriticScore_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetCriticScore_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCriticScore_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dwb_msgs::srv::GetCriticScore_Response>()
{
  return &::dwb_msgs::srv::rosidl_typesupport_cpp::GetCriticScore_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dwb_msgs, srv, GetCriticScore_Response)() {
  return get_message_type_support_handle<dwb_msgs::srv::GetCriticScore_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dwb_msgs/srv/detail/get_critic_score__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dwb_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetCriticScore_type_support_ids_t
{
  const char * typesupport_identifier[3];
} _GetCriticScore_type_support_ids_t;

static const _GetCriticScore_type_support_ids_t _GetCriticScore_service_typesupport_ids = {
  {
    "rosidl_typesupport_connext_cpp",  // ::rosidl_typesupport_connext_cpp::typesupport_identifier,
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetCriticScore_type_support_symbol_names_t
{
  const char * symbol_name[3];
} _GetCriticScore_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetCriticScore_type_support_symbol_names_t _GetCriticScore_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_connext_cpp, dwb_msgs, srv, GetCriticScore)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dwb_msgs, srv, GetCriticScore)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dwb_msgs, srv, GetCriticScore)),
  }
};

typedef struct _GetCriticScore_type_support_data_t
{
  void * data[3];
} _GetCriticScore_type_support_data_t;

static _GetCriticScore_type_support_data_t _GetCriticScore_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetCriticScore_service_typesupport_map = {
  3,
  "dwb_msgs",
  &_GetCriticScore_service_typesupport_ids.typesupport_identifier[0],
  &_GetCriticScore_service_typesupport_symbol_names.symbol_name[0],
  &_GetCriticScore_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetCriticScore_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetCriticScore_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dwb_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dwb_msgs::srv::GetCriticScore>()
{
  return &::dwb_msgs::srv::rosidl_typesupport_cpp::GetCriticScore_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp