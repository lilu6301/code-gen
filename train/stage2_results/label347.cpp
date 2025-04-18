//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \class cfm_bt_stack
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of Bluetooth_IPs generated by C++ Generator for
 * SystemC/TLM2
 */
/// Model Source includes start
#include "cfm_bt_stack.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_bt_system
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_bt_stack
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
// Start of 'BT_Stack definitions' algorithm generated code

// End of 'BT_Stack definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_bt_stack ::cfm_bt_stack()
    : // instantiation of non-vector Event, MessageQueue, SharedVariable
      cf_function_container(name), cfm_bt_stack_dp_if(),
      mq_L2CAP_In("L2CAP_In"), mq_L2CAP_Out("L2CAP_Out"), mq_OBEX_In("OBEX_In"),
      mq_OBEX_Out("OBEX_Out"), mq_RFCOMM_In("RFCOMM_In"),
      mq_RFCOMM_Out("RFCOMM_Out"), p_ev_WrOK("p_ev_WrOK"),
      p_ev_startEv("p_ev_startEv"), p_mq_BaseBand_In("p_mq_BaseBand_In"),
      p_mq_BaseBand_Out("p_mq_BaseBand_Out"), p_mq_DataIn("p_mq_DataIn"),
      p_mq_DataOut("p_mq_DataOut"), p_mq_ReadWrite_0("p_mq_ReadWrite_0"),
      p_mq_ReadWrite_1("p_mq_ReadWrite_1") {
  cf_function_container::init();
  // instantiation of models
  BaseBand_Layer = new cfm_baseband_layer("BaseBand_Layer");
  L2CAP_Layer = new cfm_l2cap_layer("L2CAP_Layer");
  OBEX_Layer = new cfm_obex_layer("OBEX_Layer");
  RFCOMM_Layer = new cfm_rfcomm_layer("RFCOMM_Layer");
  // connections
  // model connect to relation
  BaseBand_Layer->p_mq_L2CAP_In(mq_L2CAP_In.p_target_socket);
  BaseBand_Layer->p_mq_L2CAP_Out(mq_L2CAP_Out.p_target_socket);
  // model connect to port
  BaseBand_Layer->p_mq_BaseBand_In(p_mq_BaseBand_In);
  BaseBand_Layer->p_mq_BaseBand_Out(p_mq_BaseBand_Out);
  // model connect to relation
  L2CAP_Layer->p_mq_L2CAP_In(mq_L2CAP_In.p_target_socket);
  L2CAP_Layer->p_mq_L2CAP_Out(mq_L2CAP_Out.p_target_socket);
  L2CAP_Layer->p_mq_RFCOMM_In(mq_RFCOMM_In.p_target_socket);
  L2CAP_Layer->p_mq_RFCOMM_Out(mq_RFCOMM_Out.p_target_socket);
  // model connect to relation
  OBEX_Layer->p_mq_OBEX_In(mq_OBEX_In.p_target_socket);
  OBEX_Layer->p_mq_OBEX_Out(mq_OBEX_Out.p_target_socket);
  // model connect to port
  OBEX_Layer->p_mq_DataIn(p_mq_DataIn);
  OBEX_Layer->p_mq_DataOut(p_mq_DataOut);
  OBEX_Layer->p_mq_ReadWrite(p_mq_ReadWrite);
  OBEX_Layer->p_mq_WrOK(p_mq_WrOK);
  OBEX_Layer->p_mq_startEv(p_mq_startEv);
  // model connect to relation
  RFCOMM_Layer->p_mq_OBEX_In(mq_OBEX_In.p_target_socket);
  RFCOMM_Layer->p_mq_OBEX_Out(mq_OBEX_Out.p_target_socket);
  RFCOMM_Layer->p_mq_RFCOMM_In(mq_RFCOMM_In.p_target_socket);
  RFCOMM_Layer->p_mq_RFCOMM_Out(mq_RFCOMM_Out.p_target_socket);
  cf_function_container::elab_end();
}
//@}

