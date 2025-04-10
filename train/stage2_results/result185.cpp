
/*
 * \class cfm_bankdmuxer
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of DDRMemory generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_bankdmuxer.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_ddrmemory
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_bankdmuxer
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;



cfm_bankdmuxer::cfm_bankdmuxer(sc_core::sc_module_name name)
cf_function(name)
, cfm_bankdmuxer_dp_if()
, p_mq_DDRAction("p_mq_DDRAction")
, p_mq_DDRCommand("p_mq_DDRCommand")

{
	cf_function::init();



	cf_function::elab_end();
}

cfm_bankdmuxer::~cfm_bankdmuxer(void) {

}

void cfm_bankdmuxer::cb_before_elaboration(void) {

}

void cfm_bankdmuxer::cb_end_of_elaboration(void) {

}

void cfm_bankdmuxer::cb_end_of_simulation(void) {

}

void cfm_bankdmuxer::cb_init_attributes() {

	cfa_scope.init(CF_FCT_SYSTEM);

	return;
}

void cfm_bankdmuxer::cb_init_local_vars(void) {


}


