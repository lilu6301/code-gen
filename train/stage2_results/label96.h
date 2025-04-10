/*!
 * \class cfm_protocolreceive
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of ProtocolMapDataTypeApp generated by C++ Generator for SystemC/TLM2
 */
#ifndef COFS_MODEL_PROTOCOLMAPDATATYPEAPP_PROTOCOLRECEIVE
#define COFS_MODEL_PROTOCOLMAPDATATYPEAPP_PROTOCOLRECEIVE

#include "cfm_protocolmapdatatypeapp_global.h"
#include "cfm_protocolmapdatatypeapp_global_types.h"
#include "cofluent.h"



class cfm_protocolreceive: public cf_core::cf_function {
public:

	typedef cf_core::cf_mq_initiator_socket<cfm_protocolreceive, cf_core::cf_payload_map> p_mq_protocol_data_t;
	typedef cf_core::cf_mq_initiator_socket<cfm_protocolreceive, cf_core::cf_payload_map> p_mq_user_data_out_t;

	cfm_protocolreceive(sc_core::sc_module_name name);

	virtual ~cfm_protocolreceive(void);
	virtual void cb_before_elaboration(void);
	virtual void cb_end_of_elaboration(void);
	virtual void cb_end_of_simulation(void);

public:
	p_mq_protocol_data_t p_mq_protocol_data;
	p_mq_user_data_out_t p_mq_user_data_out;

protected:
	void cb_init_attributes(void);
	void cb_init_local_vars(void);


	int number_of_packets;

};

#endif // COFS_MODEL_PROTOCOLMAPDATATYPEAPP_PROTOCOLRECEIVE

