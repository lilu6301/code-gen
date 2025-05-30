 //<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_baseband_layer
 * rief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of OPP_UseCase generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_INHERITANCE_EXAMPLE3APP
#define COFS_MODEL_INHERITANCE_EXAMPLE3APP


#include "cfm_inheritance_example3app_global.h"
#include "cfm_inheritance_example3app_global_types.h"
#include <vector>
#include "cofluent.h"
#include "cfm_consumer.h"
#include "cfm_os.h"
#include "cfm_producer.h"
#include "dt/cft_default_in.h"

class cfm_inheritance_example3app : public cf_core::cf_application {
public:
typedef cf_core::cf_message_queue<cf_core::cf_payload_int> mq_MsgQ_t;

/// constructor
cfm_inheritance_example3app(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_inheritance_example3app(void);

std::vector<cfm_consumer *> Inheritance_example3App_vec;
cfm_os *OS;
std::vector<cfm_producer *> Inheritance_example3App_vec;

protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
std::vector<mq_MsgQ_t *> mq_MsgQ_vec;
};
#endif
//<#!@READ-ONLY-SECTION-END@!#>