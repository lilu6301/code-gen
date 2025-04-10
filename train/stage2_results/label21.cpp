/*
 * \class cfm_clockgenerator
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_clockgenerator.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_networks
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_clockgenerator
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;



cfm_clockgenerator::cfm_clockgenerator(sc_core::sc_module_name name)
cf_function(name)
, cfm_clockgenerator_dp_if()
, p_ev_BurstClock("p_ev_BurstClock")

{
	cf_function::init();



	cf_function::elab_end();
}

cfm_clockgenerator::~cfm_clockgenerator(void) {

}

void cfm_clockgenerator::cb_before_elaboration(void) {

}

void cfm_clockgenerator::cb_end_of_elaboration(void) {

}

void cfm_clockgenerator::cb_end_of_simulation(void) {

}

void cfm_clockgenerator::cb_init_attributes() {

	cfa_cycle_period.init(cf_expr_time(10, CF_NS));
	cfa_scope.init(CF_FCT_SYSTEM);

	return;
}

void cfm_clockgenerator::cb_init_local_vars(void) {


}