/// \name destructor
//@{
cfm_bt_stack::~cfm_bt_stack(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'BT_Stack destructor' algorithm generated code

  // End of 'BT_Stack destructor' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
  // deconstruct for models
  delete BaseBand_Layer;
  delete L2CAP_Layer;
  delete OBEX_Layer;
  delete RFCOMM_Layer;
}
//@}

/// \name pre-elaboration section
//@{
void cfm_bt_stack::cb_before_elaboration(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'BT_Stack pre elaboration' algorithm generated code

  // End of 'BT_Stack pre elaboration' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name post-elaboration section
//@{
void cfm_bt_stack::cb_end_of_elaboration(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'BT_Stack post elaboration' algorithm generated code

  // End of 'BT_Stack post elaboration' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name post-simulation section
//@{
void cfm_bt_stack::cb_end_of_simulation(void) {
  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'BT_Stack post simulation' algorithm generated code

  // End of 'BT_Stack post simulation' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name initialize attributes
//@{
void cfm_bt_stack::cb_init_attributes() {

  // initialize function attributes
  cfa_cycle_period.init(cf_expr_time(10, CF_NS));
  // initialize relations attributes
  mq_L2CAP_In.cfa_send_time.init(cf_expr_duration(0, CF_NS));
  mq_L2CAP_In.cfa_receive_time.init(cf_expr_duration(0, CF_NS));
  mq_L2CAP_In.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
  mq_L2CAP_In.cfa_queue_capacity.init((cf_nonzero_count)1);
  mq_L2CAP_In.cfa_concurrency.init((cf_nonzero_count)1);
  mq_L2CAP_Out.cfa_send_time.init(cf_expr_duration(0, CF_NS));
  mq_L2CAP_Out.cfa_receive_time.init(cf_expr_duration(0, CF_NS));
  mq_L2CAP_Out.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
  mq_L2CAP_Out.cfa_queue_capacity.init((cf_nonzero_count)1);
  mq_L2CAP_Out.cfa_concurrency.init((cf_nonzero_count)1);
  mq_OBEX_In.cfa_send_time.init(cf_expr_duration(0, CF_NS));
  mq_OBEX_In.cfa_receive_time.init(cf_expr_duration(0, CF_NS));
  mq_OBEX_In.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
  mq_OBEX_In.cfa_queue_capacity.init((cf_nonzero_count)1);
  mq_OBEX_In.cfa_concurrency.init((cf_nonzero_count)1);
  mq_OBEX_Out.cfa_send_time.init(cf_expr_duration(0, CF_NS));
  mq_OBEX_Out.cfa_receive_time.init(cf_expr_duration(0, CF_NS));
  mq_OBEX_Out.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
  mq_OBEX_Out.cfa_queue_capacity.init((cf_nonzero_count)1);
  mq_OBEX_Out.cfa_concurrency.init((cf_nonzero_count)1);
  mq_RFCOMM_In.cfa_send_time.init(cf_expr_duration(0, CF_NS));
  mq_RFCOMM_In.cfa_receive_time.init(cf_expr_duration(0, CF_NS));
  mq_RFCOMM_In.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
  mq_RFCOMM_In.cfa_queue_capacity.init((cf_nonzero_count)1);
  mq_RFCOMM_In.cfa_concurrency.init((cf_nonzero_count)1);
  mq_RFCOMM_Out.cfa_send_time.init(cf_expr_duration(0, CF_NS));
  mq_RFCOMM_Out.cfa_receive_time.init(cf_expr_duration(0, CF_NS));
  mq_RFCOMM_Out.cfa_queue_policy.init(CF_MQ_POLICY_FIFO_FINITE);
  mq_RFCOMM_Out.cfa_queue_capacity.init((cf_nonzero_count)1);
  mq_RFCOMM_Out.cfa_concurrency.init((cf_nonzero_count)1);

  return;
}
//@}

/// \name initialize definitions
//@{
void cfm_bt_stack::cb_init_local_vars(void) {

  //<#!@READ-ONLY-SECTION-END@!#>
  // Start of 'BT_Stack initializations' algorithm generated code

  // End of 'BT_Stack initializations' algorithm generated code
  //<#!@READ-ONLY-SECTION-START@!#>
}
//@}

//<#!@READ-ONLY-SECTION-END@!#>