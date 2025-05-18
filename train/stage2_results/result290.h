


#include "cfm_producer_global.h"
#include "cfm_producer_global_types.h"
#include <vector>
#include "cofluent.h"

class cfm_producer : public cf_core::cf_function {
public:


/// constructor
cfm_producer(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_producer(void);


protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
};
#endif
//<#!@READ-ONLY-SECTION-START@!#>
//End of 'Producer definitions' algorithm generated code

//Start of 'Producer definitions' algorithm generated code

/// \name constructor
//@{
cfm_producer ::cfm_producer() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_function(){
cf_function::init();
//connections
cf_function::elab_end();
}
//@}

/// \name destructor
//@{
cfm_producer::~cfm_producer(void) {
//Start of 'Producer destructor' algorithm generated code

//End of 'Producer destructor' algorithm generated code
}
}


//@{
void cfm_producer::cb_init_attributes(void) {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_producer::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>