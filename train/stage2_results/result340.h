//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_baseband_layer
 * rief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of Bluetooth_IPs generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_BASEBAND_LAYER
#define COFS_MODEL_BASEBAND_LAYER


#include "cfm_baseband_layer_global.h"
#include "cfm_baseband_layer_global_types.h"
#include <vector>
#include "cofluent.h"
#include "cfm_bb_receive.h"
#include "cfm_bb_send.h"
#include "dt/cft_defbaseband_in.h"
#include "dt/cft_defl2cap_in.h"
#include "dt/cft_defl2cap_out.h"

class cfm_baseband_layer : public cf_core::cf_function {
public:

typedef cf_core::cf_mq_initiator_socket<cfm_baseband_layer, cft_defbaseband> p_mq_BaseBand_In_t;
typedef cf_core::cf_mq_initiator_socket<cfm_baseband_layer, cft_defbaseband> p_mq_BaseBand_Out_t;
typedef cf_core::cf_mq_initiator_socket<cfm_baseband_layer, cft_defl2cap_in> p_mq_L2CAP_In_t;
typedef cf_core::cf_mq_initiator_socket<cfm_baseband_layer, cft_defl2cap_out> p_mq_L2CAP_Out_t;

/// constructor
cfm_baseband_layer(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_baseband_layer(void);

p_mq_BaseBand_In_t p_mq_BaseBand_In;
p_mq_BaseBand_Out_t p_mq_BaseBand_Out;
p_mq_L2CAP_In_t p_mq_L2CAP_In;
p_mq_L2CAP_Out_t p_mq_L2CAP_Out;

cfm_bb_receive *BB_Receive;
cfm_bb_send *BB_Send;

protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
};
#endif
//<#!@READ-ONLY-SECTION-END@!#>