//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_datacenter
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of datacenter generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_DATACENTER
#define COFS_MODEL_DATACENTER

/// Model Header includes start
#include <vector>
#include "cfm_datacenter_global.h"
#include "cfm_datacenter_global_types.h"
#include "cofluent.h"
#include "dp/cfm_datacenter_dp_if.h"
#include "cfm_datacenterswitch.h"
#include "cfm_serverroom.h"
//set of dataType, sort alphabetically
#include "dt/cft_defpacket.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'datacenter includes' algorithm generated code
#include <chrono>
//End of 'datacenter includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgdatacenter Function datacenter
//@{
///        \page dxpdatacenter
//@{
///    \brief datacenter function model start
class cfm_datacenter: public cf_core::cf_application,
		public cfm_datacenter_dp_if {
public:
	/// cfm_datacenter type define start
	/// relations typedef
//set of relation, sort alphabetically. format: cf_type<dataType> relation_name
	typedef cf_core::cf_message_queue<cft_defpacket> mq_MsgQToDataCenterSwitch_t;
	typedef cf_core::cf_message_queue<cft_defpacket> mq_MsgQToServerRoom_t;

	/// cfm_datacenter type define end

	/// constructor
	cfm_datacenter(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_datacenter(void);
	virtual void cb_before_elaboration(void);

	void cb_end_of_elaboration(void);
	void cb_end_of_simulation(void);

public:
	/// \name functions
	//@{
//set of model, sort alphabetically. format: model_type* model_name
	cfm_datacenterswitch* DataCenterSwitch;
	std::vector<cfm_serverroom*> ServerRoom_vec;
	//@}

public:
	/// Overload function for mq_MsgQToDataCenterSwitch message queue send time
	cf_dt::cf_duration mq_MsgQToDataCenterSwitch_cb_send_time(
			cf_core::cf_payload_b* _trans);
	/// Overload function for mq_MsgQToDataCenterSwitch message queue receive time
	cf_dt::cf_duration mq_MsgQToDataCenterSwitch_cb_receive_time(
			cf_core::cf_payload_b* _trans);
	/// Overload function for mq_MsgQToServerRoom message queue send time
	cf_dt::cf_duration mq_MsgQToServerRoom_cb_send_time(
			cf_core::cf_payload_b* _trans);
	/// Overload function for mq_MsgQToServerRoom message queue receive time
	cf_dt::cf_duration mq_MsgQToServerRoom_cb_receive_time(
			cf_core::cf_payload_b* _trans);

protected:
	/// initialize attributes
	void cb_init_attributes(void);
	/// initialize definitions
	void cb_init_local_vars(void);

public:
	/// \name relations
	//@{
//set of relation, sort alphabetically. format: relation_type relation_name
	std::vector<mq_MsgQToDataCenterSwitch_t*> mq_MsgQToDataCenterSwitch_vec;
	std::vector<mq_MsgQToServerRoom_t*> mq_MsgQToServerRoom_vec;
	//@}

	/// Model private fields start
	/// Model private fields end

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'datacenter local declarations' algorithm generated code
	std::chrono::high_resolution_clock::time_point t_start;
	//End of 'datacenter local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief datacenter function model end

//@}
//@}
#endif // COFS_MODEL_DATACENTER

//<#!@READ-ONLY-SECTION-END@!#>