


#include "cfm_requesting_global.h"
#include "cfm_requesting_global_types.h"
#include <vector>
#include "cofluent.h"
#include "dt/cft_defcall_in.h"

class cfm_requesting : public cf_core::cf_function {
public:


/// constructor
cfm_requesting(sc_core::sc_module_name name);

/// destructor
virtual ~cfm_requesting(void);


protected:
void cb_init_attributes(void);
void cb_init_local_vars(void);

public:
};
#endif
//<#!@READ-ONLY-SECTION-START@!#>
//End of 'Requesting definitions' algorithm generated code

//Start of 'Requesting definitions' algorithm generated code
//End of 'Requesting definitions' algorithm generated code

/// \name constructor
//@{
cfm_requesting ::cfm_requesting() : 
//instantiation of non-vector Event, MessageQueue, SharedVariable
cf_function(){
cf_function::init();
//connections
cf_function::elab_end();
}
//@}

/// \name destructor
//@{
cfm_requesting::~cfm_requesting(void) {
//Start of 'Requesting destructor' algorithm generated code

//End of 'Requesting destructor' algorithm generated code
}
}


//@{
void cfm_requesting::cb_init_attributes(void) {

// initialize function attributes

	return;
}
//@}

//@{
void cfm_requesting::cb_init_local_vars(void) {

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'Router25 initializations' algorithm generated code

	//End of 'Router25 initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}
//<#!@READ-ONLY-SECTION-END@!#>