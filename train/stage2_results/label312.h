//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_baseband_layer
 * rief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of OPP_UseCase generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_HWDEVICEMODEL
#define COFS_MODEL_HWDEVICEMODEL


#include "cfm_hwdevicemodel_global.h"
#include "cfm_hwdevicemodel_global_types.h"
#include <vector>
#include "cofluent.h"
#include "cfm_hwdevicetest.h"
#include "dt/cft_defframe_in.h"

class cfm_hwdevicemodel : public cf_core::cf_application {
public:
typedef cf_core::cf_shared_variable<cft_DefFrame> sv_inputStream_t;
typedef cf_core::cf_shared_variable<cft_DefFrame> sv_outputStream_t;

/// constructor
cfm_hwdevicemodel(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_hwdevicemodel(void);

cfm_hwdevicetest *hwDeviceTest;

protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
sv_inputStream_t sv_inputStream;
sv_outputStream_t sv_outputStream;
};
#endif
//<#!@READ-ONLY-SECTION-END@!#>