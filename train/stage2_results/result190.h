
/*!
 * \class cfm_sendwackdriver
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of DDRMemory generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_DDRMEMORY_SENDWACKDRIVER
#define COFS_MODEL_DDRMEMORY_SENDWACKDRIVER

#include "cfm_ddrmemory_global.h"
#include "cfm_ddrmemory_global_types.h"
#include "cofluent.h"
#include "dt/cft_defwriteack.h"
#include "dt/cft_defbrespchn.h"



class cfm_sendwackdriver: public cf_core::cf_function {
public:

	typedef cf_core::cf_mq_initiator_socket<cfm_sendwackdriver, cft_defwriteack> p_mq_WriteAck_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_sendwackdriver, cft_defbrespchn> p_mq_BRESPchn_t;

	cfm_sendwackdriver(sc_core::sc_module_name name);

	virtual ~cfm_sendwackdriver(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_WriteAck_t p_mq_WriteAck;
	p_mq_BRESPchn_t p_mq_BRESPchn;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);


	int i;

};

#endif // COFS_MODEL_DDRMEMORY_SENDWACKDRIVER

