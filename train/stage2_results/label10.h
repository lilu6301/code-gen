//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_baseband_layer
 * rief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of OPP_UseCase generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_CALLPROTOCOLSTACK
#define COFS_MODEL_CALLPROTOCOLSTACK


#include "cfm_callprotocolstack_global.h"
#include "cfm_callprotocolstack_global_types.h"
#include <vector>
#include "cofluent.h"
#include "cfm_httptcp.h"
#include "cfm_ipcall.h"
#include "cfm_umts.h"
#include "dt/cft_defcall_in.h"

class cfm_callprotocolstack : public cf_core::cf_function {
public:
typedef cf_core::cf_message_queue<cft_DefCall> mq_HTTPToIP_t;
typedef cf_core::cf_message_queue<cft_DefCall> mq_IPToHTTP_t;
typedef cf_core::cf_message_queue<cft_DefCall> mq_IPToUMTS_t;
typedef cf_core::cf_message_queue<cft_DefCall> mq_UMTSToIP_t;

typedef cf_core::cf_mq_initiator_socket<cfm_callprotocolstack, cft_defcall> p_mq_AppToHTTP_t;
typedef cf_core::cf_mq_initiator_socket<cfm_callprotocolstack, cft_defcall> p_mq_HTTPToApp_t;
typedef cf_core::cf_mq_initiator_socket<cfm_callprotocolstack, cft_defcall> p_mq_NetToUMTS_t;
typedef cf_core::cf_mq_initiator_socket<cfm_callprotocolstack, cft_defcall> p_mq_UMTSToNet_t;

/// constructor
cfm_callprotocolstack(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_callprotocolstack(void);

p_mq_AppToHTTP_t p_mq_AppToHTTP;
p_mq_HTTPToApp_t p_mq_HTTPToApp;
p_mq_NetToUMTS_t p_mq_NetToUMTS;
p_mq_UMTSToNet_t p_mq_UMTSToNet;

cfm_httptcp *HTTPTCP;
cfm_ipcall *IPCall;
cfm_umts *UMTS;

protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
mq_HTTPToIP_t mq_HTTPToIP;
mq_IPToHTTP_t mq_IPToHTTP;
mq_IPToUMTS_t mq_IPToUMTS;
mq_UMTSToIP_t mq_UMTSToIP;
};
#endif
//<#!@READ-ONLY-SECTION-END@!#>