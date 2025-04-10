
/*!
 * \class cfm_aggswitch
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of datacenter generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_DATACENTER_AGGSWITCH
#define COFS_MODEL_DATACENTER_AGGSWITCH

#include <vector>
#include "cfm_datacenter_global.h"
#include "cfm_datacenter_global_types.h"
#include "cofluent.h"
#include "dp/cfm_aggswitch_dp_if.h"
#include "cfm_aggswitch_routingfunction.h"
#include "cfm_inbounddatacenterswitch.h"
#include "cfm_inboundrack.h"
#include "cfm_outbounddatacenterswitch.h"
#include "cfm_outboundrack.h"
#include "dt/cft_defpacket.h"



class cfm_aggswitch: public cf_core::cf_function_container, public cfm_aggswitch_dp_if {
public:
	typedef cf_core::cf_message_queue<cft_defpacket> mq_MsgQInboundDataCenterSwitch_t;
	typedef cf_core::cf_message_queue<cft_defpacket> mq_MsgQInboundRack_t;
	typedef cf_core::cf_message_queue<cft_defpacket> mq_MsgQOutboundDataCenterSwitch_t;
	typedef cf_core::cf_message_queue<cft_defpacket> mq_MsgQOutboundRack_t;

	typedef cf_core::cf_mq_initiator_socket<cfm_aggswitch, cft_defpacket> p_mq_MsgQToAggSwitch_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_aggswitch, cft_defpacket> p_mq_MsgQToRack_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_aggswitch, cft_defpacket> p_mq_MsgQToServerRoom_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_aggswitch, cft_defpacket> p_mq_MsgQToDataCenterSwitch_t;

	cfm_aggswitch(sc_core::sc_module_name name);

	virtual ~cfm_aggswitch(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_MsgQToAggSwitch_t p_mq_MsgQToAggSwitch;
	std::vector<p_mq_MsgQToRack_t*> p_mq_MsgQToRack_vec;
	p_mq_MsgQToServerRoom_t p_mq_MsgQToServerRoom;
	p_mq_MsgQToDataCenterSwitch_t p_mq_MsgQToDataCenterSwitch;

public:
	cfm_inbounddatacenterswitch* InboundDataCenterSwitch;
	std::vector<cfm_inboundrack*> InboundRack_vec;
	cfm_outbounddatacenterswitch* OutboundDataCenterSwitch;
	std::vector<cfm_outboundrack*> OutboundRack_vec;
	cfm_aggswitch_routingfunction* RoutingFunction;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);

public:
	mq_MsgQInboundDataCenterSwitch_t mq_MsgQInboundDataCenterSwitch;
	std::vector<mq_MsgQInboundRack_t*> mq_MsgQInboundRack_vec;
	mq_MsgQOutboundDataCenterSwitch_t mq_MsgQOutboundDataCenterSwitch;
	std::vector<mq_MsgQOutboundRack_t*> mq_MsgQOutboundRack_vec;




};

#endif // COFS_MODEL_DATACENTER_AGGSWITCH

