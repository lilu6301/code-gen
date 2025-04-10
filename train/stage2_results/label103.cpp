/*
 * \class cfm_consumermap
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of MapDataTypeAPIApp generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_consumermap.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_mapdatatypeapiapp
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_consumermap
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;



cfm_consumermap::cfm_consumermap(sc_core::sc_module_name name)
cf_function(name)
, p_mq_MsgQMap("p_mq_MsgQMap")

{
	cf_function::init();



	cf_function::elab_end();
}

cfm_consumermap::~cfm_consumermap(void) {

}

void cfm_consumermap::cb_before_elaboration(void) {

}

void cfm_consumermap::cb_end_of_elaboration(void) {

}

void cfm_consumermap::cb_end_of_simulation(void) {

}

void cfm_consumermap::cb_init_attributes() {

	cfa_cycle_period.init(cf_expr_time(10, CF_NS));
	cfa_scope.init(CF_FCT_SYSTEM);

	return;
}

void cfm_consumermap::cb_init_local_vars(void) {


}


