//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_obex_receive
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of Bluetooth_IPs generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_BLUETOOTH_IPS_OBEX_RECEIVE
#define COFS_MODEL_BLUETOOTH_IPS_OBEX_RECEIVE

/// Model Header includes start
#include "cfm_bluetooth_ips_global.h"
#include "cfm_bluetooth_ips_global_types.h"
#include "cofluent.h"
#include "dp/cfm_obex_receive_dp_if.h"
//set of dataType, sort alphabetically
#include "dt/cft_defdatain.h"
#include "dt/cft_defobex_in.h"
#include "dt/cft_defobex_out.h"
#include "dt/cft_defreadwrite.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'OBEX_Receive includes' algorithm generated code

//End of 'OBEX_Receive includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgOBEX_Receive Function OBEX_Receive
//@{
///        \page dxpOBEX_Receive
//@{
///    \brief OBEX_Receive function model start
class cfm_obex_receive: public cf_core::cf_function,
		public cfm_obex_receive_dp_if {
public:
	/// cfm_obex_receive type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_ev_initiator_socket<cfm_obex_receive> p_ev_WrOK_t;
	typedef cf_core::cf_ev_initiator_socket<cfm_obex_receive> p_ev_continueEv_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_obex_receive, cft_defdatain> p_mq_DataIn_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_obex_receive, cft_defobex_in> p_mq_OBEX_In_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_obex_receive, cft_defobex_out> p_mq_OB_Out1_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_obex_receive, cft_defreadwrite> p_mq_ReadWrite_t;
	/// cfm_obex_receive type define end

	/// constructor
	cfm_obex_receive(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_obex_receive(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_ev_WrOK_t p_ev_WrOK;
	p_ev_continueEv_t p_ev_continueEv;
	p_mq_DataIn_t p_mq_DataIn;
	p_mq_OBEX_In_t p_mq_OBEX_In;
	p_mq_OB_Out1_t p_mq_OB_Out1;
	p_mq_ReadWrite_t p_mq_ReadWrite;
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
	//Start of 'OBEX_Receive local declarations' algorithm generated code
	int ack;
	//End of 'OBEX_Receive local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief OBEX_Receive function model end

//@}
//@}
#endif // COFS_MODEL_BLUETOOTH_IPS_OBEX_RECEIVE

//<#!@READ-ONLY-SECTION-END@!#>