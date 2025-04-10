
/*
 * \class cfm_hwmodel
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of CompleteDevice generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_hwmodel.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_device
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_hwmodel
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

void cfm_hwmodel::revert_frame() {

	/* Reverting the image means that Pixel 0 becomes Pixel N-1, where N is the frame size (in Pixels)
	 * In YUV 422 format, it implies to:
	 *   - Revert the Y table, located at offset 0
	 *   - Revert the U table, located at offset N
	 *   - Revert the V table, located at offset N*1.5
	 */
	byte* outpayload = outputFrame.payload;
	byte* inpayload = inputFrame.payload;

	int offsetU = (int) (NbPixelsPerLineMax * NbLinesMax);
	int offsetV = (int) (NbPixelsPerLineMax * NbLinesMax * 1.5);

	int pixel_0 = 0;
	int pixel_N = NbPixelsPerLineMax * NbLinesMax;
	int pixel_Nb = 0;

	int line_0 = 0;
	int line_N = NbLinesMax;
	int line_Nb = 0;

	int frame_0 = 0;
	int frame_N = NbPixelsPerLineMax * NbLinesMax * 1;
	int frame_Nb = 0;

	int processing_mode = 0;

	int num_of_dma_msg_pendingin_queue = 0;
	int num_of_write_msg_pendingin_queue = 0;
	int num_of_read_msg_pendingin_queue = 0;

	int num_of_dma_msg_pendingin_queue_1 = 0;
	int num_of_dma_msg_pendingin_queue_2 = 0;
	int num_of_write_msg_pendingin_queue_1 = 0;
	int num_of_write_msg_pendingin_queue_2 = 0;
	int num_of_read_msg_pendingin_queue_1 = 0;
	int num_of_read_msg_pendingin_queue_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1 = 0;
	int num_of_write_msg_pendingin_queue_2_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1 = 0;
	int num_of_read_msg_pendingin_queue_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_2_1 = 0;
	int num_of_write_msg_pendingin_queue_1_2_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_2_1 = 0;
	int num_of_read_msg_pendingin_queue_1_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_2_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_2_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_2_1 = 0;
	int num_of_write_msg_pendingin_queue_2_2_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2 = 0;
	int num_of_read_msg_pendingin_queue_2_2_1 = 0;
	int num_of_read_msg_pendingin_queue_2_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_2 = 0;

	int num_of_dma_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_2 = 0;

	int num_of_dma_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_2 = 0;

	int num_of_dma_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_2 = 0;

	int num_of_dma_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_2 = 0;

	int num_of_dma_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_2 = 0;

	int num_of_dma_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_2 = 0;

	int num_of_dma_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_2 = 0;

	int num_of_dma_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_read_msg_pendingin_queue_2_1_2_2 = 0;

	int num_of_dma_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_write_msg_pendingin_queue_1_1_2_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_1_1_2 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_1 = 0;
	int num_of_read_msg_pendingin_queue_1_1_2_1_2 = 0;

	int num_of_dma_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of_dma_msg_pendingin_queue_2_1_2_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_1 = 0;
	int num_of_write_msg_pendingin_queue_2_1_1_2 = 0;
	int num_of_write_msg_pendingin_queue_2_1_2_1 = 0;
	int num_of