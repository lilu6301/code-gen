//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_controller
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of HybridSchedulingApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_HYBRIDSCHEDULINGAPP_CONTROLLER
#define COFS_MODEL_HYBRIDSCHEDULINGAPP_CONTROLLER

/// Model Header includes start
#include "cfm_hybridschedulingapp_global.h"
#include "cfm_hybridschedulingapp_global_types.h"
#include "cofluent.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'Controller includes' algorithm generated code

//End of 'Controller includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgController Function Controller
//@{
///        \page dxpController
//@{
///    \brief Controller function model start
class cfm_controller: public cf_core::cf_function {
public:
	/// cfm_controller type define start

	/// cfm_controller type define end

	/// constructor
	cfm_controller(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_controller(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

protected:
	/// initialize attributes
	void cb_init_attributes(void);
	/// initialize definitions
	void cb_init_local_vars(void);

	/// Model private fields start
	/// Model private fields end

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Controller local declarations' algorithm generated code

	//End of 'Controller local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief Controller function model end

//@}
//@}
#endif // COFS_MODEL_HYBRIDSCHEDULINGAPP_CONTROLLER

//<#!@READ-ONLY-SECTION-END@!#>