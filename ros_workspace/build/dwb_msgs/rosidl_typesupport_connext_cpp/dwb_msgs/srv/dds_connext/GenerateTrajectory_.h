

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GenerateTrajectory_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GenerateTrajectory__2108612273_h
#define GenerateTrajectory__2108612273_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "dwb_msgs/msg/dds_connext/Trajectory2D_.h"
#include "geometry_msgs/msg/dds_connext/Pose2D_.h"
#include "nav_2d_msgs/msg/dds_connext/Twist2D_.h"
namespace dwb_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GenerateTrajectory_Request_TYPENAME;

            struct GenerateTrajectory_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GenerateTrajectory_Request_TypeSupport;
            class GenerateTrajectory_Request_DataWriter;
            class GenerateTrajectory_Request_DataReader;
            #endif

            class GenerateTrajectory_Request_ 
            {
              public:
                typedef struct GenerateTrajectory_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GenerateTrajectory_Request_TypeSupport TypeSupport;
                typedef GenerateTrajectory_Request_DataWriter DataWriter;
                typedef GenerateTrajectory_Request_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Pose2D_   start_pose_ ;
                nav_2d_msgs::msg::dds_::Twist2D_   start_vel_ ;
                nav_2d_msgs::msg::dds_::Twist2D_   cmd_vel_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GenerateTrajectory_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GenerateTrajectory_Request_Seq, GenerateTrajectory_Request_);

            NDDSUSERDllExport
            RTIBool GenerateTrajectory_Request__initialize(
                GenerateTrajectory_Request_* self);

            NDDSUSERDllExport
            RTIBool GenerateTrajectory_Request__initialize_ex(
                GenerateTrajectory_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GenerateTrajectory_Request__initialize_w_params(
                GenerateTrajectory_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GenerateTrajectory_Request__finalize(
                GenerateTrajectory_Request_* self);

            NDDSUSERDllExport
            void GenerateTrajectory_Request__finalize_ex(
                GenerateTrajectory_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GenerateTrajectory_Request__finalize_w_params(
                GenerateTrajectory_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GenerateTrajectory_Request__finalize_optional_members(
                GenerateTrajectory_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GenerateTrajectory_Request__copy(
                GenerateTrajectory_Request_* dst,
                const GenerateTrajectory_Request_* src);

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

            extern const char *GenerateTrajectory_Response_TYPENAME;

            struct GenerateTrajectory_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GenerateTrajectory_Response_TypeSupport;
            class GenerateTrajectory_Response_DataWriter;
            class GenerateTrajectory_Response_DataReader;
            #endif

            class GenerateTrajectory_Response_ 
            {
              public:
                typedef struct GenerateTrajectory_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GenerateTrajectory_Response_TypeSupport TypeSupport;
                typedef GenerateTrajectory_Response_DataWriter DataWriter;
                typedef GenerateTrajectory_Response_DataReader DataReader;
                #endif

                dwb_msgs::msg::dds_::Trajectory2D_   traj_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GenerateTrajectory_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GenerateTrajectory_Response_Seq, GenerateTrajectory_Response_);

            NDDSUSERDllExport
            RTIBool GenerateTrajectory_Response__initialize(
                GenerateTrajectory_Response_* self);

            NDDSUSERDllExport
            RTIBool GenerateTrajectory_Response__initialize_ex(
                GenerateTrajectory_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GenerateTrajectory_Response__initialize_w_params(
                GenerateTrajectory_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GenerateTrajectory_Response__finalize(
                GenerateTrajectory_Response_* self);

            NDDSUSERDllExport
            void GenerateTrajectory_Response__finalize_ex(
                GenerateTrajectory_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GenerateTrajectory_Response__finalize_w_params(
                GenerateTrajectory_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GenerateTrajectory_Response__finalize_optional_members(
                GenerateTrajectory_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GenerateTrajectory_Response__copy(
                GenerateTrajectory_Response_* dst,
                const GenerateTrajectory_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace dwb_msgs  */

#endif /* GenerateTrajectory_ */

