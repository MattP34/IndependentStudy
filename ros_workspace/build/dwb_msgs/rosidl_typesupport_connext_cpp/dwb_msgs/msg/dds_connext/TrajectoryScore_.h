

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrajectoryScore_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TrajectoryScore__1667594325_h
#define TrajectoryScore__1667594325_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "dwb_msgs/msg/dds_connext/CriticScore_.h"
#include "dwb_msgs/msg/dds_connext/Trajectory2D_.h"
namespace dwb_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *TrajectoryScore_TYPENAME;

            struct TrajectoryScore_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TrajectoryScore_TypeSupport;
            class TrajectoryScore_DataWriter;
            class TrajectoryScore_DataReader;
            #endif

            class TrajectoryScore_ 
            {
              public:
                typedef struct TrajectoryScore_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TrajectoryScore_TypeSupport TypeSupport;
                typedef TrajectoryScore_DataWriter DataWriter;
                typedef TrajectoryScore_DataReader DataReader;
                #endif

                dwb_msgs::msg::dds_::Trajectory2D_   traj_ ;
                dwb_msgs::msg::dds_::CriticScore_Seq  scores_ ;
                DDS_Float   total_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TrajectoryScore__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TrajectoryScore_Seq, TrajectoryScore_);

            NDDSUSERDllExport
            RTIBool TrajectoryScore__initialize(
                TrajectoryScore_* self);

            NDDSUSERDllExport
            RTIBool TrajectoryScore__initialize_ex(
                TrajectoryScore_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TrajectoryScore__initialize_w_params(
                TrajectoryScore_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TrajectoryScore__finalize(
                TrajectoryScore_* self);

            NDDSUSERDllExport
            void TrajectoryScore__finalize_ex(
                TrajectoryScore_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TrajectoryScore__finalize_w_params(
                TrajectoryScore_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TrajectoryScore__finalize_optional_members(
                TrajectoryScore_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TrajectoryScore__copy(
                TrajectoryScore_* dst,
                const TrajectoryScore_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace dwb_msgs  */

#endif /* TrajectoryScore_ */

