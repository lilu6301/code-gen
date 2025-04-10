
/*!
 * \class cfm_datacenter
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of datacenter generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_DATACENTER
#define COFS_MODEL_DATACENTER

#include <vector>
#include "cfm_datacenter_global.h"
#include "cfm_datacenter_global_types.h"
#include "cofluent.h"
#include "dp/cfm_datacenter_dp_if.h"
#include "cfm_datacenterswitch.h"
#include "cfm_serverroom.h"
#include "dt/cft_defpacket.h"

#include <chrono>

class cfm_datacenter: public cf_core::cf_application, public cfm_datacenter_dp_if {
public:
	typedef cf_core::cf_message_queue<cft_defpacket> mq_MsgQToDataCenterSwitch_t;
	typedef cf_core::cf_message_queue<cft_defpacket> mq_MsgQToServerRoom_t;


	cfm_datacenter(sc_core::sc_module_name name);

	virtual ~cfm_datacenter(void);
	virtual void cb_before_elaboration(void);

	void cb_end_of_elaboration(void);
	void cb_end_of_simulation(void);

public:
	cfm_datacenterswitch* DataCenterSwitch;
	std::vector<cfm_serverroom*> ServerRoom_vec;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);

public:
	std::vector<mq_MsgQToDataCenterSwitch_t*> mq_MsgQToDataCenterSwitch_vec;
	std::vector<mq_MsgQToServerRoom_t*> mq_MsgQToServerRoom_vec;


	std::chrono::high_resolution_clock::time_point t_start;

};

#endif // COFS_MODEL_DATACENTER

