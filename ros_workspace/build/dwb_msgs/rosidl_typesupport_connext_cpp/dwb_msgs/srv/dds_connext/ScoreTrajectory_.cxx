

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ScoreTrajectory_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "ScoreTrajectory_.h"

#include <new>

namespace dwb_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ScoreTrajectory_Request_TYPENAME = "dwb_msgs::srv::dds_::ScoreTrajectory_Request_";

            DDS_TypeCode* ScoreTrajectory_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ScoreTrajectory_Request__g_tc_members[4]=
                {

                    {
                        (char *)"pose_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"velocity_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"global_plan_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"traj_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode ScoreTrajectory_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"dwb_msgs::srv::dds_::ScoreTrajectory_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        ScoreTrajectory_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ScoreTrajectory_Request_*/

                if (is_initialized) {
                    return &ScoreTrajectory_Request__g_tc;
                }

                ScoreTrajectory_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)nav_2d_msgs::msg::dds_::Pose2DStamped__get_typecode();

                ScoreTrajectory_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)nav_2d_msgs::msg::dds_::Twist2D__get_typecode();

                ScoreTrajectory_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)nav_2d_msgs::msg::dds_::Path2D__get_typecode();

                ScoreTrajectory_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)dwb_msgs::msg::dds_::Trajectory2D__get_typecode();

                is_initialized = RTI_TRUE;

                return &ScoreTrajectory_Request__g_tc;
            }

            RTIBool ScoreTrajectory_Request__initialize(
                ScoreTrajectory_Request_* sample) {
                return dwb_msgs::srv::dds_::ScoreTrajectory_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ScoreTrajectory_Request__initialize_ex(
                ScoreTrajectory_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return dwb_msgs::srv::dds_::ScoreTrajectory_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ScoreTrajectory_Request__initialize_w_params(
                ScoreTrajectory_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!nav_2d_msgs::msg::dds_::Pose2DStamped__initialize_w_params(&sample->pose_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!nav_2d_msgs::msg::dds_::Twist2D__initialize_w_params(&sample->velocity_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!nav_2d_msgs::msg::dds_::Path2D__initialize_w_params(&sample->global_plan_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!dwb_msgs::msg::dds_::Trajectory2D__initialize_w_params(&sample->traj_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void ScoreTrajectory_Request__finalize(
                ScoreTrajectory_Request_* sample)
            {

                dwb_msgs::srv::dds_::ScoreTrajectory_Request__finalize_ex(sample,RTI_TRUE);
            }

            void ScoreTrajectory_Request__finalize_ex(
                ScoreTrajectory_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                dwb_msgs::srv::dds_::ScoreTrajectory_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void ScoreTrajectory_Request__finalize_w_params(
                ScoreTrajectory_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                nav_2d_msgs::msg::dds_::Pose2DStamped__finalize_w_params(&sample->pose_,deallocParams);

                nav_2d_msgs::msg::dds_::Twist2D__finalize_w_params(&sample->velocity_,deallocParams);

                nav_2d_msgs::msg::dds_::Path2D__finalize_w_params(&sample->global_plan_,deallocParams);

                dwb_msgs::msg::dds_::Trajectory2D__finalize_w_params(&sample->traj_,deallocParams);

            }

            void ScoreTrajectory_Request__finalize_optional_members(
                ScoreTrajectory_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                nav_2d_msgs::msg::dds_::Pose2DStamped__finalize_optional_members(&sample->pose_, deallocParams->delete_pointers);
                nav_2d_msgs::msg::dds_::Twist2D__finalize_optional_members(&sample->velocity_, deallocParams->delete_pointers);
                nav_2d_msgs::msg::dds_::Path2D__finalize_optional_members(&sample->global_plan_, deallocParams->delete_pointers);
                dwb_msgs::msg::dds_::Trajectory2D__finalize_optional_members(&sample->traj_, deallocParams->delete_pointers);
            }

            RTIBool ScoreTrajectory_Request__copy(
                ScoreTrajectory_Request_* dst,
                const ScoreTrajectory_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!nav_2d_msgs::msg::dds_::Pose2DStamped__copy(
                        &dst->pose_,(const nav_2d_msgs::msg::dds_::Pose2DStamped_*)&src->pose_)) {
                        return RTI_FALSE;
                    } 
                    if (!nav_2d_msgs::msg::dds_::Twist2D__copy(
                        &dst->velocity_,(const nav_2d_msgs::msg::dds_::Twist2D_*)&src->velocity_)) {
                        return RTI_FALSE;
                    } 
                    if (!nav_2d_msgs::msg::dds_::Path2D__copy(
                        &dst->global_plan_,(const nav_2d_msgs::msg::dds_::Path2D_*)&src->global_plan_)) {
                        return RTI_FALSE;
                    } 
                    if (!dwb_msgs::msg::dds_::Trajectory2D__copy(
                        &dst->traj_,(const dwb_msgs::msg::dds_::Trajectory2D_*)&src->traj_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'ScoreTrajectory_Request_' sequence class.
            */
            #define T ScoreTrajectory_Request_
            #define TSeq ScoreTrajectory_Request_Seq

            #define T_initialize_w_params dwb_msgs::srv::dds_::ScoreTrajectory_Request__initialize_w_params

            #define T_finalize_w_params   dwb_msgs::srv::dds_::ScoreTrajectory_Request__finalize_w_params
            #define T_copy       dwb_msgs::srv::dds_::ScoreTrajectory_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace dwb_msgs  */
namespace dwb_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *ScoreTrajectory_Response_TYPENAME = "dwb_msgs::srv::dds_::ScoreTrajectory_Response_";

            DDS_TypeCode* ScoreTrajectory_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ScoreTrajectory_Response__g_tc_members[1]=
                {

                    {
                        (char *)"score_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode ScoreTrajectory_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"dwb_msgs::srv::dds_::ScoreTrajectory_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        ScoreTrajectory_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ScoreTrajectory_Response_*/

                if (is_initialized) {
                    return &ScoreTrajectory_Response__g_tc;
                }

                ScoreTrajectory_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)dwb_msgs::msg::dds_::TrajectoryScore__get_typecode();

                is_initialized = RTI_TRUE;

                return &ScoreTrajectory_Response__g_tc;
            }

            RTIBool ScoreTrajectory_Response__initialize(
                ScoreTrajectory_Response_* sample) {
                return dwb_msgs::srv::dds_::ScoreTrajectory_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ScoreTrajectory_Response__initialize_ex(
                ScoreTrajectory_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return dwb_msgs::srv::dds_::ScoreTrajectory_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ScoreTrajectory_Response__initialize_w_params(
                ScoreTrajectory_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!dwb_msgs::msg::dds_::TrajectoryScore__initialize_w_params(&sample->score_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void ScoreTrajectory_Response__finalize(
                ScoreTrajectory_Response_* sample)
            {

                dwb_msgs::srv::dds_::ScoreTrajectory_Response__finalize_ex(sample,RTI_TRUE);
            }

            void ScoreTrajectory_Response__finalize_ex(
                ScoreTrajectory_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                dwb_msgs::srv::dds_::ScoreTrajectory_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void ScoreTrajectory_Response__finalize_w_params(
                ScoreTrajectory_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                dwb_msgs::msg::dds_::TrajectoryScore__finalize_w_params(&sample->score_,deallocParams);

            }

            void ScoreTrajectory_Response__finalize_optional_members(
                ScoreTrajectory_Response_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                dwb_msgs::msg::dds_::TrajectoryScore__finalize_optional_members(&sample->score_, deallocParams->delete_pointers);
            }

            RTIBool ScoreTrajectory_Response__copy(
                ScoreTrajectory_Response_* dst,
                const ScoreTrajectory_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!dwb_msgs::msg::dds_::TrajectoryScore__copy(
                        &dst->score_,(const dwb_msgs::msg::dds_::TrajectoryScore_*)&src->score_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'ScoreTrajectory_Response_' sequence class.
            */
            #define T ScoreTrajectory_Response_
            #define TSeq ScoreTrajectory_Response_Seq

            #define T_initialize_w_params dwb_msgs::srv::dds_::ScoreTrajectory_Response__initialize_w_params

            #define T_finalize_w_params   dwb_msgs::srv::dds_::ScoreTrajectory_Response__finalize_w_params
            #define T_copy       dwb_msgs::srv::dds_::ScoreTrajectory_Response__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace dwb_msgs  */

