

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CriticScore_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CriticScore__1436622577_h
#define CriticScore__1436622577_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace dwb_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *CriticScore_TYPENAME;

            struct CriticScore_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CriticScore_TypeSupport;
            class CriticScore_DataWriter;
            class CriticScore_DataReader;
            #endif

            class CriticScore_ 
            {
              public:
                typedef struct CriticScore_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CriticScore_TypeSupport TypeSupport;
                typedef CriticScore_DataWriter DataWriter;
                typedef CriticScore_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                DDS_Float   raw_score_ ;
                DDS_Float   scale_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CriticScore__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CriticScore_Seq, CriticScore_);

            NDDSUSERDllExport
            RTIBool CriticScore__initialize(
                CriticScore_* self);

            NDDSUSERDllExport
            RTIBool CriticScore__initialize_ex(
                CriticScore_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CriticScore__initialize_w_params(
                CriticScore_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CriticScore__finalize(
                CriticScore_* self);

            NDDSUSERDllExport
            void CriticScore__finalize_ex(
                CriticScore_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CriticScore__finalize_w_params(
                CriticScore_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CriticScore__finalize_optional_members(
                CriticScore_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CriticScore__copy(
                CriticScore_* dst,
                const CriticScore_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace dwb_msgs  */

#endif /* CriticScore_ */

