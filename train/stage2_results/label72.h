//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_producer
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of CopyPayloadNonPod generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_COPYPAYLOADNONPOD_PRODUCER
#define COFS_MODEL_COPYPAYLOADNONPOD_PRODUCER

/// Model Header includes start
#include "cfm_copypayloadnonpod_global.h"
#include "cfm_copypayloadnonpod_global_types.h"
#include "cofluent.h"
//set of dataType, sort alphabetically
#include "dt/cft_defmsgq.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'Producer includes' algorithm generated code

//End of 'Producer includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgProducer Function Producer
//@{
///        \page dxpProducer
//@{
///    \brief Producer function model start
class cfm_producer: public cf_core::cf_function {
public:
	/// cfm_producer type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_producer, cft_defmsgq> p_mq_MsgQ_t;
	/// cfm_producer type define end

	/// constructor
	cfm_producer(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_producer(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_MsgQ_t p_mq_MsgQ;
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
	//Start of 'Producer local declarations' algorithm generated code
	int cpt;
	int Value[100];
	//End of 'Producer local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief Producer function model end

//@}
//@}
#endif // COFS_MODEL_COPYPAYLOADNONPOD_PRODUCER

//<#!@READ-ONLY-SECTION-END@!#>