//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \class cfm_httptcp
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++
 * Generator for SystemC/TLM2
 */
/// Model Source includes start
#include "cfm_httptcp.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_callprotocolstack
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_httptcp
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
// Start of 'HTTPTCP definitions' algorithm generated code

// End of 'HTTPTCP definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_httptcp ::cfm_httptcp()
    : // instantiation of non-vector Event, MessageQueue, SharedVariable
      cf_function_container(name), cfm_httptcp_dp_if(),
      p_mq_AppToHTTP("p_mq_AppToHTTP"), p_mq_HTTPToApp("p_mq_HTTPToApp"),
      p_mq_HTTPToIP("p_mq_HTTPToIP"), p_mq_IPToHTTP("p_mq_IPToHTTP") {
  cf_function_container::init();
  // instantiation of models
  HTTPTCP_Receive = new cfm_httptcp_receive("HTTPTCP_Receive");
  HTTPTCP_Send = new cfm_httptcp_send("HTTPTCP_Send");
  // connections
  // model connect to port
  HTTPTCP_Receive->p_mq_HTTPToApp(p_mq_HTTPToApp);
  HTTPTCP_Receive->p_mq_IPToHTTP(p_mq_IPToHTTP);
  // model connect to port
  HTTPTCP_Send->p_mq_AppToHTTP(p_mq_AppToHTTP);
  HTTPTCP_Send->p_mq_HTTPToIP(p_mq_HTTPToIP);
  cf_function_container::elab_end();
}
//@}

/// \name destructor
//@{
cfm_httptcp::~cfm_httptcp(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'HTTPTCP destructor' algorithm generated code

  // End of 'HTTPTCP destructor' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
  // deconstruct for models
  delete HTTPTCP_Receive;
  delete HTTPTCP_Send;
}
//@}

/// \name pre-elaboration section
//@{
void cfm_httptcp::cb_before_elaboration(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'HTTPTCP pre elaboration' algorithm generated code

  // End of 'HTTPTCP pre elaboration' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name post-elaboration section
//@{
void cfm_httptcp::cb_end_of_elaboration(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'HTTPTCP post elaboration' algorithm generated code

  // End of 'HTTPTCP post elaboration' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name post-simulation section
//@{
void cfm_httptcp::cb_end_of_simulation(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'HTTPTCP post simulation' algorithm generated code

  // End of 'HTTPTCP post simulation' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name initialize attributes
//@{
void cfm_httptcp::cb_init_attributes() {

  // initialize function attributes
  cfa_cycle_period.init(cf_expr_time(10, CF_NS));

  return;
}
//@}

/// \name initialize definitions
//@{
void cfm_httptcp::cb_init_local_vars(void) {

  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'HTTPTCP initializations' algorithm generated code

  // End of 'HTTPTCP initializations' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

//<#!@READ-ONLY-SECTION-END@!#>