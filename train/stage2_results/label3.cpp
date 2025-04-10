/*
 * \class cfm_mobilephone
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_mobilephone.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_softwaredefinedradioapp
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_mobilephone
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;



cfm_mobilephone::cfm_mobilephone(sc_core::sc_module_name name)
cf_function_container(name)
, cfm_mobilephone_dp_if()
, p_mq_NetToDVB("p_mq_NetToDVB")
, p_mq_Video("p_mq_Video")
, p_mq_NetToUMTS("p_mq_NetToUMTS")
, p_mq_UMTSToNet("p_mq_UMTSToNet")
, p_mq_Response("p_mq_Response")
, p_mq_Request("p_mq_Request")
, mq_AppToCtrl("AppToCtrl"
)
, mq_AppToHTTP("AppToHTTP"
)
, mq_HTTPToApp("HTTPToApp"
)
, mq_RTPToApp("RTPToApp"
)

{
	cf_function_container::init();
	ApplicationLayer = new cfm_applicationlayer
	("ApplicationLayer");
	CallProtocolStack = new cfm_callprotocolstack
	("CallProtocolStack");
	Controller = new cfm_controller
	("Controller");
	VideoProtocolStack = new cfm_videoprotocolstack
	("VideoProtocolStack");

	ApplicationLayer->p_mq_Video
	(p_mq_Video
	);
	ApplicationLayer->p_mq_RTPToApp
	(mq_RTPToApp
			.p_target_socket
	);
	ApplicationLayer->p_mq_AppToCtrl
	(mq_AppToCtrl
			.p_target_socket
	);
	ApplicationLayer->p_mq_HTTPToApp
	(mq_HTTPToApp
			.p_target_socket
	);
	ApplicationLayer->p_mq_AppToHTTP
	(mq_AppToHTTP
			.p_target_socket
	);
	ApplicationLayer->p_mq_Response
	(p_mq_Response
	);
	ApplicationLayer->p_mq_Request
	(p_mq_Request
	);

	CallProtocolStack->p_mq_NetToUMTS
	(p_mq_NetToUMTS
	);
	CallProtocolStack->p_mq_UMTSToNet
	(p_mq_UMTSToNet
	);
	CallProtocolStack->p_mq_HTTPToApp
	(mq_HTTPToApp
			.p_target_socket
	);
	CallProtocolStack->p_mq_AppToHTTP
	(mq_AppToHTTP
			.p_target_socket
	);

	Controller->p_mq_AppToCtrl
	(mq_AppToCtrl
			.p_target_socket
	);

	VideoProtocolStack->p_mq_NetToDVB
	(p_mq_NetToDVB
	);
	VideoProtocolStack->p_mq_RTPToApp
	(mq_RTPToApp
			.p_target_socket
	);



	cf_function_container::elab_end();
}

cfm_mobilephone::~cfm_mobilephone(void) {

	delete ApplicationLayer;	///ddd
	delete CallProtocolStack;	///ddd
	delete Controller;	///ddd
	delete VideoProtocolStack;	///ddd
}

void cfm_mobilephone::cb_before_elaboration(void) {

}

void cfm_mobilephone::cb_end_of_elaboration(void) {

}

void cfm_mobilephone::cb_end_of_simulation(void) {

}

void cfm_mobilephone::cb_init_attributes() {

	cfa_cycle_period.init(cf_expr_time(10, CF_NS));
	mq_AppToCtrl.cfa_send_time.init(cf_expr_duration(10, CF_MS));
	mq_AppToCtrl.cfa_receive_time.init(cf_expr_duration(10, CF_MS));
	mq_AppToCtrl.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
	mq_AppToCtrl.cfa_queue_capacity.init((cf_nonzero_count) 1);
	mq_AppToCtrl.cfa_concurrency.init((cf_nonzero_count) 1);
	mq_AppToHTTP.cfa_send_time.init(cf_expr_duration(10, CF_MS));
	mq_AppToHTTP.cfa_receive_time.init(cf_expr_duration(10, CF_MS));
	mq_AppToHTTP.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
	mq_AppToHTTP.cfa_queue_capacity.init((cf_nonzero_count) 1);
	mq_AppToHTTP.cfa_concurrency.init((cf_nonzero_count) 1);
	mq_HTTPToApp.cfa_send_time.init(cf_expr_duration(10, CF_MS));
	mq_HTTPToApp.cfa_receive_time.init(cf_expr_duration(10, CF_MS));
	mq_HTTPToApp.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
	mq_HTTPToApp.cfa_queue_capacity.init((cf_nonzero_count) 1);
	mq_HTTPToApp.cfa_concurrency.init((cf_nonzero_count) 1);
	mq_RTPToApp.cfa_send_time.init(cf_expr_duration(100, CF_US));
	mq_RTPToApp.cfa_receive_time.init(cf_expr_duration(1, CF_MS));
	mq_RTPToApp.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
	mq_RTPToApp.cfa_queue_capacity.init((cf_nonzero_count) 1);
	mq_RTPToApp.cfa_concurrency.init((cf_nonzero_count) 1);

	return;
}

void cfm_mobilephone::cb_init_local_vars(void) {


}


