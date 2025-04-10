
/*!
 * \class cfm_bt_system
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of Bluetooth_IPs generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_BLUETHIP_BT_SYSTEM
#define COFS_MODEL_BLUETHIP_BT_SYSTEM

#include "cfm_bluetooth_ips_global.h"
#include "cfm_bluetooth_ips_global_types.h"
#include "cofluent.h"
#include "dp/cfm_bt_system_dp_if.h"
#include "cfm_bt_stack.h"
#include "cfm_filesystem.h"
#include "dt/cft_defbaseband.h"
#include "dt/cft_defdataout.h"
#include "dt/cft_defdata.h"
#include "dt/cft_defdatain.h"
#include "dt/cft_defreadwrite.h"



class cfm_bt_system: public cf_core::cf_function_container, public cfm_bt_system_dp_if {
public:
	typedef cf_core::cf_message_queue<cft_defdatain> mq_DataIn_t;
	typedef cf_core::cf_message_queue<cft_defdataout> mq_DataOut_t;
	typedef cf_core::cf_event ev_WrOK_t;

	typedef cf_core::cf_mq_initiator_socket<cfm_bt_system, cft_defbaseband> p_mq_BaseBand_Out_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_bt_system, cft_defbaseband> p_mq_BaseBand_In_t;
	typedef cf_core::cf_ev_initiator_socket<cfm_bt_system> p_ev_startEv_t;

	cfm_bt_system(sc_core::sc_module_name name);

	virtual ~cfm_bt_system(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_BaseBand_Out_t p_mq_BaseBand_Out;
	p_mq_BaseBand_In_t p_mq_BaseBand_In;
	p_ev_startEv_t p_ev_startEv;

public:
	cfm_bt_stack* BT_Stack;
	cfm_filesystem* FileSystem;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);

public:
	mq_DataIn_t mq_DataIn;
	mq_DataOut_t mq_DataOut;
	ev_WrOK_t ev_WrOK;




};

#endif // COFS_MODEL_BLUETHIP_BT_SYSTEM

