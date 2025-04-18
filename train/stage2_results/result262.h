
//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_receiver
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of ApplicationModelRefinement generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_APPLICATIONMODELREFINEMENT_RECEIVER
#define COFS_MODEL_APPLICATIONMODELREFINEMENT_RECEIVER

/// Model Header includes start
#include "cfm_applicationmodelrefinement_global.h"
#include "cfm_applicationmodelrefinement_global_types.h"
#include "cofluent.h"
//set of dataType, sort alphabetically
#include "dt/cft_defack.h"
#include "dt/cft_defmsg.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'Receiver includes' algorithm generated code

//End of 'Receiver includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgReceiver Function Receiver
//@{
///        \page dxpReceiver
//@{
///    \brief Receiver function model start
class cfm_receiver: public cf_core::cf_function {
public:
	/// cfm_receiver type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_receiver, cft_defack> p_mq_Ack_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_receiver, cft_defmsg> p_mq_Msg_t;
	/// cfm_receiver type define end

	/// constructor
	cfm_receiver(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_receiver(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_Ack_t p_mq_Ack;
	p_mq_Msg_t p_mq_Msg;
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
	//Start of 'Receiver local declarations' algorithm generated code

	//End of 'Receiver local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief Receiver function model end

//@}
//@}
#endif // COFS_MODEL_APPLICATIONMODELREFINEMENT_RECEIVER

//<#!@READ-ONLY-SECTION-END@!#>