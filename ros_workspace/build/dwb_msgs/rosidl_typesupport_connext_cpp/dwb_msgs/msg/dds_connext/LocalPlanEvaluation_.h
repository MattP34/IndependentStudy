

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LocalPlanEvaluation_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LocalPlanEvaluation__977663518_h
#define LocalPlanEvaluation__977663518_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "dwb_msgs/msg/dds_connext/TrajectoryScore_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace dwb_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *LocalPlanEvaluation_TYPENAME;

            struct LocalPlanEvaluation_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LocalPlanEvaluation_TypeSupport;
            class LocalPlanEvaluation_DataWriter;
            class LocalPlanEvaluation_DataReader;
            #endif

            class LocalPlanEvaluation_ 
            {
              public:
                typedef struct LocalPlanEvaluation_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LocalPlanEvaluation_TypeSupport TypeSupport;
                typedef LocalPlanEvaluation_DataWriter DataWriter;
                typedef LocalPlanEvaluation_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                dwb_msgs::msg::dds_::TrajectoryScore_Seq  twists_ ;
                DDS_UnsignedShort   best_index_ ;
                DDS_UnsignedShort   worst_index_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LocalPlanEvaluation__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LocalPlanEvaluation_Seq, LocalPlanEvaluation_);

            NDDSUSERDllExport
            RTIBool LocalPlanEvaluation__initialize(
                LocalPlanEvaluation_* self);

            NDDSUSERDllExport
            RTIBool LocalPlanEvaluation__initialize_ex(
                LocalPlanEvaluation_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LocalPlanEvaluation__initialize_w_params(
                LocalPlanEvaluation_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LocalPlanEvaluation__finalize(
                LocalPlanEvaluation_* self);

            NDDSUSERDllExport
            void LocalPlanEvaluation__finalize_ex(
                LocalPlanEvaluation_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LocalPlanEvaluation__finalize_w_params(
                LocalPlanEvaluation_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LocalPlanEvaluation__finalize_optional_members(
                LocalPlanEvaluation_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LocalPlanEvaluation__copy(
                LocalPlanEvaluation_* dst,
                const LocalPlanEvaluation_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace dwb_msgs  */

#endif /* LocalPlanEvaluation_ */

