

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GenerateTrajectory_.idl using "rtiddsgen".
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

#include "GenerateTrajectory_.h"

#include <new>

namespace dwb_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GenerateTrajectory_Request_TYPENAME = "dwb_msgs::srv::dds_::GenerateTrajectory_Request_";

            DDS_TypeCode* GenerateTrajectory_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GenerateTrajectory_Request__g_tc_members[3]=
                {

                    {
                        (char *)"start_pose_",/* Member name */
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
                        (char *)"start_vel_",/* Member name */
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
                        (char *)"cmd_vel_",/* Member name */
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
                    }
                };

                static DDS_TypeCode GenerateTrajectory_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"dwb_msgs::srv::dds_::GenerateTrajectory_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        GenerateTrajectory_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GenerateTrajectory_Request_*/

                if (is_initialized) {
                    return &GenerateTrajectory_Request__g_tc;
                }

                GenerateTrajectory_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose2D__get_typecode();

                GenerateTrajectory_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)nav_2d_msgs::msg::dds_::Twist2D__get_typecode();

                GenerateTrajectory_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)nav_2d_msgs::msg::dds_::Twist2D__get_typecode();

                is_initialized = RTI_TRUE;

                return &GenerateTrajectory_Request__g_tc;
            }

            RTIBool GenerateTrajectory_Request__initialize(
                GenerateTrajectory_Request_* sample) {
                return dwb_msgs::srv::dds_::GenerateTrajectory_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GenerateTrajectory_Request__initialize_ex(
                GenerateTrajectory_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return dwb_msgs::srv::dds_::GenerateTrajectory_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GenerateTrajectory_Request__initialize_w_params(
                GenerateTrajectory_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Pose2D__initialize_w_params(&sample->start_pose_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!nav_2d_msgs::msg::dds_::Twist2D__initialize_w_params(&sample->start_vel_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!nav_2d_msgs::msg::dds_::Twist2D__initialize_w_params(&sample->cmd_vel_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void GenerateTrajectory_Request__finalize(
                GenerateTrajectory_Request_* sample)
            {

                dwb_msgs::srv::dds_::GenerateTrajectory_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GenerateTrajectory_Request__finalize_ex(
                GenerateTrajectory_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                dwb_msgs::srv::dds_::GenerateTrajectory_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GenerateTrajectory_Request__finalize_w_params(
                GenerateTrajectory_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::Pose2D__finalize_w_params(&sample->start_pose_,deallocParams);

                nav_2d_msgs::msg::dds_::Twist2D__finalize_w_params(&sample->start_vel_,deallocParams);

                nav_2d_msgs::msg::dds_::Twist2D__finalize_w_params(&sample->cmd_vel_,deallocParams);

            }

            void GenerateTrajectory_Request__finalize_optional_members(
                GenerateTrajectory_Request_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Pose2D__finalize_optional_members(&sample->start_pose_, deallocParams->delete_pointers);
                nav_2d_msgs::msg::dds_::Twist2D__finalize_optional_members(&sample->start_vel_, deallocParams->delete_pointers);
                nav_2d_msgs::msg::dds_::Twist2D__finalize_optional_members(&sample->cmd_vel_, deallocParams->delete_pointers);
            }

            RTIBool GenerateTrajectory_Request__copy(
                GenerateTrajectory_Request_* dst,
                const GenerateTrajectory_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geometry_msgs::msg::dds_::Pose2D__copy(
                        &dst->start_pose_,(const geometry_msgs::msg::dds_::Pose2D_*)&src->start_pose_)) {
                        return RTI_FALSE;
                    } 
                    if (!nav_2d_msgs::msg::dds_::Twist2D__copy(
                        &dst->start_vel_,(const nav_2d_msgs::msg::dds_::Twist2D_*)&src->start_vel_)) {
                        return RTI_FALSE;
                    } 
                    if (!nav_2d_msgs::msg::dds_::Twist2D__copy(
                        &dst->cmd_vel_,(const nav_2d_msgs::msg::dds_::Twist2D_*)&src->cmd_vel_)) {
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
            * Configure and implement 'GenerateTrajectory_Request_' sequence class.
            */
            #define T GenerateTrajectory_Request_
            #define TSeq GenerateTrajectory_Request_Seq

            #define T_initialize_w_params dwb_msgs::srv::dds_::GenerateTrajectory_Request__initialize_w_params

            #define T_finalize_w_params   dwb_msgs::srv::dds_::GenerateTrajectory_Request__finalize_w_params
            #define T_copy       dwb_msgs::srv::dds_::GenerateTrajectory_Request__copy

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
            const char *GenerateTrajectory_Response_TYPENAME = "dwb_msgs::srv::dds_::GenerateTrajectory_Response_";

            DDS_TypeCode* GenerateTrajectory_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GenerateTrajectory_Response__g_tc_members[1]=
                {

                    {
                        (char *)"traj_",/* Member name */
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

                static DDS_TypeCode GenerateTrajectory_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"dwb_msgs::srv::dds_::GenerateTrajectory_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GenerateTrajectory_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GenerateTrajectory_Response_*/

                if (is_initialized) {
                    return &GenerateTrajectory_Response__g_tc;
                }

                GenerateTrajectory_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)dwb_msgs::msg::dds_::Trajectory2D__get_typecode();

                is_initialized = RTI_TRUE;

                return &GenerateTrajectory_Response__g_tc;
            }

            RTIBool GenerateTrajectory_Response__initialize(
                GenerateTrajectory_Response_* sample) {
                return dwb_msgs::srv::dds_::GenerateTrajectory_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GenerateTrajectory_Response__initialize_ex(
                GenerateTrajectory_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return dwb_msgs::srv::dds_::GenerateTrajectory_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GenerateTrajectory_Response__initialize_w_params(
                GenerateTrajectory_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!dwb_msgs::msg::dds_::Trajectory2D__initialize_w_params(&sample->traj_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void GenerateTrajectory_Response__finalize(
                GenerateTrajectory_Response_* sample)
            {

                dwb_msgs::srv::dds_::GenerateTrajectory_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GenerateTrajectory_Response__finalize_ex(
                GenerateTrajectory_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                dwb_msgs::srv::dds_::GenerateTrajectory_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GenerateTrajectory_Response__finalize_w_params(
                GenerateTrajectory_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                dwb_msgs::msg::dds_::Trajectory2D__finalize_w_params(&sample->traj_,deallocParams);

            }

            void GenerateTrajectory_Response__finalize_optional_members(
                GenerateTrajectory_Response_* sample, RTIBool deletePointers)
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

                dwb_msgs::msg::dds_::Trajectory2D__finalize_optional_members(&sample->traj_, deallocParams->delete_pointers);
            }

            RTIBool GenerateTrajectory_Response__copy(
                GenerateTrajectory_Response_* dst,
                const GenerateTrajectory_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
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
            * Configure and implement 'GenerateTrajectory_Response_' sequence class.
            */
            #define T GenerateTrajectory_Response_
            #define TSeq GenerateTrajectory_Response_Seq

            #define T_initialize_w_params dwb_msgs::srv::dds_::GenerateTrajectory_Response__initialize_w_params

            #define T_finalize_w_params   dwb_msgs::srv::dds_::GenerateTrajectory_Response__finalize_w_params
            #define T_copy       dwb_msgs::srv::dds_::GenerateTrajectory_Response__copy

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

