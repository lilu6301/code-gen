
/*!
 * \class cfm_c2
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of AutomatedPayloadTrackers generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_AUTOMATEDPAYLOADTRACKER_C2
#define COFS_MODEL_AUTOMATEDPAYLOADTRACKER_C2

#include "cfm_automatedpayloadtrackers_global.h"
#include "cfm_automatedpayloadtrackers_global_types.h"
#include "cofluent.h"



class cfm_c2: public cf_core::cf_function {
public:

	typedef cf_core::cf_mq_initiator_socket<cfm_c2, cf_core::cf_payload_int> p_mq_M2_2_t;

	cfm_c2(sc_core::sc_module_name name);

	virtual ~cfm_c2(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_M2_2_t p_mq_M2_2;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);




};

#endif // COFS_MODEL_AUTOMATEDPAYLOADTRACKER_C2

