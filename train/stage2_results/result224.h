
//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_outbounddatacenterswitch
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of datacenter generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_DATACENTER_OUTBOUNDDATACENTERSWITCH
#define COFS_MODEL_DATACENTER_OUTBOUNDDATACENTERSWITCH

/// Model Header includes start
#include "cfm_datacenter_global.h"
#include "cfm_datacenter_global_types.h"
#include "cofluent.h"
#include "dp/cfm_outbounddatacenterswitch_dp_if.h"
//set of dataType, sort alphabetically
#include "dt/cft_defpacket.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'OutboundDataCenterSwitch includes' algorithm generated code

//End of 'OutboundDataCenterSwitch includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgOutboundDataCenterSwitch Function OutboundDataCenterSwitch
//@{
///        \page dxpOutboundDataCenterSwitch
//@{
///    \brief OutboundDataCenterSwitch function model start
class cfm_outbounddatacenterswitch: public cf_core::cf_function,
		public cfm_outbounddatacenterswitch_dp_if {
public:
	/// cfm_outbounddatacenterswitch type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_outbounddatacenterswitch,
			cft_defpacket> p_mq_MsgQOutboundDataCenterSwitch_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_outbounddatacenterswitch,
			cft_defpacket> p_mq_MsgQToDataCenterSwitch_t;
	/// cfm_outbounddatacenterswitch type define end

	/// constructor
	cfm_outbounddatacenterswitch(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_outbounddatacenterswitch(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_MsgQOutboundDataCenterSwitch_t p_mq_MsgQOutboundDataCenterSwitch;
	p_mq_MsgQToDataCenterSwitch_t p_mq_MsgQToDataCenterSwitch;
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
	//Start of 'OutboundDataCenterSwitch local declarations' algorithm generated code
	int server_room_id;
	//End of 'OutboundDataCenterSwitch local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief OutboundDataCenterSwitch function model end

//@}
//@}
#endif // COFS_MODEL_DATACENTER_OUTBOUNDDATACENTERSWITCH

//<#!@READ-ONLY-SECTION-END@!#>