
/*!
 * \class cfm_rfc_out
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of Bluetooth_IPs generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_BLUETOOTH_IPS_RFC_OUT
#define COFS_MODEL_BLUETOOTH_IPS_RFC_OUT

#include "cfm_bluetooth_ips_global.h"
#include "cfm_bluetooth_ips_global_types.h"
#include "cofluent.h"
#include "dp/cfm_rfc_out_dp_if.h"
#include "dt/cft_defrfcomm_out.h"



class cfm_rfc_out: public cf_core::cf_function, public cfm_rfc_out_dp_if {
public:

	typedef cf_core::cf_mq_initiator_socket<cfm_rfc_out, cft_defrfcomm_out> p_mq_RFC_Out1_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_rfc_out, cft_defrfcomm_out> p_mq_RFC_Out2_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_rfc_out, cft_defrfcomm_out> p_mq_RFCOMM_Out_t;

	cfm_rfc_out(sc_core::sc_module_name name);

	virtual ~cfm_rfc_out(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_RFC_Out1_t p_mq_RFC_Out1;
	p_mq_RFC_Out2_t p_mq_RFC_Out2;
	p_mq_RFCOMM_Out_t p_mq_RFCOMM_Out;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);


	int index;

};

#endif // COFS_MODEL_BLUETOOTH_IPS_RFC_OUT

