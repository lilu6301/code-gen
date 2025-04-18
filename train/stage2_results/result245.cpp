
//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \class cfm_inboundaggswitch
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of datacenter generated by C++ Generator for
 * SystemC/TLM2
 */
/// Model Source includes start
#include "cfm_inboundaggswitch.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_torswitch
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_inboundaggswitch
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
// Start of 'InboundAGGSwitch definitions' algorithm generated code

// End of 'InboundAGGSwitch definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_inboundaggswitch ::cfm_inboundaggswitch()
    : // instantiation of non-vector Event, MessageQueue, SharedVariable
      cf_function(name), cfm_inboundaggswitch_dp_if(),
      p_mq_MsgQInboundAGGSwitch("p_mq_MsgQInboundAGGSwitch"),
      p_mq_MsgQToRack("p_mq_MsgQToRack") {
  cf_function::init();
  // connections
  cf_function::elab_end();
}
//@}

/// \name destructor
//@{
cfm_inboundaggswitch::~cfm_inboundaggswitch(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'InboundAGGSwitch destructor' algorithm generated code

  // End of 'InboundAGGSwitch destructor' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name pre-elaboration section
//@{
void cfm_inboundaggswitch::cb_before_elaboration(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'InboundAGGSwitch pre elaboration' algorithm generated code

  // End of 'InboundAGGSwitch pre elaboration' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name post-elaboration section
//@{
void cfm_inboundaggswitch::cb_end_of_elaboration(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'InboundAGGSwitch post elaboration' algorithm generated code

  // End of 'InboundAGGSwitch post elaboration' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name post-simulation section
//@{
void cfm_inboundaggswitch::cb_end_of_simulation(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'InboundAGGSwitch post simulation' algorithm generated code

  // End of 'InboundAGGSwitch post simulation' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name initialize attributes
//@{
void cfm_inboundaggswitch::cb_init_attributes() {

  // initialize function attributes
  cfa_scope.init(CF_FCT_SYSTEM);

  return;
}
//@}

/// \name initialize definitions
//@{
void cfm_inboundaggswitch::cb_init_local_vars(void) {

  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'InboundAGGSwitch initializations' algorithm generated code
  rack_id = get_container()->get_container()->get_cp_index();
  // End of 'InboundAGGSwitch initializations' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

//<#!@READ-ONLY-SECTION-END@!#>