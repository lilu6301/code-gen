//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_producer2
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of CoSimVerilatorChiselApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_COSIMVERILATORCHISELAPP_PRODUCER2
#define COFS_MODEL_COSIMVERILATORCHISELAPP_PRODUCER2

/// Model Header includes start
#include "cfm_cosimverilatorchiselapp_global.h"
#include "cfm_cosimverilatorchiselapp_global_types.h"
#include "cofluent.h"
//set of dataType, sort alphabetically
#include "dt/cft_defdata1.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'Producer2 includes' algorithm generated code

//End of 'Producer2 includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgProducer2 Function Producer2
//@{
///        \page dxpProducer2
//@{
///    \brief Producer2 function model start
class cfm_producer2: public cf_core::cf_function {
public:
	/// cfm_producer2 type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_producer2, cft_defdata1> p_mq_data2_t;
	/// cfm_producer2 type define end

	/// constructor
	cfm_producer2(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_producer2(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_data2_t p_mq_data2;
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
	//Start of 'Producer2 local declarations' algorithm generated code
	int i = 1;
	//End of 'Producer2 local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief Producer2 function model end

//@}
//@}
#endif // COFS_MODEL_COSIMVERILATORCHISELAPP_PRODUCER2

//<#!@READ-ONLY-SECTION-END@!#>