
/*
 * \class cfm_obex_layer
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of Bluetooth_IPs generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_obex_layer.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_bluetooth_ips
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_obex_layer
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;



cfm_obex_layer::cfm_obex_layer(sc_core::sc_module_name name)
cf_function_container(name)
, cfm_obex_layer_dp_if()
, p_mq_ReadWrite("p_mq_ReadWrite")
, p_mq_DataIn("p_mq_DataIn")
, p_ev_WrOK("p_ev_WrOK")
, p_mq_DataOut("p_mq_DataOut")
, p_mq_OBEX_In("p_mq_OBEX_In")
, p_ev_startEv("p_ev_startEv")
, p_mq_OBEX_Out("p_mq_OBEX_Out")
, mq_OB_Out1("OB_Out1"
)
, mq_OB_Out2("OB_Out2"
)
, ev_continueEv("continueEv"
)

{
	cf_function_container::init();
	OB_Out = new cfm_ob_out
	("OB_Out");
	OBEX_Receive = new cfm_obex_receive
	("OBEX_Receive");
	OBEX_Send = new cfm_obex_send
	("OBEX_Send");

	OB_Out->p_mq_OB_Out2
	(mq_OB_Out2
			.p_target_socket
	);
	OB_Out->p_mq_OB_Out1
	(mq_OB_Out1
			.p_target_socket
	);

	OBEX_Receive->p_mq_DataIn
	(p_mq_DataIn
	);
	OBEX_Receive->p_mq_OB_Out1
	(mq_OB_Out1
			.p_target_socket
	);
	OBEX_Receive->p_ev_startEv
	(p_ev_startEv
	);
	OBEX_Receive->p_ev_continueEv
	(ev_continueEv
			.p_target_socket
	);

	OBEX_Send->p_mq_ReadWrite
	(p_mq_ReadWrite
	);
	OBEX_Send->p_mq_OB_Out2
	(mq_OB_Out2
			.p_target_socket
	);
	OBEX_Send->p_ev_continueEv
	(ev_continueEv
			.p_target_socket
	);



	cf_function_container::elab_end();
}

cfm_obex_layer::~cfm_obex_layer(void) {

	delete OB_Out;	///ddd
	delete OBEX_Receive;	///ddd
	delete OBEX_Send;	///ddd
}

void cfm_obex_layer::cb_before_elaboration(void) {

}

void cfm_obex_layer::cb_end_of_elaboration(void) {

}

void cfm_obex_layer::cb_end_of_simulation(void) {

}

void cfm_obex_layer::cb_init_attributes() {

	mq_OB_Out1.cfa_send_time.init(cf_expr_duration(10, CF_US));
	mq_OB_Out1.cfa_receive_time.init(cf_expr_duration(10, CF_US));
	mq_OB_Out1.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
	mq_OB_Out1.cfa_queue_capacity.init((cf_nonzero_count) 1);
	mq_OB_Out1.cfa_concurrency.init((cf_nonzero_count) 1);
	mq_OB_Out1.cfa_send_threshold.init((cf_nonzero_count) 1);
	mq_OB_Out1.cfa_receive_threshold.init((cf_nonzero_count) 1);
	mq_OB_Out2.cfa_send_time.init(cf_expr_duration(10, CF_US));
	mq_OB_Out2.cfa_receive_time.init(cf_expr_duration(10, CF_US));
	mq_OB_Out2.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
	mq_OB_Out2.cfa_queue_capacity.init((cf_nonzero_count) 1);
	mq_OB_Out2.cfa_concurrency.init((cf_nonzero_count) 1);
	mq_OB_Out2.cfa_send_threshold.init((cf_nonzero_count) 1);
	mq_OB_Out2.cfa_receive_threshold.init((cf_nonzero_count) 1);
	ev_continueEv.cfa_set_time.init(cf_expr_duration(10, CF_US));
	ev_continueEv.cfa_get_time.init(cf_expr_duration(10, CF_US));
	ev_continueEv.cfa_event_policy.init(CF_EV_POLICY_BOOLEAN);

	return;
}

void cfm_obex_layer::cb_init_local_vars(void) {


}


