//<#!@READ-ONLY-SECTION-START@!#>
/*
* \class cfm_bt_system
* \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
* \details Simulation model of Bluetooth_IPs generated by C++ Generator for SystemC/TLM2
*/
/// Model Source includes start
#include "cfm_bt_system.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'BT_System definitions' algorithm generated code

//End of 'BT_System definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_bt_system ::cfm_bt_system() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_function(),p_ev_startEv("p_ev_startEv"),p_mq_BaseBand_In("p_mq_BaseBand_In"),p_mq_BaseBand_Out("p_mq_BaseBand_Out"){
cf_function_container::init();
//instantiation of models
BT_Stack = new cfm_bt_stack("BT_Stack");
FileSystem = new cfm_filesystem("FileSystem");
//connections
//model connect to port
BT_Stack->p_mq_BaseBand_In(p_mq_BaseBand_In);
BT_Stack->p_mq_BaseBand_Out(p_mq_BaseBand_Out);
BT_Stack->p_mq_DataIn(p_mq_DataIn);
BT_Stack->p_mq_DataOut(p_mq_DataOut);
BT_Stack->p_mq_ReadWrite(p_mq_ReadWrite);
BT_Stack->p_mq_WrOK(p_mq_WrOK);
BT_Stack->p_p_ev_startEv(p_p_ev_startEv);
//model connect to relation
FileSystem->p_sv_Data(p_sv_Data);
FileSystem->p_mq_DataIn(p_mq_DataIn);
FileSystem->p_mq_DataOut(p_mq_DataOut);
FileSystem->p_mq_ReadWrite(p_mq_ReadWrite);
FileSystem->p_mq_WrOK(p_mq_WrOK);
cf_function_container::elab_end();
}
//@}

/// \name destructor
//@{
cfm_bt_system::~cfm_bt_system(void) {
//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'BT_System destructor' algorithm generated code

//End of 'BT_System destructor' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
//deconstruct for models
delete BT_Stack;
delete FileSystem;
}


//@{
void cfm_bt_system::cb_init_attributes() {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_bt_system::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>