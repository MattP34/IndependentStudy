

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetCriticScore_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetCriticScore__2053704873_h
#define GetCriticScore__2053704873_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "dwb_msgs/msg/dds_connext/CriticScore_.h"
#include "dwb_msgs/msg/dds_connext/Trajectory2D_.h"
#include "nav_2d_msgs/msg/dds_connext/Path2D_.h"
#include "nav_2d_msgs/msg/dds_connext/Pose2DStamped_.h"
#include "nav_2d_msgs/msg/dds_connext/Twist2D_.h"
namespace dwb_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetCriticScore_Request_TYPENAME;

            struct GetCriticScore_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetCriticScore_Request_TypeSupport;
            class GetCriticScore_Request_DataWriter;
            class GetCriticScore_Request_DataReader;
            #endif

            class GetCriticScore_Request_ 
            {
              public:
                typedef struct GetCriticScore_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetCriticScore_Request_TypeSupport TypeSupport;
                typedef GetCriticScore_Request_DataWriter DataWriter;
                typedef GetCriticScore_Request_DataReader DataReader;
                #endif

                nav_2d_msgs::msg::dds_::Pose2DStamped_   pose_ ;
                nav_2d_msgs::msg::dds_::Twist2D_   velocity_ ;
                nav_2d_msgs::msg::dds_::Path2D_   global_plan_ ;
                dwb_msgs::msg::dds_::Trajectory2D_   traj_ ;
                DDS_Char *   critic_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetCriticScore_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetCriticScore_Request_Seq, GetCriticScore_Request_);

            NDDSUSERDllExport
            RTIBool GetCriticScore_Request__initialize(
                GetCriticScore_Request_* self);

            NDDSUSERDllExport
            RTIBool GetCriticScore_Request__initialize_ex(
                GetCriticScore_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetCriticScore_Request__initialize_w_params(
                GetCriticScore_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetCriticScore_Request__finalize(
                GetCriticScore_Request_* self);

            NDDSUSERDllExport
            void GetCriticScore_Request__finalize_ex(
                GetCriticScore_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetCriticScore_Request__finalize_w_params(
                GetCriticScore_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetCriticScore_Request__finalize_optional_members(
                GetCriticScore_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetCriticScore_Request__copy(
                GetCriticScore_Request_* dst,
                const GetCriticScore_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace dwb_msgs  */
namespace dwb_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetCriticScore_Response_TYPENAME;

            struct GetCriticScore_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetCriticScore_Response_TypeSupport;
            class GetCriticScore_Response_DataWriter;
            class GetCriticScore_Response_DataReader;
            #endif

            class GetCriticScore_Response_ 
            {
              public:
                typedef struct GetCriticScore_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetCriticScore_Response_TypeSupport TypeSupport;
                typedef GetCriticScore_Response_DataWriter DataWriter;
                typedef GetCriticScore_Response_DataReader DataReader;
                #endif

                dwb_msgs::msg::dds_::CriticScore_   score_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetCriticScore_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetCriticScore_Response_Seq, GetCriticScore_Response_);

            NDDSUSERDllExport
            RTIBool GetCriticScore_Response__initialize(
                GetCriticScore_Response_* self);

            NDDSUSERDllExport
            RTIBool GetCriticScore_Response__initialize_ex(
                GetCriticScore_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetCriticScore_Response__initialize_w_params(
                GetCriticScore_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetCriticScore_Response__finalize(
                GetCriticScore_Response_* self);

            NDDSUSERDllExport
            void GetCriticScore_Response__finalize_ex(
                GetCriticScore_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetCriticScore_Response__finalize_w_params(
                GetCriticScore_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetCriticScore_Response__finalize_optional_members(
                GetCriticScore_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetCriticScore_Response__copy(
                GetCriticScore_Response_* dst,
                const GetCriticScore_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace dwb_msgs  */

#endif /* GetCriticScore_ */

