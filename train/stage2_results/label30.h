//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_videoapplication
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of SoftwareDefinedRadioApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_VIDEOAPPLICATION
#define COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_VIDEOAPPLICATION

/// Model Header includes start
#include "cfm_softwaredefinedradioapp_global.h"
#include "cfm_softwaredefinedradioapp_global_types.h"
#include "cofluent.h"
#include "dp/cfm_videoapplication_dp_if.h"
//set of dataType, sort alphabetically
#include "dt/cft_defvideo.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'VideoApplication includes' algorithm generated code

//End of 'VideoApplication includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgVideoApplication Function VideoApplication
//@{
///        \page dxpVideoApplication
//@{
///    \brief VideoApplication function model start
class cfm_videoapplication: public cf_core::cf_function,
		public cfm_videoapplication_dp_if {
public:
	/// cfm_videoapplication type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_videoapplication, cft_defvideo> p_mq_RTPToApp_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_videoapplication, cft_defvideo> p_mq_Video_t;
	/// cfm_videoapplication type define end

	/// constructor
	cfm_videoapplication(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_videoapplication(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_RTPToApp_t p_mq_RTPToApp;
	p_mq_Video_t p_mq_Video;
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
	//Start of 'VideoApplication local declarations' algorithm generated code
	cf_dt::cf_data_size SizeFrame;
	//End of 'VideoApplication local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief VideoApplication function model end

//@}
//@}
#endif // COFS_MODEL_SOFTWAREDEFINEDRADIOAPP_VIDEOAPPLICATION

//<#!@READ-ONLY-SECTION-END@!#>