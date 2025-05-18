


#include "cfm_p2_global.h"
#include "cfm_p2_global_types.h"
#include <vector>
#include "cofluent.h"

class cfm_p2 : public cf_core::cf_function {
public:


/// constructor
cfm_p2(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_p2(void);


protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
};
#endif
//<#!@READ-ONLY-SECTION-START@!#>
//End of 'P2 definitions' algorithm generated code

//Start of 'P2 definitions' algorithm generated code
//End of 'P2 definitions' algorithm generated code

/// \name constructor
//@{
cfm_p2 ::cfm_p2() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_function(){
cf_function::init();
//connections
cf_function::elab_end();
}
//@}

/// \name destructor
//@{
cfm_p2::~cfm_p2(void) {
//Start of 'P2 destructor' algorithm generated code

//End of 'P2 destructor' algorithm generated code
}
}


//@{
void cfm_p2::cb_init_attributes() {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_p2::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>