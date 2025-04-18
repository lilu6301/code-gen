//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_user
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_USER
#define COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_USER

/// Model Header includes start
#include "cfm_softwaredefinedradioapp_global.h"
#include "cfm_softwaredefinedradioapp_global_types.h"
#include "cofluent.h"
#include "dp/cfm_user_dp_if.h"
#include "cfm_reading.h"
#include "cfm_requesting.h"
#include "cfm_watching.h"
//set of dataType, sort alphabetically
#include "dt/cft_defcall.h"
#include "dt/cft_defvideo.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'User includes' algorithm generated code

//End of 'User includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgUser Function User
//@{
///        \page dxpUser
//@{
///    \brief User function model start
class cfm_user: public cf_core::cf_function_container, public cfm_user_dp_if {
public:
	/// cfm_user type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_user, cft_defcall> p_mq_Request_0_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_user, cft_defcall> p_mq_Request_1_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_user, cft_defcall> p_mq_Response_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_user, cft_defvideo> p_mq_Video_t;
	/// cfm_user type define end

	/// constructor
	cfm_user(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_user(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_Request_0_t p_mq_Request_0;
	p_mq_Request_1_t p_mq_Request_1;
	p_mq_Response_t p_mq_Response;
	p_mq_Video_t p_mq_Video;
	//@}

public:
	/// \name functions
	//@{
//set of model, sort alphabetically. format: model_type* model_name
	cfm_reading* Reading;
	cfm_requesting* Requesting;
	cfm_watching* Watching;
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
	//Start of 'User local declarations' algorithm generated code

	//End of 'User local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief User function model end

//@}
//@}
#endif // COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_USER

//<#!@READ-ONLY-SECTION-END@!#>