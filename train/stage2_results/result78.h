
//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_transactiontrackermsgqapp
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of TransactionTrackerMsgQApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_TRANSACTIONTRACKERMSGQAPP
#define COFS_MODEL_TRANSACTIONTRACKERMSGQAPP

/// Model Header includes start
#include "cfm_transactiontrackermsgqapp_global.h"
#include "cfm_transactiontrackermsgqapp_global_types.h"
#include "cofluent.h"
#include "cfm_consumer1.h"
#include "cfm_consumer2.h"
#include "cfm_messagerouting.h"
#include "cfm_producer.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'TransactionTrackerMsgQApp includes' algorithm generated code

//End of 'TransactionTrackerMsgQApp includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgTransactionTrackerMsgQApp Function TransactionTrackerMsgQApp
//@{
///        \page dxpTransactionTrackerMsgQApp
//@{
///    \brief TransactionTrackerMsgQApp function model start
class cfm_transactiontrackermsgqapp: public cf_core::cf_application {
public:
	/// cfm_transactiontrackermsgqapp type define start
	/// relations typedef
//set of relation, sort alphabetically. format: cf_type<dataType> relation_name
	typedef cf_core::cf_message_queue<cf_core::cf_payload_int> mq_MsgQIn_t;
	typedef cf_core::cf_message_queue<cf_core::cf_payload_int> mq_MsgQOut1_t;
	typedef cf_core::cf_message_queue<cf_core::cf_payload_int> mq_MsgQOut2_t;

	/// cfm_transactiontrackermsgqapp type define end

	/// constructor
	cfm_transactiontrackermsgqapp(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_transactiontrackermsgqapp(void);
	virtual void cb_before_elaboration(void);

	void cb_end_of_elaboration(void);
	void cb_end_of_simulation(void);

public:
	/// \name functions
	//@{
//set of model, sort alphabetically. format: model_type* model_name
	cfm_consumer1* Consumer1;
	cfm_consumer2* Consumer2;
	cfm_messagerouting* MessageRouting;
	cfm_producer* Producer;
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
	mq_MsgQIn_t mq_MsgQIn;
	mq_MsgQOut1_t mq_MsgQOut1;
	mq_MsgQOut2_t mq_MsgQOut2;
	//@}

	/// Model private fields start
	/// Model private fields end

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'TransactionTrackerMsgQApp local declarations' algorithm generated code

	//End of 'TransactionTrackerMsgQApp local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief TransactionTrackerMsgQApp function model end

//@}
//@}
#endif // COFS_MODEL_TRANSACTIONTRACKERMSGQAPP

//<#!@READ-ONLY-SECTION-END@!#>