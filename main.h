#include <string.h>
#define VERSION_SIZE 8

#define HEADER_FLAG_SIZE 8

typedef unsigned char contrast_curve[10][2];

struct customer_parameters {
	union {
		struct {
			unsigned int				: 2;
			unsigned int sensor_offset	: 1;
			unsigned int digital_gain	: 1;
			unsigned int gamma_fe		: 1;
			unsigned int raw_front		: 1;
			unsigned int defect_pixel	: 1;
			unsigned int frame_stitch	: 1;
			unsigned int gamma_fe_pos	: 1;
			unsigned int sinter		: 1;
			unsigned int temper		: 1;
			unsigned int order		: 1;
			unsigned int wb_module	: 1;
			unsigned int			: 1;
			unsigned int mesh		: 1;
			unsigned int iridix		: 1;
			unsigned int			: 1;
			unsigned int matrix		: 1;
			unsigned int fr_crop		: 1;
			unsigned int fr_gamma		: 1;
			unsigned int fr_sharpen		: 1;
			unsigned int 				: 3;
			unsigned int ds1_crop		: 1;
			unsigned int ds1_scaler		: 1;
			unsigned int ds1_gamma		: 1;
			unsigned int ds1_sharpen	: 1;
			unsigned int 				: 4;
		};
		unsigned int top;
	};
	/* green equalization */
	unsigned int ge_strength;
	unsigned int ge_threshold;
	unsigned int ge_slope;
	unsigned int ge_sensitivity;
	/* defect pixel correct configuration */
	unsigned int dp_module;
	unsigned int hpdev_threshold;
	unsigned int line_threshold;
	unsigned int hp_blend;
	/* demosaic configuration */
	unsigned int dmsc_vh_slope;
	unsigned int dmsc_aa_slope;
	unsigned int dmsc_va_slope;
	unsigned int dmsc_uu_slope;
	unsigned int dmsc_sat_slope;
	unsigned int dmsc_vh_threshold;
	unsigned int dmsc_aa_threshold;
	unsigned int dmsc_va_threshold;
	unsigned int dmsc_uu_threshold;
	unsigned int dmsc_sat_threshold;
	unsigned int dmsc_vh_offset;
	unsigned int dmsc_aa_offset;
	unsigned int dmsc_va_offset;
	unsigned int dmsc_uu_offset;
	unsigned int dmsc_sat_offset;
	unsigned int dmsc_luminance_thresh;
	unsigned int dmsc_np_offset;
	unsigned int dmsc_config;
	unsigned int dmsc_ac_threshold;
	unsigned int dmsc_ac_slope;
	unsigned int dmsc_ac_offset;
	unsigned int dmsc_fc_slope;
	unsigned int dmsc_fc_alias_slope;
	unsigned int dmsc_fc_alias_thresh;
	struct {
		unsigned int dmsc_np_off : 6;
		unsigned int dmsc_np_reflect : 1;
		unsigned int : 25;
	};
	unsigned int temper_recursion_limit;
	/* WDR configuration */
	unsigned int wdr_short_thresh;
	unsigned int wdr_long_thresh;
	unsigned int wdr_expo_ratio_thresh;
	unsigned int wdr_stitch_correct;
	unsigned int wdr_stitch_error_thresh;
	unsigned int wdr_stitch_error_limit;
	unsigned int wdr_stitch_bl_long;
	unsigned int wdr_stitch_bl_short;
	unsigned int wdr_stitch_bl_output;
	/* other configuration */
	unsigned int max_isp_dgain;
	unsigned int max_sensor_again;

	unsigned char sharpness;
	unsigned char saturation;
	unsigned char brightness;
	/* the parameters of contrast curve */
	contrast_curve contrast;
};

struct isp_parameter_header {
	char flag[HEADER_FLAG_SIZE];
	unsigned int size;
	unsigned int crc;
};

enum isp_parameter_header_index {
	ISP_PARAM_BASE_INDEX,
	ISP_PARAM_CUSTOM_INDEX,
	ISP_PARAM_MAX_INDEX,
};
