
/*!
 * \class cfm_receiver
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of ApplicationModelRefinement generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_APPLICATIONMODELREFINMENT_RECEIVER
#define COFS_MODEL_APPLICATIONMODELREFINMENT_RECEIVER

#include "cfm_applicationmodelrefinement_global.h"
#include "cfm_applicationmodelrefinement_global_types.h"
#include "cofluent.h"
#include "dt/cft_defack.h"
#include "dt/cft_defmsg.h"



class cfm_receiver: public cf_core::cf_function {
public:

	typedef cf_core::cf_mq_initiator_socket<cfm_receiver, cft_defack> p_mq_Ack_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_receiver, cft_defmsg> p_mq_Msg_t;

	cfm_receiver(sc_core::sc_module_name name);

	virtual ~cfm_receiver(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_Ack_t p_mq_Ack;
	p_mq_Msg_t p_mq_Msg;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);




};

#endif // COFS_MODEL_APPLICATIONMODELREFINMENT_RECEIVER

