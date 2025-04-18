//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_readdriver
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of DDRMemory generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_DDRMEMORY_READDRIVER
#define COFS_MODEL_DDRMEMORY_READDRIVER

/// Model Header includes start
#include "cfm_ddrmemory_global.h"
#include "cfm_ddrmemory_global_types.h"
#include "cofluent.h"
#include "dp/cfm_readdriver_dp_if.h"
//set of dataType, sort alphabetically
#include "dt/cft_defaraddrchn.h"
#include "dt/cft_defmemreadrequest.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'ReadDriver includes' algorithm generated code

//End of 'ReadDriver includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgReadDriver Function ReadDriver
//@{
///        \page dxpReadDriver
//@{
///    \brief ReadDriver function model start
class cfm_readdriver: public cf_core::cf_function, public cfm_readdriver_dp_if {
public:
	/// cfm_readdriver type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_readdriver, cft_defaraddrchn> p_mq_ARADDRin_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_readdriver,
			cft_defmemreadrequest> p_mq_MemReadRequest_t;
	/// cfm_readdriver type define end

	/// constructor
	cfm_readdriver(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_readdriver(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_ARADDRin_t p_mq_ARADDRin;
	p_mq_MemReadRequest_t p_mq_MemReadRequest;
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
	//Start of 'ReadDriver local declarations' algorithm generated code
	int burstLength;
	float startTime;
	int address;
	int ID;
	int size;
	bool First;
	long RdInitDuration;
	int myIndex;
	//End of 'ReadDriver local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief ReadDriver function model end

//@}
//@}
#endif // COFS_MODEL_DDRMEMORY_READDRIVER

//<#!@READ-ONLY-SECTION-END@!#>