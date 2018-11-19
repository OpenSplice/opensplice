/*
 *                         Vortex OpenSplice
 *
 *   This software and documentation are Copyright 2006 to TO_YEAR ADLINK
 *   Technology Limited, its affiliated companies and licensors. All rights
 *   reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
#ifndef CPP_DDS_OPENSPLICE_FOOCDRDATAWRITER_H
#define CPP_DDS_OPENSPLICE_FOOCDRDATAWRITER_H

#include "FooDataWriter_impl.h"
#include "cpp_dcps_if.h"

namespace DDS {

    class CDRSample;

    namespace OpenSplice {

        class OS_API FooCdrDataWriter
        {
        public:
            FooCdrDataWriter(DDS::DataWriter *wr);
            ~FooCdrDataWriter();

            ::DDS::ReturnCode_t
            write_cdr(
                const DDS::CDRSample & sample,
                ::DDS::InstanceHandle_t handle);

        private:
            DDS::OpenSplice::FooDataWriter_impl *writer;
        }; /* class FooCdrDataWriter */
    } /* namespace OpenSplice */
} /* namespace DDS */

#undef OS_API
#endif /* CPP_DDS_OPENSPLICE_FOOCDRDATAWRITER_H */
