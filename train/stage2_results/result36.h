

/// Model Source includes start
#include "cfm_ums.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-START@!#>
//End of 'UMTS definitions' algorithm generated code

//Start of 'UMTS definitions' algorithm generated code
//End of 'UMTS definitions' algorithm generated code

/// \name constructor
//@{
cfm_ums ::cfm_ums() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_function(),p_mq_IPToUMTS("p_mq_IPToUMTS"),p_mq_NetToUMTS("p_mq_NetToUMTS"),p_mq_UMTSToIP("p_mq_UMTSToIP"),p_mq_UMTSToNet("p_mq_UMTSToNet"){
cf_function_container::init();
//instantiation of models
UMTS_Receive = new cfm_ums_receive("UMTS_Receive");
UMTS_Send = new cfm_ums_send("UMTS_Send");
//connections
//model connect to port
UMTS_Receive->p_mq_NetToUMTS(p_mq_NetToUMTS);
UMTS_Receive->p_mq_UMTSToIP(p_mq_UMTSToIP);
UMTS_Receive->p_mq_UMTSToNet(p_mq_UMTSToNet);
//model connect to port
UMTS_Send->p_mq_IPToUMTS(p_mq_IPToUMTS);
UMTS_Send->p_mq_UMTSToIP(p_mq_UMTSToIP);
UMTS_Send->p_mq_UMTSToNet(p_mq_UMTSToNet);
cf_function_container::elab_end();
}
//@}

/// \name destructor
//@{
cfm_ums::~cfm_ums(void) {
//<#!@READ-ONLY-SECTION-END@!#>
//End of 'UMTS destructor' algorithm generated code

//Start of 'UMTS destructor' algorithm generated code
//End of 'UMTS destructor' algorithm generated code
for (vector<cfm_ums_receive*>::const_iterator vi = Receive_vec.begin();
//deconstruct for models
delete UMTS_Receive;
delete UMTS_Send;
}


//@{
void cfm_ums::cb_init_attributes() {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_ums::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>