

/// constructor
cf_core::cf_application2app(sc_core::sc_module_name name);

/// destructor
virtual ~cf_core::cf_application2app(void);

cfm_f1 *F1;
cfm_f2 *F2;

protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
};
#endif
//<#!@READ-ONLY-SECTION-START@!#>
//End of 'Inheritance_example2App definitions' algorithm generated code

/// \name constructor
//@{
cf_core::cf_application2app ::cf_core::cf_application2app() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_application(){
cf_application::init();
//instantiation of models
F1 = new cfm_f1("F1");
F2 = new cfm_f2("F2");
//connections
cf_application::elab_end();
}
//@}

/// \name destructor
//@{
cf_core::cf_application2app::~cf_core::cf_application2app(void) {
//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'Inheritance_example2App destructor' algorithm generated code

/// End of 'Inheritance_example2App destructor' algorithm generated code
}
}


//@{
void cfm_inheritance_example2app::cb_init_attributes() {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_inheritance_example2app::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>