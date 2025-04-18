
//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_packet_process
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of MyModel generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_MYMODEL_PACKET_PROCESS
#define COFS_MODEL_MYMODEL_PACKET_PROCESS

/// Model Header includes start
#include "cfm_mymodel_global.h"
#include "cfm_mymodel_global_types.h"
#include "cofluent.h"
#include "dp/cfm_packet_process_dp_if.h"
//set of dataType, sort alphabetically
#include "dt/cft_defpacket.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'packet_process includes' algorithm generated code

//End of 'packet_process includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgpacket_process Function packet_process
//@{
///        \page dxppacket_process
//@{
///    \brief packet_process function model start
class cfm_packet_process: public cf_core::cf_function,
		public cfm_packet_process_dp_if {
public:
	/// cfm_packet_process type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_packet_process, cft_defpacket> p_mq_p_in_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_packet_process, cft_defpacket> p_mq_p_out_t;
	/// cfm_packet_process type define end

	/// constructor
	cfm_packet_process(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_packet_process(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_p_in_t p_mq_p_in;
	p_mq_p_out_t p_mq_p_out;
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
	//Start of 'packet_process local declarations' algorithm generated code

	//End of 'packet_process local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief packet_process function model end

//@}
//@}
#endif // COFS_MODEL_MYMODEL_PACKET_PROCESS

//<#!@READ-ONLY-SECTION-END@!#>