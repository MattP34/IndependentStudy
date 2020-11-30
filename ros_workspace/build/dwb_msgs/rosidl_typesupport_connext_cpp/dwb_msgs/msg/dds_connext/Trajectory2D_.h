

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Trajectory2D_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Trajectory2D__507385092_h
#define Trajectory2D__507385092_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "geometry_msgs/msg/dds_connext/Pose2D_.h"
#include "nav_2d_msgs/msg/dds_connext/Twist2D_.h"
namespace dwb_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Trajectory2D_TYPENAME;

            struct Trajectory2D_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Trajectory2D_TypeSupport;
            class Trajectory2D_DataWriter;
            class Trajectory2D_DataReader;
            #endif

            class Trajectory2D_ 
            {
              public:
                typedef struct Trajectory2D_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Trajectory2D_TypeSupport TypeSupport;
                typedef Trajectory2D_DataWriter DataWriter;
                typedef Trajectory2D_DataReader DataReader;
                #endif

                nav_2d_msgs::msg::dds_::Twist2D_   velocity_ ;
                builtin_interfaces::msg::dds_::Duration_Seq  time_offsets_ ;
                geometry_msgs::msg::dds_::Pose2D_Seq  poses_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Trajectory2D__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Trajectory2D_Seq, Trajectory2D_);

            NDDSUSERDllExport
            RTIBool Trajectory2D__initialize(
                Trajectory2D_* self);

            NDDSUSERDllExport
            RTIBool Trajectory2D__initialize_ex(
                Trajectory2D_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Trajectory2D__initialize_w_params(
                Trajectory2D_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Trajectory2D__finalize(
                Trajectory2D_* self);

            NDDSUSERDllExport
            void Trajectory2D__finalize_ex(
                Trajectory2D_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Trajectory2D__finalize_w_params(
                Trajectory2D_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Trajectory2D__finalize_optional_members(
                Trajectory2D_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Trajectory2D__copy(
                Trajectory2D_* dst,
                const Trajectory2D_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace dwb_msgs  */

#endif /* Trajectory2D_ */

