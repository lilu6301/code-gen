
public:
typedef cofluent::mq_initiator_socket<cfm_applicationvectordatatype, cf_core::cf_payload_int> p_mq_applicationvectordatatype_t;
typedef cofluent::mq_initiator_socket<cfm_applicationvectordatatype, cf_core::cf_payload_int> p_mq_default_in_t;
typedef cofluent::mq_initiator_socket<cfm_applicationvectordatatype, cf_core::cf_payload_int> p_mq_default_out_t;

/// constructor
cfm_applicationvectordatatype(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_applicationvectordatatype(void);

p_mq_applicationvectordatatype_t p_mq_applicationvectordatatype;
p_mq_default_in_t p_mq_default_in;
p_mq_default_out_t p_mq_default_out;

cfm_consumer *Consumer;
cfm_processing *Processing;
cfm_producer *Producer;

protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
mq_user_data_in_t mq_user_data_in;
mq_user_data_out_t mq_user_data_out;
};
#endif
//<#!@READ-ONLY-SECTION-START@!#>
//End of 'ApplicationVectorDataType definitions' algorithm generated code

/// \name constructor
//@{
cfm_applicationvectordatatype ::cfm_applicationvectordatatype() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_application(),mq_user_data_in("user_data_in"),mq_user_data_out("user_data_out"){
cf_application::init();
//instantiation of models
Consumer = new cfm_consumer("Consumer");
Processing = new cfm_processing("Processing");
Producer = new cfm_producer("Producer");
//connections
//model connect to relation
Consumer->p_mq_user_data_out(mq_user_data_out.p_target_socket);
//model connect to relation
Processing->p_mq_user_data_in(mq_user_data_in.p_target_socket);
Processing->p_mq_user_data_out(mq_user_data_out.p_target_socket);
//model connect to relation
Producer->p_mq_user_data_in(mq_user_data_in.p_target_socket);
cf_application::elab_end();
}
//@}

/// \name destructor
//@{
cfm_applicationvectordatatype::~cfm_applicationvectordatatype(void) {
//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'ApplicationVectorDataType destructor' algorithm generated code

/// End of 'ApplicationVectorDataType destructor' algorithm generated code
for (vector<cfm_applicationvectordatatype*>::const_iterator vi =
//deconstruct for models
delete Consumer;
delete Processing;
delete Producer;
}


//@{
void cfm_applicationvectordatatype::cb_init_attributes() {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_applicationvectordatatype::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>