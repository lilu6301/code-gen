
/*
 * \class cfm_consumer2
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of TransactionTrackerMsgQApp generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_consumer2.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_transactiontrackermsgqapp
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_consumer2
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;



cfm_consumer2::cfm_consumer2(sc_core::sc_module_name name)
cf_function(name)
, p_mq_MsgQOut2("p_mq_MsgQOut2")

{
	cf_function::init();



	cf_function::elab_end();
}

cfm_consumer2::~cfm_consumer2(void) {

}

void cfm_consumer2::cb_before_elaboration(void) {

}

void cfm_consumer2::cb_end_of_elaboration(void) {

}

void cfm_consumer2::cb_end_of_simulation(void) {

}

void cfm_consumer2::cb_init_attributes() {

	cfa_cycle_period.init(cf_expr_time(10, CF_NS));
	cfa_scope.init(CF_FCT_SYSTEM);

	return;
}

void cfm_consumer2::cb_init_local_vars(void) {


}


