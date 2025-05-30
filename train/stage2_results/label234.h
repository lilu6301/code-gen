//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_baseband_layer
 * rief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of OPP_UseCase generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_TORSWITCH
#define COFS_MODEL_TORSWITCH


#include "cfm_torswitch_global.h"
#include "cfm_torswitch_global_types.h"
#include <vector>
#include "cofluent.h"
#include "cfm_inboundaggswitch.h"
#include "cfm_inboundserver.h"
#include "cfm_outboundaggswitch.h"
#include "cfm_outboundserver.h"
#include "cfm_routingfunction.h"
#include "dt/cft_defpacket_in.h"

class cfm_torswitch : public cf_core::cf_function {
public:
typedef cf_core::cf_message_queue<cft_DefPacket> mq_MsgQInboundAGGSwitch_t;
typedef cf_core::cf_message_queue<cft_DefPacket> mq_MsgQInboundServer_t;
typedef cf_core::cf_message_queue<cft_DefPacket> mq_MsgQOutboundAGGSwitch_t;
typedef cf_core::cf_message_queue<cft_DefPacket> mq_MsgQOutboundServer_t;

typedef cf_core::cf_mq_initiator_socket<cfm_torswitch, cft_defpacket> p_mq_MsgQServerToToRSwitch_t;
typedef cf_core::cf_mq_initiator_socket<cfm_torswitch, cft_defpacket> p_mq_MsgQToAggSwitch_t;
typedef cf_core::cf_mq_initiator_socket<cfm_torswitch, cft_defpacket> p_mq_MsgQToRack_t;
typedef cf_core::cf_mq_initiator_socket<cfm_torswitch, cft_defpacket> p_mq_MsgQToServer_t;

/// constructor
cfm_torswitch(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_torswitch(void);

p_mq_MsgQServerToToRSwitch_t p_mq_MsgQServerToToRSwitch;
p_mq_MsgQToAggSwitch_t p_mq_MsgQToAggSwitch;
p_mq_MsgQToRack_t p_mq_MsgQToRack;
p_mq_MsgQToServer_t p_mq_MsgQToServer;

cfm_inboundaggswitch *InboundAGGSwitch;
std::vector<cfm_inboundserver *> ToRSwitch_vec;
cfm_outboundaggswitch *OutboundAGGSwitch;
std::vector<cfm_outboundserver *> ToRSwitch_vec;
cfm_routingfunction *RoutingFunction;

protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
mq_MsgQInboundAGGSwitch_t mq_MsgQInboundAGGSwitch;
std::vector<mq_MsgQInboundServer_t *> mq_MsgQInboundServer_vec;
mq_MsgQOutboundAGGSwitch_t mq_MsgQOutboundAGGSwitch;
std::vector<mq_MsgQOutboundServer_t *> mq_MsgQOutboundServer_vec;
};
#endif
//<#!@READ-ONLY-SECTION-END@!#>