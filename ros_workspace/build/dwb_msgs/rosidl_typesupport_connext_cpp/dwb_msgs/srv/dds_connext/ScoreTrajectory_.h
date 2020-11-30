

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ScoreTrajectory_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ScoreTrajectory__979197710_h
#define ScoreTrajectory__979197710_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "dwb_msgs/msg/dds_connext/Trajectory2D_.h"
#include "dwb_msgs/msg/dds_connext/TrajectoryScore_.h"
#include "nav_2d_msgs/msg/dds_connext/Path2D_.h"
#include "nav_2d_msgs/msg/dds_connext/Pose2DStamped_.h"
#include "nav_2d_msgs/msg/dds_connext/Twist2D_.h"
namespace dwb_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *ScoreTrajectory_Request_TYPENAME;

            struct ScoreTrajectory_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ScoreTrajectory_Request_TypeSupport;
            class ScoreTrajectory_Request_DataWriter;
            class ScoreTrajectory_Request_DataReader;
            #endif

            class ScoreTrajectory_Request_ 
            {
              public:
                typedef struct ScoreTrajectory_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ScoreTrajectory_Request_TypeSupport TypeSupport;
                typedef ScoreTrajectory_Request_DataWriter DataWriter;
                typedef ScoreTrajectory_Request_DataReader DataReader;
                #endif

                nav_2d_msgs::msg::dds_::Pose2DStamped_   pose_ ;
                nav_2d_msgs::msg::dds_::Twist2D_   velocity_ ;
                nav_2d_msgs::msg::dds_::Path2D_   global_plan_ ;
                dwb_msgs::msg::dds_::Trajectory2D_   traj_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ScoreTrajectory_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ScoreTrajectory_Request_Seq, ScoreTrajectory_Request_);

            NDDSUSERDllExport
            RTIBool ScoreTrajectory_Request__initialize(
                ScoreTrajectory_Request_* self);

            NDDSUSERDllExport
            RTIBool ScoreTrajectory_Request__initialize_ex(
                ScoreTrajectory_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ScoreTrajectory_Request__initialize_w_params(
                ScoreTrajectory_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ScoreTrajectory_Request__finalize(
                ScoreTrajectory_Request_* self);

            NDDSUSERDllExport
            void ScoreTrajectory_Request__finalize_ex(
                ScoreTrajectory_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ScoreTrajectory_Request__finalize_w_params(
                ScoreTrajectory_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ScoreTrajectory_Request__finalize_optional_members(
                ScoreTrajectory_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ScoreTrajectory_Request__copy(
                ScoreTrajectory_Request_* dst,
                const ScoreTrajectory_Request_* src);

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

            extern const char *ScoreTrajectory_Response_TYPENAME;

            struct ScoreTrajectory_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ScoreTrajectory_Response_TypeSupport;
            class ScoreTrajectory_Response_DataWriter;
            class ScoreTrajectory_Response_DataReader;
            #endif

            class ScoreTrajectory_Response_ 
            {
              public:
                typedef struct ScoreTrajectory_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ScoreTrajectory_Response_TypeSupport TypeSupport;
                typedef ScoreTrajectory_Response_DataWriter DataWriter;
                typedef ScoreTrajectory_Response_DataReader DataReader;
                #endif

                dwb_msgs::msg::dds_::TrajectoryScore_   score_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ScoreTrajectory_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ScoreTrajectory_Response_Seq, ScoreTrajectory_Response_);

            NDDSUSERDllExport
            RTIBool ScoreTrajectory_Response__initialize(
                ScoreTrajectory_Response_* self);

            NDDSUSERDllExport
            RTIBool ScoreTrajectory_Response__initialize_ex(
                ScoreTrajectory_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ScoreTrajectory_Response__initialize_w_params(
                ScoreTrajectory_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ScoreTrajectory_Response__finalize(
                ScoreTrajectory_Response_* self);

            NDDSUSERDllExport
            void ScoreTrajectory_Response__finalize_ex(
                ScoreTrajectory_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ScoreTrajectory_Response__finalize_w_params(
                ScoreTrajectory_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ScoreTrajectory_Response__finalize_optional_members(
                ScoreTrajectory_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ScoreTrajectory_Response__copy(
                ScoreTrajectory_Response_* dst,
                const ScoreTrajectory_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace dwb_msgs  */

#endif /* ScoreTrajectory_ */

