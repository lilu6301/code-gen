//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_hybridschedulingapp
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of HybridSchedulingApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_HYBRIDSCHEDULINGAPP
#define COFS_MODEL_HYBRIDSCHEDULINGAPP

/// Model Header includes start
#include "cfm_hybridschedulingapp_global.h"
#include "cfm_hybridschedulingapp_global_types.h"
#include "cofluent.h"
#include "cfm_consumer.h"
#include "cfm_controller.h"
#include "cfm_producer.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'HybridSchedulingApp includes' algorithm generated code

//End of 'HybridSchedulingApp includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgHybridSchedulingApp Function HybridSchedulingApp
//@{
///        \page dxpHybridSchedulingApp
//@{
///    \brief HybridSchedulingApp function model start
class cfm_hybridschedulingapp: public cf_core::cf_application {
public:
	/// cfm_hybridschedulingapp type define start
	/// relations typedef
//set of relation, sort alphabetically. format: cf_type<dataType> relation_name
	typedef cf_core::cf_message_queue<cf_core::cf_payload_int> mq_MsgQ_t;

	/// cfm_hybridschedulingapp type define end

	/// constructor
	cfm_hybridschedulingapp(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_hybridschedulingapp(void);
	virtual void cb_before_elaboration(void);

	void cb_end_of_elaboration(void);
	void cb_end_of_simulation(void);

public:
	/// \name functions
	//@{
//set of model, sort alphabetically. format: model_type* model_name
	cfm_consumer* Consumer;
	cfm_controller* Controller;
	cfm_producer* Producer;
	//@}

protected:
	/// initialize attributes
	void cb_init_attributes(void);
	/// initialize definitions
	void cb_init_local_vars(void);

public:
	/// \name relations
	//@{
//set of relation, sort alphabetically. format: relation_type relation_name
	mq_MsgQ_t mq_MsgQ;
	//@}

	/// Model private fields start
	/// Model private fields end

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'HybridSchedulingApp local declarations' algorithm generated code

	//End of 'HybridSchedulingApp local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief HybridSchedulingApp function model end

//@}
//@}
#endif // COFS_MODEL_HYBRIDSCHEDULINGAPP

//<#!@READ-ONLY-SECTION-END@!#>