
/*!
 * \class cfm_rfcomm_layer
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of Bluetooth_IPs generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_BLUETOOTH_IPS_RFCOMM_LAYER
#define COFS_MODEL_BLUETOOTH_IPS_RFCOMM_LAYER

#include "cfm_bluetooth_ips_global.h"
#include "cfm_bluetooth_ips_global_types.h"
#include "cofluent.h"
#include "dp/cfm_rfcomm_layer_dp_if.h"
#include "cfm_creditsordata.h"
#include "cfm_rfc_out.h"
#include "cfm_rfcomm_receive.h"
#include "cfm_rfcomm_send.h"
#include "dt/cft_defobex_in.h"
#include "dt/cft_defobex_out.h"
#include "dt/cft_defrfcomm_out.h"
#include "dt/cft_defrfcomm_in.h"



class cfm_rfcomm_layer: public cf_core::cf_function_container, public cfm_rfcomm_layer_dp_if {
public:
	typedef cf_core::cf_message_queue<cft_defrfcomm_in> mq_RFC_Data_t;
	typedef cf_core::cf_message_queue<cft_defrfcomm_in> mq_RFC_Cdts_t;
	typedef cf_core::cf_message_queue<cft_defrfcomm_out> mq_RFC_Out1_t;
	typedef cf_core::cf_message_queue<cft_defrfcomm_out> mq_RFC_Out2_t;

	typedef cf_core::cf_mq_initiator_socket<cfm_rfcomm_layer, cft_defobex_in> p_mq_OBEX_In_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_rfcomm_layer, cft_defobex_out> p_mq_OBEX_Out_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_rfcomm_layer, cft_defrfcomm_out> p_mq_RFCOMM_Out_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_rfcomm_layer, cft_defrfcomm_in> p_mq_RFCOMM_In_t;

	cfm_rfcomm_layer(sc_core::sc_module_name name);

	virtual ~cfm_rfcomm_layer(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_OBEX_In_t p_mq_OBEX_In;
	p_mq_OBEX_Out_t p_mq_OBEX_Out;
	p_mq_RFCOMM_Out_t p_mq_RFCOMM_Out;
	p_mq_RFCOMM_In_t p_mq_RFCOMM_In;

public:
	cfm_creditsordata* CreditsOrData;
	cfm_rfc_out* RFC_Out;
	cfm_rfcomm_receive* RFCOMM_Receive;
	cfm_rfcomm_send* RFCOMM_Send;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);

public:
	mq_RFC_Data_t mq_RFC_Data;
	mq_RFC_Cdts_t mq_RFC_Cdts;
	mq_RFC_Out1_t mq_RFC_Out1;
	mq_RFC_Out2_t mq_RFC_Out2;




};

#endif // COFS_MODEL_BLUETOOTH_IPS_RFCOMM_LAYER

