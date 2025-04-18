//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_httptcp_receive
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_HTTPTCP_RECEIVE
#define COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_HTTPTCP_RECEIVE

/// Model Header includes start
#include "cfm_softwaredefinedradioapp_global.h"
#include "cfm_softwaredefinedradioapp_global_types.h"
#include "cofluent.h"
#include "dp/cfm_httptcp_receive_dp_if.h"
//set of dataType, sort alphabetically
#include "dt/cft_defcall.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'HTTPTCP_Receive includes' algorithm generated code

//End of 'HTTPTCP_Receive includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgHTTPTCP_Receive Function HTTPTCP_Receive
//@{
///        \page dxpHTTPTCP_Receive
//@{
///    \brief HTTPTCP_Receive function model start
class cfm_httptcp_receive: public cf_core::cf_function,
		public cfm_httptcp_receive_dp_if {
public:
	/// cfm_httptcp_receive type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_httptcp_receive, cft_defcall> p_mq_HTTPToApp_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_httptcp_receive, cft_defcall> p_mq_IPToHTTP_t;
	/// cfm_httptcp_receive type define end

	/// constructor
	cfm_httptcp_receive(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_httptcp_receive(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_HTTPToApp_t p_mq_HTTPToApp;
	p_mq_IPToHTTP_t p_mq_IPToHTTP;
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
	//Start of 'HTTPTCP_Receive local declarations' algorithm generated code

	//End of 'HTTPTCP_Receive local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief HTTPTCP_Receive function model end

//@}
//@}
#endif // COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_HTTPTCP_RECEIVE

//<#!@READ-ONLY-SECTION-END@!#>