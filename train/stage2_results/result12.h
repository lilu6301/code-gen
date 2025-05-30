 //<!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_baseband_layer
 * rief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of OPP_UseCase generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_VIDEOPROTOCOLSTACK
#define COFS_MODEL_VIDEOPROTOCOLSTACK


#include "cfm_videoprotocolstack_global.h"
#include "cfm_videoprotocolstack_global_types.h"
#include <vector>
#include "cofluent.h"
#include "cfm_ipvideo.h"
#include "cfm_mpetsl.h"
#include "cfm_rtpudp.h"
#include "dt/cft_defvideo_in.h"

class cfm_videoprotocolstack : public cf_core::cf_function {
public:

typedef cf_core::cf_message_queue<cft_DefVideo> mq_IPToRTP_t;
typedef cf_core::cf_message_queue<cft_DefVideo> mq_MPEToIP_t;
typedef cf_core::cf_message_queue<cft_DefVideo> mq_RTPToApp_t;

/// constructor
cfm_videoprotocolstack(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_videoprotocolstack(void);

cfm_ipvideo *IPVideo;
cfm_mpetsl *MPETSL;
cfm_rtpudp *RTPUDP;

protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
mq_IPToRTP_t mq_IPToRTP;
mq_MPEToIP_t mq_MPEToIP;
mq_RTPToApp_t mq_RTPToApp;
};
#endif
//<#!@READ-ONLY-SECTION-END@!#>