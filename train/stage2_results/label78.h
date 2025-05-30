//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_baseband_layer
 * rief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of OPP_UseCase generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_TRANSACTIONTRACKERMSGQAPP
#define COFS_MODEL_TRANSACTIONTRACKERMSGQAPP


#include "cfm_transactiontrackermsgqapp_global.h"
#include "cfm_transactiontrackermsgqapp_global_types.h"
#include <vector>
#include "cofluent.h"
#include "cfm_consumer1.h"
#include "cfm_consumer2.h"
#include "cfm_messagerouting.h"
#include "cfm_producer.h"
#include "dt/cft_default_in.h"

class cfm_transactiontrackermsgqapp : public cf_core::cf_application {
public:
typedef cf_core::cf_message_queue<cf_core::cf_payload_int> mq_MsgQIn_t;
typedef cf_core::cf_message_queue<cf_core::cf_payload_int> mq_MsgQOut1_t;
typedef cf_core::cf_message_queue<cf_core::cf_payload_int> mq_MsgQOut2_t;

/// constructor
cfm_transactiontrackermsgqapp(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_transactiontrackermsgqapp(void);

cfm_consumer1 *Consumer1;
cfm_consumer2 *Consumer2;
cfm_messagerouting *MessageRouting;
cfm_producer *Producer;

protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
mq_MsgQIn_t mq_MsgQIn;
mq_MsgQOut1_t mq_MsgQOut1;
mq_MsgQOut2_t mq_MsgQOut2;
};
#endif
//<#!@READ-ONLY-SECTION-END@!#>