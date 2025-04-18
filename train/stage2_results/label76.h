//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_cof_initiator
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of CoFluentAPIFromExternalIP generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_COFLUENTAPIFROMEXTERNALIP_COF_INITIATOR
#define COFS_MODEL_COFLUENTAPIFROMEXTERNALIP_COF_INITIATOR

/// Model Header includes start
#include "cfm_cofluentapifromexternalip_global.h"
#include "cfm_cofluentapifromexternalip_global_types.h"
#include "cofluent.h"
//set of dataType, sort alphabetically
#include "dt/cft_defmsgq.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'CoF_Initiator includes' algorithm generated code

//End of 'CoF_Initiator includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgCoF_Initiator Function CoF_Initiator
//@{
///        \page dxpCoF_Initiator
//@{
///    \brief CoF_Initiator function model start
class cfm_cof_initiator: public cf_core::cf_function {
public:
	/// cfm_cof_initiator type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_cof_initiator, cft_defmsgq> p_mq_MsgBwQ_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_cof_initiator, cft_defmsgq> p_mq_MsgFwQ_t;
	/// cfm_cof_initiator type define end

	/// constructor
	cfm_cof_initiator(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_cof_initiator(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_MsgBwQ_t p_mq_MsgBwQ;
	p_mq_MsgFwQ_t p_mq_MsgFwQ;
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
	//Start of 'CoF_Initiator local declarations' algorithm generated code

	//End of 'CoF_Initiator local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief CoF_Initiator function model end

//@}
//@}
#endif // COFS_MODEL_COFLUENTAPIFROMEXTERNALIP_COF_INITIATOR

//<#!@READ-ONLY-SECTION-END@!#>