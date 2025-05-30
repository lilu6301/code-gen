//<#!@READ-ONLY-SECTION-START@!#>
/*
* \class cfm_frontend
* \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
* \details Simulation model of DDRMemory generated by C++ Generator for SystemC/TLM2
*/
/// Model Source includes start
#include "cfm_frontend.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'FrontEnd definitions' algorithm generated code

//End of 'FrontEnd definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_frontend ::cfm_frontend() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_function(),p_mq_ARADDRin("p_mq_ARADDRin"),p_mq_AWADDRin("p_mq_AWADDRin"),p_mq_BRESPchn("p_mq_BRESPchn"),p_mq_DataRead("p_mq_DataRead"),p_mq_MemReadRequest("p_mq_MemReadRequest"),p_mq_MemWriteRequest("p_mq_MemWriteRequest"),p_mq_RDATAchn("p_mq_RDATAchn"),p_mq_WDATAin("p_mq_WDATAin"),p_mq_WriteAck("p_mq_WriteAck"){
cf_function_container::init();
//instantiation of models
ReadDataDriver = new cfm_readdatadriver("ReadDataDriver");
ReadDriver = new cfm_readdriver("ReadDriver");
SendWAckDriver = new cfm_sendwackdriver("SendWAckDriver");
WriteDriver = new cfm_writedriver("WriteDriver");
//connections
//model connect to port
ReadDataDriver->p_mq_DataRead(p_mq_DataRead);
ReadDataDriver->p_mq_RDATAchn(p_mq_RDATAchn);
//model connect to port
ReadDriver->p_mq_ARADDRin(p_mq_ARADDRin);
ReadDriver->p_mq_MemReadRequest(p_mq_MemReadRequest);
//model connect to port
SendWAckDriver->p_mq_BRESPchn(p_mq_BRESPchn);
SendWAckDriver->p_mq_WriteAck(p_mq_WriteAck);
//model connect to port
WriteDriver->p_mq_AWADDRin(p_mq_AWADDRin);
WriteDriver->p_mq_MemWriteRequest(p_mq_MemWriteRequest);
WriteDriver->p_mq_WDATAin(p_mq_WDATAin);
cf_function_container::elab_end();
}
//@}

/// \name destructor
//@{
cfm_frontend::~cfm_frontend(void) {
//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'FrontEnd destructor' algorithm generated code

//End of 'FrontEnd destructor' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
//deconstruct for models
delete ReadDataDriver;
delete ReadDriver;
delete SendWAckDriver;
delete WriteDriver;
}


//@{
void cfm_frontend::cb_init_attributes() {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_frontend::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>