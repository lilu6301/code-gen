
/*!
 * \class cfm_umts
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_UMTS
#define COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_UMTS

#include "cfm_softwaredefinedradioapp_global.h"
#include "cfm_softwaredefinedradioapp_global_types.h"
#include "cofluent.h"
#include "dp/cfm_umts_dp_if.h"
#include "cfm_umts_receive.h"
#include "cfm_umts_send.h"
#include "dt/cft_defcall.h"



class cfm_umts: public cf_core::cf_function_container, public cfm_umts_dp_if {
public:

	typedef cf_core::cf_mq_initiator_socket<cfm_umts, cft_defcall> p_mq_UMTSToIP_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_umts, cft_defcall> p_mq_NetToUMTS_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_umts, cft_defcall> p_mq_UMTSToNet_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_umts, cft_defcall> p_mq_IPToUMTS_t;

	cfm_umts(sc_core::sc_module_name name);

	virtual ~cfm_umts(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_UMTSToIP_t p_mq_UMTSToIP;
	p_mq_NetToUMTS_t p_mq_NetToUMTS;
	p_mq_UMTSToNet_t p_mq_UMTSToNet;
	p_mq_IPToUMTS_t p_mq_IPToUMTS;

public:
	cfm_umts_receive* Receive;
	cfm_umts_send* Send;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);




};

#endif // COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_UMTS

