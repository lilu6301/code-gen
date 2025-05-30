//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_baseband_layer
 * rief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of OPP_UseCase generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_L2CAP_SEND
#define COFS_MODEL_L2CAP_SEND


#include "cfm_l2cap_send_global.h"
#include "cfm_l2cap_send_global_types.h"
#include <vector>
#include "cofluent.h"
#include "dt/cft_defl2cap_out_in.h"
#include "dt/cft_defrfcomm_out_in.h"

class cfm_l2cap_send : public cf_core::cf_function {
public:


/// constructor
cfm_l2cap_send(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_l2cap_send(void);


protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
};
#endif
//<#!@READ-ONLY-SECTION-END@!#>