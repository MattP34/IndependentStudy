

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GenerateTwists_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GenerateTwists__1714064870_h
#define GenerateTwists__1714064870_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "nav_2d_msgs/msg/dds_connext/Twist2D_.h"
namespace dwb_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GenerateTwists_Request_TYPENAME;

            struct GenerateTwists_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GenerateTwists_Request_TypeSupport;
            class GenerateTwists_Request_DataWriter;
            class GenerateTwists_Request_DataReader;
            #endif

            class GenerateTwists_Request_ 
            {
              public:
                typedef struct GenerateTwists_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GenerateTwists_Request_TypeSupport TypeSupport;
                typedef GenerateTwists_Request_DataWriter DataWriter;
                typedef GenerateTwists_Request_DataReader DataReader;
                #endif

                nav_2d_msgs::msg::dds_::Twist2D_   current_vel_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GenerateTwists_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GenerateTwists_Request_Seq, GenerateTwists_Request_);

            NDDSUSERDllExport
            RTIBool GenerateTwists_Request__initialize(
                GenerateTwists_Request_* self);

            NDDSUSERDllExport
            RTIBool GenerateTwists_Request__initialize_ex(
                GenerateTwists_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GenerateTwists_Request__initialize_w_params(
                GenerateTwists_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GenerateTwists_Request__finalize(
                GenerateTwists_Request_* self);

            NDDSUSERDllExport
            void GenerateTwists_Request__finalize_ex(
                GenerateTwists_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GenerateTwists_Request__finalize_w_params(
                GenerateTwists_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GenerateTwists_Request__finalize_optional_members(
                GenerateTwists_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GenerateTwists_Request__copy(
                GenerateTwists_Request_* dst,
                const GenerateTwists_Request_* src);

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

            extern const char *GenerateTwists_Response_TYPENAME;

            struct GenerateTwists_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GenerateTwists_Response_TypeSupport;
            class GenerateTwists_Response_DataWriter;
            class GenerateTwists_Response_DataReader;
            #endif

            class GenerateTwists_Response_ 
            {
              public:
                typedef struct GenerateTwists_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GenerateTwists_Response_TypeSupport TypeSupport;
                typedef GenerateTwists_Response_DataWriter DataWriter;
                typedef GenerateTwists_Response_DataReader DataReader;
                #endif

                nav_2d_msgs::msg::dds_::Twist2D_Seq  twists_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GenerateTwists_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GenerateTwists_Response_Seq, GenerateTwists_Response_);

            NDDSUSERDllExport
            RTIBool GenerateTwists_Response__initialize(
                GenerateTwists_Response_* self);

            NDDSUSERDllExport
            RTIBool GenerateTwists_Response__initialize_ex(
                GenerateTwists_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GenerateTwists_Response__initialize_w_params(
                GenerateTwists_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GenerateTwists_Response__finalize(
                GenerateTwists_Response_* self);

            NDDSUSERDllExport
            void GenerateTwists_Response__finalize_ex(
                GenerateTwists_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GenerateTwists_Response__finalize_w_params(
                GenerateTwists_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GenerateTwists_Response__finalize_optional_members(
                GenerateTwists_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GenerateTwists_Response__copy(
                GenerateTwists_Response_* dst,
                const GenerateTwists_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace dwb_msgs  */

#endif /* GenerateTwists_ */

