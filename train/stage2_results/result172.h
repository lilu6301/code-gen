
/*!
 * \class cfm_waddrdmux
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of DDRMemory generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_DDRMEMORY_WADDRDMUX
#define COFS_MODEL_DDRMEMORY_WADDRDMUX

#include "cfm_ddrmemory_global.h"
#include "cfm_ddrmemory_global_types.h"
#include "cofluent.h"
#include "behavior/cf_function_router.h"
#include "dt/cft_defawaddrchn.h"



class cfm_waddrdmux: public cf_core::cf_function_router {
public:

	typedef cf_core::cf_mq_initiator_socket<cfm_waddrdmux, cft_defawaddrchn> p_mq_AWADDRin_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_waddrdmux, cft_defawaddrchn> p_mq_AWADDRchn_t;

	cfm_waddrdmux(sc_core::sc_module_name name);

	virtual ~cfm_waddrdmux(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_AWADDRin_t p_mq_AWADDRin;
	p_mq_AWADDRchn_t p_mq_AWADDRchn;

public:
	std::string cb_select_destination_name(cf_core::cf_payload_b* _trans);

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);




};

#endif // COFS_MODEL_DDRMEMORY_WADDRDMUX

