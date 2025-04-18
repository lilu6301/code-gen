
//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_protocolsend
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of ProtocolMapDataTypeApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_PROTOCOLMAPDATATYPEAPP_PROCESSEND
#define COFS_MODEL_PROTOCOLMAPDATATYPEAPP_PROCESSEND

/// Model Header includes start
#include "cfm_protocolmapdatatypeapp_global.h"
#include "cfm_protocolmapdatatypeapp_global_types.h"
#include "cofluent.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'ProtocolSend includes' algorithm generated code

//End of 'ProtocolSend includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgProtocolSend Function ProtocolSend
//@{
///        \page dxpProtocolSend
//@{
///    \brief ProtocolSend function model start
class cfm_protocolsend: public cf_core::cf_function {
public:
	/// cfm_protocolsend type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_protocolsend,
			cf_core::cf_payload_int> p_mq_protocol_data_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_protocolsend,
			cf_core::cf_payload_int> p_mq_user_data_in_t;
	/// cfm_protocolsend type define end

	/// constructor
	cfm_protocolsend(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_protocolsend(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_protocol_data_t p_mq_protocol_data;
	p_mq_user_data_in_t p_mq_user_data_in;
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
	//Start of 'ProtocolSend local declarations' algorithm generated code

	//End of 'ProtocolSend local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief ProtocolSend function model end

//@}
//@}
#endif // COFS_MODEL_PROTOCOLMAPDATATYPEAPP_PROCESSEND

//<#!@READ-ONLY-SECTION-END@!#>