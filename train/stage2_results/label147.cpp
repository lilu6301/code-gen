/*
 * \class cfm_p2
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of AutomatedPayloadTrackers generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_p2.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_automatedpayloadtrackers
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_p2
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;



cfm_p2::cfm_p2(sc_core::sc_module_name name)
cf_function(name)
, p_mq_M2_1("p_mq_M2_1")

{
	cf_function::init();



	cf_function::elab_end();
}

cfm_p2::~cfm_p2(void) {

}

void cfm_p2::cb_before_elaboration(void) {

}

void cfm_p2::cb_end_of_elaboration(void) {

}

void cfm_p2::cb_end_of_simulation(void) {

}

void cfm_p2::cb_init_attributes() {

	cfa_cycle_period.init(cf_expr_time(10, CF_NS));
	cfa_scope.init(CF_FCT_SYSTEM);

	return;
}

void cfm_p2::cb_init_local_vars(void) {


}


