
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TrajectoryScore_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "TrajectoryScore_Support.h"
#include "TrajectoryScore_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace dwb_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'TrajectoryScore_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   TrajectoryScore_TYPENAME

            /* Defines */
            #define TDataWriter TrajectoryScore_DataWriter
            #define TData       dwb_msgs::msg::dds_::TrajectoryScore_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   TrajectoryScore_TYPENAME

            /* Defines */
            #define TDataReader TrajectoryScore_DataReader
            #define TDataSeq    TrajectoryScore_Seq
            #define TData       dwb_msgs::msg::dds_::TrajectoryScore_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    TrajectoryScore_TYPENAME
            #define TPlugin_new  dwb_msgs::msg::dds_::TrajectoryScore_Plugin_new
            #define TPlugin_delete  dwb_msgs::msg::dds_::TrajectoryScore_Plugin_delete

            /* Defines */
            #define TTypeSupport TrajectoryScore_TypeSupport
            #define TData        dwb_msgs::msg::dds_::TrajectoryScore_
            #define TDataReader  TrajectoryScore_DataReader
            #define TDataWriter  TrajectoryScore_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace dwb_msgs  */

