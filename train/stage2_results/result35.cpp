

/// Model Source includes start
#include "cfm_ipcall.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-START@!#>
//End of 'IPCall definitions' algorithm generated code

//Start of 'IPCall definitions' algorithm generated code

/// \name constructor
//@{
cfm_ipcall ::cfm_ipcall() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_function(),p_mq_HTTPToIP("p_mq_HTTPToIP"),p_mq_IPToHTTP("p_mq_IPToHTTP"),p_mq_IPToUMTS("p_mq_IPToUMTS"),p_mq_UMTSToIP("p_mq_UMTSToIP"){
cf_function_container::init();
//instantiation of models
IPCall_Receive = new cfm_ipcall_receive("IPCall_Receive");
IPCall_Send = new cfm_ipcall_send("IPCall_Send");
//connections
//model connect to port
IPCall_Receive->p_mq_IPToHTTP(p_mq_IPToHTTP);
IPCall_Receive->p_mq_UMTSToIP(p_mq_UMTSToIP);
//model connect to port
IPCall_Send->p_mq_HTTPToIP(p_mq_HTTPToIP);
IPCall_Send->p_mq_IPToUMTS(p_mq_IPToUMTS);
cf_function_container::elab_end();
}
//@}

/// \name destructor
//@{
cfm_ipcall::~cfm_ipcall(void) {
//<#!@READ-ONLY-SECTION-END@!#>
//End of 'IPCall destructor' algorithm generated code

//Start of 'IPCall destructor' algorithm generated code
//deconstruct for models
delete IPCall_Receive;
delete IPCall_Send;
}


//@{
void cfm_ipcall::cb_init_attributes() {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_ipcall::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>