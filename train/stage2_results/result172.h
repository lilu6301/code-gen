
//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_waddrdmux
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of DDRMemory generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_DDRMEMORY_WADDRDMUX
#define COFS_MODEL_DDRMEMORY_WADDRDMUX

/// Model Header includes start
#include "cfm_ddrmemory_global.h"
#include "cfm_ddrmemory_global_types.h"
#include "cofluent.h"
#include "behavior/cf_function_router.h"
#include "dp/cfm_waddrdmux_dp_if.h"
//set of dataType, sort alphabetically
#include "dt/cft_defawaddrchn.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'WAddrDmux includes' algorithm generated code

//End of 'WAddrDmux includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgWAddrDmux Function WAddrDmux
//@{
///        \page dxpWAddrDmux
//@{
///    \brief WAddrDmux function model start
class cfm_waddrdmux: public cf_core::cf_function_router,
		public cfm_waddrdmux_dp_if {
public:
	/// cfm_waddrdmux type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_waddrdmux, cft_defawaddrchn> p_mq_AWADDRChn_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_waddrdmux, cft_defawaddrchn> p_mq_AWADDRin_t;
	/// cfm_waddrdmux type define end

	/// constructor
	cfm_waddrdmux(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_waddrdmux(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_AWADDRChn_t p_mq_AWADDRChn;
	p_mq_AWADDRin_t p_mq_AWADDRin;
	//@}

public:
	/// Overload function for WAddrDmux router destination method
	std::string cb_select_destination_name(cf_core::cf_payload_b* _trans);

protected:
	/// initialize attributes
	void cb_init_attributes(void);
	/// initialize definitions
	void cb_init_local_vars(void);
	/// Overload function for WAddrDmux router routing time method
	cf_dt::cf_duration cb_routing_time(cf_core::cf_payload_b* _trans);

	/// Model private fields start
	/// Model private fields end

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'WAddrDmux local declarations' algorithm generated code

	//End of 'WAddrDmux local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief WAddrDmux function model end

//@}
//@}
#endif // COFS_MODEL_DDRMEMORY_WADDRDMUX

//<#!@READ-ONLY-SECTION-END@!#>