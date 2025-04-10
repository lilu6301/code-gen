/*!
 * \class cfm_cof_initiator
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of CoFluentAPIFromExternalIP generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_COFLUENTAPIFROMEXTERNALIP_COF_INITIATOR
#define COFS_MODEL_COFLUENTAPIFROMEXTERNALIP_COF_INITIATOR

#include "cfm_cofluentapifromexternalip_global.h"
#include "cfm_cofluentapifromexternalip_global_types.h"
#include "cofluent.h"
#include "dt/cft_defmsgq.h"



class cfm_cof_initiator: public cf_core::cf_function {
public:

	typedef cf_core::cf_mq_initiator_socket<cfm_cof_initiator, cft_defmsgq> p_mq_MsgFwQ_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_cof_initiator, cft_defmsgq> p_mq_MsgBwQ_t;

	cfm_cof_initiator(sc_core::sc_module_name name);

	virtual ~cfm_cof_initiator(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_MsgFwQ_t p_mq_MsgFwQ;
	p_mq_MsgBwQ_t p_mq_MsgBwQ;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);




};

#endif // COFS_MODEL_COFLUENTAPIFROMEXTERNALIP_COF_INITIATOR

