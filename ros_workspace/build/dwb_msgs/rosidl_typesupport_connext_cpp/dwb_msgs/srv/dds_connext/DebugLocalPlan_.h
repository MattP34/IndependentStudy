

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DebugLocalPlan_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DebugLocalPlan__795592973_h
#define DebugLocalPlan__795592973_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "dwb_msgs/msg/dds_connext/LocalPlanEvaluation_.h"
#include "nav_2d_msgs/msg/dds_connext/Path2D_.h"
#include "nav_2d_msgs/msg/dds_connext/Pose2DStamped_.h"
#include "nav_2d_msgs/msg/dds_connext/Twist2D_.h"
namespace dwb_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *DebugLocalPlan_Request_TYPENAME;

            struct DebugLocalPlan_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DebugLocalPlan_Request_TypeSupport;
            class DebugLocalPlan_Request_DataWriter;
            class DebugLocalPlan_Request_DataReader;
            #endif

            class DebugLocalPlan_Request_ 
            {
              public:
                typedef struct DebugLocalPlan_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DebugLocalPlan_Request_TypeSupport TypeSupport;
                typedef DebugLocalPlan_Request_DataWriter DataWriter;
                typedef DebugLocalPlan_Request_DataReader DataReader;
                #endif

                nav_2d_msgs::msg::dds_::Pose2DStamped_   pose_ ;
                nav_2d_msgs::msg::dds_::Twist2D_   velocity_ ;
                nav_2d_msgs::msg::dds_::Path2D_   global_plan_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DebugLocalPlan_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DebugLocalPlan_Request_Seq, DebugLocalPlan_Request_);

            NDDSUSERDllExport
            RTIBool DebugLocalPlan_Request__initialize(
                DebugLocalPlan_Request_* self);

            NDDSUSERDllExport
            RTIBool DebugLocalPlan_Request__initialize_ex(
                DebugLocalPlan_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DebugLocalPlan_Request__initialize_w_params(
                DebugLocalPlan_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DebugLocalPlan_Request__finalize(
                DebugLocalPlan_Request_* self);

            NDDSUSERDllExport
            void DebugLocalPlan_Request__finalize_ex(
                DebugLocalPlan_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DebugLocalPlan_Request__finalize_w_params(
                DebugLocalPlan_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DebugLocalPlan_Request__finalize_optional_members(
                DebugLocalPlan_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DebugLocalPlan_Request__copy(
                DebugLocalPlan_Request_* dst,
                const DebugLocalPlan_Request_* src);

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

            extern const char *DebugLocalPlan_Response_TYPENAME;

            struct DebugLocalPlan_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DebugLocalPlan_Response_TypeSupport;
            class DebugLocalPlan_Response_DataWriter;
            class DebugLocalPlan_Response_DataReader;
            #endif

            class DebugLocalPlan_Response_ 
            {
              public:
                typedef struct DebugLocalPlan_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DebugLocalPlan_Response_TypeSupport TypeSupport;
                typedef DebugLocalPlan_Response_DataWriter DataWriter;
                typedef DebugLocalPlan_Response_DataReader DataReader;
                #endif

                dwb_msgs::msg::dds_::LocalPlanEvaluation_   results_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DebugLocalPlan_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DebugLocalPlan_Response_Seq, DebugLocalPlan_Response_);

            NDDSUSERDllExport
            RTIBool DebugLocalPlan_Response__initialize(
                DebugLocalPlan_Response_* self);

            NDDSUSERDllExport
            RTIBool DebugLocalPlan_Response__initialize_ex(
                DebugLocalPlan_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DebugLocalPlan_Response__initialize_w_params(
                DebugLocalPlan_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DebugLocalPlan_Response__finalize(
                DebugLocalPlan_Response_* self);

            NDDSUSERDllExport
            void DebugLocalPlan_Response__finalize_ex(
                DebugLocalPlan_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DebugLocalPlan_Response__finalize_w_params(
                DebugLocalPlan_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DebugLocalPlan_Response__finalize_optional_members(
                DebugLocalPlan_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DebugLocalPlan_Response__copy(
                DebugLocalPlan_Response_* dst,
                const DebugLocalPlan_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace dwb_msgs  */

#endif /* DebugLocalPlan_ */

