//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_callapplication
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_CALLAPPLICATION
#define COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_CALLAPPLICATION

/// Model Header includes start
#include "cfm_softwaredefinedradioapp_global.h"
#include "cfm_softwaredefinedradioapp_global_types.h"
#include "cofluent.h"
#include "dp/cfm_callapplication_dp_if.h"
//set of dataType, sort alphabetically
#include "dt/cft_defcall.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'CallApplication includes' algorithm generated code

//End of 'CallApplication includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgCallApplication Function CallApplication
//@{
///        \page dxpCallApplication
//@{
///    \brief CallApplication function model start
class cfm_callapplication: public cf_core::cf_function,
		public cfm_callapplication_dp_if {
public:
	/// cfm_callapplication type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_callapplication, cft_defcall> p_mq_AppToCtrl_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_callapplication, cft_defcall> p_mq_AppToHTTP_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_callapplication, cft_defcall> p_mq_HTTPToApp_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_callapplication, cft_defcall> p_mq_Request_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_callapplication, cft_defcall> p_mq_Response_t;
	/// cfm_callapplication type define end

	/// constructor
	cfm_callapplication(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_callapplication(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_AppToCtrl_t p_mq_AppToCtrl;
	p_mq_AppToHTTP_t p_mq_AppToHTTP;
	p_mq_HTTPToApp_t p_mq_HTTPToApp;
	p_mq_Request_t p_mq_Request;
	p_mq_Response_t p_mq_Response;
	//@}

protected:
	/// initialize attributes
	void cb_init_attributes(void);
	/// initialize definitions
	void cb_init_local_vars(void);

	/// Model private fields start
	/// Model private fields end

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'CallApplication local declarations' algorithm generated code
	bool SendToCtrl;
	bool SendToUser;
	bool SendToCallStack;
	int FileIndex;
	//End of 'CallApplication local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief CallApplication function model end

//@}
//@}
#endif // COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_CALLAPPLICATION

//<#!@READ-ONLY-SECTION-END@!#>