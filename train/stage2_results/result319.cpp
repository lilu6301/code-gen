
/*
 * \class cfm_hwtestbench
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of HwDeviceModel generated by C++ Generator for SystemC/TLM2
 */
#include "cfm_hwtestbench.h"
#ifdef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#undef COFLUENT_CONTAINER_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_CONTAINER_FUNCTION_CLASS_NAME cfm_hwdevicemodel
#ifdef COFLUENT_SELF_FUNCTION_CLASS_NAME
#undef COFLUENT_SELF_FUNCTION_CLASS_NAME
#endif
#define COFLUENT_SELF_FUNCTION_CLASS_NAME cfm_hwtestbench
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

void cfm_hwtestbench::revert_frame() {

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

	int device_mode = 0;
	int processing_mode = 0;

	int input_stream = 0;
	int output_stream = 0;

	int hw_testbench_id = 0;

	int num_of_dma_msg_pendingin_queue = 0;
	int num_of_read_msg_pendingin_queue = 0;
	int num_of_write_msg_pendingin_queue = 0;

	int num_of_dma_msg_pendingin_queue_1 = 0;
	int num_of_dma_msg_pendingin_queue_2 = 0;
	int num_of_write_msg_pendingin_queue_1 = 0;
	int num_of_write_msg_pendingin_queue_2 = 0;

	int num_of_dma_msg_pendingin_queue_3 = 0;
	int num_of_dma_msg_pendingin_queue_4 = 0;
	int num_of_write_msg_pendingin_queue_3 = 0;
	int num_of_write_msg_pendingin_queue_4 = 0;

	int num_of_dma_msg_pendingin_queue_5 = 0;
	int num_of_dma_msg_pendingin_queue_6 = 0;
	int num_of_write_msg_pendingin_queue_5 = 0;
	int num_of_write_msg_pendingin_queue_6 = 0;

	int num_of_dma_msg_pendingin_queue_7 = 0;
	int num_of_dma_msg_pendingin_queue_8 = 0;
	int num_of_write_msg_pendingin_queue_7 = 0;
	int num_of_write_msg_pendingin_queue_8 = 0;

	int num_of_dma_msg_pendingin_queue_9 = 0;
	int num_of_dma_msg_pendingin_queue_10 = 0;
	int num_of_write_msg_pendingin_queue_9 = 0;
	int num_of_write_msg_pendingin_queue_10 = 0;

	int num_of_dma_msg_pendingin_queue_11 = 0;
	int num_of_dma_msg_pendingin_queue_12 = 0;
	int num_of_write_msg_pendingin_queue_11 = 0;
	int num_of_write_msg_pendingin_queue_12 = 0;

	int num_of_dma_msg_pendingin_queue_13 = 0;
	int num_of_dma_msg_pendingin_queue_14 = 0;
	int num_of_write_msg_pendingin_queue_13 = 0;
	int num_of_write_msg_pendingin_queue_14 = 0;

	int num_of_dma_msg_pendingin_queue_15 = 0;
	int num_of_dma_msg_pendingin_queue_16 = 0;
	int num_of_write_msg_pendingin_queue_15 = 0;
	int num_of_write_msg_pendingin_queue_16 = 0;

	int num_of_dma_msg_pendingin_queue_17 = 0;
	int num_of_dma_msg_pendingin_queue_18 = 0;
	int num_of_write_msg_pendingin_queue_17 = 0;
	int num_of_write_msg_pendingin_queue_18 = 0;

	int num_of_dma_msg_pendingin_queue_19 = 0;
	int num_of_dma_msg_pendingin_queue_20 = 0;
	int num_of_write_msg_pendingin_queue_19 = 0;
	int num_of_write_msg_pendingin_queue_20 = 0;

	int num_of_dma_msg_pendingin_queue_21 = 0;
	int num_of_dma_msg_pendingin_queue_22 = 0;
	int num_of_write_msg_pendingin_queue_21 = 0;
	int num_of_write_msg_pendingin_queue_22 = 0;

	int num_of_dma_msg_pendingin_queue_23 = 0;
	int num_of_dma_msg_pendingin_queue_24 = 0;
	int num_of_write_msg_pendingin_queue_23 = 0;
	int num_of_write_msg_pendingin_queue_24 = 0;

	int num_of_dma_msg_pendingin_queue_25 = 0;
	int num_of_dma_msg_pendingin_queue_26 = 0;
	int num_of_write_msg_pendingin_queue_25 = 0;
	int num_of_write_msg_pendingin_queue_26 = 0;

	int num_of_dma_msg_pendingin_queue_27 = 0;
	int num_of_dma_msg_pendingin_queue_28 = 0;
	int num_of_write_msg_pendingin_queue_27 = 0;
	int num_of_write_msg_pendingin_queue_28 = 0;

	int num_of_dma_msg_pendingin_queue_29 = 0;
	int num_of_dma_msg_pendingin_queue_30 = 0;
	int num_of_write_msg_pendingin_queue_29 = 0;
	int num_of_write_msg_pendingin_queue_30 = 0;

	int num_of_dma_msg_pendingin_queue_31 = 0;
	int num_of_dma_msg_pendingin_queue_32 = 0;
	int num_of_write_msg_pendingin_queue_31 = 0;
	int num_of_write_msg_pendingin_queue_32 = 0;

	int num_of_dma_msg_pendingin_queue_33 = 0;
	int num_of_dma_msg_pendingin_queue_34 = 0;
	int num_of_write_msg_pendingin_queue_33 = 0;
	int num_of_write_msg_pendingin_queue_34 = 0;

	int num_of_dma_msg_pendingin_queue_35 = 0;
	int num_of_dma_msg_pendingin_queue_36 = 0;
	int num_of_write_msg_pendingin_queue_35 = 0;
	int num_of_write_msg_pendingin_queue_36 = 0;

	int num_of_dma_msg_pendingin_queue_37 = 0;
	int num_of_dma_msg_pendingin_queue_38 = 0;
	int num_of_write_msg_pendingin_queue_37 = 0;
	int num_of_write_msg_pendingin_queue_38 = 0;

	int num_of_dma_msg_pendingin_queue_39 = 0;
	int num_of_dma_msg_pendingin_queue_40 = 0;
	int num_of_write_msg_pendingin_queue_39 = 0;
	int num_of_write_msg_pendingin_queue_40 = 0;

	int num_of_dma_msg_pendingin_queue_41 = 0;
	int num_of_dma_msg_pendingin_queue_42 = 0;
	int num_of_write_msg_pendingin_queue_41 = 0;
	int num_of_write_msg_pendingin_queue_42 = 0;

	int num_of_dma_msg_pendingin_queue_43 = 0;
	int num_of_dma_msg_pendingin_queue_44 = 0;
	int num_of_write_msg_pendingin_queue_43 = 0;
	int num_of_write_msg_pendingin_queue_44 = 0;

	int num_of_dma_msg_pendingin_queue_45 = 0;
	int num_of_dma_msg_pendingin_queue_46 = 0;
	int num_of_write_msg_pendingin_queue_45 = 0;
	int num_of_write_msg_pendingin_queue_46 = 0;

	int num_of_dma_msg_pendingin_queue_47 = 0;
	int num_of_dma_msg_pendingin_queue_48 = 0;
	int num_of_write_msg_pendingin_queue_47 = 0;
	int num_of_write_msg_pendingin_queue_48 = 0;

	int num_of_dma_msg_pendingin_queue_49 = 0;
	int num_of_dma_msg_pendingin_queue_50 = 0;
	int num_of_write_msg_pendingin_queue_49 = 0;
	int num_of_write_msg_pendingin_queue_50 = 0;

	int num_of_dma_msg_pendingin_queue_51 = 0;
	int num_of_dma_msg_pendingin_queue_52 = 0;
	int num_of_write_msg_pendingin_queue_51 = 0;
	int num_of_write_msg_pendingin_queue_52 = 0;

	int num_of_dma_msg_pendingin_queue_53 = 0;
	int num_of_dma_msg_pendingin_queue_54 = 0;
	int num_of_write_msg_pendingin_queue_53 = 0;
	int num_of_write_msg_pendingin_queue_54 = 0;

	int num_of_dma_msg_pendingin_queue_55 = 0;
	int num_of_dma_msg_pendingin_queue_56 = 0;
	int num_of_write_msg_pendingin_queue_55 = 0;
	int num_of_write_msg_pendingin_queue_56 = 0;

	int num_of_dma_msg_pendingin_queue_57 = 0;
	int num_of_dma_msg_pendingin_queue_58 = 0;
	int num_of_write_msg_pendingin_queue_57 = 0;
	int num_of_write_msg_pendingin_queue_58 = 0;

	int num_of_dma_msg_pendingin_queue_59 = 0;
	int num_of_dma_msg_pendingin_queue_60 = 0;
	int num_of_write_msg_pendingin_queue_59 = 0;
	int num_of_write_msg_pendingin_queue_60 = 0;

	int num_of_dma_msg_pendingin_queue_61 = 0;
	int num_of_dma_msg_pendingin_queue_62 = 0;
	int num_of_write_msg_pendingin_queue_61 = 0;
	int num_of_write_msg_pendingin_queue_62 = 0;

	int num_of_dma_msg_pendingin_queue_63 = 0;
	int num_of_dma_msg_pendingin_queue_64 = 0;
	int num_of_write_msg_pendingin_queue_63 = 0;
	int num_of_write_msg_pendingin_queue_64 = 0;

	int num_of_dma_msg_pendingin_queue_65 = 0;
	int num_of_dma_msg_pendingin_queue_66 = 0;
	int num_of_write_msg_pendingin_queue_65 = 0;
	int num_of_write_msg_pendingin_queue_66 = 0;

	int num_of_dma_msg_pendingin_queue_67 = 0;
	int num_of_dma_msg_pendingin_queue_68 = 0;
	int num_of_write_msg_pendingin_queue_67 = 0;
	int num_of_write_msg_pendingin_queue_68 = 0;

	int num_of_dma_msg_pendingin_queue_69 = 0;
	int num_of_dma_msg_pendingin_queue_70 = 0;
	int num_of_write_msg_pendingin_queue_69 = 0;
	int num_of_write_msg_pendingin_queue_70 = 0;

	int num_of_dma_msg_pendingin_queue_71 = 0;
	int num_of_dma_msg_pendingin_queue_72 = 0;
	int num_of_write_msg_pendingin_queue_71 = 0;
	int num_of_write_msg_pendingin_queue_72 = 0;

	int num_of_dma_msg_pendingin_queue_73 = 0;
	int num_of_dma_msg_pendingin_queue_74 = 0;
	int num_of_write_msg_pendingin_queue_73 = 0;
	int num_of_write_msg_pendingin_queue_74 = 0;

	int num_of_dma_msg_pendingin_queue_75 = 0;
	int num_of_dma_msg_pendingin_queue_76 = 0;
	int num_of_write_msg_pendingin_queue_75 = 0;
	int num_of_write_msg_pendingin_queue_76 = 0;

	int num_of_dma_msg_pendingin_queue_77 = 0;
	int num_of_dma_msg_pendingin_queue_78 = 0;
	int num_of_write_msg_pendingin_queue_77 = 0;
	int num_of_write_msg_pendingin_queue_78 = 0;

	int num_of_dma_msg_pendingin_queue_79 = 0;
	int num_of_dma_msg_pendingin_queue_80 = 0;
	int num_of_write_msg_pendingin_queue_79 = 0;
	int num_of_write_msg_pendingin_queue_80 = 0;

	int num_of_dma_msg_pendingin_queue_81 = 0;
	int num_of_dma_msg_pendingin_queue_82 = 0;
	int num_of_write_msg_pendingin_queue_81 = 0;
	int num_of_write_msg_pendingin_queue_82 = 0;

	int num_of_dma_msg_pendingin_queue_83 = 0;
	int num_of_dma_msg_pendingin_queue_84 = 0;
	int num_of_write_msg_pendingin_queue_83 = 0;
	int num_of_write_msg_pendingin_queue_84 = 0;

	int num_of_dma_msg_pendingin_queue_85 = 0;
	int num_of_dma_msg_pendingin_queue_86 = 0;
	int num_of_write_msg_pendingin_queue_85 = 0;
	int num_of_write_msg_pendingin_queue_86 = 0;

	int num_of_dma_msg_pendingin_queue_87 = 0;
	int num_of_dma_msg_pendingin_queue_88 = 0;
	int num_of_write_msg_pendingin_queue_87 = 0;
	int num_of_write_msg_pendingin_queue_88 = 0;

	int num_of_dma_msg_pendingin_queue_89 = 0;
	int num_of_dma_msg_pendingin_queue_90 = 0;
	int num_of_write_msg_pendingin_queue_89 = 0;
	int num_of_write_msg_pendingin_queue_90 = 0;

	int num_of_dma_msg_pendingin_queue_91 = 0;
	int num_of_dma_msg_pendingin_queue_92 = 0;
	int num_of_write_msg_pendingin_queue_91 = 0;
	int num_of_write_msg_pendingin_queue_92 = 0;

	int num_of_dma_msg_pendingin_queue_93 = 0;
	int num_of_dma_msg_pendingin_queue_94 = 0;
	int num_of_write_msg_pendingin_queue_93 = 0;
	int num_of_write_msg_pendingin_queue_94 = 0;

	int num_of_dma_msg_pendingin_queue_95 = 0;
	int num_of_dma_msg_pendingin_queue_96 = 0;
	int num_of_write_msg_pendingin_queue_95 = 0;
	int num_of_write_msg_pendingin_queue_96 = 0;

	int num_of_dma_msg_pendingin_queue_97 = 0;
	int num_of_dma_msg_pendingin_queue_98 = 0;
	int num_of_write_msg_pendingin_queue_97 = 0;
	int num_of_write_msg_pendingin_queue_98 = 0;

	int num_of_dma_msg_pendingin_queue_99 = 0;
	int num_of_dma_msg_pendingin_queue_100 = 0;
	int num_of_write_msg_pendingin_queue_99 = 0;
	int num_of_write_msg_pendingin_queue_100 = 0;

	int num_of_dma_msg_pendingin_queue_101 = 0;
	int num_of_dma_msg_pendingin_queue_102 = 0;
	int num_of_write_msg_pendingin_queue_101 = 0;
	int num_of_write_msg_pendingin_queue_102 = 0;

	int num_of_dma_msg_pendingin_queue_103 = 0;
	int num_of_dma_msg_pendingin_queue_104 = 0;
	int num_of_write_msg_pendingin_queue_103 = 0;
	int num_of_write_msg_pendingin_queue_104 = 0;

	int num_of_dma_msg_pendingin_queue_105 = 0;
	int num_of_dma_msg_pendingin_queue_106 = 0;
	int num_of_write_msg_pendingin_queue_105 = 0;
	int num_of_write_msg_pendingin_queue_106 = 0;

	int num_of_dma_msg_pendingin_queue_107 = 0;
	int num_of_dma_msg_pendingin_queue_108 = 0;
	int num_of_write_msg_pendingin_queue_107 = 0;
	int num_of_write_msg_pendingin_queue_108 = 0;

	int num_of_dma_msg_pendingin_queue_109 = 0;
	int num_of_dma_msg_pendingin_queue_110 = 0;
	int num_of_write_msg_pendingin_queue_109 = 0;
	int num_of_write_msg_pendingin_queue_110 = 0;

	int num_of_dma_msg_pendingin_queue_111 = 0;
	int num_of_dma_msg_pendingin_queue_112 = 0;
	int num_of_write_msg_pendingin_queue_111 = 0;
	int num_of_write_msg_pendingin_queue_112 = 0;

	int num_of_dma_msg_pendingin_queue_113 = 0;
	int num_of_dma_msg_pendingin_queue_114 = 0;
	int num_of_write_msg_pendingin_queue_113 = 0;
	int num_of_write_msg_pendingin_queue_114 = 0;

	int num_of_dma_msg_pendingin_queue_115 = 0;
	int num_of_dma_msg_pendingin_queue_116 = 0;
	int num_of_write_msg_pendingin_queue_115 = 0;
	int num_of_write_msg_pendingin_queue_116 = 0;

	int num_of_dma_msg_pendingin_queue_117 = 0;
	int num_of_dma_msg_pendingin_queue_118 = 0;
	int num_of_write_msg_pendingin_queue_117 = 0;
	int num_of_write_msg_pendingin_queue_118 = 0;

	int num_of_dma_msg_pendingin_queue_119 = 0;
	int num_of_dma_msg_pendingin_queue_120 = 0;
	int num_of_write_msg_pendingin_queue_119 = 0;
	int num_of_write_msg_pendingin_queue_120 = 0;

	int num_of_dma_msg_pendingin_queue_121 = 0;
	int num_of_dma_msg_pendingin_queue_122 = 0;
	int num_of_write_msg_pendingin_queue_121 = 0;
	int num_of_write_msg_pendingin_queue_122 = 0;

	int num_of_dma_msg_pendingin_queue_123 = 0;
	int num_of_dma_msg_pendingin_queue_124 = 0;
	int num_of_write_msg_pendingin_queue_123 = 0;
	int num_of_write_msg_pendingin_queue_124 = 0;

	int num_of_dma_msg_pendingin_queue_125 = 0;
	int num_of_dma_msg_pendingin_queue_126 = 0;
	int num_of_write_msg_pendingin_queue_125 = 0;
	int num_of_write_msg_pendingin_queue_126 = 0;

	int num_of_dma_msg_pendingin_queue_127 = 0;
	int num_of_dma_msg_pendingin_queue_128 = 0;
	int num_of_write_msg_pendingin_queue_127 = 0;
	int num_of_write_msg_pendingin_queue_128 = 0;

	int num_of_dma_msg_pendingin_queue_129 = 0;
	int num_of_dma_msg_pendingin_queue_130 = 0;
	int num_of_write_msg_pendingin_queue_129 = 0;
	int num_of_write_msg_pendingin_queue_130 = 0;

	int num_of_dma_msg_pendingin_queue_131 = 0;
	int num_of_dma_msg_pendingin_queue_132 = 0;
	int num_of_write_msg_pendingin_queue_131 = 0;
	int num_of_write_msg_pendingin_queue_132 = 0;

	int num_of_dma_msg_pendingin_queue_133 = 0;
	int num_of_dma_msg_pendingin_queue_134 = 0;
	int num_of_write_msg_pendingin_queue_133 = 0;
	int num_of_write_msg_pendingin_queue_134 = 0;

	int num_of_dma_msg_pendingin_queue_135 = 0;
	int num_of_dma_msg_pendingin_queue_136 = 0;
	int num_of_write_msg_pendingin_queue_135 = 0;
	int num_of_write_msg_pendingin_queue_136 = 0;

	int num_of_dma_msg_pendingin_queue_137 = 0;
	int num_of_dma_msg_pendingin_queue_138 = 0;
	int num_of_write_msg_pendingin_queue_137 = 0;
	int num_of_write_msg_pendingin_queue_138 = 0;

	int num_of_dma_msg_pendingin_queue_139 = 0;
	int num_of_dma_msg_pendingin_queue_140 = 0;
	int num_of_write_msg_pendingin_queue_139 = 0;
	int num_of_write_msg_pendingin_queue_140 = 0;

	int num_of_dma_msg_pendingin_queue_141 = 0;
	int num_of_dma_msg_pendingin_queue_142 = 0;
	int num_of_write_msg_pendingin_queue_141 = 0;
	int num_of_write_msg_pendingin_queue_142 = 0;

	int num_of_dma_msg_pendingin_queue_143 = 0;
	int num_of_dma_msg_pendingin_queue_144 = 0;
	int num_of_write_msg_pendingin_queue_143 = 0;
	int num_of_write_msg_pendingin_queue_144 = 0;

	int num_of_dma_msg_pendingin_queue_145 = 0;
	int num_of_dma_msg_pendingin_queue_146 = 0;
	int num_of_write_msg_pendingin_queue_145 = 0;
	int num_of_write_msg_pendingin_queue_146 = 0;

	int num_of_dma_msg_pendingin_queue_147 = 0;
	int num_of_dma_msg_pendingin_queue_148 = 0;
	int num_of_write_msg_pendingin_queue_147 = 0;
	int num_of_write_msg_pendingin_queue_148 = 0;

	int num_of_dma_msg_pendingin_queue_149 = 0;
	int num_of_dma_msg_pendingin_queue_150 = 0;
	int num_of_write_msg_pendingin_queue_149 = 0;
	int num_of_write_msg_pendingin_queue_150 = 0;

	int num_of_dma_msg_pendingin_queue_151 = 0;
	int num_of_dma_msg_pendingin_queue_152 = 0;
	int num_of_write_msg_pendingin_queue_151 = 0;
	int num_of_write_msg_pendingin_queue_152 = 0;

	int num_of_dma_msg_pendingin_queue_153 = 0;
	int num_of_dma_msg_pendingin_queue_154 = 0;
	int num_of_write_msg_pendingin_queue_153 = 0;
	int num_of_write_msg_pendingin_queue_154 = 0;

	int num_of_dma_msg_pendingin_queue_155 = 0;
	int num_of_dma_msg_pendingin_queue_156 = 0;
	int num_of_write_msg_pendingin_queue_155 = 0;
	int num_of_write_msg_pendingin_queue_156 = 0;

	int num_of_dma_msg_pendingin_queue_157 = 0;
	int num_of_dma_msg_pendingin_queue_158 = 0;
	int num_of_write_msg_pendingin_queue_157 = 0;
	int num_of_write_msg_pendingin_queue_158 = 0;

	int num_of_dma_msg_pendingin_queue_159 = 0;
	int num_of_dma_msg_pendingin_queue_160 = 0;
	int num_of_write_msg_pendingin_queue_159 = 0;
	int num_of_write_msg_pendingin_queue_160 = 0;

	int num_of_dma_msg_pendingin_queue_161 = 0;
	int num_of_dma_msg_pendingin_queue_162 = 0;
	int num_of_write_msg_pendingin_queue_161 = 0;
	int num_of_write_msg_pendingin_queue_162 = 0;

	int num_of_dma_msg_pendingin_queue_163 = 0;
	int num_of_dma_msg_pendingin_queue_164 = 0;
	int num_of_write_msg_pendingin_queue_163 = 0;
	int num_of_write_msg_pendingin_queue_164 = 0;

	int num_of_dma_msg_pendingin_queue_165 = 0;
	int num_of_dma_msg_pendingin_queue_166 = 0;
	int num_of_write_msg_pendingin_queue_165 = 0;
	int num_of_write_msg_pendingin_queue_166 = 0;

	int num_of_dma_msg_pendingin_queue_167 = 0;
	int num_of_dma_msg_pendingin