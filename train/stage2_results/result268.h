
/// Model Source includes start
#include "cfm_hierarchyschedulingapp.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-START@!#>
//End of 'HybridSchedulingApp definitions' algorithm generated code

//Start of 'HybridSchedulingApp definitions' algorithm generated code
//End of 'HybridSchedulingApp definitions' algorithm generated code

/// \name constructor
//@{
cfm_hierarchyschedulingapp ::cfm_hierarchyschedulingapp() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_application(),mq_MsgQ("MsgQ"){
cf_application::init();
//instantiation of models
Consumer = new cfm_consumer("Consumer");
Controller = new cfm_controller("Controller");
Producer = new cfm_producer("Producer");
//connections
//model connect to relation
Consumer->p_mq_MsgQ(mq_MsgQ.p_target_socket);
//model connect to relation
Producer->p_mq_MsgQ(mq_MsgQ.p_target_socket);
cf_application::elab_end();
}
//@}

/// \name destructor
//@{
cfm_hierarchyschedulingapp::~cfm_hierarchyschedulingapp(void) {
//<#!@READ-ONLY-SECTION-END@!#>
//End of 'HybridSchedulingApp destructor' algorithm generated code

//Start of 'HybridSchedulingApp destructor' algorithm generated code
//End of 'HybridSchedulingApp destructor' algorithm generated code
//deconstruct for models
delete Consumer;
delete Controller;
delete Producer;
}


//@{
void cfm_hierarchyschedulingapp::cb_init_attributes() {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_hierarchyschedulingapp::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>