//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_cofluentapifromexternalip
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of CoFluentAPIFromExternalIP generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_COFLUENTAPIFROMEXTERNALIP
#define COFS_MODEL_COFLUENTAPIFROMEXTERNALIP

/// Model Header includes start
#include "cfm_cofluentapifromexternalip_global.h"
#include "cfm_cofluentapifromexternalip_global_types.h"
#include "cofluent.h"
#include "Uart.h"
#include "cfm_cof_initiator.h"
//set of dataType, sort alphabetically
#include "dt/cft_defmsgq.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'CoFluentAPIFromExternalIP includes' algorithm generated code

//End of 'CoFluentAPIFromExternalIP includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgCoFluentAPIFromExternalIP Function CoFluentAPIFromExternalIP
//@{
///        \page dxpCoFluentAPIFromExternalIP
//@{
///    \brief CoFluentAPIFromExternalIP function model start
class cfm_cofluentapifromexternalip: public cf_core::cf_application {
public:
	/// cfm_cofluentapifromexternalip type define start
	/// systemC IPs typedef
	typedef Uart iUart_t;
	/// relations typedef
//set of relation, sort alphabetically. format: cf_type<dataType> relation_name
	typedef cf_core::cf_message_queue<cft_defmsgq> mq_MsgBwQ_t;
	typedef cf_core::cf_message_queue<cft_defmsgq> mq_MsgFwQ_t;

	/// cfm_cofluentapifromexternalip type define end

	/// constructor
	cfm_cofluentapifromexternalip(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_cofluentapifromexternalip(void);
	virtual void cb_before_elaboration(void);

	void cb_end_of_elaboration(void);
	void cb_end_of_simulation(void);

public:
	/// \name functions
	//@{
//set of model, sort alphabetically. format: model_type* model_name
	cfm_cof_initiator* CoF_Initiator;
	iUart_t* iUart;
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
	mq_MsgBwQ_t mq_MsgBwQ;
	mq_MsgFwQ_t mq_MsgFwQ;
	//@}

	/// Model private fields start
	/// Model private fields end

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'CoFluentAPIFromExternalIP local declarations' algorithm generated code

	//End of 'CoFluentAPIFromExternalIP local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief CoFluentAPIFromExternalIP function model end

//@}
//@}
#endif // COFS_MODEL_COFLUENTAPIFROMEXTERNALIP

//<#!@READ-ONLY-SECTION-END@!#>