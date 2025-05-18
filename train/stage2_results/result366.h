
/// Model Source includes start
#include "cfm_opp_usecase.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-START@!#>
//End of 'OPP_UseCase definitions' algorithm generated code

//Start of 'OPP_UseCase definitions' algorithm generated code
//End of 'OPP_UseCase definitions' algorithm generated code

/// \name constructor
//@{
cfm_opp_usecase ::cfm_opp_usecase() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_application(),ev_ReuseEv("ReuseEv"),ev_StartEv("StartEv"),ev_UnuseEv("UnuseEv"),mq_M2S("M2S"),mq_S2M("S2M"){
cf_application::init();
//instantiation of models
Master = new cfm_master("Master");
Slave = new cfm_slave("Slave");
StartFunc = new cfm_startfunc("StartFunc");
UnusedFunc = new cfm_unusedfunc("UnusedFunc");
//connections
//model connect to relation
StartFunc->p_ev_StartEv(ev_StartEv.p_target_socket);
//model connect to relation
UnusedFunc->p_ev_UnuseEv(ev_UnuseEv.p_target_socket);
cf_application::elab_end();
}
//@}

/// \name destructor
//@{
cfm_opp_usecase::~cfm_opp_usecase(void) {
//<#!@READ-ONLY-SECTION-END@!#>
//End of 'OPP_UseCase destructor' algorithm generated code

//Start of 'OPP_UseCase destructor' algorithm generated code
//End of 'OPP_UseCase destructor' algorithm generated code
for (vector<cfm_opp_usecase*>::const_iterator vi = UseCase_vec.begin();
//deconstruct for models
delete Master;
delete Slave;
delete StartFunc;
delete UnusedFunc;
}


//@{
void cfm_opp_usecase::cb_init_attributes() {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_opp_usecase::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>