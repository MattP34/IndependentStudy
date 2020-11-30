

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GenerateTwists_.idl using "rtiddsgen".
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

#include "GenerateTwists_.h"

#include <new>

namespace dwb_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GenerateTwists_Request_TYPENAME = "dwb_msgs::srv::dds_::GenerateTwists_Request_";

            DDS_TypeCode* GenerateTwists_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GenerateTwists_Request__g_tc_members[1]=
                {

                    {
                        (char *)"current_vel_",/* Member name */
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

                static DDS_TypeCode GenerateTwists_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"dwb_msgs::srv::dds_::GenerateTwists_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GenerateTwists_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GenerateTwists_Request_*/

                if (is_initialized) {
                    return &GenerateTwists_Request__g_tc;
                }

                GenerateTwists_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)nav_2d_msgs::msg::dds_::Twist2D__get_typecode();

                is_initialized = RTI_TRUE;

                return &GenerateTwists_Request__g_tc;
            }

            RTIBool GenerateTwists_Request__initialize(
                GenerateTwists_Request_* sample) {
                return dwb_msgs::srv::dds_::GenerateTwists_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GenerateTwists_Request__initialize_ex(
                GenerateTwists_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return dwb_msgs::srv::dds_::GenerateTwists_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GenerateTwists_Request__initialize_w_params(
                GenerateTwists_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!nav_2d_msgs::msg::dds_::Twist2D__initialize_w_params(&sample->current_vel_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void GenerateTwists_Request__finalize(
                GenerateTwists_Request_* sample)
            {

                dwb_msgs::srv::dds_::GenerateTwists_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GenerateTwists_Request__finalize_ex(
                GenerateTwists_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                dwb_msgs::srv::dds_::GenerateTwists_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GenerateTwists_Request__finalize_w_params(
                GenerateTwists_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                nav_2d_msgs::msg::dds_::Twist2D__finalize_w_params(&sample->current_vel_,deallocParams);

            }

            void GenerateTwists_Request__finalize_optional_members(
                GenerateTwists_Request_* sample, RTIBool deletePointers)
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

                nav_2d_msgs::msg::dds_::Twist2D__finalize_optional_members(&sample->current_vel_, deallocParams->delete_pointers);
            }

            RTIBool GenerateTwists_Request__copy(
                GenerateTwists_Request_* dst,
                const GenerateTwists_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!nav_2d_msgs::msg::dds_::Twist2D__copy(
                        &dst->current_vel_,(const nav_2d_msgs::msg::dds_::Twist2D_*)&src->current_vel_)) {
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
            * Configure and implement 'GenerateTwists_Request_' sequence class.
            */
            #define T GenerateTwists_Request_
            #define TSeq GenerateTwists_Request_Seq

            #define T_initialize_w_params dwb_msgs::srv::dds_::GenerateTwists_Request__initialize_w_params

            #define T_finalize_w_params   dwb_msgs::srv::dds_::GenerateTwists_Request__finalize_w_params
            #define T_copy       dwb_msgs::srv::dds_::GenerateTwists_Request__copy

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
            const char *GenerateTwists_Response_TYPENAME = "dwb_msgs::srv::dds_::GenerateTwists_Response_";

            DDS_TypeCode* GenerateTwists_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GenerateTwists_Response__g_tc_twists__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member GenerateTwists_Response__g_tc_members[1]=
                {

                    {
                        (char *)"twists_",/* Member name */
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

                static DDS_TypeCode GenerateTwists_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"dwb_msgs::srv::dds_::GenerateTwists_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GenerateTwists_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GenerateTwists_Response_*/

                if (is_initialized) {
                    return &GenerateTwists_Response__g_tc;
                }

                GenerateTwists_Response__g_tc_twists__sequence._data._typeCode = (RTICdrTypeCode *)nav_2d_msgs::msg::dds_::Twist2D__get_typecode();

                GenerateTwists_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& GenerateTwists_Response__g_tc_twists__sequence;

                is_initialized = RTI_TRUE;

                return &GenerateTwists_Response__g_tc;
            }

            RTIBool GenerateTwists_Response__initialize(
                GenerateTwists_Response_* sample) {
                return dwb_msgs::srv::dds_::GenerateTwists_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GenerateTwists_Response__initialize_ex(
                GenerateTwists_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return dwb_msgs::srv::dds_::GenerateTwists_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GenerateTwists_Response__initialize_w_params(
                GenerateTwists_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    nav_2d_msgs::msg::dds_::Twist2D_Seq_initialize(&sample->twists_ );
                    nav_2d_msgs::msg::dds_::Twist2D_Seq_set_element_allocation_params(&sample->twists_ ,allocParams);
                    nav_2d_msgs::msg::dds_::Twist2D_Seq_set_absolute_maximum(&sample->twists_ , RTI_INT32_MAX);
                    if (!nav_2d_msgs::msg::dds_::Twist2D_Seq_set_maximum(&sample->twists_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    nav_2d_msgs::msg::dds_::Twist2D_Seq_set_length(&sample->twists_, 0);
                }
                return RTI_TRUE;
            }

            void GenerateTwists_Response__finalize(
                GenerateTwists_Response_* sample)
            {

                dwb_msgs::srv::dds_::GenerateTwists_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GenerateTwists_Response__finalize_ex(
                GenerateTwists_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                dwb_msgs::srv::dds_::GenerateTwists_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GenerateTwists_Response__finalize_w_params(
                GenerateTwists_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                nav_2d_msgs::msg::dds_::Twist2D_Seq_set_element_deallocation_params(
                    &sample->twists_,deallocParams);
                nav_2d_msgs::msg::dds_::Twist2D_Seq_finalize(&sample->twists_);

            }

            void GenerateTwists_Response__finalize_optional_members(
                GenerateTwists_Response_* sample, RTIBool deletePointers)
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

                {
                    DDS_UnsignedLong i, length;
                    length = nav_2d_msgs::msg::dds_::Twist2D_Seq_get_length(
                        &sample->twists_);

                    for (i = 0; i < length; i++) {
                        nav_2d_msgs::msg::dds_::Twist2D__finalize_optional_members(
                            nav_2d_msgs::msg::dds_::Twist2D_Seq_get_reference(
                                &sample->twists_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool GenerateTwists_Response__copy(
                GenerateTwists_Response_* dst,
                const GenerateTwists_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!nav_2d_msgs::msg::dds_::Twist2D_Seq_copy(&dst->twists_ ,
                    &src->twists_ )) {
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
            * Configure and implement 'GenerateTwists_Response_' sequence class.
            */
            #define T GenerateTwists_Response_
            #define TSeq GenerateTwists_Response_Seq

            #define T_initialize_w_params dwb_msgs::srv::dds_::GenerateTwists_Response__initialize_w_params

            #define T_finalize_w_params   dwb_msgs::srv::dds_::GenerateTwists_Response__finalize_w_params
            #define T_copy       dwb_msgs::srv::dds_::GenerateTwists_Response__copy

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

