/*!
 * \class cfm_watching
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_WATCHING
#define COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_WATCHING

#include "cfm_softwaredefinedradioapp_global.h"
#include "cfm_softwaredefinedradioapp_global_types.h"
#include "cofluent.h"
#include "dp/cfm_watching_dp_if.h"
#include "dt/cft_defvideo.h"



class cfm_watching: public cf_core::cf_function, public cfm_watching_dp_if {
public:

	typedef cf_core::cf_mq_initiator_socket<cfm_watching, cft_defvideo> p_mq_Video_t;

	cfm_watching(sc_core::sc_module_name name);

	virtual ~cfm_watching(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_Video_t p_mq_Video;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);




};

#endif // COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_WATCHING

