/*!
 * \class cfm_mobilephone
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_MOBILEPHONE
#define COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_MOBILEPHONE

#include "cfm_softwaredefinedradioapp_global.h"
#include "cfm_softwaredefinedradioapp_global_types.h"
#include "cofluent.h"
#include "dp/cfm_mobilephone_dp_if.h"
#include "cfm_applicationlayer.h"
#include "cfm_callprotocolstack.h"
#include "cfm_controller.h"
#include "cfm_videoprotocolstack.h"
#include "dt/cft_defvideo.h"
#include "dt/cft_defcall.h"



class cfm_mobilephone: public cf_core::cf_function_container, public cfm_mobilephone_dp_if {
public:
	typedef cf_core::cf_message_queue<cft_defcall> mq_AppToCtrl_t;
	typedef cf_core::cf_message_queue<cft_defcall> mq_AppToHTTP_t;
	typedef cf_core::cf_message_queue<cft_defcall> mq_HTTPToApp_t;
	typedef cf_core::cf_message_queue<cft_defvideo> mq_RTPToApp_t;

	typedef cf_core::cf_mq_initiator_socket<cfm_mobilephone, cft_defvideo> p_mq_NetToDVB_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_mobilephone, cft_defvideo> p_mq_Video_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_mobilephone, cft_defcall> p_mq_NetToUMTS_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_mobilephone, cft_defcall> p_mq_UMTSToNet_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_mobilephone, cft_defcall> p_mq_Response_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_mobilephone, cft_defcall> p_mq_Request_t;

	cfm_mobilephone(sc_core::sc_module_name name);

	virtual ~cfm_mobilephone(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_NetToDVB_t p_mq_NetToDVB;
	p_mq_Video_t p_mq_Video;
	p_mq_NetToUMTS_t p_mq_NetToUMTS;
	p_mq_UMTSToNet_t p_mq_UMTSToNet;
	p_mq_Response_t p_mq_Response;
	p_mq_Request_t p_mq_Request;

public:
	cfm_applicationlayer* ApplicationLayer;
	cfm_callprotocolstack* CallProtocolStack;
	cfm_controller* Controller;
	cfm_videoprotocolstack* VideoProtocolStack;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);

public:
	mq_AppToCtrl_t mq_AppToCtrl;
	mq_AppToHTTP_t mq_AppToHTTP;
	mq_HTTPToApp_t mq_HTTPToApp;
	mq_RTPToApp_t mq_RTPToApp;




};

#endif // COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_MOBILEPHONE

