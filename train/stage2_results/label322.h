/*!
 * \class cfm_device
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of CompleteDevice generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_COMPLETEDEVICE_DEVICE
#define COFS_MODEL_COMPLETEDEVICE_DEVICE

#include "cfm_completedevice_global.h"
#include "cfm_completedevice_global_types.h"
#include "cofluent.h"
#include "cfm_hwmodel.h"
#include "cfm_mqtocommand.h"
#include "cfm_swinterface.h"
#include "dt/cft_defframe.h"
#include "dt/cft_defprocessingmode.h"

#include "mci/cfm_dpv.h"


class cfm_device: public cf_core::cf_function_container {
public:
	typedef cf_core::cf_message_queue<cft_defframe> mq_inputFrame_t;
	typedef cf_core::cf_message_queue<cft_defframe> mq_outputFrame_t;
	typedef cf_core::cf_shared_variable<cft_defprocessingmode> sv_processingMode_t;
	typedef cf_core::cf_event ev_startProcess_t;

	typedef cf_core::cf_mci_port<cfm_dpv> dpv_t;
	typedef cf_core::cf_ev_initiator_socket<cfm_device> p_ev_newFrame_t;

	cfm_device(sc_core::sc_module_name name);

	virtual ~cfm_device(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	dpv_t dpv;
	p_ev_newFrame_t p_ev_newFrame;

public:
	cfm_hwmodel* hwModel;
	cfm_mqtocommand* mqToCommand;
	cfm_swinterface* swInterface;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);

public:
	mq_inputFrame_t mq_inputFrame;
	mq_outputFrame_t mq_outputFrame;
	sv_processingMode_t sv_processingMode;
	ev_startProcess_t ev_startProcess;




};

#endif // COFS_MODEL_COMPLETEDEVICE_DEVICE

