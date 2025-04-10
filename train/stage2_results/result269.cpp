
/*
 * \class cfm_hybrid schedulingapp
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of HybridSchedulingApp generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_hybrid schedulingapp.h"
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;



cfm_hybrid schedulingapp::cfm_hybrid schedulingapp(sc_core::sc_module_name name)
cf_application(name)
, mq_MsgQ("MsgQ"
)

{
	cf_application::init();
	Consumer = new cfm_consumer
	("Consumer");
	Controller = new cfm_controller
	("Controller");
	Producer = new cfm_producer
	("Producer");

	Consumer->p_mq_MsgQ
	(mq_MsgQ
			.p_target_socket
	);

	Producer->p_mq_MsgQ
	(mq_MsgQ
			.p_target_socket
	);



	cf_application::elab_end();
}

cfm_hybrid schedulingapp::~cfm_hybrid schedulingapp(void) {

	delete Consumer;	///ddd
	delete Controller;	///ddd
	delete Producer;	///ddd
}

void cfm_hybrid schedulingapp::cb_before_elaboration(void) {

}

void cfm_hybrid schedulingapp::cb_end_of_elaboration(void) {

}

void cfm_hybrid schedulingapp::cb_end_of_simulation(void) {

}

void cfm_hybrid schedulingapp::cb_init_attributes() {

	cfa_cycle_period.init(cf_expr_time(10, CF_NS));
	mq_MsgQ.cfa_send_time.init(cf_expr_duration(1, CF_NS));
	mq_MsgQ.cfa_receive_time.init(cf_expr_duration(1, CF_NS));
	mq_MsgQ.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
	mq_MsgQ.cfa_queue_capacity.init((cf_nonzero_count) 1);
	mq_MsgQ.cfa_concurrency.init((cf_nonzero_count) 1);
	mq_MsgQ.cfa_send_threshold.init((cf_nonzero_count) 1);
	mq_MsgQ.cfa_receive_threshold.init((cf_nonzero_count) 1);

	return;
}

void cfm_hybrid schedulingapp::cb_init_local_vars(void) {


}


