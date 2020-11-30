

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalPlanEvaluation_.idl using "rtiddsgen".
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

#include "LocalPlanEvaluation_.h"

#include <new>

namespace dwb_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *LocalPlanEvaluation_TYPENAME = "dwb_msgs::msg::dds_::LocalPlanEvaluation_";

            DDS_TypeCode* LocalPlanEvaluation__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode LocalPlanEvaluation__g_tc_twists__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member LocalPlanEvaluation__g_tc_members[4]=
                {

                    {
                        (char *)"header_",/* Member name */
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
                        (char *)"twists_",/* Member name */
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
                        (char *)"best_index_",/* Member name */
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
                        (char *)"worst_index_",/* Member name */
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

                static DDS_TypeCode LocalPlanEvaluation__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"dwb_msgs::msg::dds_::LocalPlanEvaluation_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        LocalPlanEvaluation__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LocalPlanEvaluation_*/

                if (is_initialized) {
                    return &LocalPlanEvaluation__g_tc;
                }

                LocalPlanEvaluation__g_tc_twists__sequence._data._typeCode = (RTICdrTypeCode *)dwb_msgs::msg::dds_::TrajectoryScore__get_typecode();

                LocalPlanEvaluation__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                LocalPlanEvaluation__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& LocalPlanEvaluation__g_tc_twists__sequence;
                LocalPlanEvaluation__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

                LocalPlanEvaluation__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ushort;

                is_initialized = RTI_TRUE;

                return &LocalPlanEvaluation__g_tc;
            }

            RTIBool LocalPlanEvaluation__initialize(
                LocalPlanEvaluation_* sample) {
                return dwb_msgs::msg::dds_::LocalPlanEvaluation__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LocalPlanEvaluation__initialize_ex(
                LocalPlanEvaluation_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return dwb_msgs::msg::dds_::LocalPlanEvaluation__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LocalPlanEvaluation__initialize_w_params(
                LocalPlanEvaluation_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    dwb_msgs::msg::dds_::TrajectoryScore_Seq_initialize(&sample->twists_ );
                    dwb_msgs::msg::dds_::TrajectoryScore_Seq_set_element_allocation_params(&sample->twists_ ,allocParams);
                    dwb_msgs::msg::dds_::TrajectoryScore_Seq_set_absolute_maximum(&sample->twists_ , RTI_INT32_MAX);
                    if (!dwb_msgs::msg::dds_::TrajectoryScore_Seq_set_maximum(&sample->twists_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    dwb_msgs::msg::dds_::TrajectoryScore_Seq_set_length(&sample->twists_, 0);
                }

                if (!RTICdrType_initUnsignedShort(&sample->best_index_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedShort(&sample->worst_index_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void LocalPlanEvaluation__finalize(
                LocalPlanEvaluation_* sample)
            {

                dwb_msgs::msg::dds_::LocalPlanEvaluation__finalize_ex(sample,RTI_TRUE);
            }

            void LocalPlanEvaluation__finalize_ex(
                LocalPlanEvaluation_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                dwb_msgs::msg::dds_::LocalPlanEvaluation__finalize_w_params(
                    sample,&deallocParams);
            }

            void LocalPlanEvaluation__finalize_w_params(
                LocalPlanEvaluation_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                dwb_msgs::msg::dds_::TrajectoryScore_Seq_set_element_deallocation_params(
                    &sample->twists_,deallocParams);
                dwb_msgs::msg::dds_::TrajectoryScore_Seq_finalize(&sample->twists_);

            }

            void LocalPlanEvaluation__finalize_optional_members(
                LocalPlanEvaluation_* sample, RTIBool deletePointers)
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

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = dwb_msgs::msg::dds_::TrajectoryScore_Seq_get_length(
                        &sample->twists_);

                    for (i = 0; i < length; i++) {
                        dwb_msgs::msg::dds_::TrajectoryScore__finalize_optional_members(
                            dwb_msgs::msg::dds_::TrajectoryScore_Seq_get_reference(
                                &sample->twists_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool LocalPlanEvaluation__copy(
                LocalPlanEvaluation_* dst,
                const LocalPlanEvaluation_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!dwb_msgs::msg::dds_::TrajectoryScore_Seq_copy(&dst->twists_ ,
                    &src->twists_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedShort (
                        &dst->best_index_, &src->best_index_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedShort (
                        &dst->worst_index_, &src->worst_index_)) { 
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
            * Configure and implement 'LocalPlanEvaluation_' sequence class.
            */
            #define T LocalPlanEvaluation_
            #define TSeq LocalPlanEvaluation_Seq

            #define T_initialize_w_params dwb_msgs::msg::dds_::LocalPlanEvaluation__initialize_w_params

            #define T_finalize_w_params   dwb_msgs::msg::dds_::LocalPlanEvaluation__finalize_w_params
            #define T_copy       dwb_msgs::msg::dds_::LocalPlanEvaluation__copy

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

