
/// Model Source includes start
#include "cfm_mymodel.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-START@!#>
//End of 'MyModel definitions' algorithm generated code

//Start of 'MyModel definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-END@!#>

/// \name constructor
//@{
cfm_mymodel ::cfm_mymodel() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_application(),mq_p_in("p_in"),mq_p_out("p_out"){
cf_application::init();
//instantiation of models
packet_in = new cfm_packet_in("packet_in");
packet_out = new cfm_packet_out("packet_out");
packet_process = new cfm_packet_process("packet_process");
//connections
//model connect to relation
packet_in->p_mq_p_in(mq_p_in.p_target_socket);
//model connect to relation
packet_out->p_mq_p_out(mq_p_out.p_target_socket);
//model connect to relation
packet_process->p_mq_p_in(mq_p_in.p_target_socket);
packet_process->p_mq_p_out(mq_p_out.p_target_socket);
cf_application::elab_end();
}
//@}

/// \name destructor
//@{
cfm_mymodel::~cfm_mymodel(void) {
//<#!@READ-ONLY-SECTION-START@!#>
//End of 'MyModel destructor' algorithm generated code

//Start of 'MyModel destructor' algorithm generated code
//<#!@READ-ONLY-SECTION-END@!#>
//deconstruct for models
delete packet_in;
delete packet_out;
delete packet_process;
}


//@{
void cfm_mymodel::cb_init_attributes() {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_mymodel::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-START@!#>
	//End of 'Router25 initializations' algorithm generated code

	//Start of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-END@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>