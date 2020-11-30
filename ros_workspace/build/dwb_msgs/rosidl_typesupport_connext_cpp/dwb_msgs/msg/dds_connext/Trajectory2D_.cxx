

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Trajectory2D_.idl using "rtiddsgen".
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

#include "Trajectory2D_.h"

#include <new>

namespace dwb_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Trajectory2D_TYPENAME = "dwb_msgs::msg::dds_::Trajectory2D_";

            DDS_TypeCode* Trajectory2D__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Trajectory2D__g_tc_time_offsets__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode Trajectory2D__g_tc_poses__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Trajectory2D__g_tc_members[3]=
                {

                    {
                        (char *)"velocity_",/* Member name */
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
                        (char *)"time_offsets_",/* Member name */
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
                        (char *)"poses_",/* Member name */
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

                static DDS_TypeCode Trajectory2D__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"dwb_msgs::msg::dds_::Trajectory2D_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Trajectory2D__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Trajectory2D_*/

                if (is_initialized) {
                    return &Trajectory2D__g_tc;
                }

                Trajectory2D__g_tc_time_offsets__sequence._data._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Duration__get_typecode();

                Trajectory2D__g_tc_poses__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose2D__get_typecode();

                Trajectory2D__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)nav_2d_msgs::msg::dds_::Twist2D__get_typecode();

                Trajectory2D__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& Trajectory2D__g_tc_time_offsets__sequence;
                Trajectory2D__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& Trajectory2D__g_tc_poses__sequence;

                is_initialized = RTI_TRUE;

                return &Trajectory2D__g_tc;
            }

            RTIBool Trajectory2D__initialize(
                Trajectory2D_* sample) {
                return dwb_msgs::msg::dds_::Trajectory2D__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Trajectory2D__initialize_ex(
                Trajectory2D_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return dwb_msgs::msg::dds_::Trajectory2D__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Trajectory2D__initialize_w_params(
                Trajectory2D_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!nav_2d_msgs::msg::dds_::Twist2D__initialize_w_params(&sample->velocity_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    builtin_interfaces::msg::dds_::Duration_Seq_initialize(&sample->time_offsets_ );
                    builtin_interfaces::msg::dds_::Duration_Seq_set_element_allocation_params(&sample->time_offsets_ ,allocParams);
                    builtin_interfaces::msg::dds_::Duration_Seq_set_absolute_maximum(&sample->time_offsets_ , RTI_INT32_MAX);
                    if (!builtin_interfaces::msg::dds_::Duration_Seq_set_maximum(&sample->time_offsets_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    builtin_interfaces::msg::dds_::Duration_Seq_set_length(&sample->time_offsets_, 0);
                }
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Pose2D_Seq_initialize(&sample->poses_ );
                    geometry_msgs::msg::dds_::Pose2D_Seq_set_element_allocation_params(&sample->poses_ ,allocParams);
                    geometry_msgs::msg::dds_::Pose2D_Seq_set_absolute_maximum(&sample->poses_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Pose2D_Seq_set_maximum(&sample->poses_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Pose2D_Seq_set_length(&sample->poses_, 0);
                }
                return RTI_TRUE;
            }

            void Trajectory2D__finalize(
                Trajectory2D_* sample)
            {

                dwb_msgs::msg::dds_::Trajectory2D__finalize_ex(sample,RTI_TRUE);
            }

            void Trajectory2D__finalize_ex(
                Trajectory2D_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                dwb_msgs::msg::dds_::Trajectory2D__finalize_w_params(
                    sample,&deallocParams);
            }

            void Trajectory2D__finalize_w_params(
                Trajectory2D_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                nav_2d_msgs::msg::dds_::Twist2D__finalize_w_params(&sample->velocity_,deallocParams);

                builtin_interfaces::msg::dds_::Duration_Seq_set_element_deallocation_params(
                    &sample->time_offsets_,deallocParams);
                builtin_interfaces::msg::dds_::Duration_Seq_finalize(&sample->time_offsets_);

                geometry_msgs::msg::dds_::Pose2D_Seq_set_element_deallocation_params(
                    &sample->poses_,deallocParams);
                geometry_msgs::msg::dds_::Pose2D_Seq_finalize(&sample->poses_);

            }

            void Trajectory2D__finalize_optional_members(
                Trajectory2D_* sample, RTIBool deletePointers)
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

                nav_2d_msgs::msg::dds_::Twist2D__finalize_optional_members(&sample->velocity_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = builtin_interfaces::msg::dds_::Duration_Seq_get_length(
                        &sample->time_offsets_);

                    for (i = 0; i < length; i++) {
                        builtin_interfaces::msg::dds_::Duration__finalize_optional_members(
                            builtin_interfaces::msg::dds_::Duration_Seq_get_reference(
                                &sample->time_offsets_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::Pose2D_Seq_get_length(
                        &sample->poses_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Pose2D__finalize_optional_members(
                            geometry_msgs::msg::dds_::Pose2D_Seq_get_reference(
                                &sample->poses_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool Trajectory2D__copy(
                Trajectory2D_* dst,
                const Trajectory2D_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!nav_2d_msgs::msg::dds_::Twist2D__copy(
                        &dst->velocity_,(const nav_2d_msgs::msg::dds_::Twist2D_*)&src->velocity_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Duration_Seq_copy(&dst->time_offsets_ ,
                    &src->time_offsets_ )) {
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Pose2D_Seq_copy(&dst->poses_ ,
                    &src->poses_ )) {
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
            * Configure and implement 'Trajectory2D_' sequence class.
            */
            #define T Trajectory2D_
            #define TSeq Trajectory2D_Seq

            #define T_initialize_w_params dwb_msgs::msg::dds_::Trajectory2D__initialize_w_params

            #define T_finalize_w_params   dwb_msgs::msg::dds_::Trajectory2D__finalize_w_params
            #define T_copy       dwb_msgs::msg::dds_::Trajectory2D__copy

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
    } /* namespace msg  */
} /* namespace dwb_msgs  */

