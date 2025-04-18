//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_receiverrdata
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of DDRMemory generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_DDRMEMORY_RECEIVERRDATA
#define COFS_MODEL_DDRMEMORY_RECEIVERRDATA

/// Model Header includes start
#include "cfm_ddrmemory_global.h"
#include "cfm_ddrmemory_global_types.h"
#include "cofluent.h"
#include "dp/cfm_receiverrdata_dp_if.h"
//set of dataType, sort alphabetically
#include "dt/cft_defrdatachn.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'ReceiverRData includes' algorithm generated code

//End of 'ReceiverRData includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgReceiverRData Function ReceiverRData
//@{
///        \page dxpReceiverRData
//@{
///    \brief ReceiverRData function model start
class cfm_receiverrdata: public cf_core::cf_function,
		public cfm_receiverrdata_dp_if {
public:
	/// cfm_receiverrdata type define start

	/// ports typedef
//set of port, sort alphabetically, format: cf_type<dataType> port_name
	typedef cf_core::cf_mq_initiator_socket<cfm_receiverrdata, cft_defrdatachn> p_mq_RDATAin_t;
	/// cfm_receiverrdata type define end

	/// constructor
	cfm_receiverrdata(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_receiverrdata(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	/// \name input/output ports
	//@{
//set of port, sort alphabetically. format: port_type port_name
	p_mq_RDATAin_t p_mq_RDATAin;
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
	//Start of 'ReceiverRData local declarations' algorithm generated code
	int burstLength;
	int myIndex;
	long ReceiveInitDuration;
	float startTime;
	float ReadLatency;
	int NbDataTransfer;
	int RemainingDataTransfer;
	//End of 'ReceiverRData local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief ReceiverRData function model end

//@}
//@}
#endif // COFS_MODEL_DDRMEMORY_RECEIVERRDATA

//<#!@READ-ONLY-SECTION-END@!#>