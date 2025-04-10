
/*!
 * \class cfm_ipcall_send
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_IPCALL_SEND
#define COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_IPCALL_SEND

#include "cfm_softwaredefinedradioapp_global.h"
#include "cfm_softwaredefinedradioapp_global_types.h"
#include "cofluent.h"
#include "dt/cft_defcall.h"



class cfm_ipcall_send: public cf_core::cf_function {
public:

	typedef cf_core::cf_mq_initiator_socket<cfm_ipcall_send, cft_defcall> p_mq_IPToUMTS_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_ipcall_send, cft_defcall> p_mq_HTTPToIP_t;

	cfm_ipcall_send(sc_core::sc_module_name name);

	virtual ~cfm_ipcall_send(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_IPToUMTS_t p_mq_IPToUMTS;
	p_mq_HTTPToIP_t p_mq_HTTPToIP;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);




};

#endif // COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_IPCALL_SEND

