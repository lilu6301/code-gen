//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_baseband_layer
 * rief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of OPP_UseCase generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_WDATADMUX
#define COFS_MODEL_WDATADMUX


#include "cfm_wdatadmux_global.h"
#include "cfm_wdatadmux_global_types.h"
#include <vector>
#include "cofluent.h"
#include "dt/cft_defwdatachn_in.h"

class cfm_wdatadmux : public cf_core::cf_routingfunction {
public:


/// constructor
cfm_wdatadmux(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_wdatadmux(void);


protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
};
#endif
//<#!@READ-ONLY-SECTION-END@!#>