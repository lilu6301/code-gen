
//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_ddrcommandgeneration
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of DDRMemory generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_DDRMEMORY_DDRCOMMANDGENERATION
#define COFS_MODEL_DDRMEMORY_DDRCOMMANDGENERATION

/// Model Header includes start
#include "cfm_ddrmemory_global.h"
#include "cfm_ddrmemory_global_types.h"
#include "cofluent.h"
#include "dp/cfm_ddrcommandgeneration_dp_if.h"
//set of dataType, sort alphabetically
#include "dt/cft_defdrc.h"
#include "dt/cft_defmemorystatus.h"
#include "dt/cft_defroutingstop.h"
#include "dt/cft_defrequests2memory.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'DDRCommandGeneration includes' algorithm generated code

//End of 'DDRCommandGeneration includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgDDRCommandGeneration Function DDRCommandGeneration
//@{
///        \page dxpDDRCommandGeneration
//@{
///    \brief DDRCommandGeneration function model start
class cfm_ddrcommandgeneration: public cf_core::cf_function,
		public cfm_ddrcommandgeneration_dp_if {
public:
	/// cfm_ddrcommandgeneration type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_ddrcommandgeneration,
			cft_defdrc> p_mq_DDRCommand_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_ddrcommandgeneration,
			cft_defroutingstop> p_mq_MemoryStatus_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_ddrcommandgeneration,
			cft_defrequests2memory> p_mq_Requests2Memory_t;
	/// cfm_ddrcommandgeneration type define end

	/// constructor
	cfm_ddrcommandgeneration(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_ddrcommandgeneration(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_DDRCommand_t p_mq_DDRCommand;
	p_mq_MemoryStatus_t p_mq_MemoryStatus;
	p_mq_Requests2Memory_t p_mq_Requests2Memory;
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
	//Start of 'DDRCommandGeneration local declarations' algorithm generated code
	int index;
	int max_channels;
	//End of 'DDRCommandGeneration local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief DDRCommandGeneration function model end

//@}
//@}
#endif // COFS_MODEL_DDRMEMORY_DDRCOMMANDGENERATION

//<#!@READ-ONLY-SECTION-END@!#>