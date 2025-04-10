
/*
 * \class cfm_filesystem
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of Bluetooth_IPs generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_filesystem.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_bluetooth_ips
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_filesystem
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;



cfm_filesystem::cfm_filesystem(sc_core::sc_module_name name)
cf_function(name)
, cfm_filesystem_dp_if()
, p_sv_Data("p_sv_Data")
, p_ev_WrOK("p_ev_WrOK")
, p_mq_DataOut("p_mq_DataOut")
, p_mq_DataIn("p_mq_DataIn")
, p_mq_ReadWrite("p_mq_ReadWrite")

{
	cf_function::init();



	cf_function::elab_end();
}

cfm_filesystem::~cfm_filesystem(void) {

}

void cfm_filesystem::cb_before_elaboration(void) {

}

void cfm_filesystem::cb_end_of_elaboration(void) {

}

void cfm_filesystem::cb_end_of_simulation(void) {

}

void cfm_filesystem::cb_init_attributes() {

	cfa_cycle_period.init(cf_expr_time(10, CF_NS));
	cfa_scope.init(CF_FCT_SYSTEM);

	return;
}

void cfm_filesystem::cb_init_local_vars(void) {


}


