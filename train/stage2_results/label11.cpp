//<#!@READ-ONLY-SECTION-START@!#>
/*
* \class cfm_callprotocolstack
* \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
* \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
*/
/// Model Source includes start
#include "cfm_callprotocolstack.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'CallProtocolStack definitions' algorithm generated code

//End of 'CallProtocolStack definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_callprotocolstack ::cfm_callprotocolstack() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_function(),mq_HTTPToIP("HTTPToIP"),mq_IPToHTTP("IPToHTTP"),mq_IPToUMTS("IPToUMTS"),mq_UMTSToIP("UMTSToIP"),p_mq_AppToHTTP("p_mq_AppToHTTP"),p_mq_HTTPToApp("p_mq_HTTPToApp"),p_mq_NetToUMTS("p_mq_NetToUMTS"),p_mq_UMTSToNet("p_mq_UMTSToNet"){
cf_function_container::init();
//instantiation of models
HTTPTCP = new cfm_httptcp("HTTPTCP");
IPCall = new cfm_ipcall("IPCall");
UMTS = new cfm_umts("UMTS");
//connections
//model connect to relation
HTTPTCP->p_mq_HTTPToIP(mq_HTTPToIP.p_target_socket);
HTTPTCP->p_mq_IPToHTTP(mq_IPToHTTP.p_target_socket);
//model connect to port
HTTPTCP->p_mq_AppToHTTP(p_mq_AppToHTTP);
HTTPTCP->p_mq_HTTPToApp(p_mq_HTTPToApp);
//model connect to relation
IPCall->p_mq_HTTPToIP(mq_HTTPToIP.p_target_socket);
IPCall->p_mq_IPToHTTP(mq_IPToHTTP.p_target_socket);
IPCall->p_mq_IPToUMTS(mq_IPToUMTS.p_target_socket);
IPCall->p_mq_UMTSToIP(mq_UMTSToIP.p_target_socket);
//model connect to relation
UMTS->p_mq_IPToUMTS(mq_IPToUMTS.p_target_socket);
UMTS->p_mq_UMTSToIP(mq_UMTSToIP.p_target_socket);
//model connect to port
UMTS->p_mq_NetToUMTS(p_mq_NetToUMTS);
UMTS->p_mq_UMTSToNet(p_mq_UMTSToNet);
cf_function_container::elab_end();
}
//@}

/// \name destructor
//@{
cfm_callprotocolstack::~cfm_callprotocolstack(void) {
//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'CallProtocolStack destructor' algorithm generated code

//End of 'CallProtocolStack destructor' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
//deconstruct for models
delete HTTPTCP;
delete IPCall;
delete UMTS;
}


//@{
void cfm_callprotocolstack::cb_init_attributes() {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_callprotocolstack::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>