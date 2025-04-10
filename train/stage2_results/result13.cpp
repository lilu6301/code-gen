
/*
 * \class cfm_videoprocessstack
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_videoprocessstack.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_softwaredefinedradioapp
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_videoprocessstack
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;



cfm_videoprocessstack::cfm_videoprocessstack(sc_core::sc_module_name name)
cf_function_container(name)
, cfm_videoprocessstack_dp_if()
, p_mq_NetToDVB("p_mq_NetToDVB")
, p_mq_RTPToApp("p_mq_RTPToApp")
, mq_IPToRTP("IPToRTP"
)
, mq_MPEToIP("MPEToIP"
)

{
	cf_function_container::init();
	IPVideo = new cfm_ipvideo
	("IPVideo");
	MPETSL = new cfm_mpeetsl
	("MPETSL");
	RTPUDP = new cfm_rtpudp
	("RTPUDP");

	IPVideo->p_mq_MPEToIP
	(mq_MPEToIP
			.p_target_socket
	);
	IPVideo->p_mq_IPToRTP
	(mq_IPToRTP
			.p_target_socket
	);

	MPETSL->p_mq_MPEToIP
	(mq_MPEToIP
			.p_target_socket
	);

	RTPUDP->p_mq_IPToRTP
	(mq_IPToRTP
			.p_target_socket
	);
	RTPUDP->p_mq_RTPToApp
	(p_mq_RTPToApp
	);



	cf_function_container::elab_end();
}

cfm_videoprocessstack::~cfm_videoprocessstack(void) {

	delete IPVideo;	///ddd
	delete MPETSL;	///ddd
	delete RTPUDP;	///ddd
}

void cfm_videoprocessstack::cb_before_elaboration(void) {

}

void cfm_videoprocessstack::cb_end_of_elaboration(void) {

}

void cfm_videoprocessstack::cb_end_of_simulation(void) {

}

void cfm_videoprocessstack::cb_init_attributes() {

	mq_IPToRTP.cfa_send_time.init(cf_expr_duration(10, CF_US));
	mq_IPToRTP.cfa_receive_time.init(cf_expr_duration(10, CF_US));
	mq_IPToRTP.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
	mq_IPToRTP.cfa_queue_capacity.init((cf_nonzero_count) 1);
	mq_IPToRTP.cfa_concurrency.init((cf_nonzero_count) 1);
	mq_IPToRTP.cfa_send_threshold.init((cf_nonzero_count) 1);
	mq_IPToRTP.cfa_receive_threshold.init((cf_nonzero_count) 1);
	mq_MPEToIP.cfa_send_time.init(cf_expr_duration(10, CF_US));
	mq_MPEToIP.cfa_receive_time.init(cf_expr_duration(10, CF_US));
	mq_MPEToIP.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
	mq_MPEToIP.cfa_queue_capacity.init((cf_nonzero_count) 1);
	mq_MPEToIP.cfa_concurrency.init((cf_nonzero_count) 1);
	mq_MPEToIP.cfa_send_threshold.init((cf_nonzero_count) 1);
	mq_MPEToIP.cfa_receive_threshold.init((cf_nonzero_count) 1);

	return;
}

void cfm_videoprocessstack::cb_init_local_vars(void) {


}


