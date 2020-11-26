#ifndef __TIZIANO_PARAMS_H__
#define __TIZIANO_PARAMS_H__

#ifdef __KERNEL__
#include <linux/types.h>
#else
#include <stdint.h>
#endif

//top
#define TISP_PARAM_TOP_BYPASS_ROWS                                     1
#define TISP_PARAM_TOP_BYPASS_COLS                                     32

//ae
#define TISP_PARAM_AE_PARAMETER_ROWS                                   1
#define TISP_PARAM_AE_SWITCH_NIGHT_MODE_ROWS                           1
#define TISP_PARAM_AE_POINTPOS_ROWS                                    1
#define TISP_PARAM_AE_EXP_PARAMETER_ROWS                               1
#define TISP_PARAM_AE_EV_STEP_ROWS                                     1
#define TISP_PARAM_AE_STABLE_TOL_ROWS                                  1
#define TISP_PARAM_AE_EV_LIST_ROWS                                     1
#define TISP_PARAM_AE_LUM_LIST_ROWS                                    1
#define TISP_PARAM_AE_AT_LIST_ROWS                                     1
#define TISP_PARAM_AE_DEFLICKER_PARA_ROWS                              1
#define TISP_PARAM_AE_FLICKER_T_ROWS                                   1
#define TISP_PARAM_AE_SCENE_PARE_ROWS                                  1
#define TISP_PARAM_AE_SCENE_MODE_TH_ROWS                               1
#define TISP_PARAM_AE_ROI_TREND_LOG2_LUT_ROWS                          1
#define TISP_PARAM_AE_ROI_TREND_WEIGHT_LUT_ROWS                        1
#define TISP_PARAM_AE_ZONE_WEIGHT_ROWS                                 1
#define TISP_PARAM_AE_SCENE_ROUI_WEIGHT_ROWS                           1
#define TISP_PARAM_AE_SCENE_ROI_WEIGHT_ROWS                            1
#define TISP_PARAM_AE_RESULT_ROWS                                      1
#define TISP_PARAM_AE_STAT_ROWS                                        1
#define TISP_PARAM_AE_WM_Q_ROWS                                        1
#define TISP_PARAM_AE_COMP_PARAM_ROWS                                  1
#define TISP_PARAM_AE_COMP_EV_LIST_ROWS                                1
#define TISP_PARAM_AE_COMP_AT_LIST_ROWS                                1
#define TISP_PARAM_AE_EXTRA_AT_LIST_ROWS                               1
#define TISP_PARAM_AE1_EV_LIST_ROWS                                    1
#define TISP_PARAM_AE_EV_LIST_WDR_ROWS                                 1
#define TISP_PARAM_AE_LUM_LIST_WDR_ROWS                                1
#define TISP_PARAM_AE_AT_LIST_WDR_ROWS                                 1
#define TISP_PARAM_AE_SCENE_PARE_WDR_ROWS                              1
#define TISP_PARAM_AE_SCENE_MODE_TH_WDR_ROWS                           1
#define TISP_PARAM_AE_COMP_PARAM_WDR_ROWS                              1
#define TISP_PARAM_AE_EXTRA_AT_LIST_WDR_ROWS                           1
#define TISP_PARAM_AE1_COMP_EV_LIST_ROWS                               1

#define TISP_PARAM_AE_PARAMETER_COLS                                   42
#define TISP_PARAM_AE_SWITCH_NIGHT_MODE_COLS                           20
#define TISP_PARAM_AE_POINTPOS_COLS                                    2
#define TISP_PARAM_AE_EXP_PARAMETER_COLS                               11
#define TISP_PARAM_AE_EV_STEP_COLS                                     5
#define TISP_PARAM_AE_STABLE_TOL_COLS                                  4
#define TISP_PARAM_AE_EV_LIST_COLS                                     10
#define TISP_PARAM_AE_LUM_LIST_COLS                                    10
#define TISP_PARAM_AE_AT_LIST_COLS                                     10
#define TISP_PARAM_AE_DEFLICKER_PARA_COLS                              3
#define TISP_PARAM_AE_FLICKER_T_COLS                                   6
#define TISP_PARAM_AE_SCENE_PARE_COLS                                  11
#define TISP_PARAM_AE_SCENE_MODE_TH_COLS                               4
#define TISP_PARAM_AE_ROI_TREND_LOG2_LUT_COLS                          20
#define TISP_PARAM_AE_ROI_TREND_WEIGHT_LUT_COLS                        20
#define TISP_PARAM_AE_ZONE_WEIGHT_COLS                                 225
#define TISP_PARAM_AE_SCENE_ROUI_WEIGHT_COLS                           225
#define TISP_PARAM_AE_SCENE_ROI_WEIGHT_COLS                            225
#define TISP_PARAM_AE_RESULT_COLS                                      6
#define TISP_PARAM_AE_STAT_COLS                                        5
#define TISP_PARAM_AE_WM_Q_COLS                                        15
#define TISP_PARAM_AE_COMP_PARAM_COLS                                  6
#define TISP_PARAM_AE_COMP_EV_LIST_COLS                                10
#define TISP_PARAM_AE_COMP_AT_LIST_COLS                                10
#define TISP_PARAM_AE_EXTRA_AT_LIST_COLS                               10
#define TISP_PARAM_AE1_EV_LIST_COLS                                    10
#define TISP_PARAM_AE_EV_LIST_WDR_COLS                                 10
#define TISP_PARAM_AE_LUM_LIST_WDR_COLS                                10
#define TISP_PARAM_AE_AT_LIST_WDR_COLS                                 10
#define TISP_PARAM_AE_SCENE_PARE_WDR_COLS                              11
#define TISP_PARAM_AE_SCENE_MODE_TH_WDR_COLS                           4
#define TISP_PARAM_AE_COMP_PARAM_WDR_COLS                              6
#define TISP_PARAM_AE_EXTRA_AT_LIST_WDR_COLS                           10
#define TISP_PARAM_AE1_COMP_EV_LIST_COLS                               10

//AWB
#define TISP_PARAM_AWB_AWB_PARAMETER_ROWS                              1
#define TISP_PARAM_AWB_PIXEL_CNT_TH_ROWS                               1
#define TISP_PARAM_AWB_LOWLIGHT_RG_TH_ROWS                             1
#define TISP_PARAM_AWB_POINTPOS_ROWS                                   1
#define TISP_PARAM_AWB_COF_ROWS                                        1
#define TISP_PARAM_AWB_MF_PARA_ROWS                                    1
#define TISP_PARAM_AWB_MODE_ROWS                                       1
#define TISP_PARAM_AWB_CT_ROWS                                         1
#define TISP_PARAM_AWB_CT_LAST_ROWS                                    1
#define TISP_PARAM_AWB_STATIC_ROWS                                     1
#define TISP_PARAM_AWB_LIGHT_SRC_ROWS                                  1
#define TISP_PARAM_AWB_LIGHT_SRC_NUM_ROWS                              1
#define TISP_PARAM_AWB_RG_POS_ROWS                                     1
#define TISP_PARAM_AWB_BG_POS_ROWS                                     1
#define TISP_PARAM_AWB_CT_TH_OT_LUXHIGH_ROWS                           1
#define TISP_PARAM_AWB_CT_TH_OT_LUXLOW_ROWS                            1
#define TISP_PARAM_AWB_CT_TH_IN_ROWS                                   1
#define TISP_PARAM_AWB_CT_PARA_OT_ROWS                                 1
#define TISP_PARAM_AWB_CT_PARA_IN_ROWS                                 1
#define TISP_PARAM_AWB_DIS_TW_ROWS                                     1
#define TISP_PARAM_AWB_RGBG_WEIGHT_ROWS                                1
#define TISP_PARAM_AWB_COLOR_TEMP_MESH_ROWS                            1
#define TISP_PARAM_AWB_WGHT_ROWS                                       1
#define TISP_PARAM_AWB_RGBG_WEIGHT_OT_ROWS                             1
#define TISP_PARAM_AWB_LS_W_LUT_ROWS                                   1

#define TISP_PARAM_AWB_AWB_PARAMETER_COLS                              45
#define TISP_PARAM_AWB_PIXEL_CNT_TH_COLS                               1
#define TISP_PARAM_AWB_LOWLIGHT_RG_TH_COLS                             2
#define TISP_PARAM_AWB_POINTPOS_COLS                                   2
#define TISP_PARAM_AWB_COF_COLS                                        2
#define TISP_PARAM_AWB_MF_PARA_COLS                                    6
#define TISP_PARAM_AWB_MODE_COLS                                       3
#define TISP_PARAM_AWB_CT_COLS                                         1
#define TISP_PARAM_AWB_CT_LAST_COLS                                    1
#define TISP_PARAM_AWB_STATIC_COLS                                     2
#define TISP_PARAM_AWB_LIGHT_SRC_COLS                                  20
#define TISP_PARAM_AWB_LIGHT_SRC_NUM_COLS                              1
#define TISP_PARAM_AWB_RG_POS_COLS                                     15
#define TISP_PARAM_AWB_BG_POS_COLS                                     15
#define TISP_PARAM_AWB_CT_TH_OT_LUXHIGH_COLS                           4
#define TISP_PARAM_AWB_CT_TH_OT_LUXLOW_COLS                            4
#define TISP_PARAM_AWB_CT_TH_IN_COLS                                   4
#define TISP_PARAM_AWB_CT_PARA_OT_COLS                                 2
#define TISP_PARAM_AWB_CT_PARA_IN_COLS                                 2
#define TISP_PARAM_AWB_DIS_TW_COLS                                     3
#define TISP_PARAM_AWB_RGBG_WEIGHT_COLS                                225
#define TISP_PARAM_AWB_COLOR_TEMP_MESH_COLS                            225
#define TISP_PARAM_AWB_WGHT_COLS                                       225
#define TISP_PARAM_AWB_RGBG_WEIGHT_OT_COLS                             225
#define TISP_PARAM_AWB_LS_W_LUT_COLS                                   514

//AF
#define TISP_PARAM_AF_ZONE_ROWS                                        1
#define TISP_PARAM_AF_TH_EN_ROWS                                       1
#define TISP_PARAM_AF_FIR0_V_ROWS                                      1
#define TISP_PARAM_AF_FIR0_LDG_ROWS                                    1
#define TISP_PARAM_AF_FIR0_CORING_ROWS                                 1
#define TISP_PARAM_AF_FIR1_V_ROWS                                      1
#define TISP_PARAM_AF_FIR1_LDG_ROWS                                    1
#define TISP_PARAM_AF_FIR1_CORING_ROWS                                 1
#define TISP_PARAM_AF_IIR0_H_ROWS                                      1
#define TISP_PARAM_AF_IIR0_LDG_ROWS                                    1
#define TISP_PARAM_AF_IIR0_CORING_ROWS                                 1
#define TISP_PARAM_AF_IIR1_H_ROWS                                      1
#define TISP_PARAM_AF_IIR1_LDG_ROWS                                    1
#define TISP_PARAM_AF_IIR1_CORING_ROWS                                 1
#define TISP_PARAM_AF_POINTPOS_ROWS                                    1
#define TISP_PARAM_AF_TILT_ROWS                                        1
#define TISP_PARAM_AF_FVW_MEAN_ROWS                                    1
#define TISP_PARAM_AF_FV_ROWS                                          1
#define TISP_PARAM_AF_WEIGHT_ROWS                                      1

#define TISP_PARAM_AF_ZONE_COLS                                        36
#define TISP_PARAM_AF_TH_EN_COLS                                       13
#define TISP_PARAM_AF_FIR0_V_COLS                                      5
#define TISP_PARAM_AF_FIR0_LDG_COLS                                    8
#define TISP_PARAM_AF_FIR0_CORING_COLS                                 4
#define TISP_PARAM_AF_FIR1_V_COLS                                      5
#define TISP_PARAM_AF_FIR1_LDG_COLS                                    8
#define TISP_PARAM_AF_FIR1_CORING_COLS                                 4
#define TISP_PARAM_AF_IIR0_H_COLS                                      10
#define TISP_PARAM_AF_IIR0_LDG_COLS                                    8
#define TISP_PARAM_AF_IIR0_CORING_COLS                                 4
#define TISP_PARAM_AF_IIR1_H_COLS                                      10
#define TISP_PARAM_AF_IIR1_LDG_COLS                                    8
#define TISP_PARAM_AF_IIR1_CORING_COLS                                 4
#define TISP_PARAM_AF_POINTPOS_COLS                                    2
#define TISP_PARAM_AF_TILT_COLS                                        5
#define TISP_PARAM_AF_FVW_MEAN_COLS                                    15
#define TISP_PARAM_AF_FV_COLS                                          3
#define TISP_PARAM_AF_WEIGHT_COLS                                      225

//BCSH
#define TISP_PARAM_BCSH_CCMMATRIX_D_ROWS                               1
#define TISP_PARAM_BCSH_CCMMATRIX_T_ROWS                               1
#define TISP_PARAM_BCSH_CCMMATRIX_A_ROWS                               1
#define TISP_PARAM_BCSH_HDP_ROWS                                       1
#define TISP_PARAM_BCSH_HBP_ROWS                                       1
#define TISP_PARAM_BCSH_HLSP_ROWS                                      1
#define TISP_PARAM_BCSH_STHRES_ROWS                                    1
#define TISP_PARAM_BCSH_EVLIST_ROWS                                    1
#define TISP_PARAM_BCSH_SMINLISTS_ROWS                                 1
#define TISP_PARAM_BCSH_SMAXLISTS_ROWS                                 1
#define TISP_PARAM_BCSH_SMINLISTM_ROWS                                 1
#define TISP_PARAM_BCSH_SMAXLISTM_ROWS                                 1
#define TISP_PARAM_BCSH_C_ROWS                                         1
#define TISP_PARAM_BCSH_CXL_ROWS                                       1
#define TISP_PARAM_BCSH_CXH_ROWS                                       1
#define TISP_PARAM_BCSH_CYL_ROWS                                       1
#define TISP_PARAM_BCSH_CYH_ROWS                                       1
#define TISP_PARAM_BCSH_B_ROWS                                         1
#define TISP_PARAM_BCSH_OFFSETRGB_ROWS                                 1
#define TISP_PARAM_BCSH_OFFSETYUVY_ROWS                                1
#define TISP_PARAM_BCSH_CLIP0_ROWS                                     1
#define TISP_PARAM_BCSH_CLIP1_ROWS                                     1
#define TISP_PARAM_BCSH_CCMMATRIX_D_WDR_ROWS                           1
#define TISP_PARAM_BCSH_CCMMATRIX_T_WDR_ROWS                           1
#define TISP_PARAM_BCSH_CCMMATRIX_A_WDR_ROWS                           1
#define TISP_PARAM_BCSH_HDP_WDR_ROWS                                   1
#define TISP_PARAM_BCSH_HBP_WDR_ROWS                                   1
#define TISP_PARAM_BCSH_HLSP_WDR_ROWS                                  1
#define TISP_PARAM_BCSH_STHRES_WDR_ROWS                                1
#define TISP_PARAM_BCSH_EVLIST_WDR_ROWS                                1
#define TISP_PARAM_BCSH_SMINLISTS_WDR_ROWS                             1
#define TISP_PARAM_BCSH_SMAXLISTS_WDR_ROWS                             1
#define TISP_PARAM_BCSH_SMINLISTM_WDR_ROWS                             1
#define TISP_PARAM_BCSH_SMAXLISTM_WDR_ROWS                             1
#define TISP_PARAM_BCSH_OFFSETRGB_WDR_ROWS                             1
#define TISP_PARAM_BCSH_MMATRIX_ROWS				       1
#define TISP_PARAM_BCSH_MINVMATRIX_ROWS				       1
#define TISP_PARAM_BCSH_CLIP2_ROWS                                     1

#define TISP_PARAM_BCSH_CCMMATRIX_D_COLS                               9
#define TISP_PARAM_BCSH_CCMMATRIX_T_COLS                               9
#define TISP_PARAM_BCSH_CCMMATRIX_A_COLS                               9
#define TISP_PARAM_BCSH_HDP_COLS                                       3
#define TISP_PARAM_BCSH_HBP_COLS                                       3
#define TISP_PARAM_BCSH_HLSP_COLS                                      3
#define TISP_PARAM_BCSH_STHRES_COLS                                    3
#define TISP_PARAM_BCSH_EVLIST_COLS                                    9
#define TISP_PARAM_BCSH_SMINLISTS_COLS                                 9
#define TISP_PARAM_BCSH_SMAXLISTS_COLS                                 9
#define TISP_PARAM_BCSH_SMINLISTM_COLS                                 9
#define TISP_PARAM_BCSH_SMAXLISTM_COLS                                 9
#define TISP_PARAM_BCSH_C_COLS                                         5
#define TISP_PARAM_BCSH_CXL_COLS                                       9
#define TISP_PARAM_BCSH_CXH_COLS                                       9
#define TISP_PARAM_BCSH_CYL_COLS                                       9
#define TISP_PARAM_BCSH_CYH_COLS                                       9
#define TISP_PARAM_BCSH_B_COLS                                         1
#define TISP_PARAM_BCSH_OFFSETRGB_COLS                                 3
#define TISP_PARAM_BCSH_OFFSETYUVY_COLS                                2
#define TISP_PARAM_BCSH_CLIP0_COLS                                     4
#define TISP_PARAM_BCSH_CLIP1_COLS                                     4
#define TISP_PARAM_BCSH_CCMMATRIX_D_WDR_COLS                           9
#define TISP_PARAM_BCSH_CCMMATRIX_T_WDR_COLS                           9
#define TISP_PARAM_BCSH_CCMMATRIX_A_WDR_COLS                           9
#define TISP_PARAM_BCSH_HDP_WDR_COLS                                   3
#define TISP_PARAM_BCSH_HBP_WDR_COLS                                   3
#define TISP_PARAM_BCSH_HLSP_WDR_COLS                                  3
#define TISP_PARAM_BCSH_STHRES_WDR_COLS                                3
#define TISP_PARAM_BCSH_EVLIST_WDR_COLS                                9
#define TISP_PARAM_BCSH_SMINLISTS_WDR_COLS                             9
#define TISP_PARAM_BCSH_SMAXLISTS_WDR_COLS                             9
#define TISP_PARAM_BCSH_SMINLISTM_WDR_COLS                             9
#define TISP_PARAM_BCSH_SMAXLISTM_WDR_COLS                             9
#define TISP_PARAM_BCSH_OFFSETRGB_WDR_COLS                             3
#define TISP_PARAM_BCSH_MMATRIX_COLS				       9
#define TISP_PARAM_BCSH_MINVMATRIX_COLS				       9
#define TISP_PARAM_BCSH_CLIP2_COLS                                     4

//YDNS
#define TISP_PARAM_YDNS_EDGE_OUT_ARRAY_ROWS                            1
#define TISP_PARAM_YDNS_MV_THRES0_ARRAY_ROWS                           1
#define TISP_PARAM_YDNS_MV_THRES1_ARRAY_ROWS                           1
#define TISP_PARAM_YDNS_MV_THRES2_ARRAY_ROWS                           1
#define TISP_PARAM_YDNS_FUS_LEVEL_ARRAY_ROWS                           1
#define TISP_PARAM_YDNS_FUS_MIN_THRES_ARRAY_ROWS                       1
#define TISP_PARAM_YDNS_FUS_MAX_THRES_ARRAY_ROWS                       1
#define TISP_PARAM_YDNS_FUS_SSWEI_ARRAY_ROWS                           1
#define TISP_PARAM_YDNS_FUS_SEWEI_ARRAY_ROWS                           1
#define TISP_PARAM_YDNS_FUS_MSWEI_ARRAY_ROWS                           1
#define TISP_PARAM_YDNS_FUS_MEWEI_ARRAY_ROWS                           1
#define TISP_PARAM_YDNS_FUS_UVWEI_ARRAY_ROWS                           1
#define TISP_PARAM_YDNS_EDGE_WEI_ARRAY_ROWS                            1
#define TISP_PARAM_YDNS_EDGE_DIV_ARRAY_ROWS                            1
#define TISP_PARAM_YDNS_EDGE_THRES_ARRAY_ROWS                          1

#define TISP_PARAM_YDNS_EDGE_OUT_ARRAY_COLS                            1
#define TISP_PARAM_YDNS_MV_THRES0_ARRAY_COLS                           9
#define TISP_PARAM_YDNS_MV_THRES1_ARRAY_COLS                           9
#define TISP_PARAM_YDNS_MV_THRES2_ARRAY_COLS                           9
#define TISP_PARAM_YDNS_FUS_LEVEL_ARRAY_COLS                           9
#define TISP_PARAM_YDNS_FUS_MIN_THRES_ARRAY_COLS                       9
#define TISP_PARAM_YDNS_FUS_MAX_THRES_ARRAY_COLS                       9
#define TISP_PARAM_YDNS_FUS_SSWEI_ARRAY_COLS                           9
#define TISP_PARAM_YDNS_FUS_SEWEI_ARRAY_COLS                           9
#define TISP_PARAM_YDNS_FUS_MSWEI_ARRAY_COLS                           9
#define TISP_PARAM_YDNS_FUS_MEWEI_ARRAY_COLS                           9
#define TISP_PARAM_YDNS_FUS_UVWEI_ARRAY_COLS                           9
#define TISP_PARAM_YDNS_EDGE_WEI_ARRAY_COLS                            9
#define TISP_PARAM_YDNS_EDGE_DIV_ARRAY_COLS                            9
#define TISP_PARAM_YDNS_EDGE_THRES_ARRAY_COLS                          9

//GB
#define TISP_PARAM_GB_DGAIN_SHIFT_ROWS                                 1
#define TISP_PARAM_GB_DGAIN_RGBIR_L_ROWS                               1
#define TISP_PARAM_GB_DGAIN_RGBIR_S_ROWS                               1
#define TISP_PARAM_GB_BLC_R_ROWS                                       1
#define TISP_PARAM_GB_BLC_GR_ROWS                                      1
#define TISP_PARAM_GB_BLC_GB_ROWS                                      1
#define TISP_PARAM_GB_BLC_B_ROWS                                       1
#define TISP_PARAM_GB_BLC_IR_ROWS                                      1
#define TISP_PARAM_GB_BLC_MIN_EN_ROWS                                  1
#define TISP_PARAM_GB_BLC_MIN_ROWS                                     1

#define TISP_PARAM_GB_DGAIN_SHIFT_COLS                                 2
#define TISP_PARAM_GB_DGAIN_RGBIR_L_COLS                               4
#define TISP_PARAM_GB_DGAIN_RGBIR_S_COLS                               4
#define TISP_PARAM_GB_BLC_R_COLS                                       9
#define TISP_PARAM_GB_BLC_GR_COLS                                      9
#define TISP_PARAM_GB_BLC_GB_COLS                                      9
#define TISP_PARAM_GB_BLC_B_COLS                                       9
#define TISP_PARAM_GB_BLC_IR_COLS                                      9
#define TISP_PARAM_GB_BLC_MIN_EN_COLS                                  2
#define TISP_PARAM_GB_BLC_MIN_COLS                                     9

//WDR
#define TISP_PARAM_WDR_PARA_ARRAY_ROWS                                 1
#define TISP_PARAM_WDR_WEIGHTLUT20_ARRAY_ROWS                          1
#define TISP_PARAM_WDR_WEIGHTLUT02_ARRAY_ROWS                          1
#define TISP_PARAM_WDR_WEIGHTLUT12_ARRAY_ROWS                          1
#define TISP_PARAM_WDR_WEIGHTLUT22_ARRAY_ROWS                          1
#define TISP_PARAM_WDR_WEIGHTLUT21_ARRAY_ROWS                          1
#define TISP_PARAM_WDR_GAM_Y_ARRAY_ROWS                                1
#define TISP_PARAM_WDR_W_POINT_WEIGHT_X_ARRAY_ROWS                     1
#define TISP_PARAM_WDR_W_POINT_WEIGHT_Y_ARRAY_ROWS                     1
#define TISP_PARAM_WDR_W_POINT_WEIGHT_POW_ARRAY_ROWS                   1
#define TISP_PARAM_FUSION1_CURE_Y_ARRAY_ROWS                           1
#define TISP_PARAM_WDR_DETAIL_TH_W_ARRAY_ROWS                          1
#define TISP_PARAM_WDR_CONTRAST_T_Y_MUX_ARRAY_ROWS                     1
#define TISP_PARAM_WDR_CT_CL_PARA_ARRAY_ROWS                           1
#define TISP_PARAM_CENTRE5X5_W_DISTANCE_ARRAY_ROWS                     1
#define TISP_PARAM_WDR_STAT_PARA_ARRAY_ROWS                            1
#define TISP_PARAM_WDR_DEGOST_PARA_ARRAY_ROWS                          1
#define TISP_PARAM_WDR_DARKLABLE_ARRAY_ROWS                            1
#define TISP_PARAM_WDR_DARKLABLEN_ARRAY_ROWS                           1
#define TISP_PARAM_WDR_DARKWEIGHT_ARRAY_ROWS                           1
#define TISP_PARAM_WDR_THRLABLE_ARRAY_ROWS                             1
#define TISP_PARAM_COMPUTERMODLE_SOFTWARE_IN_ARRAY_ROWS                1
#define TISP_PARAM_DEVIATIONPARA_SOFTWARE_IN_ARRAY_ROWS                1
#define TISP_PARAM_RATIOPARA_SOFTWARE_IN_ARRAY_ROWS                    1
#define TISP_PARAM_X_THR_SOFTWARE_IN_ARRAY_ROWS                        1
#define TISP_PARAM_Y_THR_SOFTWARE_IN_ARRAY_ROWS                        1
#define TISP_PARAM_THRPARA_SOFTWARE_IN_ARRAY_ROWS                      1
#define TISP_PARAM_XY_PIX_LOW_SOFTWARE_IN_ARRAY_ROWS                   1
#define TISP_PARAM_MOTIONTHRPARA_SOFTWARE_IN_ARRAY_ROWS                1
#define TISP_PARAM_D_THR_NORMAL_SOFTWARE_IN_ARRAY_ROWS                 1
#define TISP_PARAM_D_THR_NORMAL1_SOFTWARE_IN_ARRAY_ROWS                1
#define TISP_PARAM_D_THR_NORMAL2_SOFTWARE_IN_ARRAY_ROWS                1
#define TISP_PARAM_D_THR_NORMAL_MIN_SOFTWARE_IN_ARRAY_ROWS             1
#define TISP_PARAM_MULTIVALUELOW_SOFTWARE_IN_ARRAY_ROWS                1
#define TISP_PARAM_MULTIVALUEHIGH_SOFTWARE_IN_ARRAY_ROWS               1
#define TISP_PARAM_D_THR_2_SOFTWARE_IN_ARRAY_ROWS                      1
#define TISP_PARAM_WDR_DETIAL_PARA_SOFTWARE_IN_ARRAY_ROWS              1
#define TISP_PARAM_WDR_THRALL_SOFTWARE_OUT_ROWS                        1
#define TISP_PARAM_WDR_DBG_OUT_ARRAY_ROWS                              1
#define TISP_PARAM_WDR_EV_LIST_ROWS                                    1
#define TISP_PARAM_WDR_WEIGHT_B_IN_LIST_ROWS                           1
#define TISP_PARAM_WDR_WEIGHT_P_IN_LIST_ROWS                           1
#define TISP_PARAM_WDR_EV_LIST_DEGHOST_LIST_ROWS                       1
#define TISP_PARAM_WDR_WEIGHT_IN_LIST_DEGHOST_ROWS                     1
#define TISP_PARAM_WDR_DETAIL_W_IN0_LIST_ROWS                          1
#define TISP_PARAM_WDR_DETAIL_W_IN1_LIST_ROWS                          1
#define TISP_PARAM_WDR_DETAIL_W_IN2_LIST_ROWS                          1
#define TISP_PARAM_WDR_DETAIL_W_IN3_LIST_ROWS                          1
#define TISP_PARAM_WDR_DETAIL_W_IN4_LIST_ROWS                          1
#define TISP_PARAM_WDR_PRIV_ARRAY_ROWS                                 1
#define TISP_PARAM_WDR_TOOL_CONTROL_ARRAY_ROWS                         1

#define TISP_PARAM_WDR_PARA_ARRAY_COLS                                 10
#define TISP_PARAM_WDR_WEIGHTLUT20_ARRAY_COLS                          32
#define TISP_PARAM_WDR_WEIGHTLUT02_ARRAY_COLS                          32
#define TISP_PARAM_WDR_WEIGHTLUT12_ARRAY_COLS                          32
#define TISP_PARAM_WDR_WEIGHTLUT22_ARRAY_COLS                          32
#define TISP_PARAM_WDR_WEIGHTLUT21_ARRAY_COLS                          32
#define TISP_PARAM_WDR_GAM_Y_ARRAY_COLS                                33
#define TISP_PARAM_WDR_W_POINT_WEIGHT_X_ARRAY_COLS                     4
#define TISP_PARAM_WDR_W_POINT_WEIGHT_Y_ARRAY_COLS                     4
#define TISP_PARAM_WDR_W_POINT_WEIGHT_POW_ARRAY_COLS                   3
#define TISP_PARAM_FUSION1_CURE_Y_ARRAY_COLS                           33
#define TISP_PARAM_WDR_DETAIL_TH_W_ARRAY_COLS                          7
#define TISP_PARAM_WDR_CONTRAST_T_Y_MUX_ARRAY_COLS                     5
#define TISP_PARAM_WDR_CT_CL_PARA_ARRAY_COLS                           4
#define TISP_PARAM_CENTRE5X5_W_DISTANCE_ARRAY_COLS                     31
#define TISP_PARAM_WDR_STAT_PARA_ARRAY_COLS                            7
#define TISP_PARAM_WDR_DEGOST_PARA_ARRAY_COLS                          13
#define TISP_PARAM_WDR_DARKLABLE_ARRAY_COLS                            5
#define TISP_PARAM_WDR_DARKLABLEN_ARRAY_COLS                           4
#define TISP_PARAM_WDR_DARKWEIGHT_ARRAY_COLS                           5
#define TISP_PARAM_WDR_THRLABLE_ARRAY_COLS                             27
#define TISP_PARAM_COMPUTERMODLE_SOFTWARE_IN_ARRAY_COLS                4
#define TISP_PARAM_DEVIATIONPARA_SOFTWARE_IN_ARRAY_COLS                5
#define TISP_PARAM_RATIOPARA_SOFTWARE_IN_ARRAY_COLS                    7
#define TISP_PARAM_X_THR_SOFTWARE_IN_ARRAY_COLS                        4
#define TISP_PARAM_Y_THR_SOFTWARE_IN_ARRAY_COLS                        4
#define TISP_PARAM_THRPARA_SOFTWARE_IN_ARRAY_COLS                      20
#define TISP_PARAM_XY_PIX_LOW_SOFTWARE_IN_ARRAY_COLS                   22
#define TISP_PARAM_MOTIONTHRPARA_SOFTWARE_IN_ARRAY_COLS                17
#define TISP_PARAM_D_THR_NORMAL_SOFTWARE_IN_ARRAY_COLS                 26
#define TISP_PARAM_D_THR_NORMAL1_SOFTWARE_IN_ARRAY_COLS                26
#define TISP_PARAM_D_THR_NORMAL2_SOFTWARE_IN_ARRAY_COLS                26
#define TISP_PARAM_D_THR_NORMAL_MIN_SOFTWARE_IN_ARRAY_COLS             26
#define TISP_PARAM_MULTIVALUELOW_SOFTWARE_IN_ARRAY_COLS                26
#define TISP_PARAM_MULTIVALUEHIGH_SOFTWARE_IN_ARRAY_COLS               26
#define TISP_PARAM_D_THR_2_SOFTWARE_IN_ARRAY_COLS                      26
#define TISP_PARAM_WDR_DETIAL_PARA_SOFTWARE_IN_ARRAY_COLS              8
#define TISP_PARAM_WDR_THRALL_SOFTWARE_OUT_COLS                        27
#define TISP_PARAM_WDR_DBG_OUT_ARRAY_COLS                              2
#define TISP_PARAM_WDR_EV_LIST_COLS                                    9
#define TISP_PARAM_WDR_WEIGHT_B_IN_LIST_COLS                           9
#define TISP_PARAM_WDR_WEIGHT_P_IN_LIST_COLS                           9
#define TISP_PARAM_WDR_EV_LIST_DEGHOST_LIST_COLS                       9
#define TISP_PARAM_WDR_WEIGHT_IN_LIST_DEGHOST_COLS                     9
#define TISP_PARAM_WDR_DETAIL_W_IN0_LIST_COLS                          9
#define TISP_PARAM_WDR_DETAIL_W_IN1_LIST_COLS                          9
#define TISP_PARAM_WDR_DETAIL_W_IN2_LIST_COLS                          9
#define TISP_PARAM_WDR_DETAIL_W_IN3_LIST_COLS                          9
#define TISP_PARAM_WDR_DETAIL_W_IN4_LIST_COLS                          9
#define TISP_PARAM_WDR_PRIV_ARRAY_COLS                                 16
#define TISP_PARAM_WDR_TOOL_CONTROL_ARRAY_COLS                         14

//rdns
#define TISP_PARAM_RDNS_OUT_OPT_ARRAY_ROWS                             1
#define TISP_PARAM_RDNS_AWB_GAIN_PAR_CFG_ARRAY_ROWS                    1
#define TISP_PARAM_RDNS_OE_NUM_ARRAY_ROWS                              1
#define TISP_PARAM_RDNS_OPT_CFG_ARRAY_ROWS                             1
#define TISP_PARAM_RDNS_GRAY_STREN_ARRAY_ROWS                          1
#define TISP_PARAM_RDNS_SLOPE_PAR_CFG_ARRAY_ROWS                       1
#define TISP_PARAM_RDNS_GRAY_STD_THRES_ARRAY_ROWS                      1
#define TISP_PARAM_RDNS_TEXT_BASE_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_RDNS_FILTER_SAT_THRES_ARRAY_ROWS                    1
#define TISP_PARAM_RDNS_OE_THRES_ARRAY_ROWS                            1
#define TISP_PARAM_RDNS_FLAT_G_THRES_ARRAY_ROWS                        1
#define TISP_PARAM_RDNS_TEXT_G_THRES_ARRAY_ROWS                        1
#define TISP_PARAM_RDNS_FLAT_RB_THRES_ARRAY_ROWS                       1
#define TISP_PARAM_RDNS_TEXT_RB_THRES_ARRAY_ROWS                       1
#define TISP_PARAM_RDNS_GRAY_NP_ARRAY_ROWS                             1
#define TISP_PARAM_RDNS_TEXT_NP_ARRAY_ROWS                             1
#define TISP_PARAM_RDNS_LUM_NP_ARRAY_ROWS                              1
#define TISP_PARAM_RDNS_STD_NP_ARRAY_ROWS                              1
#define TISP_PARAM_RDNS_MV_TEXT_THRES_ARRAY_ROWS                       1
#define TISP_PARAM_RDNS_TEXT_BASE_THRES_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_RDNS_SL_PAR_CFG_ROWS                                1

#define TISP_PARAM_RDNS_OUT_OPT_ARRAY_COLS                             1
#define TISP_PARAM_RDNS_AWB_GAIN_PAR_CFG_ARRAY_COLS                    4
#define TISP_PARAM_RDNS_OE_NUM_ARRAY_COLS                              9
#define TISP_PARAM_RDNS_OPT_CFG_ARRAY_COLS                             5
#define TISP_PARAM_RDNS_GRAY_STREN_ARRAY_COLS                          9
#define TISP_PARAM_RDNS_SLOPE_PAR_CFG_ARRAY_COLS                       2
#define TISP_PARAM_RDNS_GRAY_STD_THRES_ARRAY_COLS                      9
#define TISP_PARAM_RDNS_TEXT_BASE_THRES_ARRAY_COLS                     9
#define TISP_PARAM_RDNS_FILTER_SAT_THRES_ARRAY_COLS                    9
#define TISP_PARAM_RDNS_OE_THRES_ARRAY_COLS                            9
#define TISP_PARAM_RDNS_FLAT_G_THRES_ARRAY_COLS                        9
#define TISP_PARAM_RDNS_TEXT_G_THRES_ARRAY_COLS                        9
#define TISP_PARAM_RDNS_FLAT_RB_THRES_ARRAY_COLS                       9
#define TISP_PARAM_RDNS_TEXT_RB_THRES_ARRAY_COLS                       9
#define TISP_PARAM_RDNS_GRAY_NP_ARRAY_COLS                             8
#define TISP_PARAM_RDNS_TEXT_NP_ARRAY_COLS                             16
#define TISP_PARAM_RDNS_LUM_NP_ARRAY_COLS                              16
#define TISP_PARAM_RDNS_STD_NP_ARRAY_COLS                              16
#define TISP_PARAM_RDNS_MV_TEXT_THRES_ARRAY_COLS                       9
#define TISP_PARAM_RDNS_TEXT_BASE_THRES_WDR_ARRAY_COLS                 9
#define TISP_PARAM_RDNS_SL_PAR_CFG_COLS                                2

//gamma
#define TISP_PARAM_GAMMA_RGB_LUT_SADDR_ROWS                            1
#define TISP_PARAM_GAMMA_RGB_LUT_WDR_SADDR_ROWS                        1

#define TISP_PARAM_GAMMA_RGB_LUT_SADDR_COLS                            129
#define TISP_PARAM_GAMMA_RGB_LUT_WDR_SADDR_COLS                        129

//GIB
#define TISP_PARAM_GIB_CONFIG_LINE_ROWS                                1
#define TISP_PARAM_GIB_R_G_LINEAR_ROWS                                 1
#define TISP_PARAM_GIB_B_IR_LINEAR_ROWS                                1
#define TISP_PARAM_GIB_DEIRM_BLC_R_LINEAR_ROWS                         1
#define TISP_PARAM_GIB_DEIRM_BLC_GR_LINEAR_ROWS                        1
#define TISP_PARAM_GIB_DEIRM_BLC_GB_LINEAR_ROWS                        1
#define TISP_PARAM_GIB_DEIRM_BLC_B_LINEAR_ROWS                         1
#define TISP_PARAM_GIB_DEIRM_BLC_IR_LINEAR_ROWS                        1
#define TISP_PARAM_GIB_IR_POINT_ROWS                                   1
#define TISP_PARAM_GIB_IR_RESER_ROWS                                   1
#define TISP_PARAM_GIB_DEIR_R_H_ROWS                                   1
#define TISP_PARAM_GIB_DEIR_G_H_ROWS                                   1
#define TISP_PARAM_GIB_DEIR_B_H_ROWS                                   1
#define TISP_PARAM_GIB_DEIR_R_M_ROWS                                   1
#define TISP_PARAM_GIB_DEIR_G_M_ROWS                                   1
#define TISP_PARAM_GIB_DEIR_B_M_ROWS                                   1
#define TISP_PARAM_GIB_DEIR_R_L_ROWS                                   1
#define TISP_PARAM_GIB_DEIR_G_L_ROWS                                   1
#define TISP_PARAM_GIB_DEIR_B_L_ROWS                                   1
#define TISP_PARAM_GIB_DEIR_MATRIX_H_ROWS                              1
#define TISP_PARAM_GIB_DEIR_MATRIX_M_ROWS                              1
#define TISP_PARAM_GIB_DEIR_MATRIX_L_ROWS                              1

#define TISP_PARAM_GIB_CONFIG_LINE_COLS                                12
#define TISP_PARAM_GIB_R_G_LINEAR_COLS                                 2
#define TISP_PARAM_GIB_B_IR_LINEAR_COLS                                2
#define TISP_PARAM_GIB_DEIRM_BLC_R_LINEAR_COLS                         9
#define TISP_PARAM_GIB_DEIRM_BLC_GR_LINEAR_COLS                        9
#define TISP_PARAM_GIB_DEIRM_BLC_GB_LINEAR_COLS                        9
#define TISP_PARAM_GIB_DEIRM_BLC_B_LINEAR_COLS                         9
#define TISP_PARAM_GIB_DEIRM_BLC_IR_LINEAR_COLS                        9
#define TISP_PARAM_GIB_IR_POINT_COLS                                   4
#define TISP_PARAM_GIB_IR_RESER_COLS                                   15
#define TISP_PARAM_GIB_DEIR_R_H_COLS                                   33
#define TISP_PARAM_GIB_DEIR_G_H_COLS                                   33
#define TISP_PARAM_GIB_DEIR_B_H_COLS                                   33
#define TISP_PARAM_GIB_DEIR_R_M_COLS                                   33
#define TISP_PARAM_GIB_DEIR_G_M_COLS                                   33
#define TISP_PARAM_GIB_DEIR_B_M_COLS                                   33
#define TISP_PARAM_GIB_DEIR_R_L_COLS                                   33
#define TISP_PARAM_GIB_DEIR_G_L_COLS                                   33
#define TISP_PARAM_GIB_DEIR_B_L_COLS                                   33
#define TISP_PARAM_GIB_DEIR_MATRIX_H_COLS                              15
#define TISP_PARAM_GIB_DEIR_MATRIX_M_COLS                              15
#define TISP_PARAM_GIB_DEIR_MATRIX_L_COLS                              15

//LSC
#define TISP_PARAM_LSC_LUT_NUM_ROWS                                    1
#define TISP_PARAM_LSC_MESH_SCALE_ROWS                                 1
#define TISP_PARAM_LSC_LUT_STRIDE_ROWS                                 1
#define TISP_PARAM_LSC_MESH_SIZE_ROWS                                  1
#define TISP_PARAM_LSC_CT_POINTS_ROWS                                  1
#define TISP_PARAM_LSC_A_LINEAR_ROWS                                   1
#define TISP_PARAM_LSC_T_LINEAR_ROWS                                   1
#define TISP_PARAM_LSC_D_LINEAR_ROWS                                   1
#define TISP_PARAM_LSC_MESH_STR_ROWS                                   1
#define TISP_PARAM_LSC_MESH_STR_WDR_ROWS                               1
#define TISP_PARAM_LSC_MEAN_EN_ROWS                                    1

#define TISP_PARAM_LSC_LUT_NUM_COLS                                    1
#define TISP_PARAM_LSC_MESH_SCALE_COLS                                 1
#define TISP_PARAM_LSC_LUT_STRIDE_COLS                                 1
#define TISP_PARAM_LSC_MESH_SIZE_COLS                                  2
#define TISP_PARAM_LSC_CT_POINTS_COLS                                  4
#define TISP_PARAM_LSC_A_LINEAR_COLS                                   2047
#define TISP_PARAM_LSC_T_LINEAR_COLS                                   2047
#define TISP_PARAM_LSC_D_LINEAR_COLS                                   2047
#define TISP_PARAM_LSC_MESH_STR_COLS                                   9
#define TISP_PARAM_LSC_MESH_STR_WDR_COLS                               9
#define TISP_PARAM_LSC_MEAN_EN_COLS                                    1

//DMSC
#define TISP_PARAM_DMSC_UU_NP_ARRAY_ROWS                               1
#define TISP_PARAM_DMSC_R_DEIR_ARRAY_ROWS                              1
#define TISP_PARAM_DMSC_G_DEIR_ARRAY_ROWS                              1
#define TISP_PARAM_DMSC_B_DEIR_ARRAY_ROWS                              1
#define TISP_PARAM_DMSC_SP_D_SIGMA_3_NP_ARRAY_ROWS                     1
#define TISP_PARAM_DMSC_SP_D_W_WEI_NP_ARRAY_ROWS                       1
#define TISP_PARAM_DMSC_SP_D_B_WEI_NP_ARRAY_ROWS                       1
#define TISP_PARAM_DMSC_SP_UD_W_WEI_NP_ARRAY_ROWS                      1
#define TISP_PARAM_DMSC_SP_UD_B_WEI_NP_ARRAY_ROWS                      1
#define TISP_PARAM_DMSC_OUT_OPT_ROWS                                   1
#define TISP_PARAM_DMSC_HV_THRES_1_ARRAY_ROWS                          1
#define TISP_PARAM_DMSC_HV_STREN_ARRAY_ROWS                            1
#define TISP_PARAM_DMSC_AA_THRES_1_ARRAY_ROWS                          1
#define TISP_PARAM_DMSC_AA_STREN_ARRAY_ROWS                            1
#define TISP_PARAM_DMSC_HVAA_THRES_1_ARRAY_ROWS                        1
#define TISP_PARAM_DMSC_HVAA_STREN_ARRAY_ROWS                          1
#define TISP_PARAM_DMSC_DIR_PAR_ARRAY_ROWS                             1
#define TISP_PARAM_DMSC_UU_THRES_ARRAY_ROWS                            1
#define TISP_PARAM_DMSC_UU_STREN_ARRAY_ROWS                            1
#define TISP_PARAM_DMSC_UU_PAR_ARRAY_ROWS                              1
#define TISP_PARAM_DMSC_ALIAS_STREN_ARRAY_ROWS                         1
#define TISP_PARAM_DMSC_ALIAS_THRES_1_ARRAY_ROWS                       1
#define TISP_PARAM_DMSC_ALIAS_THRES_2_ARRAY_ROWS                       1
#define TISP_PARAM_DMSC_ALIAS_DIR_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DMSC_ALIAS_PAR_ARRAY_ROWS                           1
#define TISP_PARAM_DMSC_NOR_ALIAS_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DMSC_NOR_PAR_ARRAY_ROWS                             1
#define TISP_PARAM_DMSC_SP_D_W_STREN_ARRAY_ROWS                        1
#define TISP_PARAM_DMSC_SP_D_B_STREN_ARRAY_ROWS                        1
#define TISP_PARAM_DMSC_SP_D_BRIG_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DMSC_SP_D_DARK_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DMSC_SP_D_V2_WIN5_THRES_ARRAY_ROWS                  1
#define TISP_PARAM_DMSC_SP_D_FLAT_STREN_ARRAY_ROWS                     1
#define TISP_PARAM_DMSC_SP_D_FLAT_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DMSC_SP_D_OE_STREN_ARRAY_ROWS                       1
#define TISP_PARAM_DMSC_SP_D_PAR_ARRAY_ROWS                            1
#define TISP_PARAM_DMSC_SP_UD_W_STREN_ARRAY_ROWS                       1
#define TISP_PARAM_DMSC_SP_UD_B_STREN_ARRAY_ROWS                       1
#define TISP_PARAM_DMSC_SP_UD_BRIG_THRES_ARRAY_ROWS                    1
#define TISP_PARAM_DMSC_SP_UD_DARK_THRES_ARRAY_ROWS                    1
#define TISP_PARAM_DMSC_SP_UD_STD_STREN_ARRAY_ROWS                     1
#define TISP_PARAM_DMSC_SP_UD_STD_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DMSC_SP_UD_FLAT_THRES_ARRAY_ROWS                    1
#define TISP_PARAM_DMSC_SP_UD_FLAT_STREN_ARRAY_ROWS                    1
#define TISP_PARAM_DMSC_SP_UD_OE_STREN_ARRAY_ROWS                      1
#define TISP_PARAM_DMSC_SP_UD_PAR_ARRAY_ROWS                           1
#define TISP_PARAM_DMSC_SP_UD_V1_V2_PAR_ARRAY_ROWS                     1
#define TISP_PARAM_DMSC_SP_ALIAS_THRES_ARRAY_ROWS                      1
#define TISP_PARAM_DMSC_SP_ALIAS_PAR_ARRAY_ROWS                        1
#define TISP_PARAM_DMSC_RGB_DIR_THRES_ARRAY_ROWS                       1
#define TISP_PARAM_DMSC_RGB_ALIAS_STREN_ARRAY_ROWS                     1
#define TISP_PARAM_DMSC_RGB_ALIAS_PAR_ARRAY_ROWS                       1
#define TISP_PARAM_DMSC_FC_ALIAS_STREN_ARRAY_ROWS                      1
#define TISP_PARAM_DMSC_FC_T1_THRES_ARRAY_ROWS                         1
#define TISP_PARAM_DMSC_FC_T1_STREN_ARRAY_ROWS                         1
#define TISP_PARAM_DMSC_FC_T2_STREN_ARRAY_ROWS                         1
#define TISP_PARAM_DMSC_FC_T3_STREN_ARRAY_ROWS                         1
#define TISP_PARAM_DMSC_FC_LUM_STREN_ARRAY_ROWS                        1
#define TISP_PARAM_DMSC_FC_LUM_THRES_ARRAY_ROWS                        1
#define TISP_PARAM_DMSC_FC_PAR_ARRAY_ROWS                              1
#define TISP_PARAM_DMSC_DEIR_OE_EN_ROWS                                1
#define TISP_PARAM_DMSC_DEIR_RGB_IR_OE_SLOPE_ROWS                      1
#define TISP_PARAM_DMSC_DEIR_FUSION_THRES_ARRAY_ROWS                   1
#define TISP_PARAM_DMSC_DEIR_FUSION_STREN_ARRAY_ROWS                   1
#define TISP_PARAM_DMSC_SP_D_NS_THRES_ARRAY_ROWS                       1
#define TISP_PARAM_DMSC_SP_UD_NS_THRES_ARRAY_ROWS                      1
#define TISP_PARAM_DMSC_SP_D_UD_NS_OPT_ROWS                            1
#define TISP_PARAM_DMSC_UU_THRES_WDR_ARRAY_ROWS                        1
#define TISP_PARAM_DMSC_UU_STREN_WDR_ARRAY_ROWS                        1
#define TISP_PARAM_DMSC_SP_D_W_STREN_WDR_ARRAY_ROWS                    1
#define TISP_PARAM_DMSC_SP_D_B_STREN_WDR_ARRAY_ROWS                    1
#define TISP_PARAM_DMSC_SP_UD_W_STREN_WDR_ARRAY_ROWS                   1
#define TISP_PARAM_DMSC_SP_UD_B_STREN_WDR_ARRAY_ROWS                   1
#define TISP_PARAM_DMSC_AWB_GAIN_ROWS                                  1

#define TISP_PARAM_DMSC_UU_NP_ARRAY_COLS                               16
#define TISP_PARAM_DMSC_R_DEIR_ARRAY_COLS                              8
#define TISP_PARAM_DMSC_G_DEIR_ARRAY_COLS                              8
#define TISP_PARAM_DMSC_B_DEIR_ARRAY_COLS                              8
#define TISP_PARAM_DMSC_SP_D_SIGMA_3_NP_ARRAY_COLS                     16
#define TISP_PARAM_DMSC_SP_D_W_WEI_NP_ARRAY_COLS                       22
#define TISP_PARAM_DMSC_SP_D_B_WEI_NP_ARRAY_COLS                       22
#define TISP_PARAM_DMSC_SP_UD_W_WEI_NP_ARRAY_COLS                      22
#define TISP_PARAM_DMSC_SP_UD_B_WEI_NP_ARRAY_COLS                      22
#define TISP_PARAM_DMSC_OUT_OPT_COLS                                   1
#define TISP_PARAM_DMSC_HV_THRES_1_ARRAY_COLS                          9
#define TISP_PARAM_DMSC_HV_STREN_ARRAY_COLS                            9
#define TISP_PARAM_DMSC_AA_THRES_1_ARRAY_COLS                          9
#define TISP_PARAM_DMSC_AA_STREN_ARRAY_COLS                            9
#define TISP_PARAM_DMSC_HVAA_THRES_1_ARRAY_COLS                        9
#define TISP_PARAM_DMSC_HVAA_STREN_ARRAY_COLS                          9
#define TISP_PARAM_DMSC_DIR_PAR_ARRAY_COLS                             9
#define TISP_PARAM_DMSC_UU_THRES_ARRAY_COLS                            9
#define TISP_PARAM_DMSC_UU_STREN_ARRAY_COLS                            9
#define TISP_PARAM_DMSC_UU_PAR_ARRAY_COLS                              4
#define TISP_PARAM_DMSC_ALIAS_STREN_ARRAY_COLS                         9
#define TISP_PARAM_DMSC_ALIAS_THRES_1_ARRAY_COLS                       9
#define TISP_PARAM_DMSC_ALIAS_THRES_2_ARRAY_COLS                       9
#define TISP_PARAM_DMSC_ALIAS_DIR_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DMSC_ALIAS_PAR_ARRAY_COLS                           4
#define TISP_PARAM_DMSC_NOR_ALIAS_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DMSC_NOR_PAR_ARRAY_COLS                             4
#define TISP_PARAM_DMSC_SP_D_W_STREN_ARRAY_COLS                        9
#define TISP_PARAM_DMSC_SP_D_B_STREN_ARRAY_COLS                        9
#define TISP_PARAM_DMSC_SP_D_BRIG_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DMSC_SP_D_DARK_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DMSC_SP_D_V2_WIN5_THRES_ARRAY_COLS                  9
#define TISP_PARAM_DMSC_SP_D_FLAT_STREN_ARRAY_COLS                     9
#define TISP_PARAM_DMSC_SP_D_FLAT_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DMSC_SP_D_OE_STREN_ARRAY_COLS                       9
#define TISP_PARAM_DMSC_SP_D_PAR_ARRAY_COLS                            11
#define TISP_PARAM_DMSC_SP_UD_W_STREN_ARRAY_COLS                       9
#define TISP_PARAM_DMSC_SP_UD_B_STREN_ARRAY_COLS                       9
#define TISP_PARAM_DMSC_SP_UD_BRIG_THRES_ARRAY_COLS                    9
#define TISP_PARAM_DMSC_SP_UD_DARK_THRES_ARRAY_COLS                    9
#define TISP_PARAM_DMSC_SP_UD_STD_STREN_ARRAY_COLS                     9
#define TISP_PARAM_DMSC_SP_UD_STD_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DMSC_SP_UD_FLAT_THRES_ARRAY_COLS                    9
#define TISP_PARAM_DMSC_SP_UD_FLAT_STREN_ARRAY_COLS                    9
#define TISP_PARAM_DMSC_SP_UD_OE_STREN_ARRAY_COLS                      9
#define TISP_PARAM_DMSC_SP_UD_PAR_ARRAY_COLS                           13
#define TISP_PARAM_DMSC_SP_UD_V1_V2_PAR_ARRAY_COLS                     10
#define TISP_PARAM_DMSC_SP_ALIAS_THRES_ARRAY_COLS                      9
#define TISP_PARAM_DMSC_SP_ALIAS_PAR_ARRAY_COLS                        2
#define TISP_PARAM_DMSC_RGB_DIR_THRES_ARRAY_COLS                       9
#define TISP_PARAM_DMSC_RGB_ALIAS_STREN_ARRAY_COLS                     9
#define TISP_PARAM_DMSC_RGB_ALIAS_PAR_ARRAY_COLS                       2
#define TISP_PARAM_DMSC_FC_ALIAS_STREN_ARRAY_COLS                      9
#define TISP_PARAM_DMSC_FC_T1_THRES_ARRAY_COLS                         9
#define TISP_PARAM_DMSC_FC_T1_STREN_ARRAY_COLS                         9
#define TISP_PARAM_DMSC_FC_T2_STREN_ARRAY_COLS                         9
#define TISP_PARAM_DMSC_FC_T3_STREN_ARRAY_COLS                         9
#define TISP_PARAM_DMSC_FC_LUM_STREN_ARRAY_COLS                        9
#define TISP_PARAM_DMSC_FC_LUM_THRES_ARRAY_COLS                        9
#define TISP_PARAM_DMSC_FC_PAR_ARRAY_COLS                              10
#define TISP_PARAM_DMSC_DEIR_OE_EN_COLS                                2
#define TISP_PARAM_DMSC_DEIR_RGB_IR_OE_SLOPE_COLS                      5
#define TISP_PARAM_DMSC_DEIR_FUSION_THRES_ARRAY_COLS                   9
#define TISP_PARAM_DMSC_DEIR_FUSION_STREN_ARRAY_COLS                   9
#define TISP_PARAM_DMSC_SP_D_NS_THRES_ARRAY_COLS                       9
#define TISP_PARAM_DMSC_SP_UD_NS_THRES_ARRAY_COLS                      9
#define TISP_PARAM_DMSC_SP_D_UD_NS_OPT_COLS                            2
#define TISP_PARAM_DMSC_UU_THRES_WDR_ARRAY_COLS                        9
#define TISP_PARAM_DMSC_UU_STREN_WDR_ARRAY_COLS                        9
#define TISP_PARAM_DMSC_SP_D_W_STREN_WDR_ARRAY_COLS                    9
#define TISP_PARAM_DMSC_SP_D_B_STREN_WDR_ARRAY_COLS                    9
#define TISP_PARAM_DMSC_SP_UD_W_STREN_WDR_ARRAY_COLS                   9
#define TISP_PARAM_DMSC_SP_UD_B_STREN_WDR_ARRAY_COLS                   9
#define TISP_PARAM_DMSC_AWB_GAIN_COLS                                  3

//CCM
#define TISP_PARAM_CCM_DP_CFG_ROWS                                     1
#define TISP_PARAM_CCM_A_LINEAR_ROWS                                   1
#define TISP_PARAM_CCM_T_LINEAR_ROWS                                   1
#define TISP_PARAM_CCM_D_LINEAR_ROWS                                   1
#define TISP_PARAM_CCM_EV_LIST_ROWS                                    1
#define TISP_PARAM_CCM_SAT_LIST_ROWS                                   1
#define TISP_PARAM_CCM_A_WDR_ROWS                                      1
#define TISP_PARAM_CCM_T_WDR_ROWS                                      1
#define TISP_PARAM_CCM_D_WDR_ROWS                                      1
#define TISP_PARAM_CCM_EV_LIST_WDR_ROWS                                1
#define TISP_PARAM_CCM_SAT_LIST_WDR_ROWS                               1
#define TISP_PARAM_CCM_AWB_LIST_ROWS                                   1

#define TISP_PARAM_CCM_DP_CFG_COLS                                     5
#define TISP_PARAM_CCM_A_LINEAR_COLS                                   9
#define TISP_PARAM_CCM_T_LINEAR_COLS                                   9
#define TISP_PARAM_CCM_D_LINEAR_COLS                                   9
#define TISP_PARAM_CCM_EV_LIST_COLS                                    9
#define TISP_PARAM_CCM_SAT_LIST_COLS                                   9
#define TISP_PARAM_CCM_A_WDR_COLS                                      9
#define TISP_PARAM_CCM_T_WDR_COLS                                      9
#define TISP_PARAM_CCM_D_WDR_COLS                                      9
#define TISP_PARAM_CCM_EV_LIST_WDR_COLS                                9
#define TISP_PARAM_CCM_SAT_LIST_WDR_COLS                               9
#define TISP_PARAM_CCM_AWB_LIST_COLS                                   2

//SHARPE
#define TISP_PARAM_Y_SP_OUT_OPT_ARRAY_ROWS                             1
#define TISP_PARAM_Y_SP_SL_EXP_THRES_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_SL_EXP_NUM_ARRAY_ROWS                          1
#define TISP_PARAM_Y_SP_STD_CFG_ARRAY_ROWS                             1
#define TISP_PARAM_Y_SP_UU_MIN_STREN_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_UU_MIN_THRES_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_UU_THRES_ARRAY_ROWS                            1
#define TISP_PARAM_Y_SP_MV_UU_THRES_ARRAY_ROWS                         1
#define TISP_PARAM_Y_SP_MV_UU_STREN_ARRAY_ROWS                         1
#define TISP_PARAM_Y_SP_UU_STREN_ARRAY_ROWS                            1
#define TISP_PARAM_Y_SP_UU_PAR_CFG_ARRAY_ROWS                          1
#define TISP_PARAM_Y_SP_FL_STD_THRES_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_MV_FL_STD_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_Y_SP_FL_THRES_ARRAY_ROWS                            1
#define TISP_PARAM_Y_SP_FL_MIN_THRES_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_MV_FL_THRES_ARRAY_ROWS                         1
#define TISP_PARAM_Y_SP_MV_FL_MIN_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_Y_SP_FL_PAR_CFG_ARRAY_ROWS                          1
#define TISP_PARAM_Y_SP_V2_WIN5_THRES_ARRAY_ROWS                       1
#define TISP_PARAM_Y_SP_V1_V2_COEF_PAR_CFG_ARRAY_ROWS                  1
#define TISP_PARAM_Y_SP_W_B_LL_PAR_CFG_ARRAY_ROWS                      1
#define TISP_PARAM_Y_SP_UU_NP_ARRAY_ROWS                               1
#define TISP_PARAM_Y_SP_W_WEI_NP_ARRAY_ROWS                            1
#define TISP_PARAM_Y_SP_B_WEI_NP_ARRAY_ROWS                            1
#define TISP_PARAM_Y_SP_W_SL_STREN_0_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_W_SL_STREN_1_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_W_SL_STREN_2_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_W_SL_STREN_3_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_B_SL_STREN_0_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_B_SL_STREN_1_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_B_SL_STREN_2_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_B_SL_STREN_3_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_UU_SL_0_ARRAY_ROWS                             1
#define TISP_PARAM_Y_SP_UU_SL_1_ARRAY_ROWS                             1
#define TISP_PARAM_Y_SP_UU_SL_2_ARRAY_ROWS                             1
#define TISP_PARAM_Y_SP_UU_SL_3_ARRAY_ROWS                             1
#define TISP_PARAM_Y_SP_FL_SL_0_ARRAY_ROWS                             1
#define TISP_PARAM_Y_SP_FL_SL_1_ARRAY_ROWS                             1
#define TISP_PARAM_Y_SP_FL_SL_2_ARRAY_ROWS                             1
#define TISP_PARAM_Y_SP_UU_THRES_WDR_ARRAY_ROWS                        1
#define TISP_PARAM_Y_SP_W_SL_STREN_0_WDR_ARRAY_ROWS                    1
#define TISP_PARAM_Y_SP_W_SL_STREN_1_WDR_ARRAY_ROWS                    1
#define TISP_PARAM_Y_SP_W_SL_STREN_2_WDR_ARRAY_ROWS                    1
#define TISP_PARAM_Y_SP_W_SL_STREN_3_WDR_ARRAY_ROWS                    1
#define TISP_PARAM_Y_SP_B_SL_STREN_0_WDR_ARRAY_ROWS                    1
#define TISP_PARAM_Y_SP_B_SL_STREN_1_WDR_ARRAY_ROWS                    1
#define TISP_PARAM_Y_SP_B_SL_STREN_2_WDR_ARRAY_ROWS                    1
#define TISP_PARAM_Y_SP_B_SL_STREN_3_WDR_ARRAY_ROWS                    1
#define TISP_PARAM_Y_SP_FL_SL_3_ARRAY_ROWS                             1

#define TISP_PARAM_Y_SP_OUT_OPT_ARRAY_COLS                             1
#define TISP_PARAM_Y_SP_SL_EXP_THRES_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_SL_EXP_NUM_ARRAY_COLS                          9
#define TISP_PARAM_Y_SP_STD_CFG_ARRAY_COLS                             2
#define TISP_PARAM_Y_SP_UU_MIN_STREN_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_UU_MIN_THRES_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_UU_THRES_ARRAY_COLS                            9
#define TISP_PARAM_Y_SP_MV_UU_THRES_ARRAY_COLS                         9
#define TISP_PARAM_Y_SP_MV_UU_STREN_ARRAY_COLS                         9
#define TISP_PARAM_Y_SP_UU_STREN_ARRAY_COLS                            9
#define TISP_PARAM_Y_SP_UU_PAR_CFG_ARRAY_COLS                          4
#define TISP_PARAM_Y_SP_FL_STD_THRES_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_MV_FL_STD_THRES_ARRAY_COLS                     9
#define TISP_PARAM_Y_SP_FL_THRES_ARRAY_COLS                            9
#define TISP_PARAM_Y_SP_FL_MIN_THRES_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_MV_FL_THRES_ARRAY_COLS                         9
#define TISP_PARAM_Y_SP_MV_FL_MIN_THRES_ARRAY_COLS                     9
#define TISP_PARAM_Y_SP_FL_PAR_CFG_ARRAY_COLS                          2
#define TISP_PARAM_Y_SP_V2_WIN5_THRES_ARRAY_COLS                       9
#define TISP_PARAM_Y_SP_V1_V2_COEF_PAR_CFG_ARRAY_COLS                  12
#define TISP_PARAM_Y_SP_W_B_LL_PAR_CFG_ARRAY_COLS                      9
#define TISP_PARAM_Y_SP_UU_NP_ARRAY_COLS                               16
#define TISP_PARAM_Y_SP_W_WEI_NP_ARRAY_COLS                            16
#define TISP_PARAM_Y_SP_B_WEI_NP_ARRAY_COLS                            16
#define TISP_PARAM_Y_SP_W_SL_STREN_0_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_W_SL_STREN_1_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_W_SL_STREN_2_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_W_SL_STREN_3_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_B_SL_STREN_0_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_B_SL_STREN_1_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_B_SL_STREN_2_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_B_SL_STREN_3_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_UU_SL_0_ARRAY_COLS                             9
#define TISP_PARAM_Y_SP_UU_SL_1_ARRAY_COLS                             9
#define TISP_PARAM_Y_SP_UU_SL_2_ARRAY_COLS                             9
#define TISP_PARAM_Y_SP_UU_SL_3_ARRAY_COLS                             9
#define TISP_PARAM_Y_SP_FL_SL_0_ARRAY_COLS                             9
#define TISP_PARAM_Y_SP_FL_SL_1_ARRAY_COLS                             9
#define TISP_PARAM_Y_SP_FL_SL_2_ARRAY_COLS                             9
#define TISP_PARAM_Y_SP_UU_THRES_WDR_ARRAY_COLS                        9
#define TISP_PARAM_Y_SP_W_SL_STREN_0_WDR_ARRAY_COLS                    9
#define TISP_PARAM_Y_SP_W_SL_STREN_1_WDR_ARRAY_COLS                    9
#define TISP_PARAM_Y_SP_W_SL_STREN_2_WDR_ARRAY_COLS                    9
#define TISP_PARAM_Y_SP_W_SL_STREN_3_WDR_ARRAY_COLS                    9
#define TISP_PARAM_Y_SP_B_SL_STREN_0_WDR_ARRAY_COLS                    9
#define TISP_PARAM_Y_SP_B_SL_STREN_1_WDR_ARRAY_COLS                    9
#define TISP_PARAM_Y_SP_B_SL_STREN_2_WDR_ARRAY_COLS                    9
#define TISP_PARAM_Y_SP_B_SL_STREN_3_WDR_ARRAY_COLS                    9
#define TISP_PARAM_Y_SP_FL_SL_3_ARRAY_COLS                             9

//DPC
#define TISP_PARAM_CTR_MD_NP_ARRAY_ROWS                                1
#define TISP_PARAM_CTR_STD_NP_ARRAY_ROWS                               1
#define TISP_PARAM_DPC_S_CON_PAR_ARRAY_ROWS                            1
#define TISP_PARAM_DPC_D_M1_FTHRES_ARRAY_ROWS                          1
#define TISP_PARAM_DPC_D_M1_DTHRES_ARRAY_ROWS                          1
#define TISP_PARAM_DPC_D_M1_CON_PAR_ARRAY_ROWS                         1
#define TISP_PARAM_DPC_D_M2_LEVEL_ARRAY_ROWS                           1
#define TISP_PARAM_DPC_D_M2_HTHRES_ARRAY_ROWS                          1
#define TISP_PARAM_DPC_D_M2_LTHRES_ARRAY_ROWS                          1
#define TISP_PARAM_DPC_D_M2_P0_D1_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DPC_D_M2_P1_D1_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DPC_D_M2_P2_D1_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DPC_D_M2_P3_D1_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DPC_D_M2_P0_D2_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DPC_D_M2_P1_D2_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DPC_D_M2_P2_D2_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DPC_D_M2_P3_D2_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_DPC_D_M2_CON_PAR_ARRAY_ROWS                         1
#define TISP_PARAM_DPC_D_M3_FTHRES_ARRAY_ROWS                          1
#define TISP_PARAM_DPC_D_M3_DTHRES_ARRAY_ROWS                          1
#define TISP_PARAM_DPC_D_M3_CON_PAR_ARRAY_ROWS                         1
#define TISP_PARAM_DPC_D_COR_PAR_ARRAY_ROWS                            1
#define TISP_PARAM_CTR_STREN_ARRAY_ROWS                                1
#define TISP_PARAM_CTR_MD_THRES_ARRAY_ROWS                             1
#define TISP_PARAM_CTR_EL_THRES_ARRAY_ROWS                             1
#define TISP_PARAM_CTR_EH_THRES_ARRAY_ROWS                             1
#define TISP_PARAM_DPC_D_M1_FTHRES_WDR_ARRAY_ROWS                      1
#define TISP_PARAM_DPC_D_M1_DTHRES_WDR_ARRAY_ROWS                      1
#define TISP_PARAM_DPC_D_M3_FTHRES_WDR_ARRAY_ROWS                      1
#define TISP_PARAM_DPC_D_M3_DTHRES_WDR_ARRAY_ROWS                      1
#define TISP_PARAM_CTR_CON_PAR_ARRAY_ROWS                              1

#define TISP_PARAM_CTR_MD_NP_ARRAY_COLS                                16
#define TISP_PARAM_CTR_STD_NP_ARRAY_COLS                               16
#define TISP_PARAM_DPC_S_CON_PAR_ARRAY_COLS                            5
#define TISP_PARAM_DPC_D_M1_FTHRES_ARRAY_COLS                          9
#define TISP_PARAM_DPC_D_M1_DTHRES_ARRAY_COLS                          9
#define TISP_PARAM_DPC_D_M1_CON_PAR_ARRAY_COLS                         3
#define TISP_PARAM_DPC_D_M2_LEVEL_ARRAY_COLS                           9
#define TISP_PARAM_DPC_D_M2_HTHRES_ARRAY_COLS                          9
#define TISP_PARAM_DPC_D_M2_LTHRES_ARRAY_COLS                          9
#define TISP_PARAM_DPC_D_M2_P0_D1_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DPC_D_M2_P1_D1_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DPC_D_M2_P2_D1_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DPC_D_M2_P3_D1_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DPC_D_M2_P0_D2_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DPC_D_M2_P1_D2_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DPC_D_M2_P2_D2_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DPC_D_M2_P3_D2_THRES_ARRAY_COLS                     9
#define TISP_PARAM_DPC_D_M2_CON_PAR_ARRAY_COLS                         5
#define TISP_PARAM_DPC_D_M3_FTHRES_ARRAY_COLS                          9
#define TISP_PARAM_DPC_D_M3_DTHRES_ARRAY_COLS                          9
#define TISP_PARAM_DPC_D_M3_CON_PAR_ARRAY_COLS                         4
#define TISP_PARAM_DPC_D_COR_PAR_ARRAY_COLS                            11
#define TISP_PARAM_CTR_STREN_ARRAY_COLS                                9
#define TISP_PARAM_CTR_MD_THRES_ARRAY_COLS                             9
#define TISP_PARAM_CTR_EL_THRES_ARRAY_COLS                             9
#define TISP_PARAM_CTR_EH_THRES_ARRAY_COLS                             9
#define TISP_PARAM_DPC_D_M1_FTHRES_WDR_ARRAY_COLS                      9
#define TISP_PARAM_DPC_D_M1_DTHRES_WDR_ARRAY_COLS                      9
#define TISP_PARAM_DPC_D_M3_FTHRES_WDR_ARRAY_COLS                      9
#define TISP_PARAM_DPC_D_M3_DTHRES_WDR_ARRAY_COLS                      9
#define TISP_PARAM_CTR_CON_PAR_ARRAY_COLS                              7

//SDNS
#define TISP_PARAM_SDNS_AA_MV_DET_OPT_ROWS                             1
#define TISP_PARAM_SDNS_GRAD_ZX_THRES_ARRAY_ROWS                       1
#define TISP_PARAM_SDNS_GRAD_ZY_THRES_ARRAY_ROWS                       1
#define TISP_PARAM_SDNS_STD_THR1_ARRAY_ROWS                            1
#define TISP_PARAM_SDNS_STD_THR2_ARRAY_ROWS                            1
#define TISP_PARAM_SDNS_H_MV_WEI_ROWS                                  1
#define TISP_PARAM_SDNS_MV_NUM_THR_5X5_ARRAY_ROWS                      1
#define TISP_PARAM_SDNS_MV_NUM_THR_7X7_ARRAY_ROWS                      1
#define TISP_PARAM_SDNS_MV_NUM_THR_9X9_ARRAY_ROWS                      1
#define TISP_PARAM_SDNS_MV_NUM_THR_11X11_ARRAY_ROWS                    1
#define TISP_PARAM_SDNS_R_S_ROWS                                       1
#define TISP_PARAM_SDNS_R_MV_ROWS                                      1
#define TISP_PARAM_SDNS_H_S_1_ARRAY_ROWS                               1
#define TISP_PARAM_SDNS_H_S_2_ARRAY_ROWS                               1
#define TISP_PARAM_SDNS_H_S_3_ARRAY_ROWS                               1
#define TISP_PARAM_SDNS_H_S_4_ARRAY_ROWS                               1
#define TISP_PARAM_SDNS_H_S_5_ARRAY_ROWS                               1
#define TISP_PARAM_SDNS_H_S_6_ARRAY_ROWS                               1
#define TISP_PARAM_SDNS_H_S_7_ARRAY_ROWS                               1
#define TISP_PARAM_SDNS_H_S_8_ARRAY_ROWS                               1
#define TISP_PARAM_SDNS_H_S_9_ARRAY_ROWS                               1
#define TISP_PARAM_SDNS_H_S_10_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_S_11_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_S_12_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_S_13_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_S_14_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_S_15_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_S_16_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_MV_1_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_MV_2_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_MV_3_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_MV_4_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_MV_5_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_MV_6_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_MV_7_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_MV_8_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_MV_9_ARRAY_ROWS                              1
#define TISP_PARAM_SDNS_H_MV_10_ARRAY_ROWS                             1
#define TISP_PARAM_SDNS_H_MV_11_ARRAY_ROWS                             1
#define TISP_PARAM_SDNS_H_MV_12_ARRAY_ROWS                             1
#define TISP_PARAM_SDNS_H_MV_13_ARRAY_ROWS                             1
#define TISP_PARAM_SDNS_H_MV_14_ARRAY_ROWS                             1
#define TISP_PARAM_SDNS_H_MV_15_ARRAY_ROWS                             1
#define TISP_PARAM_SDNS_H_MV_16_ARRAY_ROWS                             1
#define TISP_PARAM_SDNS_DARK_THRES_ARRAY_ROWS                          1
#define TISP_PARAM_SDNS_LIGHT_THRES_ARRAY_ROWS                         1
#define TISP_PARAM_SDNS_H_VAL_MAX_ROWS                                 1
#define TISP_PARAM_SDNS_SHARPEN_TT_OPT_ROWS                            1
#define TISP_PARAM_SDNS_D_S1_THR_ROWS                                  1
#define TISP_PARAM_SDNS_W_THR_ROWS                                     1
#define TISP_PARAM_SDNS_AVE_FLITER_ROWS                                1
#define TISP_PARAM_SDNS_Y_ROWS                                         1
#define TISP_PARAM_SDNS_X_1XG_1X4_ROWS                                 1
#define TISP_PARAM_SDNS_K_1XG_1X4_ROWS                                 1
#define TISP_PARAM_SDNS_H_VAL_ROWS                                     1
#define TISP_PARAM_SDNS_SHARPEN_G_STD_ROWS                             1
#define TISP_PARAM_SDNS_SP_UU_PAR_ROWS                                 1
#define TISP_PARAM_SDNS_SP_UU_THRES_ARRAY_ROWS                         1
#define TISP_PARAM_SDNS_SP_UU_STREN_ARRAY_ROWS                         1
#define TISP_PARAM_SDNS_SP_MV_UU_THRES_ARRAY_ROWS                      1
#define TISP_PARAM_SDNS_SP_MV_UU_STREN_ARRAY_ROWS                      1
#define TISP_PARAM_SDNS_SP_MV_WEI_UU_VALUE_ROWS                        1
#define TISP_PARAM_SDNS_SP_D_V2_SIGMA_WIN5_SLOPE_ROWS                  1
#define TISP_PARAM_SDNS_SP_D_V2_WIN5_THRES_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_SP_D_WBHL_FLAT_ROWS                            1
#define TISP_PARAM_SDNS_SP_D_W_SP_STREN_0_ARRAY_ROWS                   1
#define TISP_PARAM_SDNS_SP_D_W_SP_STREN_1_ARRAY_ROWS                   1
#define TISP_PARAM_SDNS_SP_D_W_SP_STREN_2_ARRAY_ROWS                   1
#define TISP_PARAM_SDNS_SP_D_W_SP_STREN_3_ARRAY_ROWS                   1
#define TISP_PARAM_SDNS_SP_D_B_SP_STREN_0_ARRAY_ROWS                   1
#define TISP_PARAM_SDNS_SP_D_B_SP_STREN_1_ARRAY_ROWS                   1
#define TISP_PARAM_SDNS_SP_D_B_SP_STREN_2_ARRAY_ROWS                   1
#define TISP_PARAM_SDNS_SP_D_B_SP_STREN_3_ARRAY_ROWS                   1
#define TISP_PARAM_SDNS_SP_D_FLAT_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_SDNS_SP_D_FLAT_STREN_ARRAY_ROWS                     1
#define TISP_PARAM_SDNS_SP_UD_V2_1_COEF_ROWS                           1
#define TISP_PARAM_SDNS_SP_UD_W_SP_STREN_0_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_SP_UD_W_SP_STREN_1_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_SP_UD_W_SP_STREN_2_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_SP_UD_W_SP_STREN_3_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_SP_UD_B_SP_STREN_0_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_SP_UD_B_SP_STREN_1_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_SP_UD_B_SP_STREN_2_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_SP_UD_B_SP_STREN_3_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_SP_UD_STD_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_SDNS_SP_UD_STD_STREN_ARRAY_ROWS                     1
#define TISP_PARAM_SDNS_SP_UD_FLAT_THRES_ARRAY_ROWS                    1
#define TISP_PARAM_SDNS_SP_UD_FLAT_STREN_ARRAY_ROWS                    1
#define TISP_PARAM_SDNS_SP_UD_WBHL_FLAT_ROWS                           1
#define TISP_PARAM_SDNS_SP_UU_NP_ARRAY_ROWS                            1
#define TISP_PARAM_SDNS_SP_D_W_WEI_NP_ARRAY_ROWS                       1
#define TISP_PARAM_SDNS_SP_D_B_WEI_NP_ARRAY_ROWS                       1
#define TISP_PARAM_SDNS_SP_UD_W_WEI_NP_ARRAY_ROWS                      1
#define TISP_PARAM_SDNS_AVE_THRES_ARRAY_ROWS                           1
#define TISP_PARAM_SDNS_GRAD_ZX_THRES_WDR_ARRAY_ROWS                   1
#define TISP_PARAM_SDNS_GRAD_ZY_THRES_WDR_ARRAY_ROWS                   1
#define TISP_PARAM_SDNS_STD_THR1_WDR_ARRAY_ROWS                        1
#define TISP_PARAM_SDNS_STD_THR2_WDR_ARRAY_ROWS                        1
#define TISP_PARAM_SDNS_H_MV_WEI_WDR_ROWS                              1
#define TISP_PARAM_SDNS_H_S_1_WDR_ARRAY_ROWS                           1
#define TISP_PARAM_SDNS_H_S_2_WDR_ARRAY_ROWS                           1
#define TISP_PARAM_SDNS_H_S_3_WDR_ARRAY_ROWS                           1
#define TISP_PARAM_SDNS_H_S_4_WDR_ARRAY_ROWS                           1
#define TISP_PARAM_SDNS_H_S_5_WDR_ARRAY_ROWS                           1
#define TISP_PARAM_SDNS_H_S_6_WDR_ARRAY_ROWS                           1
#define TISP_PARAM_SDNS_H_S_7_WDR_ARRAY_ROWS                           1
#define TISP_PARAM_SDNS_H_S_8_WDR_ARRAY_ROWS                           1
#define TISP_PARAM_SDNS_H_S_9_WDR_ARRAY_ROWS                           1
#define TISP_PARAM_SDNS_H_S_10_WDR_ARRAY_ROWS                          1
#define TISP_PARAM_SDNS_H_S_11_WDR_ARRAY_ROWS                          1
#define TISP_PARAM_SDNS_H_S_12_WDR_ARRAY_ROWS                          1
#define TISP_PARAM_SDNS_H_S_13_WDR_ARRAY_ROWS                          1
#define TISP_PARAM_SDNS_H_S_14_WDR_ARRAY_ROWS                          1
#define TISP_PARAM_SDNS_H_S_15_WDR_ARRAY_ROWS                          1
#define TISP_PARAM_SDNS_H_S_16_WDR_ARRAY_ROWS                          1
#define TISP_PARAM_SDNS_SHARPEN_TT_OPT_WDR_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_AVE_FLITER_WDR_ROWS                            1
#define TISP_PARAM_SDNS_AVE_THRES_WDR_ARRAY_ROWS                       1
#define TISP_PARAM_SDNS_SP_UU_THRES_WDR_ARRAY_ROWS                     1
#define TISP_PARAM_SDNS_SP_UU_STREN_WDR_ARRAY_ROWS                     1
#define TISP_PARAM_SDNS_SP_MV_UU_THRES_WDR_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_SP_MV_UU_STREN_WDR_ARRAY_ROWS                  1
#define TISP_PARAM_SDNS_SP_UD_B_WEI_NP_ARRAY_ROWS                      1

#define TISP_PARAM_SDNS_AA_MV_DET_OPT_COLS                             7
#define TISP_PARAM_SDNS_GRAD_ZX_THRES_ARRAY_COLS                       9
#define TISP_PARAM_SDNS_GRAD_ZY_THRES_ARRAY_COLS                       9
#define TISP_PARAM_SDNS_STD_THR1_ARRAY_COLS                            9
#define TISP_PARAM_SDNS_STD_THR2_ARRAY_COLS                            9
#define TISP_PARAM_SDNS_H_MV_WEI_COLS                                  4
#define TISP_PARAM_SDNS_MV_NUM_THR_5X5_ARRAY_COLS                      9
#define TISP_PARAM_SDNS_MV_NUM_THR_7X7_ARRAY_COLS                      9
#define TISP_PARAM_SDNS_MV_NUM_THR_9X9_ARRAY_COLS                      9
#define TISP_PARAM_SDNS_MV_NUM_THR_11X11_ARRAY_COLS                    9
#define TISP_PARAM_SDNS_R_S_COLS                                       15
#define TISP_PARAM_SDNS_R_MV_COLS                                      15
#define TISP_PARAM_SDNS_H_S_1_ARRAY_COLS                               9
#define TISP_PARAM_SDNS_H_S_2_ARRAY_COLS                               9
#define TISP_PARAM_SDNS_H_S_3_ARRAY_COLS                               9
#define TISP_PARAM_SDNS_H_S_4_ARRAY_COLS                               9
#define TISP_PARAM_SDNS_H_S_5_ARRAY_COLS                               9
#define TISP_PARAM_SDNS_H_S_6_ARRAY_COLS                               9
#define TISP_PARAM_SDNS_H_S_7_ARRAY_COLS                               9
#define TISP_PARAM_SDNS_H_S_8_ARRAY_COLS                               9
#define TISP_PARAM_SDNS_H_S_9_ARRAY_COLS                               9
#define TISP_PARAM_SDNS_H_S_10_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_S_11_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_S_12_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_S_13_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_S_14_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_S_15_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_S_16_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_MV_1_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_MV_2_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_MV_3_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_MV_4_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_MV_5_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_MV_6_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_MV_7_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_MV_8_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_MV_9_ARRAY_COLS                              9
#define TISP_PARAM_SDNS_H_MV_10_ARRAY_COLS                             9
#define TISP_PARAM_SDNS_H_MV_11_ARRAY_COLS                             9
#define TISP_PARAM_SDNS_H_MV_12_ARRAY_COLS                             9
#define TISP_PARAM_SDNS_H_MV_13_ARRAY_COLS                             9
#define TISP_PARAM_SDNS_H_MV_14_ARRAY_COLS                             9
#define TISP_PARAM_SDNS_H_MV_15_ARRAY_COLS                             9
#define TISP_PARAM_SDNS_H_MV_16_ARRAY_COLS                             9
#define TISP_PARAM_SDNS_DARK_THRES_ARRAY_COLS                          9
#define TISP_PARAM_SDNS_LIGHT_THRES_ARRAY_COLS                         9
#define TISP_PARAM_SDNS_H_VAL_MAX_COLS                                 1
#define TISP_PARAM_SDNS_SHARPEN_TT_OPT_COLS                            9
#define TISP_PARAM_SDNS_D_S1_THR_COLS                                  15
#define TISP_PARAM_SDNS_W_THR_COLS                                     16
#define TISP_PARAM_SDNS_AVE_FLITER_COLS                                3
#define TISP_PARAM_SDNS_Y_COLS                                         3
#define TISP_PARAM_SDNS_X_1XG_1X4_COLS                                 64
#define TISP_PARAM_SDNS_K_1XG_1X4_COLS                                 16
#define TISP_PARAM_SDNS_H_VAL_COLS                                     16
#define TISP_PARAM_SDNS_SHARPEN_G_STD_COLS                             2
#define TISP_PARAM_SDNS_SP_UU_PAR_COLS                                 3
#define TISP_PARAM_SDNS_SP_UU_THRES_ARRAY_COLS                         9
#define TISP_PARAM_SDNS_SP_UU_STREN_ARRAY_COLS                         9
#define TISP_PARAM_SDNS_SP_MV_UU_THRES_ARRAY_COLS                      9
#define TISP_PARAM_SDNS_SP_MV_UU_STREN_ARRAY_COLS                      9
#define TISP_PARAM_SDNS_SP_MV_WEI_UU_VALUE_COLS                        4
#define TISP_PARAM_SDNS_SP_D_V2_SIGMA_WIN5_SLOPE_COLS                  2
#define TISP_PARAM_SDNS_SP_D_V2_WIN5_THRES_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_SP_D_WBHL_FLAT_COLS                            9
#define TISP_PARAM_SDNS_SP_D_W_SP_STREN_0_ARRAY_COLS                   9
#define TISP_PARAM_SDNS_SP_D_W_SP_STREN_1_ARRAY_COLS                   9
#define TISP_PARAM_SDNS_SP_D_W_SP_STREN_2_ARRAY_COLS                   9
#define TISP_PARAM_SDNS_SP_D_W_SP_STREN_3_ARRAY_COLS                   9
#define TISP_PARAM_SDNS_SP_D_B_SP_STREN_0_ARRAY_COLS                   9
#define TISP_PARAM_SDNS_SP_D_B_SP_STREN_1_ARRAY_COLS                   9
#define TISP_PARAM_SDNS_SP_D_B_SP_STREN_2_ARRAY_COLS                   9
#define TISP_PARAM_SDNS_SP_D_B_SP_STREN_3_ARRAY_COLS                   9
#define TISP_PARAM_SDNS_SP_D_FLAT_THRES_ARRAY_COLS                     9
#define TISP_PARAM_SDNS_SP_D_FLAT_STREN_ARRAY_COLS                     9
#define TISP_PARAM_SDNS_SP_UD_V2_1_COEF_COLS                           8
#define TISP_PARAM_SDNS_SP_UD_W_SP_STREN_0_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_SP_UD_W_SP_STREN_1_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_SP_UD_W_SP_STREN_2_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_SP_UD_W_SP_STREN_3_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_SP_UD_B_SP_STREN_0_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_SP_UD_B_SP_STREN_1_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_SP_UD_B_SP_STREN_2_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_SP_UD_B_SP_STREN_3_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_SP_UD_STD_THRES_ARRAY_COLS                     9
#define TISP_PARAM_SDNS_SP_UD_STD_STREN_ARRAY_COLS                     9
#define TISP_PARAM_SDNS_SP_UD_FLAT_THRES_ARRAY_COLS                    9
#define TISP_PARAM_SDNS_SP_UD_FLAT_STREN_ARRAY_COLS                    9
#define TISP_PARAM_SDNS_SP_UD_WBHL_FLAT_COLS                           11
#define TISP_PARAM_SDNS_SP_UU_NP_ARRAY_COLS                            16
#define TISP_PARAM_SDNS_SP_D_W_WEI_NP_ARRAY_COLS                       22
#define TISP_PARAM_SDNS_SP_D_B_WEI_NP_ARRAY_COLS                       22
#define TISP_PARAM_SDNS_SP_UD_W_WEI_NP_ARRAY_COLS                      22
#define TISP_PARAM_SDNS_AVE_THRES_ARRAY_COLS                           9
#define TISP_PARAM_SDNS_GRAD_ZX_THRES_WDR_ARRAY_COLS                   9
#define TISP_PARAM_SDNS_GRAD_ZY_THRES_WDR_ARRAY_COLS                   9
#define TISP_PARAM_SDNS_STD_THR1_WDR_ARRAY_COLS                        9
#define TISP_PARAM_SDNS_STD_THR2_WDR_ARRAY_COLS                        9
#define TISP_PARAM_SDNS_H_MV_WEI_WDR_COLS                              4
#define TISP_PARAM_SDNS_H_S_1_WDR_ARRAY_COLS                           9
#define TISP_PARAM_SDNS_H_S_2_WDR_ARRAY_COLS                           9
#define TISP_PARAM_SDNS_H_S_3_WDR_ARRAY_COLS                           9
#define TISP_PARAM_SDNS_H_S_4_WDR_ARRAY_COLS                           9
#define TISP_PARAM_SDNS_H_S_5_WDR_ARRAY_COLS                           9
#define TISP_PARAM_SDNS_H_S_6_WDR_ARRAY_COLS                           9
#define TISP_PARAM_SDNS_H_S_7_WDR_ARRAY_COLS                           9
#define TISP_PARAM_SDNS_H_S_8_WDR_ARRAY_COLS                           9
#define TISP_PARAM_SDNS_H_S_9_WDR_ARRAY_COLS                           9
#define TISP_PARAM_SDNS_H_S_10_WDR_ARRAY_COLS                          9
#define TISP_PARAM_SDNS_H_S_11_WDR_ARRAY_COLS                          9
#define TISP_PARAM_SDNS_H_S_12_WDR_ARRAY_COLS                          9
#define TISP_PARAM_SDNS_H_S_13_WDR_ARRAY_COLS                          9
#define TISP_PARAM_SDNS_H_S_14_WDR_ARRAY_COLS                          9
#define TISP_PARAM_SDNS_H_S_15_WDR_ARRAY_COLS                          9
#define TISP_PARAM_SDNS_H_S_16_WDR_ARRAY_COLS                          9
#define TISP_PARAM_SDNS_SHARPEN_TT_OPT_WDR_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_AVE_FLITER_WDR_COLS                            3
#define TISP_PARAM_SDNS_AVE_THRES_WDR_ARRAY_COLS                       9
#define TISP_PARAM_SDNS_SP_UU_THRES_WDR_ARRAY_COLS                     9
#define TISP_PARAM_SDNS_SP_UU_STREN_WDR_ARRAY_COLS                     9
#define TISP_PARAM_SDNS_SP_MV_UU_THRES_WDR_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_SP_MV_UU_STREN_WDR_ARRAY_COLS                  9
#define TISP_PARAM_SDNS_SP_UD_B_WEI_NP_ARRAY_COLS                      22

//MDNS
#define TISP_PARAM_MDNS_Y_FILTER_EN_ARRAY_ROWS                         1
#define TISP_PARAM_MDNS_Y_SF_CUR_EN_ARRAY_ROWS                         1
#define TISP_PARAM_MDNS_Y_SF_REF_EN_ARRAY_ROWS                         1
#define TISP_PARAM_MDNS_Y_DEBUG_ARRAY_ROWS                             1
#define TISP_PARAM_MDNS_UV_FILTER_EN_ARRAY_ROWS                        1
#define TISP_PARAM_MDNS_UV_SF_CUR_EN_ARRAY_ROWS                        1
#define TISP_PARAM_MDNS_UV_SF_REF_EN_ARRAY_ROWS                        1
#define TISP_PARAM_MDNS_UV_DEBUG_ARRAY_ROWS                            1
#define TISP_PARAM_MDNS_ASS_ENABLE_ARRAY_ROWS                          1
#define TISP_PARAM_MDNS_STA_INTER_EN_ARRAY_ROWS                        1
#define TISP_PARAM_MDNS_STA_GROUP_NUM_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_STA_MAX_NUM_ARRAY_ROWS                         1
#define TISP_PARAM_MDNS_BGM_ENABLE_ARRAY_ROWS                          1
#define TISP_PARAM_MDNS_BGM_INTER_EN_ARRAY_ROWS                        1
#define TISP_PARAM_MDNS_PSN_ENABLE_ARRAY_ROWS                          1
#define TISP_PARAM_MDNS_PSN_MAX_NUM_ARRAY_ROWS                         1
#define TISP_PARAM_MDNS_REF_WEI_BYPS_ARRAY_ROWS                        1
#define TISP_PARAM_MDNS_Y_SAD_WIN_OPT_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_SAD_AVE_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_SAD_AVE_SLOPE_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_SAD_DTB_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_SAD_ASS_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_STA_BLK_SIZE_ARRAY_ROWS                      1
#define TISP_PARAM_MDNS_Y_STA_WIN_OPT_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_STA_AVE_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_STA_DTB_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_STA_ASS_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_STA_MOTION_THRES_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_REF_WEI_STA_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_REF_WEI_PSN_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_REF_WEI_MV_ARRAY_ROWS                        1
#define TISP_PARAM_MDNS_Y_REF_WEI_FAKE_ARRAY_ROWS                      1
#define TISP_PARAM_MDNS_Y_REF_WEI_STA_FS_OPT_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_REF_WEI_PSN_FS_OPT_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_REF_WEI_F_MAX_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_REF_WEI_F_MIN_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_REF_WEI_R_MAX_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_REF_WEI_R_MIN_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_REF_WEI_INCREASE_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_CORNER_LENGTH_T_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_CORNER_LENGTH_B_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_CORNER_LENGTH_L_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_CORNER_LENGTH_R_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_EDGE_WIN_OPT_ARRAY_ROWS                      1
#define TISP_PARAM_MDNS_Y_EDGE_DIV_OPT_ARRAY_ROWS                      1
#define TISP_PARAM_MDNS_Y_EDGE_TYPE_OPT_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_LUMA_WIN_OPT_ARRAY_ROWS                      1
#define TISP_PARAM_MDNS_Y_DTB_DIV_OPT_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_DTB_SQU_EN_ARRAY_ROWS                        1
#define TISP_PARAM_MDNS_Y_DTB_SQU_DIV_OPT_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_ASS_WIN_OPT_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_ASS_DIV_OPT_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_HIST_SAD_EN_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_HIST_STA_EN_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_HIST_NUM_THRES_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_Y_HIST_CMP_THRES0_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_HIST_CMP_THRES1_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_HIST_CMP_THRES2_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_HIST_CMP_THRES3_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_HIST_THRES0_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_HIST_THRES1_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_HIST_THRES2_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_HIST_THRES3_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_SEG_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_SEG_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_CORNER_THR_ADJ_VALUE_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE0_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE1_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE2_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE3_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE4_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE5_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE0_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE1_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE2_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE3_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE4_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE5_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE1_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE2_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE3_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE4_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE5_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE1_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE2_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE3_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE4_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE5_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_SEG_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_SEG_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_SEG_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_CORNER_WEI_ADJ_VALUE_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE0_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE1_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE2_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE3_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE4_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE5_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE0_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE1_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE2_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE3_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE4_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE5_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE1_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE2_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE3_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE4_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE5_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE1_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE2_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE3_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE4_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE5_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE1_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE2_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE3_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE4_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE5_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_SAD_AVE_THRES_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_SAD_ASS_THRES_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_STA_AVE_THRES_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_STA_ASS_THRES_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_STA_MOTION_THRES_WDR_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_ARRAY_ROWS           1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI_SEG_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI1_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI2_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI3_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI4_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_OP_EN_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_WEI_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_ARRAY_ROWS           1
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI_SEG_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI1_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI2_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI3_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI4_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PSPA_REF_LMT_OP_EN_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_PSPA_REF_LMT_WEI_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES0_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES1_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES2_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI0_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI1_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI2_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI3_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_THRES_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_SWEI_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_DWEI_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_16_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_32_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_48_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_64_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_80_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_96_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_112_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_128_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_16_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_32_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_48_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_64_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_80_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_96_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_112_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_128_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES0_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES1_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES2_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI0_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI1_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI2_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI3_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_SEG_ARRAY_ROWS                      1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_Y_CON_THRES_ARRAY_ROWS                         1
#define TISP_PARAM_MDNS_Y_CON_STREN_ARRAY_ROWS                         1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_WDR_ROWS             1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_WDR_ARRAY_ROWS             1
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_WDR_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_WDR_ROWS             1
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_WDR_ARRAY_ROWS             1
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_WDR_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_WDR_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_WDR_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_SAD_WIN_OPT_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_C_SAD_AVE_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_SAD_AVE_SLOPE_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_SAD_DTB_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_SAD_ASS_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_REF_WEI_MV_ARRAY_ROWS                        1
#define TISP_PARAM_MDNS_C_REF_WEI_FAKE_ARRAY_ROWS                      1
#define TISP_PARAM_MDNS_C_REF_WEI_F_MAX_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_REF_WEI_F_MIN_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_REF_WEI_B_MAX_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_REF_WEI_B_MIN_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_REF_WEI_R_MAX_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_REF_WEI_R_MIN_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_REF_WEI_INCREASE_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_SEG_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_SEG_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_C_CORNER_THR_ADJ_VALUE_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE0_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE1_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE2_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE3_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE4_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE5_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE0_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE1_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE2_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE3_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE4_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE5_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE1_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE2_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE3_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE4_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE5_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE1_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE2_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE3_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE4_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE5_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_SEG_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_SEG_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_SEG_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_C_CORNER_WEI_ADJ_VALUE_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE0_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE1_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE2_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE3_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE4_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE5_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE0_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE1_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE2_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE3_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE4_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE5_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE1_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE2_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE3_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE4_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE5_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE1_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE2_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE3_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE4_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE5_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE1_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE2_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE3_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE4_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE5_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_SAD_AVE_THRES_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_SAD_ASS_THRES_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_REF_WEI_B_MAX_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_REF_WEI_B_MIN_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_MEDIAN_SMJ_THRES_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_MEDIAN_EDG_THRES_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_OP_EN_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_WEI_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_OP_EN_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_WEI_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_BGM_WIN_OPT_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_C_BGM_CUR_SRC_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_C_BGM_REF_SRC_ARRAY_ROWS                       1
#define TISP_PARAM_MDNS_C_BGM_FALSE_THRES_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_C_BGM_FALSE_STEP_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_PIIR_EDGE_THRES0_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_PIIR_EDGE_THRES1_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_PIIR_EDGE_THRES2_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_PIIR_EDGE_WEI0_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_PIIR_EDGE_WEI1_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_PIIR_EDGE_WEI2_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_PIIR_EDGE_WEI3_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_16_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_32_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_48_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_64_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_80_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_96_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_112_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_128_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_SEG_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_0_ARRAY_ROWS                1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_16_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_32_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_48_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_64_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_80_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_96_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_112_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_128_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_ARRAY_ROWS              1
#define TISP_PARAM_MDNS_C_FIIR_EDGE_THRES0_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_FIIR_EDGE_THRES1_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_FIIR_EDGE_THRES2_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_FIIR_EDGE_WEI0_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FIIR_EDGE_WEI1_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FIIR_EDGE_WEI2_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FIIR_EDGE_WEI3_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FIIR_FUS_SEG_ARRAY_ROWS                      1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FALSE_SMJ_THRES_ARRAY_ROWS                   1
#define TISP_PARAM_MDNS_C_FALSE_EDG_THRES0_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_FALSE_EDG_THRES1_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_FALSE_EDG_THRES2_ARRAY_ROWS                  1
#define TISP_PARAM_MDNS_C_FALSE_THRES_S0_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FALSE_THRES_S1_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FALSE_THRES_S2_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FALSE_THRES_S3_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FALSE_STEP_S0_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FALSE_STEP_S1_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FALSE_STEP_S2_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FALSE_STEP_S3_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FALSE_THRES_M0_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FALSE_THRES_M1_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FALSE_THRES_M2_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FALSE_THRES_M3_ARRAY_ROWS                    1
#define TISP_PARAM_MDNS_C_FALSE_STEP_M0_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FALSE_STEP_M1_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FALSE_STEP_M2_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_FALSE_STEP_M3_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_SAT_LMT_THRES_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_SAT_LMT_STREN_ARRAY_ROWS                     1
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_WDR_ARRAY_ROWS             1
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_WDR_ARRAY_ROWS             1
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_WDR_ARRAY_ROWS             1
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_WDR_ARRAY_ROWS             1
#define TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_WDR_ARRAY_ROWS             1
#define TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_WDR_ARRAY_ROWS             1
#define TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_WDR_ARRAY_ROWS             1
#define TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_WDR_ARRAY_ROWS             1
#define TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_WDR_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_WDR_ARRAY_ROWS               1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_WDR_ARRAY_ROWS          1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_MDNS_C_SAT_NML_STREN_ARRAY_ROWS                     1

#define TISP_PARAM_MDNS_Y_FILTER_EN_ARRAY_COLS                         1
#define TISP_PARAM_MDNS_Y_SF_CUR_EN_ARRAY_COLS                         1
#define TISP_PARAM_MDNS_Y_SF_REF_EN_ARRAY_COLS                         1
#define TISP_PARAM_MDNS_Y_DEBUG_ARRAY_COLS                             1
#define TISP_PARAM_MDNS_UV_FILTER_EN_ARRAY_COLS                        1
#define TISP_PARAM_MDNS_UV_SF_CUR_EN_ARRAY_COLS                        1
#define TISP_PARAM_MDNS_UV_SF_REF_EN_ARRAY_COLS                        1
#define TISP_PARAM_MDNS_UV_DEBUG_ARRAY_COLS                            1
#define TISP_PARAM_MDNS_ASS_ENABLE_ARRAY_COLS                          1
#define TISP_PARAM_MDNS_STA_INTER_EN_ARRAY_COLS                        1
#define TISP_PARAM_MDNS_STA_GROUP_NUM_ARRAY_COLS                       1
#define TISP_PARAM_MDNS_STA_MAX_NUM_ARRAY_COLS                         1
#define TISP_PARAM_MDNS_BGM_ENABLE_ARRAY_COLS                          1
#define TISP_PARAM_MDNS_BGM_INTER_EN_ARRAY_COLS                        1
#define TISP_PARAM_MDNS_PSN_ENABLE_ARRAY_COLS                          1
#define TISP_PARAM_MDNS_PSN_MAX_NUM_ARRAY_COLS                         1
#define TISP_PARAM_MDNS_REF_WEI_BYPS_ARRAY_COLS                        1
#define TISP_PARAM_MDNS_Y_SAD_WIN_OPT_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_Y_SAD_AVE_THRES_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_SAD_AVE_SLOPE_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_SAD_DTB_THRES_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_SAD_ASS_THRES_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_STA_BLK_SIZE_ARRAY_COLS                      9
#define TISP_PARAM_MDNS_Y_STA_WIN_OPT_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_Y_STA_AVE_THRES_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_STA_DTB_THRES_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_STA_ASS_THRES_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_STA_MOTION_THRES_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_REF_WEI_STA_ARRAY_COLS                       16
#define TISP_PARAM_MDNS_Y_REF_WEI_PSN_ARRAY_COLS                       16
#define TISP_PARAM_MDNS_Y_REF_WEI_MV_ARRAY_COLS                        9
#define TISP_PARAM_MDNS_Y_REF_WEI_FAKE_ARRAY_COLS                      9
#define TISP_PARAM_MDNS_Y_REF_WEI_STA_FS_OPT_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_REF_WEI_PSN_FS_OPT_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_REF_WEI_F_MAX_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_REF_WEI_F_MIN_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_REF_WEI_R_MAX_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_REF_WEI_R_MIN_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_REF_WEI_INCREASE_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_CORNER_LENGTH_T_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_CORNER_LENGTH_B_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_CORNER_LENGTH_L_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_CORNER_LENGTH_R_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_EDGE_WIN_OPT_ARRAY_COLS                      9
#define TISP_PARAM_MDNS_Y_EDGE_DIV_OPT_ARRAY_COLS                      9
#define TISP_PARAM_MDNS_Y_EDGE_TYPE_OPT_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_LUMA_WIN_OPT_ARRAY_COLS                      9
#define TISP_PARAM_MDNS_Y_DTB_DIV_OPT_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_Y_DTB_SQU_EN_ARRAY_COLS                        9
#define TISP_PARAM_MDNS_Y_DTB_SQU_DIV_OPT_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_ASS_WIN_OPT_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_Y_ASS_DIV_OPT_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_Y_HIST_SAD_EN_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_Y_HIST_STA_EN_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_Y_HIST_NUM_THRES_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_Y_HIST_CMP_THRES0_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_HIST_CMP_THRES1_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_HIST_CMP_THRES2_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_HIST_CMP_THRES3_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_HIST_THRES0_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_Y_HIST_THRES1_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_Y_HIST_THRES2_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_Y_HIST_THRES3_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_SEG_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_SEG_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_CORNER_THR_ADJ_VALUE_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE0_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE1_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE2_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE3_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE4_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE5_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE0_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE1_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE2_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE3_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE4_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE5_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE1_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE2_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE3_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE4_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE5_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE1_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE2_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE3_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE4_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE5_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_SEG_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_SEG_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_SEG_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_CORNER_WEI_ADJ_VALUE_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE0_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE1_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE2_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE3_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE4_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE5_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE0_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE1_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE2_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE3_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE4_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE5_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE1_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE2_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE3_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE4_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE5_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE1_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE2_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE3_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE4_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE5_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE1_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE2_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE3_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE4_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE5_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_SAD_AVE_THRES_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_SAD_ASS_THRES_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_STA_AVE_THRES_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_STA_ASS_THRES_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_STA_MOTION_THRES_WDR_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_ARRAY_COLS           9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI_SEG_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI1_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI2_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI3_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI4_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_OP_EN_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_WEI_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_ARRAY_COLS           9
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI_SEG_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI1_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI2_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI3_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI4_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PSPA_REF_LMT_OP_EN_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_PSPA_REF_LMT_WEI_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES0_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES1_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES2_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI0_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI1_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI2_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI3_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_THRES_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_SWEI_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_DWEI_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_16_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_32_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_48_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_64_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_80_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_96_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_112_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_128_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_16_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_32_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_48_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_64_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_80_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_96_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_112_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_128_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES0_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES1_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES2_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI0_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI1_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI2_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI3_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_SEG_ARRAY_COLS                      9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_Y_CON_THRES_ARRAY_COLS                         9
#define TISP_PARAM_MDNS_Y_CON_STREN_ARRAY_COLS                         9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_WDR_COLS             9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_WDR_ARRAY_COLS             9
#define TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_WDR_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_WDR_COLS             9
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_WDR_ARRAY_COLS             9
#define TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_WDR_ARRAY_COLS              9
#define TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_WDR_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_WDR_ARRAY_COLS               9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_SAD_WIN_OPT_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_C_SAD_AVE_THRES_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_SAD_AVE_SLOPE_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_SAD_DTB_THRES_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_SAD_ASS_THRES_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_REF_WEI_MV_ARRAY_COLS                        9
#define TISP_PARAM_MDNS_C_REF_WEI_FAKE_ARRAY_COLS                      9
#define TISP_PARAM_MDNS_C_REF_WEI_F_MAX_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_REF_WEI_F_MIN_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_REF_WEI_B_MAX_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_REF_WEI_B_MIN_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_REF_WEI_R_MAX_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_REF_WEI_R_MIN_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_REF_WEI_INCREASE_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_SEG_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_SEG_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_C_CORNER_THR_ADJ_VALUE_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE0_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE1_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE2_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE3_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE4_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE5_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE0_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE1_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE2_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE3_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE4_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE5_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE1_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE2_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE3_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE4_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE5_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE1_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE2_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE3_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE4_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE5_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_SEG_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_SEG_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_SEG_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_C_CORNER_WEI_ADJ_VALUE_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE0_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE1_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE2_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE3_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE4_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE5_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE0_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE1_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE2_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE3_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE4_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE5_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE1_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE2_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE3_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE4_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE5_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE1_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE2_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE3_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE4_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE5_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE1_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE2_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE3_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE4_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE5_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_SAD_AVE_THRES_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_SAD_ASS_THRES_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_REF_WEI_B_MAX_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_REF_WEI_B_MIN_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_MEDIAN_SMJ_THRES_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_MEDIAN_EDG_THRES_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_OP_EN_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_WEI_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_OP_EN_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_WEI_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_BGM_WIN_OPT_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_C_BGM_CUR_SRC_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_C_BGM_REF_SRC_ARRAY_COLS                       9
#define TISP_PARAM_MDNS_C_BGM_FALSE_THRES_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_C_BGM_FALSE_STEP_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_PIIR_EDGE_THRES0_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_PIIR_EDGE_THRES1_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_PIIR_EDGE_THRES2_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_PIIR_EDGE_WEI0_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_PIIR_EDGE_WEI1_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_PIIR_EDGE_WEI2_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_PIIR_EDGE_WEI3_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_16_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_32_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_48_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_64_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_80_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_96_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_112_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_128_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_SEG_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_0_ARRAY_COLS                9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_16_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_32_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_48_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_64_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_80_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_96_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_112_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_128_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_ARRAY_COLS              9
#define TISP_PARAM_MDNS_C_FIIR_EDGE_THRES0_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_FIIR_EDGE_THRES1_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_FIIR_EDGE_THRES2_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_FIIR_EDGE_WEI0_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FIIR_EDGE_WEI1_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FIIR_EDGE_WEI2_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FIIR_EDGE_WEI3_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FIIR_FUS_SEG_ARRAY_COLS                      9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FALSE_SMJ_THRES_ARRAY_COLS                   9
#define TISP_PARAM_MDNS_C_FALSE_EDG_THRES0_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_FALSE_EDG_THRES1_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_FALSE_EDG_THRES2_ARRAY_COLS                  9
#define TISP_PARAM_MDNS_C_FALSE_THRES_S0_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FALSE_THRES_S1_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FALSE_THRES_S2_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FALSE_THRES_S3_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FALSE_STEP_S0_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FALSE_STEP_S1_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FALSE_STEP_S2_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FALSE_STEP_S3_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FALSE_THRES_M0_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FALSE_THRES_M1_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FALSE_THRES_M2_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FALSE_THRES_M3_ARRAY_COLS                    9
#define TISP_PARAM_MDNS_C_FALSE_STEP_M0_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FALSE_STEP_M1_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FALSE_STEP_M2_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_FALSE_STEP_M3_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_SAT_LMT_THRES_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_SAT_LMT_STREN_ARRAY_COLS                     9
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_WDR_ARRAY_COLS             9
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_WDR_ARRAY_COLS             9
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_WDR_ARRAY_COLS             9
#define TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_WDR_ARRAY_COLS             9
#define TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_WDR_ARRAY_COLS             9
#define TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_WDR_ARRAY_COLS             9
#define TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_WDR_ARRAY_COLS             9
#define TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_WDR_ARRAY_COLS             9
#define TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_WDR_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_WDR_ARRAY_COLS               9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_WDR_ARRAY_COLS          9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_WDR_ARRAY_COLS                 9
#define TISP_PARAM_MDNS_C_SAT_NML_STREN_ARRAY_COLS                     9

//CLM
#define TISP_PARAM_CLM_H_LUT_ROWS                                      1
#define TISP_PARAM_CLM_S_LUT_ROWS                                      1
#define TISP_PARAM_CLM_LUT_SHIFT_ROWS                                  1

#define TISP_PARAM_CLM_H_LUT_COLS                                      30*7*5
#define TISP_PARAM_CLM_S_LUT_COLS                                      30*7*5
#define TISP_PARAM_CLM_LUT_SHIFT_COLS                                  1

//DEFOG
#define TISP_PARAM_DEFOG_WEIGHTLUT20_ROWS                              1
#define TISP_PARAM_DEFOG_WEIGHTLUT02_ROWS                              1
#define TISP_PARAM_DEFOG_WEIGHTLUT12_ROWS                              1
#define TISP_PARAM_DEFOG_WEIGHTLUT22_ROWS                              1
#define TISP_PARAM_DEFOG_WEIGHTLUT21_ROWS                              1
#define TISP_PARAM_DEFOG_COL_CT_ARRAY_ROWS                             1
#define TISP_PARAM_DEFOG_CENT3_W_DIS_ARRAY_ROWS                        1
#define TISP_PARAM_DEFOG_CENT5_W_DIS_ARRAY_ROWS                        1
#define TISP_PARAM_DEFOG_EV_LIST_ROWS                                  1
#define TISP_PARAM_DEFOG_TRSY0_LIST_ROWS                               1
#define TISP_PARAM_DEFOG_TRSY1_LIST_ROWS                               1
#define TISP_PARAM_DEFOG_TRSY2_LIST_ROWS                               1
#define TISP_PARAM_DEFOG_TRSY3_LIST_ROWS                               1
#define TISP_PARAM_DEFOG_TRSY4_LIST_ROWS                               1
#define TISP_PARAM_DEFOG_RGBRA_LIST_ROWS                               1
#define TISP_PARAM_DEFOG_MAIN_PARA_ARRAY_ROWS                          1
#define TISP_PARAM_DEFOG_COLOR_CONTROL_ARRAY_ROWS                      1
#define TISP_PARAM_DEFOG_LC_S_ARRAY_ROWS                               1
#define TISP_PARAM_DEFOG_LC_V_ARRAY_ROWS                               1
#define TISP_PARAM_DEFOG_CC_S_ARRAY_ROWS                               1
#define TISP_PARAM_DEFOG_CC_V_ARRAY_ROWS                               1
#define TISP_PARAM_DEFOG_DARK_L1_ARRAY_ROWS                            1
#define TISP_PARAM_DEFOG_DARK_L2_ARRAY_ROWS                            1
#define TISP_PARAM_DEFOG_BLOCK_TX_ROWS                                 1
#define TISP_PARAM_DEFOG_BLOCK_TY_ROWS                                 1
#define TISP_PARAM_DEFOG_T_PAR_LIST1_ROWS                              1
#define TISP_PARAM_DEFOG_T_PAR_LIST2_ROWS                              1
#define TISP_PARAM_DEFOG_MANUAL_CTRL_ROWS                              1
#define TISP_PARAM_DEFOG_EV_LIST_WDR_ROWS                              1
#define TISP_PARAM_DEFOG_TRSY0_LIST_WDR_ROWS                           1
#define TISP_PARAM_DEFOG_TRSY1_LIST_WDR_ROWS                           1
#define TISP_PARAM_DEFOG_TRSY2_LIST_WDR_ROWS                           1
#define TISP_PARAM_DEFOG_TRSY3_LIST_WDR_ROWS                           1
#define TISP_PARAM_DEFOG_TRSY4_LIST_WDR_ROWS                           1
#define TISP_PARAM_DEFOG_MAIN_PARA_WDR_ARRAY_ROWS                      1
#define TISP_PARAM_DEFOG_BLOCK_TX_WDR_ROWS                             1
#define TISP_PARAM_DEFOG_FPGA_PARA_WDR_ROWS                            1
#define TISP_PARAM_DEFOG_FPGA_PARA_ROWS                                1

#define TISP_PARAM_DEFOG_WEIGHTLUT20_COLS                              32
#define TISP_PARAM_DEFOG_WEIGHTLUT02_COLS                              32
#define TISP_PARAM_DEFOG_WEIGHTLUT12_COLS                              32
#define TISP_PARAM_DEFOG_WEIGHTLUT22_COLS                              32
#define TISP_PARAM_DEFOG_WEIGHTLUT21_COLS                              32
#define TISP_PARAM_DEFOG_COL_CT_ARRAY_COLS                             14
#define TISP_PARAM_DEFOG_CENT3_W_DIS_ARRAY_COLS                        24
#define TISP_PARAM_DEFOG_CENT5_W_DIS_ARRAY_COLS                        31
#define TISP_PARAM_DEFOG_EV_LIST_COLS                                  9
#define TISP_PARAM_DEFOG_TRSY0_LIST_COLS                               9
#define TISP_PARAM_DEFOG_TRSY1_LIST_COLS                               9
#define TISP_PARAM_DEFOG_TRSY2_LIST_COLS                               9
#define TISP_PARAM_DEFOG_TRSY3_LIST_COLS                               9
#define TISP_PARAM_DEFOG_TRSY4_LIST_COLS                               9
#define TISP_PARAM_DEFOG_RGBRA_LIST_COLS                               9
#define TISP_PARAM_DEFOG_MAIN_PARA_ARRAY_COLS                          11
#define TISP_PARAM_DEFOG_COLOR_CONTROL_ARRAY_COLS                      14
#define TISP_PARAM_DEFOG_LC_S_ARRAY_COLS                               10
#define TISP_PARAM_DEFOG_LC_V_ARRAY_COLS                               10
#define TISP_PARAM_DEFOG_CC_S_ARRAY_COLS                               8
#define TISP_PARAM_DEFOG_CC_V_ARRAY_COLS                               9
#define TISP_PARAM_DEFOG_DARK_L1_ARRAY_COLS                            10
#define TISP_PARAM_DEFOG_DARK_L2_ARRAY_COLS                            10
#define TISP_PARAM_DEFOG_BLOCK_TX_COLS                                 5
#define TISP_PARAM_DEFOG_BLOCK_TY_COLS                                 5
#define TISP_PARAM_DEFOG_T_PAR_LIST1_COLS                              11
#define TISP_PARAM_DEFOG_T_PAR_LIST2_COLS                              29
#define TISP_PARAM_DEFOG_MANUAL_CTRL_COLS                              7
#define TISP_PARAM_DEFOG_EV_LIST_WDR_COLS                              9
#define TISP_PARAM_DEFOG_TRSY0_LIST_WDR_COLS                           9
#define TISP_PARAM_DEFOG_TRSY1_LIST_WDR_COLS                           9
#define TISP_PARAM_DEFOG_TRSY2_LIST_WDR_COLS                           9
#define TISP_PARAM_DEFOG_TRSY3_LIST_WDR_COLS                           9
#define TISP_PARAM_DEFOG_TRSY4_LIST_WDR_COLS                           9
#define TISP_PARAM_DEFOG_MAIN_PARA_WDR_ARRAY_COLS                      11
#define TISP_PARAM_DEFOG_BLOCK_TX_WDR_COLS                             5
#define TISP_PARAM_DEFOG_FPGA_PARA_WDR_COLS                            16
#define TISP_PARAM_DEFOG_FPGA_PARA_COLS                                16

//ADR
#define TISP_PARAM_ADR_PARA_ARRAY_ROWS                                 1
#define TISP_PARAM_ADR_WEIGHT_20_LUT_ARRAY_ROWS                        1
#define TISP_PARAM_ADR_WEIGHT_02_LUT_ARRAY_ROWS                        1
#define TISP_PARAM_ADR_WEIGHT_12_LUT_ARRAY_ROWS                        1
#define TISP_PARAM_ADR_WEIGHT_22_LUT_ARRAY_ROWS                        1
#define TISP_PARAM_ADR_WEIGHT_21_LUT_ARRAY_ROWS                        1
#define TISP_PARAM_ADR_CTC_KNEEPOINT_ARRAY_ROWS                        1
#define TISP_PARAM_ADR_MIN_KNEEPOINT_ARRAY_ROWS                        1
#define TISP_PARAM_ADR_MAP_KNEEPOINT_ARRAY_ROWS                        1
#define TISP_PARAM_ADR_COC_KNEEPOINT_Y1_ARRAY_ROWS                     1
#define TISP_PARAM_ADR_COC_KNEEPOINT_Y2_ARRAY_ROWS                     1
#define TISP_PARAM_ADR_COC_KNEEPOINT_Y3_ARRAY_ROWS                     1
#define TISP_PARAM_ADR_COC_KNEEPOINT_Y4_ARRAY_ROWS                     1
#define TISP_PARAM_ADR_COC_KNEEPOINT_Y5_ARRAY_ROWS                     1
#define TISP_PARAM_ADR_COC_ADJUST_ARRAY_ROWS                           1
#define TISP_PARAM_ADR_CENTRE_W_DIS_ARRAY_ROWS                         1
#define TISP_PARAM_ADR_STAT_BLOCK_HIST_DIFF_ARRAY_ROWS                 1
#define TISP_PARAM_ADR_SOFT_TM_BASE_ARRAY_ROWS                         1
#define TISP_PARAM_ADR_SOFT_GAM_X_ARRAY_ROWS                           1
#define TISP_PARAM_ADR_SOFT_GAM_Y_ARRAY_ROWS                           1
#define TISP_ADR_CTC_MAP2CUT_Y_ROWS                                    1
#define TISP_PARAM_ADR_SOFT_LIGHT_END_ARRAY_ROWS                       1
#define TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_ARRAY_ROWS                     1
#define TISP_PARAM_ADR_SOFT_MAP_MODE_ARRAY_ROWS                        1
#define TISP_HISTSUB_4096_DIFF_ROWS                                    1
#define TISP_PARAM_ADR_TOOL_CONTROL_ARRAY_ROWS                         1
#define TISP_PARAM_ADR_EV_LIST_ROWS                                    1
#define TISP_PARAM_ADR_LIGB_LIST_ROWS                                  1
#define TISP_PARAM_ADR_MAPB1_LIST_ROWS                                 1
#define TISP_PARAM_ADR_MAPB2_LIST_ROWS                                 1
#define TISP_PARAM_ADR_MAPB3_LIST_ROWS                                 1
#define TISP_PARAM_ADR_MAPB4_LIST_ROWS                                 1
#define TISP_ADR_CTC_MAP2CUT_Y_WDR_ROWS                                1
#define TISP_PARAM_ADR_SOFT_LIGHT_END_WDR_ARRAY_ROWS                   1
#define TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_WDR_ARRAY_ROWS                 1
#define TISP_PARAM_ADR_SOFT_MAP_MODE_WDR_ARRAY_ROWS                    1
#define TISP_PARAM_ADR_EV_LIST_WDR_ROWS                                1
#define TISP_PARAM_ADR_LIGB_LIST_WDR_ROWS                              1
#define TISP_PARAM_ADR_MAPB1_LIST_WDR_ROWS                             1
#define TISP_PARAM_ADR_MAPB2_LIST_WDR_ROWS                             1
#define TISP_PARAM_ADR_MAPB3_LIST_WDR_ROWS                             1
#define TISP_PARAM_ADR_MAPB4_LIST_WDR_ROWS                             1
#define TISP_PARAM_ADR_BLP2_LIST_WDR_ROWS                              1
#define TISP_PARAM_ADR_BLP2_LIST_ROWS                                  1

#define TISP_PARAM_ADR_PARA_ARRAY_COLS                                 8
#define TISP_PARAM_ADR_WEIGHT_20_LUT_ARRAY_COLS                        32
#define TISP_PARAM_ADR_WEIGHT_02_LUT_ARRAY_COLS                        32
#define TISP_PARAM_ADR_WEIGHT_12_LUT_ARRAY_COLS                        32
#define TISP_PARAM_ADR_WEIGHT_22_LUT_ARRAY_COLS                        32
#define TISP_PARAM_ADR_WEIGHT_21_LUT_ARRAY_COLS                        32
#define TISP_PARAM_ADR_CTC_KNEEPOINT_ARRAY_COLS                        17
#define TISP_PARAM_ADR_MIN_KNEEPOINT_ARRAY_COLS                        23
#define TISP_PARAM_ADR_MAP_KNEEPOINT_ARRAY_COLS                        23
#define TISP_PARAM_ADR_COC_KNEEPOINT_Y1_ARRAY_COLS                     12
#define TISP_PARAM_ADR_COC_KNEEPOINT_Y2_ARRAY_COLS                     12
#define TISP_PARAM_ADR_COC_KNEEPOINT_Y3_ARRAY_COLS                     12
#define TISP_PARAM_ADR_COC_KNEEPOINT_Y4_ARRAY_COLS                     12
#define TISP_PARAM_ADR_COC_KNEEPOINT_Y5_ARRAY_COLS                     12
#define TISP_PARAM_ADR_COC_ADJUST_ARRAY_COLS                           14
#define TISP_PARAM_ADR_CENTRE_W_DIS_ARRAY_COLS                         31
#define TISP_PARAM_ADR_STAT_BLOCK_HIST_DIFF_ARRAY_COLS                 4
#define TISP_PARAM_ADR_SOFT_TM_BASE_ARRAY_COLS                         9
#define TISP_PARAM_ADR_SOFT_GAM_X_ARRAY_COLS                           129
#define TISP_PARAM_ADR_SOFT_GAM_Y_ARRAY_COLS                           129
#define TISP_ADR_CTC_MAP2CUT_Y_COLS                                    9
#define TISP_PARAM_ADR_SOFT_LIGHT_END_ARRAY_COLS                       29
#define TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_ARRAY_COLS                     15
#define TISP_PARAM_ADR_SOFT_MAP_MODE_ARRAY_COLS                        11
#define TISP_HISTSUB_4096_DIFF_COLS                                    8
#define TISP_PARAM_ADR_TOOL_CONTROL_ARRAY_COLS                         14
#define TISP_PARAM_ADR_EV_LIST_COLS                                    9
#define TISP_PARAM_ADR_LIGB_LIST_COLS                                  9
#define TISP_PARAM_ADR_MAPB1_LIST_COLS                                 9
#define TISP_PARAM_ADR_MAPB2_LIST_COLS                                 9
#define TISP_PARAM_ADR_MAPB3_LIST_COLS                                 9
#define TISP_PARAM_ADR_MAPB4_LIST_COLS                                 9
#define TISP_ADR_CTC_MAP2CUT_Y_WDR_COLS                                9
#define TISP_PARAM_ADR_SOFT_LIGHT_END_WDR_ARRAY_COLS                   29
#define TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_WDR_ARRAY_COLS                 15
#define TISP_PARAM_ADR_SOFT_MAP_MODE_WDR_ARRAY_COLS                    11
#define TISP_PARAM_ADR_EV_LIST_WDR_COLS                                9
#define TISP_PARAM_ADR_LIGB_LIST_WDR_COLS                              9
#define TISP_PARAM_ADR_MAPB1_LIST_WDR_COLS                             9
#define TISP_PARAM_ADR_MAPB2_LIST_WDR_COLS                             9
#define TISP_PARAM_ADR_MAPB3_LIST_WDR_COLS                             9
#define TISP_PARAM_ADR_MAPB4_LIST_WDR_COLS                             9
#define TISP_PARAM_ADR_BLP2_LIST_WDR_COLS                              9
#define TISP_PARAM_ADR_BLP2_LIST_COLS                                  9

//HLDC
#define TISP_PARAM_HLDC_CON_PAR_ARRAY_ROWS                             1
#define TISP_PARAM_HLDC_CON_PAR_ARRAY_COLS                             18

typedef enum {
	//TOP BYPASS
	TISP_PARAM_TOP_START,
	TISP_PARAM_TOP_BYPASS = TISP_PARAM_TOP_START,
	TISP_PARAM_TOP_END = TISP_PARAM_TOP_BYPASS,

	//AE
	TISP_PARAM_AE_START,
	TISP_PARAM_AE_PARAMETER = TISP_PARAM_AE_START,
	TISP_PARAM_AE_SWITCH_NIGHT_MODE,
	TISP_PARAM_AE_POINTPOS,
	TISP_PARAM_AE_EXP_PARAMETER,
	TISP_PARAM_AE_EV_STEP,
	TISP_PARAM_AE_STABLE_TOL,
	TISP_PARAM_AE_EV_LIST,
	TISP_PARAM_AE_LUM_LIST,
	TISP_PARAM_AE_AT_LIST,
	TISP_PARAM_AE_DEFLICKER_PARA,
	TISP_PARAM_AE_FLICKER_T,
	TISP_PARAM_AE_SCENE_PARE,
	TISP_PARAM_AE_SCENE_MODE_TH,
	TISP_PARAM_AE_ROI_TREND_LOG2_LUT,
	TISP_PARAM_AE_ROI_TREND_WEIGHT_LUT,
	TISP_PARAM_AE_ZONE_WEIGHT,
	TISP_PARAM_AE_SCENE_ROUI_WEIGHT,
	TISP_PARAM_AE_SCENE_ROI_WEIGHT,
	TISP_PARAM_AE_RESULT,
	TISP_PARAM_AE_STAT,
	TISP_PARAM_AE_WM_Q,
	TISP_PARAM_AE_COMP_PARAM,
	TISP_PARAM_AE_COMP_EV_LIST,
	TISP_PARAM_AE_COMP_AT_LIST,
	TISP_PARAM_AE_EXTRA_AT_LIST,
	TISP_PARAM_AE1_EV_LIST,
	TISP_PARAM_AE_EV_LIST_WDR,
	TISP_PARAM_AE_LUM_LIST_WDR,
	TISP_PARAM_AE_AT_LIST_WDR,
	TISP_PARAM_AE_SCENE_PARE_WDR,
	TISP_PARAM_AE_SCENE_MODE_TH_WDR,
	TISP_PARAM_AE_COMP_PARAM_WDR,
	TISP_PARAM_AE_EXTRA_AT_LIST_WDR,
	TISP_PARAM_AE1_COMP_EV_LIST,
	TISP_PARAM_AE_END = TISP_PARAM_AE1_COMP_EV_LIST,

	//AWB
	TISP_PARAM_AWB_START,
	TISP_PARAM_AWB_AWB_PARAMETER = TISP_PARAM_AWB_START,
	TISP_PARAM_AWB_PIXEL_CNT_TH,
	TISP_PARAM_AWB_LOWLIGHT_RG_TH,
	TISP_PARAM_AWB_POINTPOS,
	TISP_PARAM_AWB_COF,
	TISP_PARAM_AWB_MF_PARA,
	TISP_PARAM_AWB_MODE,
	TISP_PARAM_AWB_CT,
	TISP_PARAM_AWB_CT_LAST,
	TISP_PARAM_AWB_STATIC,
	TISP_PARAM_AWB_LIGHT_SRC,
	TISP_PARAM_AWB_LIGHT_SRC_NUM,
	TISP_PARAM_AWB_RG_POS,
	TISP_PARAM_AWB_BG_POS,
	TISP_PARAM_AWB_CT_TH_OT_LUXHIGH,
	TISP_PARAM_AWB_CT_TH_OT_LUXLOW,
	TISP_PARAM_AWB_CT_TH_IN,
	TISP_PARAM_AWB_CT_PARA_OT,
	TISP_PARAM_AWB_CT_PARA_IN,
	TISP_PARAM_AWB_DIS_TW,
	TISP_PARAM_AWB_RGBG_WEIGHT,
	TISP_PARAM_AWB_COLOR_TEMP_MESH,
	TISP_PARAM_AWB_WGHT,
	TISP_PARAM_AWB_RGBG_WEIGHT_OT,
	TISP_PARAM_AWB_LS_W_LUT,
	TISP_PARAM_AWB_END = TISP_PARAM_AWB_LS_W_LUT,

	//GAMMA
	TISP_PARAM_GAMMA_START,
	TISP_PARAM_GAMMA_RGB_LUT_SADDR = TISP_PARAM_GAMMA_START,
	TISP_PARAM_GAMMA_RGB_LUT_WDR_SADDR,
	TISP_PARAM_GAMMA_END = TISP_PARAM_GAMMA_RGB_LUT_WDR_SADDR,

	//GIB
	TISP_PARAM_GIB_START,
	TISP_PARAM_GIB_CONFIG_LINE = TISP_PARAM_GIB_START,
	TISP_PARAM_GIB_R_G_LINEAR,
	TISP_PARAM_GIB_B_IR_LINEAR,
	TISP_PARAM_GIB_DEIRM_BLC_R_LINEAR,
	TISP_PARAM_GIB_DEIRM_BLC_GR_LINEAR,
	TISP_PARAM_GIB_DEIRM_BLC_GB_LINEAR,
	TISP_PARAM_GIB_DEIRM_BLC_B_LINEAR,
	TISP_PARAM_GIB_DEIRM_BLC_IR_LINEAR,
	TISP_PARAM_GIB_IR_POINT,
	TISP_PARAM_GIB_IR_RESER,
	TISP_PARAM_GIB_DEIR_R_H,
	TISP_PARAM_GIB_DEIR_G_H,
	TISP_PARAM_GIB_DEIR_B_H,
	TISP_PARAM_GIB_DEIR_R_M,
	TISP_PARAM_GIB_DEIR_G_M,
	TISP_PARAM_GIB_DEIR_B_M,
	TISP_PARAM_GIB_DEIR_R_L,
	TISP_PARAM_GIB_DEIR_G_L,
	TISP_PARAM_GIB_DEIR_B_L,
	TISP_PARAM_GIB_DEIR_MATRIX_H,
	TISP_PARAM_GIB_DEIR_MATRIX_M,
	TISP_PARAM_GIB_DEIR_MATRIX_L,
	TISP_PARAM_GIB_END = TISP_PARAM_GIB_DEIR_MATRIX_L,

	//LSC
	TISP_PARAM_LSC_START,
	TISP_PARAM_LSC_LUT_NUM = TISP_PARAM_LSC_START,
	TISP_PARAM_LSC_MESH_SCALE,
	TISP_PARAM_LSC_LUT_STRIDE,
	TISP_PARAM_LSC_MESH_SIZE,
	TISP_PARAM_LSC_CT_POINTS,
	TISP_PARAM_LSC_A_LINEAR,
	TISP_PARAM_LSC_T_LINEAR,
	TISP_PARAM_LSC_D_LINEAR,
	TISP_PARAM_LSC_MESH_STR,
	TISP_PARAM_LSC_MESH_STR_WDR,
	TISP_PARAM_LSC_MEAN_EN,
	TISP_PARAM_LSC_END = TISP_PARAM_LSC_MEAN_EN,

	//DMSC
	TISP_PARAM_DMSC_START,
	TISP_PARAM_DMSC_UU_NP_ARRAY = TISP_PARAM_DMSC_START,
	TISP_PARAM_DMSC_R_DEIR_ARRAY,
	TISP_PARAM_DMSC_G_DEIR_ARRAY,
	TISP_PARAM_DMSC_B_DEIR_ARRAY,
	TISP_PARAM_DMSC_SP_D_SIGMA_3_NP_ARRAY,
	TISP_PARAM_DMSC_SP_D_W_WEI_NP_ARRAY,
	TISP_PARAM_DMSC_SP_D_B_WEI_NP_ARRAY,
	TISP_PARAM_DMSC_SP_UD_W_WEI_NP_ARRAY,
	TISP_PARAM_DMSC_SP_UD_B_WEI_NP_ARRAY,
	TISP_PARAM_DMSC_OUT_OPT,
	TISP_PARAM_DMSC_HV_THRES_1_ARRAY,
	TISP_PARAM_DMSC_HV_STREN_ARRAY,
	TISP_PARAM_DMSC_AA_THRES_1_ARRAY,
	TISP_PARAM_DMSC_AA_STREN_ARRAY,
	TISP_PARAM_DMSC_HVAA_THRES_1_ARRAY,
	TISP_PARAM_DMSC_HVAA_STREN_ARRAY,
	TISP_PARAM_DMSC_DIR_PAR_ARRAY,
	TISP_PARAM_DMSC_UU_THRES_ARRAY,
	TISP_PARAM_DMSC_UU_STREN_ARRAY,
	TISP_PARAM_DMSC_UU_PAR_ARRAY,
	TISP_PARAM_DMSC_ALIAS_STREN_ARRAY,
	TISP_PARAM_DMSC_ALIAS_THRES_1_ARRAY,
	TISP_PARAM_DMSC_ALIAS_THRES_2_ARRAY,
	TISP_PARAM_DMSC_ALIAS_DIR_THRES_ARRAY,
	TISP_PARAM_DMSC_ALIAS_PAR_ARRAY,
	TISP_PARAM_DMSC_NOR_ALIAS_THRES_ARRAY,
	TISP_PARAM_DMSC_NOR_PAR_ARRAY,
	TISP_PARAM_DMSC_SP_D_W_STREN_ARRAY,
	TISP_PARAM_DMSC_SP_D_B_STREN_ARRAY,
	TISP_PARAM_DMSC_SP_D_BRIG_THRES_ARRAY,
	TISP_PARAM_DMSC_SP_D_DARK_THRES_ARRAY,
	TISP_PARAM_DMSC_SP_D_V2_WIN5_THRES_ARRAY,
	TISP_PARAM_DMSC_SP_D_FLAT_STREN_ARRAY,
	TISP_PARAM_DMSC_SP_D_FLAT_THRES_ARRAY,
	TISP_PARAM_DMSC_SP_D_OE_STREN_ARRAY,
	TISP_PARAM_DMSC_SP_D_PAR_ARRAY,
	TISP_PARAM_DMSC_SP_UD_W_STREN_ARRAY,
	TISP_PARAM_DMSC_SP_UD_B_STREN_ARRAY,
	TISP_PARAM_DMSC_SP_UD_BRIG_THRES_ARRAY,
	TISP_PARAM_DMSC_SP_UD_DARK_THRES_ARRAY,
	TISP_PARAM_DMSC_SP_UD_STD_STREN_ARRAY,
	TISP_PARAM_DMSC_SP_UD_STD_THRES_ARRAY,
	TISP_PARAM_DMSC_SP_UD_FLAT_THRES_ARRAY,
	TISP_PARAM_DMSC_SP_UD_FLAT_STREN_ARRAY,
	TISP_PARAM_DMSC_SP_UD_OE_STREN_ARRAY,
	TISP_PARAM_DMSC_SP_UD_PAR_ARRAY,
	TISP_PARAM_DMSC_SP_UD_V1_V2_PAR_ARRAY,
	TISP_PARAM_DMSC_SP_ALIAS_THRES_ARRAY,
	TISP_PARAM_DMSC_SP_ALIAS_PAR_ARRAY,
	TISP_PARAM_DMSC_RGB_DIR_THRES_ARRAY,
	TISP_PARAM_DMSC_RGB_ALIAS_STREN_ARRAY,
	TISP_PARAM_DMSC_RGB_ALIAS_PAR_ARRAY,
	TISP_PARAM_DMSC_FC_ALIAS_STREN_ARRAY,
	TISP_PARAM_DMSC_FC_T1_THRES_ARRAY,
	TISP_PARAM_DMSC_FC_T1_STREN_ARRAY,
	TISP_PARAM_DMSC_FC_T2_STREN_ARRAY,
	TISP_PARAM_DMSC_FC_T3_STREN_ARRAY,
	TISP_PARAM_DMSC_FC_LUM_STREN_ARRAY,
	TISP_PARAM_DMSC_FC_LUM_THRES_ARRAY,
	TISP_PARAM_DMSC_FC_PAR_ARRAY,
	TISP_PARAM_DMSC_DEIR_OE_EN,
	TISP_PARAM_DMSC_DEIR_RGB_IR_OE_SLOPE,
	TISP_PARAM_DMSC_DEIR_FUSION_THRES_ARRAY,
	TISP_PARAM_DMSC_DEIR_FUSION_STREN_ARRAY,
	TISP_PARAM_DMSC_SP_D_NS_THRES_ARRAY,
	TISP_PARAM_DMSC_SP_UD_NS_THRES_ARRAY,
	TISP_PARAM_DMSC_SP_D_UD_NS_OPT,
	TISP_PARAM_DMSC_UU_THRES_WDR_ARRAY,
	TISP_PARAM_DMSC_UU_STREN_WDR_ARRAY,
	TISP_PARAM_DMSC_SP_D_W_STREN_WDR_ARRAY,
	TISP_PARAM_DMSC_SP_D_B_STREN_WDR_ARRAY,
	TISP_PARAM_DMSC_SP_UD_W_STREN_WDR_ARRAY,
	TISP_PARAM_DMSC_SP_UD_B_STREN_WDR_ARRAY,
	TISP_PARAM_DMSC_AWB_GAIN,
	TISP_PARAM_DMSC_END = TISP_PARAM_DMSC_AWB_GAIN,

	//CCM
	TISP_PARAM_CCM_START,
	TISP_PARAM_CCM_DP_CFG = TISP_PARAM_CCM_START,
	TISP_PARAM_CCM_A_LINEAR,
	TISP_PARAM_CCM_T_LINEAR,
	TISP_PARAM_CCM_D_LINEAR,
	TISP_PARAM_CCM_EV_LIST,
	TISP_PARAM_CCM_SAT_LIST,
	TISP_PARAM_CCM_A_WDR,
	TISP_PARAM_CCM_T_WDR,
	TISP_PARAM_CCM_D_WDR,
	TISP_PARAM_CCM_EV_LIST_WDR,
	TISP_PARAM_CCM_SAT_LIST_WDR,
	TISP_PARAM_CCM_AWB_LIST,
	TISP_PARAM_CCM_END = TISP_PARAM_CCM_AWB_LIST,

	//SHARPEN
	TISP_PARAM_SHARPEN_START,
	TISP_PARAM_Y_SP_OUT_OPT_ARRAY = TISP_PARAM_SHARPEN_START,
	TISP_PARAM_Y_SP_SL_EXP_THRES_ARRAY,
	TISP_PARAM_Y_SP_SL_EXP_NUM_ARRAY,
	TISP_PARAM_Y_SP_STD_CFG_ARRAY,
	TISP_PARAM_Y_SP_UU_MIN_STREN_ARRAY,
	TISP_PARAM_Y_SP_UU_MIN_THRES_ARRAY,
	TISP_PARAM_Y_SP_UU_THRES_ARRAY,
	TISP_PARAM_Y_SP_MV_UU_THRES_ARRAY,
	TISP_PARAM_Y_SP_MV_UU_STREN_ARRAY,
	TISP_PARAM_Y_SP_UU_STREN_ARRAY,
	TISP_PARAM_Y_SP_UU_PAR_CFG_ARRAY,
	TISP_PARAM_Y_SP_FL_STD_THRES_ARRAY,
	TISP_PARAM_Y_SP_MV_FL_STD_THRES_ARRAY,
	TISP_PARAM_Y_SP_FL_THRES_ARRAY,
	TISP_PARAM_Y_SP_FL_MIN_THRES_ARRAY,
	TISP_PARAM_Y_SP_MV_FL_THRES_ARRAY,
	TISP_PARAM_Y_SP_MV_FL_MIN_THRES_ARRAY,
	TISP_PARAM_Y_SP_FL_PAR_CFG_ARRAY,
	TISP_PARAM_Y_SP_V2_WIN5_THRES_ARRAY,
	TISP_PARAM_Y_SP_V1_V2_COEF_PAR_CFG_ARRAY,
	TISP_PARAM_Y_SP_W_B_LL_PAR_CFG_ARRAY,
	TISP_PARAM_Y_SP_UU_NP_ARRAY,
	TISP_PARAM_Y_SP_W_WEI_NP_ARRAY,
	TISP_PARAM_Y_SP_B_WEI_NP_ARRAY,
	TISP_PARAM_Y_SP_W_SL_STREN_0_ARRAY,
	TISP_PARAM_Y_SP_W_SL_STREN_1_ARRAY,
	TISP_PARAM_Y_SP_W_SL_STREN_2_ARRAY,
	TISP_PARAM_Y_SP_W_SL_STREN_3_ARRAY,
	TISP_PARAM_Y_SP_B_SL_STREN_0_ARRAY,
	TISP_PARAM_Y_SP_B_SL_STREN_1_ARRAY,
	TISP_PARAM_Y_SP_B_SL_STREN_2_ARRAY,
	TISP_PARAM_Y_SP_B_SL_STREN_3_ARRAY,
	TISP_PARAM_Y_SP_UU_SL_0_ARRAY,
	TISP_PARAM_Y_SP_UU_SL_1_ARRAY,
	TISP_PARAM_Y_SP_UU_SL_2_ARRAY,
	TISP_PARAM_Y_SP_UU_SL_3_ARRAY,
	TISP_PARAM_Y_SP_FL_SL_0_ARRAY,
	TISP_PARAM_Y_SP_FL_SL_1_ARRAY,
	TISP_PARAM_Y_SP_FL_SL_2_ARRAY,
	TISP_PARAM_Y_SP_UU_THRES_WDR_ARRAY,
	TISP_PARAM_Y_SP_W_SL_STREN_0_WDR_ARRAY,
	TISP_PARAM_Y_SP_W_SL_STREN_1_WDR_ARRAY,
	TISP_PARAM_Y_SP_W_SL_STREN_2_WDR_ARRAY,
	TISP_PARAM_Y_SP_W_SL_STREN_3_WDR_ARRAY,
	TISP_PARAM_Y_SP_B_SL_STREN_0_WDR_ARRAY,
	TISP_PARAM_Y_SP_B_SL_STREN_1_WDR_ARRAY,
	TISP_PARAM_Y_SP_B_SL_STREN_2_WDR_ARRAY,
	TISP_PARAM_Y_SP_B_SL_STREN_3_WDR_ARRAY,
	TISP_PARAM_Y_SP_FL_SL_3_ARRAY,
	TISP_PARAM_SHARPEN_END = TISP_PARAM_Y_SP_FL_SL_3_ARRAY,

	//DPC
	TISP_PARAM_DPC_START,
	TISP_PARAM_CTR_MD_NP_ARRAY = TISP_PARAM_DPC_START,
	TISP_PARAM_CTR_STD_NP_ARRAY,
	TISP_PARAM_DPC_S_CON_PAR_ARRAY,
	TISP_PARAM_DPC_D_M1_FTHRES_ARRAY,
	TISP_PARAM_DPC_D_M1_DTHRES_ARRAY,
	TISP_PARAM_DPC_D_M1_CON_PAR_ARRAY,
	TISP_PARAM_DPC_D_M2_LEVEL_ARRAY,
	TISP_PARAM_DPC_D_M2_HTHRES_ARRAY,
	TISP_PARAM_DPC_D_M2_LTHRES_ARRAY,
	TISP_PARAM_DPC_D_M2_P0_D1_THRES_ARRAY,
	TISP_PARAM_DPC_D_M2_P1_D1_THRES_ARRAY,
	TISP_PARAM_DPC_D_M2_P2_D1_THRES_ARRAY,
	TISP_PARAM_DPC_D_M2_P3_D1_THRES_ARRAY,
	TISP_PARAM_DPC_D_M2_P0_D2_THRES_ARRAY,
	TISP_PARAM_DPC_D_M2_P1_D2_THRES_ARRAY,
	TISP_PARAM_DPC_D_M2_P2_D2_THRES_ARRAY,
	TISP_PARAM_DPC_D_M2_P3_D2_THRES_ARRAY,
	TISP_PARAM_DPC_D_M2_CON_PAR_ARRAY,
	TISP_PARAM_DPC_D_M3_FTHRES_ARRAY,
	TISP_PARAM_DPC_D_M3_DTHRES_ARRAY,
	TISP_PARAM_DPC_D_M3_CON_PAR_ARRAY,
	TISP_PARAM_DPC_D_COR_PAR_ARRAY,
	TISP_PARAM_CTR_STREN_ARRAY,
	TISP_PARAM_CTR_MD_THRES_ARRAY,
	TISP_PARAM_CTR_EL_THRES_ARRAY,
	TISP_PARAM_CTR_EH_THRES_ARRAY,
	TISP_PARAM_DPC_D_M1_FTHRES_WDR_ARRAY,
	TISP_PARAM_DPC_D_M1_DTHRES_WDR_ARRAY,
	TISP_PARAM_DPC_D_M3_FTHRES_WDR_ARRAY,
	TISP_PARAM_DPC_D_M3_DTHRES_WDR_ARRAY,
	TISP_PARAM_CTR_CON_PAR_ARRAY,
	TISP_PARAM_DPC_END = TISP_PARAM_CTR_CON_PAR_ARRAY,

	//SDNS
	TISP_PARAM_SDNS_START,
	TISP_PARAM_SDNS_AA_MV_DET_OPT = TISP_PARAM_SDNS_START,
	TISP_PARAM_SDNS_GRAD_ZX_THRES_ARRAY,
	TISP_PARAM_SDNS_GRAD_ZY_THRES_ARRAY,
	TISP_PARAM_SDNS_STD_THR1_ARRAY,
	TISP_PARAM_SDNS_STD_THR2_ARRAY,
	TISP_PARAM_SDNS_H_MV_WEI,
	TISP_PARAM_SDNS_MV_NUM_THR_5X5_ARRAY,
	TISP_PARAM_SDNS_MV_NUM_THR_7X7_ARRAY,
	TISP_PARAM_SDNS_MV_NUM_THR_9X9_ARRAY,
	TISP_PARAM_SDNS_MV_NUM_THR_11X11_ARRAY,
	TISP_PARAM_SDNS_R_S,
	TISP_PARAM_SDNS_R_MV,
	TISP_PARAM_SDNS_H_S_1_ARRAY,
	TISP_PARAM_SDNS_H_S_2_ARRAY,
	TISP_PARAM_SDNS_H_S_3_ARRAY,
	TISP_PARAM_SDNS_H_S_4_ARRAY,
	TISP_PARAM_SDNS_H_S_5_ARRAY,
	TISP_PARAM_SDNS_H_S_6_ARRAY,
	TISP_PARAM_SDNS_H_S_7_ARRAY,
	TISP_PARAM_SDNS_H_S_8_ARRAY,
	TISP_PARAM_SDNS_H_S_9_ARRAY,
	TISP_PARAM_SDNS_H_S_10_ARRAY,
	TISP_PARAM_SDNS_H_S_11_ARRAY,
	TISP_PARAM_SDNS_H_S_12_ARRAY,
	TISP_PARAM_SDNS_H_S_13_ARRAY,
	TISP_PARAM_SDNS_H_S_14_ARRAY,
	TISP_PARAM_SDNS_H_S_15_ARRAY,
	TISP_PARAM_SDNS_H_S_16_ARRAY,
	TISP_PARAM_SDNS_H_MV_1_ARRAY,
	TISP_PARAM_SDNS_H_MV_2_ARRAY,
	TISP_PARAM_SDNS_H_MV_3_ARRAY,
	TISP_PARAM_SDNS_H_MV_4_ARRAY,
	TISP_PARAM_SDNS_H_MV_5_ARRAY,
	TISP_PARAM_SDNS_H_MV_6_ARRAY,
	TISP_PARAM_SDNS_H_MV_7_ARRAY,
	TISP_PARAM_SDNS_H_MV_8_ARRAY,
	TISP_PARAM_SDNS_H_MV_9_ARRAY,
	TISP_PARAM_SDNS_H_MV_10_ARRAY,
	TISP_PARAM_SDNS_H_MV_11_ARRAY,
	TISP_PARAM_SDNS_H_MV_12_ARRAY,
	TISP_PARAM_SDNS_H_MV_13_ARRAY,
	TISP_PARAM_SDNS_H_MV_14_ARRAY,
	TISP_PARAM_SDNS_H_MV_15_ARRAY,
	TISP_PARAM_SDNS_H_MV_16_ARRAY,
	TISP_PARAM_SDNS_DARK_THRES_ARRAY,
	TISP_PARAM_SDNS_LIGHT_THRES_ARRAY,
	TISP_PARAM_SDNS_H_VAL_MAX,
	TISP_PARAM_SDNS_SHARPEN_TT_OPT,
	TISP_PARAM_SDNS_D_S1_THR,
	TISP_PARAM_SDNS_W_THR,
	TISP_PARAM_SDNS_AVE_FLITER,
	TISP_PARAM_SDNS_Y,
	TISP_PARAM_SDNS_X_1XG_1X4,
	TISP_PARAM_SDNS_K_1XG_1X4,
	TISP_PARAM_SDNS_H_VAL,
	TISP_PARAM_SDNS_SHARPEN_G_STD,
	TISP_PARAM_SDNS_SP_UU_PAR,
	TISP_PARAM_SDNS_SP_UU_THRES_ARRAY,
	TISP_PARAM_SDNS_SP_UU_STREN_ARRAY,
	TISP_PARAM_SDNS_SP_MV_UU_THRES_ARRAY,
	TISP_PARAM_SDNS_SP_MV_UU_STREN_ARRAY,
	TISP_PARAM_SDNS_SP_MV_WEI_UU_VALUE,
	TISP_PARAM_SDNS_SP_D_V2_SIGMA_WIN5_SLOPE,
	TISP_PARAM_SDNS_SP_D_V2_WIN5_THRES_ARRAY,
	TISP_PARAM_SDNS_SP_D_WBHL_FLAT,
	TISP_PARAM_SDNS_SP_D_W_SP_STREN_0_ARRAY,
	TISP_PARAM_SDNS_SP_D_W_SP_STREN_1_ARRAY,
	TISP_PARAM_SDNS_SP_D_W_SP_STREN_2_ARRAY,
	TISP_PARAM_SDNS_SP_D_W_SP_STREN_3_ARRAY,
	TISP_PARAM_SDNS_SP_D_B_SP_STREN_0_ARRAY,
	TISP_PARAM_SDNS_SP_D_B_SP_STREN_1_ARRAY,
	TISP_PARAM_SDNS_SP_D_B_SP_STREN_2_ARRAY,
	TISP_PARAM_SDNS_SP_D_B_SP_STREN_3_ARRAY,
	TISP_PARAM_SDNS_SP_D_FLAT_THRES_ARRAY,
	TISP_PARAM_SDNS_SP_D_FLAT_STREN_ARRAY,
	TISP_PARAM_SDNS_SP_UD_V2_1_COEF,
	TISP_PARAM_SDNS_SP_UD_W_SP_STREN_0_ARRAY,
	TISP_PARAM_SDNS_SP_UD_W_SP_STREN_1_ARRAY,
	TISP_PARAM_SDNS_SP_UD_W_SP_STREN_2_ARRAY,
	TISP_PARAM_SDNS_SP_UD_W_SP_STREN_3_ARRAY,
	TISP_PARAM_SDNS_SP_UD_B_SP_STREN_0_ARRAY,
	TISP_PARAM_SDNS_SP_UD_B_SP_STREN_1_ARRAY,
	TISP_PARAM_SDNS_SP_UD_B_SP_STREN_2_ARRAY,
	TISP_PARAM_SDNS_SP_UD_B_SP_STREN_3_ARRAY,
	TISP_PARAM_SDNS_SP_UD_STD_THRES_ARRAY,
	TISP_PARAM_SDNS_SP_UD_STD_STREN_ARRAY,
	TISP_PARAM_SDNS_SP_UD_FLAT_THRES_ARRAY,
	TISP_PARAM_SDNS_SP_UD_FLAT_STREN_ARRAY,
	TISP_PARAM_SDNS_SP_UD_WBHL_FLAT,
	TISP_PARAM_SDNS_SP_UU_NP_ARRAY,
	TISP_PARAM_SDNS_SP_D_W_WEI_NP_ARRAY,
	TISP_PARAM_SDNS_SP_D_B_WEI_NP_ARRAY,
	TISP_PARAM_SDNS_SP_UD_W_WEI_NP_ARRAY,
	TISP_PARAM_SDNS_AVE_THRES_ARRAY,
	TISP_PARAM_SDNS_GRAD_ZX_THRES_WDR_ARRAY,
	TISP_PARAM_SDNS_GRAD_ZY_THRES_WDR_ARRAY,
	TISP_PARAM_SDNS_STD_THR1_WDR_ARRAY,
	TISP_PARAM_SDNS_STD_THR2_WDR_ARRAY,
	TISP_PARAM_SDNS_H_MV_WEI_WDR,
	TISP_PARAM_SDNS_H_S_1_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_2_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_3_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_4_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_5_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_6_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_7_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_8_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_9_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_10_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_11_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_12_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_13_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_14_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_15_WDR_ARRAY,
	TISP_PARAM_SDNS_H_S_16_WDR_ARRAY,
	TISP_PARAM_SDNS_SHARPEN_TT_OPT_WDR_ARRAY,
	TISP_PARAM_SDNS_AVE_FLITER_WDR,
	TISP_PARAM_SDNS_AVE_THRES_WDR_ARRAY,
	TISP_PARAM_SDNS_SP_UU_THRES_WDR_ARRAY,
	TISP_PARAM_SDNS_SP_UU_STREN_WDR_ARRAY,
	TISP_PARAM_SDNS_SP_MV_UU_THRES_WDR_ARRAY,
	TISP_PARAM_SDNS_SP_MV_UU_STREN_WDR_ARRAY,
	TISP_PARAM_SDNS_SP_UD_B_WEI_NP_ARRAY,
	TISP_PARAM_SDNS_END = TISP_PARAM_SDNS_SP_UD_B_WEI_NP_ARRAY,

	//MDNS
	TISP_PARAM_MDNS_START,
	TISP_PARAM_MDNS_Y_FILTER_EN_ARRAY = TISP_PARAM_MDNS_START,
	TISP_PARAM_MDNS_Y_SF_CUR_EN_ARRAY,
	TISP_PARAM_MDNS_Y_SF_REF_EN_ARRAY,
	TISP_PARAM_MDNS_Y_DEBUG_ARRAY,
	TISP_PARAM_MDNS_UV_FILTER_EN_ARRAY,
	TISP_PARAM_MDNS_UV_SF_CUR_EN_ARRAY,
	TISP_PARAM_MDNS_UV_SF_REF_EN_ARRAY,
	TISP_PARAM_MDNS_UV_DEBUG_ARRAY,
	TISP_PARAM_MDNS_ASS_ENABLE_ARRAY,
	TISP_PARAM_MDNS_STA_INTER_EN_ARRAY,
	TISP_PARAM_MDNS_STA_GROUP_NUM_ARRAY,
	TISP_PARAM_MDNS_STA_MAX_NUM_ARRAY,
	TISP_PARAM_MDNS_BGM_ENABLE_ARRAY,
	TISP_PARAM_MDNS_BGM_INTER_EN_ARRAY,
	TISP_PARAM_MDNS_PSN_ENABLE_ARRAY,
	TISP_PARAM_MDNS_PSN_MAX_NUM_ARRAY,
	TISP_PARAM_MDNS_REF_WEI_BYPS_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_WIN_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_AVE_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_AVE_SLOPE_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_DTB_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_ASS_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_STA_BLK_SIZE_ARRAY,
	TISP_PARAM_MDNS_Y_STA_WIN_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_STA_AVE_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_STA_DTB_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_STA_ASS_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_STA_MOTION_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_STA_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_PSN_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_MV_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_FAKE_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_STA_FS_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_PSN_FS_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_F_MAX_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_F_MIN_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_R_MAX_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_R_MIN_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_INCREASE_ARRAY,
	TISP_PARAM_MDNS_Y_CORNER_LENGTH_T_ARRAY,
	TISP_PARAM_MDNS_Y_CORNER_LENGTH_B_ARRAY,
	TISP_PARAM_MDNS_Y_CORNER_LENGTH_L_ARRAY,
	TISP_PARAM_MDNS_Y_CORNER_LENGTH_R_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_WIN_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_DIV_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_TYPE_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_WIN_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_DIV_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_SQU_EN_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_SQU_DIV_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_WIN_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_DIV_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_HIST_SAD_EN_ARRAY,
	TISP_PARAM_MDNS_Y_HIST_STA_EN_ARRAY,
	TISP_PARAM_MDNS_Y_HIST_NUM_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_HIST_CMP_THRES0_ARRAY,
	TISP_PARAM_MDNS_Y_HIST_CMP_THRES1_ARRAY,
	TISP_PARAM_MDNS_Y_HIST_CMP_THRES2_ARRAY,
	TISP_PARAM_MDNS_Y_HIST_CMP_THRES3_ARRAY,
	TISP_PARAM_MDNS_Y_HIST_THRES0_ARRAY,
	TISP_PARAM_MDNS_Y_HIST_THRES1_ARRAY,
	TISP_PARAM_MDNS_Y_HIST_THRES2_ARRAY,
	TISP_PARAM_MDNS_Y_HIST_THRES3_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_THR_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_THR_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_CORNER_THR_ADJ_VALUE_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_CORNER_WEI_ADJ_VALUE_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_AVE_THRES_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_SAD_ASS_THRES_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_STA_AVE_THRES_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_STA_ASS_THRES_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_STA_MOTION_THRES_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI1_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI2_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI3_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI4_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_OP_EN_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_WEI_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI1_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI2_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI3_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI4_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_LMT_OP_EN_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_LMT_WEI_ARRAY,
	TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES0_ARRAY,
	TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES1_ARRAY,
	TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES2_ARRAY,
	TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI0_ARRAY,
	TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI1_ARRAY,
	TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI2_ARRAY,
	TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI3_ARRAY,
	TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_ARRAY,
	TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_SWEI_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_DWEI_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_0_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_16_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_32_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_48_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_64_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_80_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_96_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_112_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_128_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_0_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_16_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_32_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_48_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_64_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_80_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_96_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_112_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_128_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES0_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES1_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES2_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI0_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI1_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI2_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI3_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_SEG_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_ARRAY,
	TISP_PARAM_MDNS_Y_CON_THRES_ARRAY,
	TISP_PARAM_MDNS_Y_CON_STREN_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_WDR,
	TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_WDR,
	TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_WDR_ARRAY,
	TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_WDR_ARRAY,
	TISP_PARAM_MDNS_C_SAD_WIN_OPT_ARRAY,
	TISP_PARAM_MDNS_C_SAD_AVE_THRES_ARRAY,
	TISP_PARAM_MDNS_C_SAD_AVE_SLOPE_ARRAY,
	TISP_PARAM_MDNS_C_SAD_DTB_THRES_ARRAY,
	TISP_PARAM_MDNS_C_SAD_ASS_THRES_ARRAY,
	TISP_PARAM_MDNS_C_REF_WEI_MV_ARRAY,
	TISP_PARAM_MDNS_C_REF_WEI_FAKE_ARRAY,
	TISP_PARAM_MDNS_C_REF_WEI_F_MAX_ARRAY,
	TISP_PARAM_MDNS_C_REF_WEI_F_MIN_ARRAY,
	TISP_PARAM_MDNS_C_REF_WEI_B_MAX_ARRAY,
	TISP_PARAM_MDNS_C_REF_WEI_B_MIN_ARRAY,
	TISP_PARAM_MDNS_C_REF_WEI_R_MAX_ARRAY,
	TISP_PARAM_MDNS_C_REF_WEI_R_MIN_ARRAY,
	TISP_PARAM_MDNS_C_REF_WEI_INCREASE_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_THR_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_THR_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_C_DTB_THR_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_C_ASS_THR_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_C_CORNER_THR_ADJ_VALUE_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_C_DTB_WEI_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_C_ASS_WEI_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_C_SAD_WEI_ADJ_SEG_ARRAY,
	TISP_PARAM_MDNS_C_CORNER_WEI_ADJ_VALUE_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE0_ARRAY,
	TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE1_ARRAY,
	TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE2_ARRAY,
	TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE3_ARRAY,
	TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE4_ARRAY,
	TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE5_ARRAY,
	TISP_PARAM_MDNS_C_SAD_AVE_THRES_WDR_ARRAY,
	TISP_PARAM_MDNS_C_SAD_ASS_THRES_WDR_ARRAY,
	TISP_PARAM_MDNS_C_REF_WEI_B_MAX_WDR_ARRAY,
	TISP_PARAM_MDNS_C_REF_WEI_B_MIN_WDR_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_SMJ_THRES_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_EDG_THRES_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_OP_EN_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_WEI_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_OP_EN_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_WEI_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_ARRAY,
	TISP_PARAM_MDNS_C_BGM_WIN_OPT_ARRAY,
	TISP_PARAM_MDNS_C_BGM_CUR_SRC_ARRAY,
	TISP_PARAM_MDNS_C_BGM_REF_SRC_ARRAY,
	TISP_PARAM_MDNS_C_BGM_FALSE_THRES_ARRAY,
	TISP_PARAM_MDNS_C_BGM_FALSE_STEP_ARRAY,
	TISP_PARAM_MDNS_C_PIIR_EDGE_THRES0_ARRAY,
	TISP_PARAM_MDNS_C_PIIR_EDGE_THRES1_ARRAY,
	TISP_PARAM_MDNS_C_PIIR_EDGE_THRES2_ARRAY,
	TISP_PARAM_MDNS_C_PIIR_EDGE_WEI0_ARRAY,
	TISP_PARAM_MDNS_C_PIIR_EDGE_WEI1_ARRAY,
	TISP_PARAM_MDNS_C_PIIR_EDGE_WEI2_ARRAY,
	TISP_PARAM_MDNS_C_PIIR_EDGE_WEI3_ARRAY,
	TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_ARRAY,
	TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_SEG_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_0_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_16_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_32_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_48_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_64_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_80_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_96_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_112_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_128_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_SEG_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_0_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_16_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_32_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_48_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_64_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_80_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_96_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_112_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_128_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_EDGE_THRES0_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_EDGE_THRES1_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_EDGE_THRES2_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_EDGE_WEI0_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_EDGE_WEI1_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_EDGE_WEI2_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_EDGE_WEI3_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_SEG_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_SMJ_THRES_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_EDG_THRES0_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_EDG_THRES1_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_EDG_THRES2_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_THRES_S0_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_THRES_S1_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_THRES_S2_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_THRES_S3_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_STEP_S0_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_STEP_S1_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_STEP_S2_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_STEP_S3_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_THRES_M0_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_THRES_M1_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_THRES_M2_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_THRES_M3_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_STEP_M0_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_STEP_M1_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_STEP_M2_ARRAY,
	TISP_PARAM_MDNS_C_FALSE_STEP_M3_ARRAY,
	TISP_PARAM_MDNS_C_SAT_LMT_THRES_ARRAY,
	TISP_PARAM_MDNS_C_SAT_LMT_STREN_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_WDR_ARRAY,
	TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_WDR_ARRAY,
	TISP_PARAM_MDNS_C_SAT_NML_STREN_ARRAY,
	TISP_PARAM_MDNS_END = TISP_PARAM_MDNS_C_SAT_NML_STREN_ARRAY,

	//CLM
	TISP_PARAM_CLM_START,
	TISP_PARAM_CLM_H_LUT = TISP_PARAM_CLM_START,
	TISP_PARAM_CLM_S_LUT,
	TISP_PARAM_CLM_LUT_SHIFT,
	TISP_PARAM_CLM_END = TISP_PARAM_CLM_LUT_SHIFT,

	//DEFOG
	TISP_PARAM_DEFOG_START,
	TISP_PARAM_DEFOG_WEIGHTLUT20 = TISP_PARAM_DEFOG_START,
	TISP_PARAM_DEFOG_WEIGHTLUT02,
	TISP_PARAM_DEFOG_WEIGHTLUT12,
	TISP_PARAM_DEFOG_WEIGHTLUT22,
	TISP_PARAM_DEFOG_WEIGHTLUT21,
	TISP_PARAM_DEFOG_COL_CT_ARRAY,
	TISP_PARAM_DEFOG_CENT3_W_DIS_ARRAY,
	TISP_PARAM_DEFOG_CENT5_W_DIS_ARRAY,
	TISP_PARAM_DEFOG_EV_LIST,
	TISP_PARAM_DEFOG_TRSY0_LIST,
	TISP_PARAM_DEFOG_TRSY1_LIST,
	TISP_PARAM_DEFOG_TRSY2_LIST,
	TISP_PARAM_DEFOG_TRSY3_LIST,
	TISP_PARAM_DEFOG_TRSY4_LIST,
	TISP_PARAM_DEFOG_RGBRA_LIST,
	TISP_PARAM_DEFOG_MAIN_PARA_ARRAY,
	TISP_PARAM_DEFOG_COLOR_CONTROL_ARRAY,
	TISP_PARAM_DEFOG_LC_S_ARRAY,
	TISP_PARAM_DEFOG_LC_V_ARRAY,
	TISP_PARAM_DEFOG_CC_S_ARRAY,
	TISP_PARAM_DEFOG_CC_V_ARRAY,
	TISP_PARAM_DEFOG_DARK_L1_ARRAY,
	TISP_PARAM_DEFOG_DARK_L2_ARRAY,
	TISP_PARAM_DEFOG_BLOCK_TX,
	TISP_PARAM_DEFOG_BLOCK_TY,
	TISP_PARAM_DEFOG_T_PAR_LIST1,
	TISP_PARAM_DEFOG_T_PAR_LIST2,
	TISP_PARAM_DEFOG_MANUAL_CTRL,
	TISP_PARAM_DEFOG_EV_LIST_WDR,
	TISP_PARAM_DEFOG_TRSY0_LIST_WDR,
	TISP_PARAM_DEFOG_TRSY1_LIST_WDR,
	TISP_PARAM_DEFOG_TRSY2_LIST_WDR,
	TISP_PARAM_DEFOG_TRSY3_LIST_WDR,
	TISP_PARAM_DEFOG_TRSY4_LIST_WDR,
	TISP_PARAM_DEFOG_MAIN_PARA_WDR_ARRAY,
	TISP_PARAM_DEFOG_BLOCK_TX_WDR,
	TISP_PARAM_DEFOG_FPGA_PARA_WDR,
	TISP_PARAM_DEFOG_FPGA_PARA,
	TISP_PARAM_DEFOG_END = TISP_PARAM_DEFOG_FPGA_PARA,

	//ADR
	TISP_PARAM_ADR_START,
	TISP_PARAM_ADR_PARA_ARRAY = TISP_PARAM_ADR_START,
	TISP_PARAM_ADR_WEIGHT_20_LUT_ARRAY,
	TISP_PARAM_ADR_WEIGHT_02_LUT_ARRAY,
	TISP_PARAM_ADR_WEIGHT_12_LUT_ARRAY,
	TISP_PARAM_ADR_WEIGHT_22_LUT_ARRAY,
	TISP_PARAM_ADR_WEIGHT_21_LUT_ARRAY,
	TISP_PARAM_ADR_CTC_KNEEPOINT_ARRAY,
	TISP_PARAM_ADR_MIN_KNEEPOINT_ARRAY,
	TISP_PARAM_ADR_MAP_KNEEPOINT_ARRAY,
	TISP_PARAM_ADR_COC_KNEEPOINT_Y1_ARRAY,
	TISP_PARAM_ADR_COC_KNEEPOINT_Y2_ARRAY,
	TISP_PARAM_ADR_COC_KNEEPOINT_Y3_ARRAY,
	TISP_PARAM_ADR_COC_KNEEPOINT_Y4_ARRAY,
	TISP_PARAM_ADR_COC_KNEEPOINT_Y5_ARRAY,
	TISP_PARAM_ADR_COC_ADJUST_ARRAY,
	TISP_PARAM_ADR_CENTRE_W_DIS_ARRAY,
	TISP_PARAM_ADR_STAT_BLOCK_HIST_DIFF_ARRAY,
	TISP_PARAM_ADR_SOFT_TM_BASE_ARRAY,
	TISP_PARAM_ADR_SOFT_GAM_X_ARRAY,
	TISP_PARAM_ADR_SOFT_GAM_Y_ARRAY,
	TISP_ADR_CTC_MAP2CUT_Y,
	TISP_PARAM_ADR_SOFT_LIGHT_END_ARRAY,
	TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_ARRAY,
	TISP_PARAM_ADR_SOFT_MAP_MODE_ARRAY,
	TISP_HISTSUB_4096_DIFF,
	TISP_PARAM_ADR_TOOL_CONTROL_ARRAY,
	TISP_PARAM_ADR_EV_LIST,
	TISP_PARAM_ADR_LIGB_LIST,
	TISP_PARAM_ADR_MAPB1_LIST,
	TISP_PARAM_ADR_MAPB2_LIST,
	TISP_PARAM_ADR_MAPB3_LIST,
	TISP_PARAM_ADR_MAPB4_LIST,
	TISP_ADR_CTC_MAP2CUT_Y_WDR,
	TISP_PARAM_ADR_SOFT_LIGHT_END_WDR_ARRAY,
	TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_WDR_ARRAY,
	TISP_PARAM_ADR_SOFT_MAP_MODE_WDR_ARRAY,
	TISP_PARAM_ADR_EV_LIST_WDR,
	TISP_PARAM_ADR_LIGB_LIST_WDR,
	TISP_PARAM_ADR_MAPB1_LIST_WDR,
	TISP_PARAM_ADR_MAPB2_LIST_WDR,
	TISP_PARAM_ADR_MAPB3_LIST_WDR,
	TISP_PARAM_ADR_MAPB4_LIST_WDR,
	TISP_PARAM_ADR_BLP2_LIST_WDR,
	TISP_PARAM_ADR_BLP2_LIST,
	TISP_PARAM_ADR_END = TISP_PARAM_ADR_BLP2_LIST,

	//HLDC
	TISP_PARAM_HLDC_START,
	TISP_PARAM_HLDC_CON_PAR_ARRAY = TISP_PARAM_HLDC_START,
	TISP_PARAM_HLDC_END = TISP_PARAM_HLDC_CON_PAR_ARRAY,

	//AF
	TISP_PARAM_AF_START,
	TISP_PARAM_AF_ZONE = TISP_PARAM_AF_START,
	TISP_PARAM_AF_TH_EN,
	TISP_PARAM_AF_FIR0_V,
	TISP_PARAM_AF_FIR0_LDG,
	TISP_PARAM_AF_FIR0_CORING,
	TISP_PARAM_AF_FIR1_V,
	TISP_PARAM_AF_FIR1_LDG,
	TISP_PARAM_AF_FIR1_CORING,
	TISP_PARAM_AF_IIR0_H,
	TISP_PARAM_AF_IIR0_LDG,
	TISP_PARAM_AF_IIR0_CORING,
	TISP_PARAM_AF_IIR1_H,
	TISP_PARAM_AF_IIR1_LDG,
	TISP_PARAM_AF_IIR1_CORING,
	TISP_PARAM_AF_POINTPOS,
	TISP_PARAM_AF_TILT,
	TISP_PARAM_AF_FVW_MEAN,
	TISP_PARAM_AF_FV,
	TISP_PARAM_AF_WEIGHT,
	TISP_PARAM_AF_END = TISP_PARAM_AF_WEIGHT,

	//BCSH
	TISP_PARAM_BCSH_START,
	TISP_PARAM_BCSH_CCMMATRIX_D = TISP_PARAM_BCSH_START,
	TISP_PARAM_BCSH_CCMMATRIX_T,
	TISP_PARAM_BCSH_CCMMATRIX_A,
	TISP_PARAM_BCSH_HDP,
	TISP_PARAM_BCSH_HBP,
	TISP_PARAM_BCSH_HLSP,
	TISP_PARAM_BCSH_STHRES,
	TISP_PARAM_BCSH_EVLIST,
	TISP_PARAM_BCSH_SMINLISTS,
	TISP_PARAM_BCSH_SMAXLISTS,
	TISP_PARAM_BCSH_SMINLISTM,
	TISP_PARAM_BCSH_SMAXLISTM,
	TISP_PARAM_BCSH_C,
TISP_PARAM_BCSH_CXL,
TISP_PARAM_BCSH_CXH,
TISP_PARAM_BCSH_CYL,
TISP_PARAM_BCSH_CYH,
	TISP_PARAM_BCSH_B,
	TISP_PARAM_BCSH_OFFSETRGB,
	TISP_PARAM_BCSH_OFFSETYUVY,
	TISP_PARAM_BCSH_CLIP0,
	TISP_PARAM_BCSH_CLIP1,
    TISP_PARAM_BCSH_CCMMATRIX_D_WDR,
    TISP_PARAM_BCSH_CCMMATRIX_T_WDR,
    TISP_PARAM_BCSH_CCMMATRIX_A_WDR,
    TISP_PARAM_BCSH_HDP_WDR,
    TISP_PARAM_BCSH_HBP_WDR,
    TISP_PARAM_BCSH_HLSP_WDR,
    TISP_PARAM_BCSH_STHRES_WDR,
    TISP_PARAM_BCSH_EVLIST_WDR,
    TISP_PARAM_BCSH_SMINLISTS_WDR,
    TISP_PARAM_BCSH_SMAXLISTS_WDR,
    TISP_PARAM_BCSH_SMINLISTM_WDR,
    TISP_PARAM_BCSH_SMAXLISTM_WDR,
    TISP_PARAM_BCSH_OFFSETRGB_WDR,
	TISP_PARAM_BCSH_MMATRIX,
	TISP_PARAM_BCSH_MINVMATRIX,
	TISP_PARAM_BCSH_CLIP2,
	TISP_PARAM_BCSH_END = TISP_PARAM_BCSH_CLIP2,

	//YDNS
	TISP_PARAM_YDNS_START,
	TISP_PARAM_YDNS_EDGE_OUT_ARRAY = TISP_PARAM_YDNS_START,
	TISP_PARAM_YDNS_MV_THRES0_ARRAY,
	TISP_PARAM_YDNS_MV_THRES1_ARRAY,
	TISP_PARAM_YDNS_MV_THRES2_ARRAY,
	TISP_PARAM_YDNS_FUS_LEVEL_ARRAY,
	TISP_PARAM_YDNS_FUS_MIN_THRES_ARRAY,
	TISP_PARAM_YDNS_FUS_MAX_THRES_ARRAY,
	TISP_PARAM_YDNS_FUS_SSWEI_ARRAY,
	TISP_PARAM_YDNS_FUS_SEWEI_ARRAY,
	TISP_PARAM_YDNS_FUS_MSWEI_ARRAY,
	TISP_PARAM_YDNS_FUS_MEWEI_ARRAY,
	TISP_PARAM_YDNS_FUS_UVWEI_ARRAY,
	TISP_PARAM_YDNS_EDGE_WEI_ARRAY,
	TISP_PARAM_YDNS_EDGE_DIV_ARRAY,
	TISP_PARAM_YDNS_EDGE_THRES_ARRAY,
	TISP_PARAM_YDNS_END = TISP_PARAM_YDNS_EDGE_THRES_ARRAY,

	//BLC
	TISP_PARAM_GB_START,
	TISP_PARAM_GB_DGAIN_SHIFT = TISP_PARAM_GB_START,
	TISP_PARAM_GB_DGAIN_RGBIR_L,
	TISP_PARAM_GB_DGAIN_RGBIR_S,
	TISP_PARAM_GB_BLC_R,
	TISP_PARAM_GB_BLC_GR,
	TISP_PARAM_GB_BLC_GB,
	TISP_PARAM_GB_BLC_B,
	TISP_PARAM_GB_BLC_IR,
	TISP_PARAM_GB_BLC_MIN_EN,
	TISP_PARAM_GB_BLC_MIN,
	TISP_PARAM_GB_END = TISP_PARAM_GB_BLC_MIN,

	//WDR
	TISP_PARAM_WDR_START,
	TISP_PARAM_WDR_PARA_ARRAY = TISP_PARAM_WDR_START,
	TISP_PARAM_WDR_WEIGHTLUT20_ARRAY,
	TISP_PARAM_WDR_WEIGHTLUT02_ARRAY,
	TISP_PARAM_WDR_WEIGHTLUT12_ARRAY,
	TISP_PARAM_WDR_WEIGHTLUT22_ARRAY,
	TISP_PARAM_WDR_WEIGHTLUT21_ARRAY,
	TISP_PARAM_WDR_GAM_Y_ARRAY,
	TISP_PARAM_WDR_W_POINT_WEIGHT_X_ARRAY,
	TISP_PARAM_WDR_W_POINT_WEIGHT_Y_ARRAY,
	TISP_PARAM_WDR_W_POINT_WEIGHT_POW_ARRAY,
	TISP_PARAM_FUSION1_CURE_Y_ARRAY,
	TISP_PARAM_WDR_DETAIL_TH_W_ARRAY,
	TISP_PARAM_WDR_CONTRAST_T_Y_MUX_ARRAY,
	TISP_PARAM_WDR_CT_CL_PARA_ARRAY,
	TISP_PARAM_CENTRE5X5_W_DISTANCE_ARRAY,
	TISP_PARAM_WDR_STAT_PARA_ARRAY,
	TISP_PARAM_WDR_DEGOST_PARA_ARRAY,
	TISP_PARAM_WDR_DARKLABLE_ARRAY,
	TISP_PARAM_WDR_DARKLABLEN_ARRAY,
	TISP_PARAM_WDR_DARKWEIGHT_ARRAY,
	TISP_PARAM_WDR_THRLABLE_ARRAY,
	TISP_PARAM_COMPUTERMODLE_SOFTWARE_IN_ARRAY,
	TISP_PARAM_DEVIATIONPARA_SOFTWARE_IN_ARRAY,
	TISP_PARAM_RATIOPARA_SOFTWARE_IN_ARRAY,
	TISP_PARAM_X_THR_SOFTWARE_IN_ARRAY,
	TISP_PARAM_Y_THR_SOFTWARE_IN_ARRAY,
	TISP_PARAM_THRPARA_SOFTWARE_IN_ARRAY,
	TISP_PARAM_XY_PIX_LOW_SOFTWARE_IN_ARRAY,
	TISP_PARAM_MOTIONTHRPARA_SOFTWARE_IN_ARRAY,
	TISP_PARAM_D_THR_NORMAL_SOFTWARE_IN_ARRAY,
	TISP_PARAM_D_THR_NORMAL1_SOFTWARE_IN_ARRAY,
	TISP_PARAM_D_THR_NORMAL2_SOFTWARE_IN_ARRAY,
	TISP_PARAM_D_THR_NORMAL_MIN_SOFTWARE_IN_ARRAY,
	TISP_PARAM_MULTIVALUELOW_SOFTWARE_IN_ARRAY,
	TISP_PARAM_MULTIVALUEHIGH_SOFTWARE_IN_ARRAY,
	TISP_PARAM_D_THR_2_SOFTWARE_IN_ARRAY,
	TISP_PARAM_WDR_DETIAL_PARA_SOFTWARE_IN_ARRAY,
	TISP_PARAM_WDR_THRALL_SOFTWARE_OUT,
	TISP_PARAM_WDR_DBG_OUT_ARRAY,
	TISP_PARAM_WDR_EV_LIST,
	TISP_PARAM_WDR_WEIGHT_B_IN_LIST,
	TISP_PARAM_WDR_WEIGHT_P_IN_LIST,
	TISP_PARAM_WDR_EV_LIST_DEGHOST_LIST,
	TISP_PARAM_WDR_WEIGHT_IN_LIST_DEGHOST,
	TISP_PARAM_WDR_DETAIL_W_IN0_LIST,
	TISP_PARAM_WDR_DETAIL_W_IN1_LIST,
	TISP_PARAM_WDR_DETAIL_W_IN2_LIST,
	TISP_PARAM_WDR_DETAIL_W_IN3_LIST,
	TISP_PARAM_WDR_DETAIL_W_IN4_LIST,
	TISP_PARAM_WDR_PRIV_ARRAY,
	TISP_PARAM_WDR_TOOL_CONTROL_ARRAY,
	TISP_PARAM_WDR_END = TISP_PARAM_WDR_TOOL_CONTROL_ARRAY,

	//RDNS
	TISP_PARAM_RDNS_START,
	TISP_PARAM_RDNS_OUT_OPT_ARRAY = TISP_PARAM_RDNS_START,
	TISP_PARAM_RDNS_AWB_GAIN_PAR_CFG_ARRAY,
	TISP_PARAM_RDNS_OE_NUM_ARRAY,
	TISP_PARAM_RDNS_OPT_CFG_ARRAY,
	TISP_PARAM_RDNS_GRAY_STREN_ARRAY,
	TISP_PARAM_RDNS_SLOPE_PAR_CFG_ARRAY,
	TISP_PARAM_RDNS_GRAY_STD_THRES_ARRAY,
	TISP_PARAM_RDNS_TEXT_BASE_THRES_ARRAY,
	TISP_PARAM_RDNS_FILTER_SAT_THRES_ARRAY,
	TISP_PARAM_RDNS_OE_THRES_ARRAY,
	TISP_PARAM_RDNS_FLAT_G_THRES_ARRAY,
	TISP_PARAM_RDNS_TEXT_G_THRES_ARRAY,
	TISP_PARAM_RDNS_FLAT_RB_THRES_ARRAY,
	TISP_PARAM_RDNS_TEXT_RB_THRES_ARRAY,
	TISP_PARAM_RDNS_GRAY_NP_ARRAY,
	TISP_PARAM_RDNS_TEXT_NP_ARRAY,
	TISP_PARAM_RDNS_LUM_NP_ARRAY,
	TISP_PARAM_RDNS_STD_NP_ARRAY,
	TISP_PARAM_RDNS_MV_TEXT_THRES_ARRAY,
	TISP_PARAM_RDNS_TEXT_BASE_THRES_WDR_ARRAY,
	TISP_PARAM_RDNS_SL_PAR_CFG,
	TISP_PARAM_RDNS_END = TISP_PARAM_RDNS_SL_PAR_CFG,

	TISP_PARAM_TOTAL_SIZE,
} tisp_params;

typedef struct {
	uint8_t  name[50];
	uint32_t rows;
	uint32_t cols;
	void *ptr;
} tisp_param_info_t;

typedef struct {
	//TOP
	uint32_t TISP_PARAM_TOP_BYPASS[TISP_PARAM_TOP_BYPASS_ROWS][TISP_PARAM_TOP_BYPASS_COLS];

	//AE
	uint32_t TISP_PARAM_AE_PARAMETER[TISP_PARAM_AE_PARAMETER_ROWS][TISP_PARAM_AE_PARAMETER_COLS];
	uint32_t TISP_PARAM_AE_SWITCH_NIGHT_MODE[TISP_PARAM_AE_SWITCH_NIGHT_MODE_ROWS][TISP_PARAM_AE_SWITCH_NIGHT_MODE_COLS];
	uint32_t TISP_PARAM_AE_POINTPOS[TISP_PARAM_AE_POINTPOS_ROWS][TISP_PARAM_AE_POINTPOS_COLS];
	uint32_t TISP_PARAM_AE_EXP_PARAMETER[TISP_PARAM_AE_EXP_PARAMETER_ROWS][TISP_PARAM_AE_EXP_PARAMETER_COLS];
	uint32_t TISP_PARAM_AE_EV_STEP[TISP_PARAM_AE_EV_STEP_ROWS][TISP_PARAM_AE_EV_STEP_COLS];
	uint32_t TISP_PARAM_AE_STABLE_TOL[TISP_PARAM_AE_STABLE_TOL_ROWS][TISP_PARAM_AE_STABLE_TOL_COLS];
	uint32_t TISP_PARAM_AE_EV_LIST[TISP_PARAM_AE_EV_LIST_ROWS][TISP_PARAM_AE_EV_LIST_COLS];
	uint32_t TISP_PARAM_AE_LUM_LIST[TISP_PARAM_AE_LUM_LIST_ROWS][TISP_PARAM_AE_LUM_LIST_COLS];
	uint32_t TISP_PARAM_AE_AT_LIST[TISP_PARAM_AE_AT_LIST_ROWS][TISP_PARAM_AE_AT_LIST_COLS];
	uint32_t TISP_PARAM_AE_DEFLICKER_PARA[TISP_PARAM_AE_DEFLICKER_PARA_ROWS][TISP_PARAM_AE_DEFLICKER_PARA_COLS];
	uint32_t TISP_PARAM_AE_FLICKER_T[TISP_PARAM_AE_FLICKER_T_ROWS][TISP_PARAM_AE_FLICKER_T_COLS];
	uint32_t TISP_PARAM_AE_SCENE_PARE[TISP_PARAM_AE_SCENE_PARE_ROWS][TISP_PARAM_AE_SCENE_PARE_COLS];
	uint32_t TISP_PARAM_AE_SCENE_MODE_TH[TISP_PARAM_AE_SCENE_MODE_TH_ROWS][TISP_PARAM_AE_SCENE_MODE_TH_COLS];
	uint32_t TISP_PARAM_AE_ROI_TREND_LOG2_LUT[TISP_PARAM_AE_ROI_TREND_LOG2_LUT_ROWS][TISP_PARAM_AE_ROI_TREND_LOG2_LUT_COLS];
	uint32_t TISP_PARAM_AE_ROI_TREND_WEIGHT_LUT[TISP_PARAM_AE_ROI_TREND_WEIGHT_LUT_ROWS][TISP_PARAM_AE_ROI_TREND_WEIGHT_LUT_COLS];
	uint32_t TISP_PARAM_AE_ZONE_WEIGHT[TISP_PARAM_AE_ZONE_WEIGHT_ROWS][TISP_PARAM_AE_ZONE_WEIGHT_COLS];
	uint32_t TISP_PARAM_AE_SCENE_ROUI_WEIGHT[TISP_PARAM_AE_SCENE_ROUI_WEIGHT_ROWS][TISP_PARAM_AE_SCENE_ROUI_WEIGHT_COLS];
	uint32_t TISP_PARAM_AE_SCENE_ROI_WEIGHT[TISP_PARAM_AE_SCENE_ROI_WEIGHT_ROWS][TISP_PARAM_AE_SCENE_ROI_WEIGHT_COLS];
	uint32_t TISP_PARAM_AE_RESULT[TISP_PARAM_AE_RESULT_ROWS][TISP_PARAM_AE_RESULT_COLS];
	uint32_t TISP_PARAM_AE_STAT[TISP_PARAM_AE_STAT_ROWS][TISP_PARAM_AE_STAT_COLS];
	uint32_t TISP_PARAM_AE_WM_Q[TISP_PARAM_AE_WM_Q_ROWS][TISP_PARAM_AE_WM_Q_COLS];
	uint32_t TISP_PARAM_AE_COMP_PARAM[TISP_PARAM_AE_COMP_PARAM_ROWS][TISP_PARAM_AE_COMP_PARAM_COLS];
	uint32_t TISP_PARAM_AE_COMP_EV_LIST[TISP_PARAM_AE_COMP_EV_LIST_ROWS][TISP_PARAM_AE_COMP_EV_LIST_COLS];
	uint32_t TISP_PARAM_AE_COMP_AT_LIST[TISP_PARAM_AE_COMP_AT_LIST_ROWS][TISP_PARAM_AE_COMP_AT_LIST_COLS];
	uint32_t TISP_PARAM_AE_EXTRA_AT_LIST[TISP_PARAM_AE_EXTRA_AT_LIST_ROWS][TISP_PARAM_AE_EXTRA_AT_LIST_COLS];
	uint32_t TISP_PARAM_AE1_EV_LIST[TISP_PARAM_AE1_EV_LIST_ROWS][TISP_PARAM_AE1_EV_LIST_COLS];
	uint32_t TISP_PARAM_AE_EV_LIST_WDR[TISP_PARAM_AE_EV_LIST_WDR_ROWS][TISP_PARAM_AE_EV_LIST_WDR_COLS];
	uint32_t TISP_PARAM_AE_LUM_LIST_WDR[TISP_PARAM_AE_LUM_LIST_WDR_ROWS][TISP_PARAM_AE_LUM_LIST_WDR_COLS];
	uint32_t TISP_PARAM_AE_AT_LIST_WDR[TISP_PARAM_AE_AT_LIST_WDR_ROWS][TISP_PARAM_AE_AT_LIST_WDR_COLS];
	uint32_t TISP_PARAM_AE_SCENE_PARE_WDR[TISP_PARAM_AE_SCENE_PARE_WDR_ROWS][TISP_PARAM_AE_SCENE_PARE_WDR_COLS];
	uint32_t TISP_PARAM_AE_SCENE_MODE_TH_WDR[TISP_PARAM_AE_SCENE_MODE_TH_WDR_ROWS][TISP_PARAM_AE_SCENE_MODE_TH_WDR_COLS];
	uint32_t TISP_PARAM_AE_COMP_PARAM_WDR[TISP_PARAM_AE_COMP_PARAM_WDR_ROWS][TISP_PARAM_AE_COMP_PARAM_WDR_COLS];
	uint32_t TISP_PARAM_AE_EXTRA_AT_LIST_WDR[TISP_PARAM_AE_EXTRA_AT_LIST_WDR_ROWS][TISP_PARAM_AE_EXTRA_AT_LIST_WDR_COLS];
	uint32_t TISP_PARAM_AE1_COMP_EV_LIST[TISP_PARAM_AE1_EV_LIST_ROWS][TISP_PARAM_AE1_EV_LIST_COLS];

	//AWB
	uint32_t TISP_PARAM_AWB_AWB_PARAMETER[TISP_PARAM_AWB_AWB_PARAMETER_ROWS][TISP_PARAM_AWB_AWB_PARAMETER_COLS];
	uint32_t TISP_PARAM_AWB_PIXEL_CNT_TH[TISP_PARAM_AWB_PIXEL_CNT_TH_ROWS][TISP_PARAM_AWB_PIXEL_CNT_TH_COLS];
	uint32_t TISP_PARAM_AWB_LOWLIGHT_RG_TH[TISP_PARAM_AWB_LOWLIGHT_RG_TH_ROWS][TISP_PARAM_AWB_LOWLIGHT_RG_TH_COLS];
	uint32_t TISP_PARAM_AWB_POINTPOS[TISP_PARAM_AWB_POINTPOS_ROWS][TISP_PARAM_AWB_POINTPOS_COLS];
	uint32_t TISP_PARAM_AWB_COF[TISP_PARAM_AWB_COF_ROWS][TISP_PARAM_AWB_COF_COLS];
	uint32_t TISP_PARAM_AWB_MF_PARA[TISP_PARAM_AWB_MF_PARA_ROWS][TISP_PARAM_AWB_MF_PARA_COLS];
	uint32_t TISP_PARAM_AWB_MODE[TISP_PARAM_AWB_MODE_ROWS][TISP_PARAM_AWB_MODE_COLS];
	uint32_t TISP_PARAM_AWB_CT[TISP_PARAM_AWB_CT_ROWS][TISP_PARAM_AWB_CT_COLS];
	uint32_t TISP_PARAM_AWB_CT_LAST[TISP_PARAM_AWB_CT_LAST_ROWS][TISP_PARAM_AWB_CT_LAST_COLS];
	uint32_t TISP_PARAM_AWB_STATIC[TISP_PARAM_AWB_STATIC_ROWS][TISP_PARAM_AWB_STATIC_COLS];
	uint32_t TISP_PARAM_AWB_LIGHT_SRC[TISP_PARAM_AWB_LIGHT_SRC_ROWS][TISP_PARAM_AWB_LIGHT_SRC_COLS];
	uint32_t TISP_PARAM_AWB_LIGHT_SRC_NUM[TISP_PARAM_AWB_LIGHT_SRC_NUM_ROWS][TISP_PARAM_AWB_LIGHT_SRC_NUM_COLS];
	uint32_t TISP_PARAM_AWB_RG_POS[TISP_PARAM_AWB_RG_POS_ROWS][TISP_PARAM_AWB_RG_POS_COLS];
	uint32_t TISP_PARAM_AWB_BG_POS[TISP_PARAM_AWB_BG_POS_ROWS][TISP_PARAM_AWB_BG_POS_COLS];
	uint32_t TISP_PARAM_AWB_CT_TH_OT_LUXHIGH[TISP_PARAM_AWB_CT_TH_OT_LUXHIGH_ROWS][TISP_PARAM_AWB_CT_TH_OT_LUXHIGH_COLS];
	uint32_t TISP_PARAM_AWB_CT_TH_OT_LUXLOW[TISP_PARAM_AWB_CT_TH_OT_LUXLOW_ROWS][TISP_PARAM_AWB_CT_TH_OT_LUXLOW_COLS];
	uint32_t TISP_PARAM_AWB_CT_TH_IN[TISP_PARAM_AWB_CT_TH_IN_ROWS][TISP_PARAM_AWB_CT_TH_IN_COLS];
	uint32_t TISP_PARAM_AWB_CT_PARA_OT[TISP_PARAM_AWB_CT_PARA_OT_ROWS][TISP_PARAM_AWB_CT_PARA_OT_COLS];
	uint32_t TISP_PARAM_AWB_CT_PARA_IN[TISP_PARAM_AWB_CT_PARA_IN_ROWS][TISP_PARAM_AWB_CT_PARA_IN_COLS];
	uint32_t TISP_PARAM_AWB_DIS_TW[TISP_PARAM_AWB_DIS_TW_ROWS][TISP_PARAM_AWB_DIS_TW_COLS];
	uint32_t TISP_PARAM_AWB_RGBG_WEIGHT[TISP_PARAM_AWB_RGBG_WEIGHT_ROWS][TISP_PARAM_AWB_RGBG_WEIGHT_COLS];
	uint32_t TISP_PARAM_AWB_COLOR_TEMP_MESH[TISP_PARAM_AWB_COLOR_TEMP_MESH_ROWS][TISP_PARAM_AWB_COLOR_TEMP_MESH_COLS];
	uint32_t TISP_PARAM_AWB_WGHT[TISP_PARAM_AWB_WGHT_ROWS][TISP_PARAM_AWB_WGHT_COLS];
	uint32_t TISP_PARAM_AWB_RGBG_WEIGHT_OT[TISP_PARAM_AWB_RGBG_WEIGHT_OT_ROWS][TISP_PARAM_AWB_RGBG_WEIGHT_OT_COLS];
	uint32_t TISP_PARAM_AWB_LS_W_LUT[TISP_PARAM_AWB_LS_W_LUT_ROWS][TISP_PARAM_AWB_LS_W_LUT_COLS];

	//GAMMA
	uint16_t TISP_PARAM_GAMMA_RGB_LUT_SADDR[TISP_PARAM_GAMMA_RGB_LUT_SADDR_ROWS][TISP_PARAM_GAMMA_RGB_LUT_SADDR_COLS];
	uint16_t TISP_PARAM_GAMMA_RGB_LUT_WDR_SADDR[TISP_PARAM_GAMMA_RGB_LUT_WDR_SADDR_ROWS][TISP_PARAM_GAMMA_RGB_LUT_WDR_SADDR_COLS];

	//GIB
	uint32_t TISP_PARAM_GIB_CONFIG_LINE[TISP_PARAM_GIB_CONFIG_LINE_ROWS][TISP_PARAM_GIB_CONFIG_LINE_COLS];
	uint32_t TISP_PARAM_GIB_R_G_LINEAR[TISP_PARAM_GIB_R_G_LINEAR_ROWS][TISP_PARAM_GIB_R_G_LINEAR_COLS];
	uint32_t TISP_PARAM_GIB_B_IR_LINEAR[TISP_PARAM_GIB_B_IR_LINEAR_ROWS][TISP_PARAM_GIB_B_IR_LINEAR_COLS];
	uint32_t TISP_PARAM_GIB_DEIRM_BLC_R_LINEAR[TISP_PARAM_GIB_DEIRM_BLC_R_LINEAR_ROWS][TISP_PARAM_GIB_DEIRM_BLC_R_LINEAR_COLS];
	uint32_t TISP_PARAM_GIB_DEIRM_BLC_GR_LINEAR[TISP_PARAM_GIB_DEIRM_BLC_GR_LINEAR_ROWS][TISP_PARAM_GIB_DEIRM_BLC_GR_LINEAR_COLS];
	uint32_t TISP_PARAM_GIB_DEIRM_BLC_GB_LINEAR[TISP_PARAM_GIB_DEIRM_BLC_GB_LINEAR_ROWS][TISP_PARAM_GIB_DEIRM_BLC_GB_LINEAR_COLS];
	uint32_t TISP_PARAM_GIB_DEIRM_BLC_B_LINEAR[TISP_PARAM_GIB_DEIRM_BLC_B_LINEAR_ROWS][TISP_PARAM_GIB_DEIRM_BLC_B_LINEAR_COLS];
	uint32_t TISP_PARAM_GIB_DEIRM_BLC_IR_LINEAR[TISP_PARAM_GIB_DEIRM_BLC_IR_LINEAR_ROWS][TISP_PARAM_GIB_DEIRM_BLC_IR_LINEAR_COLS];
	uint32_t TISP_PARAM_GIB_IR_POINT[TISP_PARAM_GIB_IR_POINT_ROWS][TISP_PARAM_GIB_IR_POINT_COLS];
	uint32_t TISP_PARAM_GIB_IR_RESER[TISP_PARAM_GIB_IR_RESER_ROWS][TISP_PARAM_GIB_IR_RESER_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_R_H[TISP_PARAM_GIB_DEIR_R_H_ROWS][TISP_PARAM_GIB_DEIR_R_H_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_G_H[TISP_PARAM_GIB_DEIR_G_H_ROWS][TISP_PARAM_GIB_DEIR_G_H_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_B_H[TISP_PARAM_GIB_DEIR_B_H_ROWS][TISP_PARAM_GIB_DEIR_B_H_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_R_M[TISP_PARAM_GIB_DEIR_R_M_ROWS][TISP_PARAM_GIB_DEIR_R_M_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_G_M[TISP_PARAM_GIB_DEIR_G_M_ROWS][TISP_PARAM_GIB_DEIR_G_M_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_B_M[TISP_PARAM_GIB_DEIR_B_M_ROWS][TISP_PARAM_GIB_DEIR_B_M_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_R_L[TISP_PARAM_GIB_DEIR_R_L_ROWS][TISP_PARAM_GIB_DEIR_R_L_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_G_L[TISP_PARAM_GIB_DEIR_G_L_ROWS][TISP_PARAM_GIB_DEIR_G_L_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_B_L[TISP_PARAM_GIB_DEIR_B_L_ROWS][TISP_PARAM_GIB_DEIR_B_L_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_MATRIX_H[TISP_PARAM_GIB_DEIR_MATRIX_H_ROWS][TISP_PARAM_GIB_DEIR_MATRIX_H_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_MATRIX_M[TISP_PARAM_GIB_DEIR_MATRIX_M_ROWS][TISP_PARAM_GIB_DEIR_MATRIX_M_COLS];
	uint32_t TISP_PARAM_GIB_DEIR_MATRIX_L[TISP_PARAM_GIB_DEIR_MATRIX_L_ROWS][TISP_PARAM_GIB_DEIR_MATRIX_L_COLS];

	//LSC
	uint32_t TISP_PARAM_LSC_LUT_NUM[TISP_PARAM_LSC_LUT_NUM_ROWS][TISP_PARAM_LSC_LUT_NUM_COLS];
	uint32_t TISP_PARAM_LSC_MESH_SCALE[TISP_PARAM_LSC_MESH_SCALE_ROWS][TISP_PARAM_LSC_MESH_SCALE_COLS];
	uint32_t TISP_PARAM_LSC_LUT_STRIDE[TISP_PARAM_LSC_LUT_STRIDE_ROWS][TISP_PARAM_LSC_LUT_STRIDE_COLS];
	uint32_t TISP_PARAM_LSC_MESH_SIZE[TISP_PARAM_LSC_MESH_SIZE_ROWS][TISP_PARAM_LSC_MESH_SIZE_COLS];
	uint32_t TISP_PARAM_LSC_CT_POINTS[TISP_PARAM_LSC_CT_POINTS_ROWS][TISP_PARAM_LSC_CT_POINTS_COLS];
	uint32_t TISP_PARAM_LSC_A_LINEAR[TISP_PARAM_LSC_A_LINEAR_ROWS][TISP_PARAM_LSC_A_LINEAR_COLS];
	uint32_t TISP_PARAM_LSC_T_LINEAR[TISP_PARAM_LSC_T_LINEAR_ROWS][TISP_PARAM_LSC_T_LINEAR_COLS];
	uint32_t TISP_PARAM_LSC_D_LINEAR[TISP_PARAM_LSC_D_LINEAR_ROWS][TISP_PARAM_LSC_D_LINEAR_COLS];
	uint32_t TISP_PARAM_LSC_MESH_STR[TISP_PARAM_LSC_MESH_STR_ROWS][TISP_PARAM_LSC_MESH_STR_COLS];
	uint32_t TISP_PARAM_LSC_MESH_STR_WDR[TISP_PARAM_LSC_MESH_STR_WDR_ROWS][TISP_PARAM_LSC_MESH_STR_WDR_COLS];
	uint32_t TISP_PARAM_LSC_MEAN_EN[TISP_PARAM_LSC_MEAN_EN_ROWS][TISP_PARAM_LSC_MEAN_EN_COLS];

	//DMSC
	uint32_t  TISP_PARAM_DMSC_UU_NP_ARRAY[TISP_PARAM_DMSC_UU_NP_ARRAY_ROWS][TISP_PARAM_DMSC_UU_NP_ARRAY_COLS];
	uint32_t  TISP_PARAM_DMSC_R_DEIR_ARRAY[TISP_PARAM_DMSC_R_DEIR_ARRAY_ROWS][TISP_PARAM_DMSC_R_DEIR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_G_DEIR_ARRAY[TISP_PARAM_DMSC_G_DEIR_ARRAY_ROWS][TISP_PARAM_DMSC_G_DEIR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_B_DEIR_ARRAY[TISP_PARAM_DMSC_B_DEIR_ARRAY_ROWS][TISP_PARAM_DMSC_B_DEIR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_SIGMA_3_NP_ARRAY[TISP_PARAM_DMSC_SP_D_SIGMA_3_NP_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_SIGMA_3_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_W_WEI_NP_ARRAY[TISP_PARAM_DMSC_SP_D_W_WEI_NP_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_W_WEI_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_B_WEI_NP_ARRAY[TISP_PARAM_DMSC_SP_D_B_WEI_NP_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_B_WEI_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_W_WEI_NP_ARRAY[TISP_PARAM_DMSC_SP_UD_W_WEI_NP_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_W_WEI_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_B_WEI_NP_ARRAY[TISP_PARAM_DMSC_SP_UD_B_WEI_NP_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_B_WEI_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_OUT_OPT[TISP_PARAM_DMSC_OUT_OPT_ROWS][TISP_PARAM_DMSC_OUT_OPT_COLS];
	uint32_t TISP_PARAM_DMSC_HV_THRES_1_ARRAY[TISP_PARAM_DMSC_HV_THRES_1_ARRAY_ROWS][TISP_PARAM_DMSC_HV_THRES_1_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_HV_STREN_ARRAY[TISP_PARAM_DMSC_HV_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_HV_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_AA_THRES_1_ARRAY[TISP_PARAM_DMSC_AA_THRES_1_ARRAY_ROWS][TISP_PARAM_DMSC_AA_THRES_1_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_AA_STREN_ARRAY[TISP_PARAM_DMSC_AA_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_AA_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_HVAA_THRES_1_ARRAY[TISP_PARAM_DMSC_HVAA_THRES_1_ARRAY_ROWS][TISP_PARAM_DMSC_HVAA_THRES_1_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_HVAA_STREN_ARRAY[TISP_PARAM_DMSC_HVAA_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_HVAA_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_DIR_PAR_ARRAY[TISP_PARAM_DMSC_DIR_PAR_ARRAY_ROWS][TISP_PARAM_DMSC_DIR_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_UU_THRES_ARRAY[TISP_PARAM_DMSC_UU_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_UU_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_UU_STREN_ARRAY[TISP_PARAM_DMSC_UU_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_UU_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_UU_PAR_ARRAY[TISP_PARAM_DMSC_UU_PAR_ARRAY_ROWS][TISP_PARAM_DMSC_UU_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_ALIAS_STREN_ARRAY[TISP_PARAM_DMSC_ALIAS_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_ALIAS_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_ALIAS_THRES_1_ARRAY[TISP_PARAM_DMSC_ALIAS_THRES_1_ARRAY_ROWS][TISP_PARAM_DMSC_ALIAS_THRES_1_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_ALIAS_THRES_2_ARRAY[TISP_PARAM_DMSC_ALIAS_THRES_2_ARRAY_ROWS][TISP_PARAM_DMSC_ALIAS_THRES_2_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_ALIAS_DIR_THRES_ARRAY[TISP_PARAM_DMSC_ALIAS_DIR_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_ALIAS_DIR_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_ALIAS_PAR_ARRAY[TISP_PARAM_DMSC_ALIAS_PAR_ARRAY_ROWS][TISP_PARAM_DMSC_ALIAS_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_NOR_ALIAS_THRES_ARRAY[TISP_PARAM_DMSC_NOR_ALIAS_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_NOR_ALIAS_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_NOR_PAR_ARRAY[TISP_PARAM_DMSC_NOR_PAR_ARRAY_ROWS][TISP_PARAM_DMSC_NOR_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_W_STREN_ARRAY[TISP_PARAM_DMSC_SP_D_W_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_W_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_B_STREN_ARRAY[TISP_PARAM_DMSC_SP_D_B_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_B_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_BRIG_THRES_ARRAY[TISP_PARAM_DMSC_SP_D_BRIG_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_BRIG_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_DARK_THRES_ARRAY[TISP_PARAM_DMSC_SP_D_DARK_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_DARK_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_V2_WIN5_THRES_ARRAY[TISP_PARAM_DMSC_SP_D_V2_WIN5_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_V2_WIN5_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_FLAT_STREN_ARRAY[TISP_PARAM_DMSC_SP_D_FLAT_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_FLAT_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_FLAT_THRES_ARRAY[TISP_PARAM_DMSC_SP_D_FLAT_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_FLAT_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_OE_STREN_ARRAY[TISP_PARAM_DMSC_SP_D_OE_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_OE_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_PAR_ARRAY[TISP_PARAM_DMSC_SP_D_PAR_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_W_STREN_ARRAY[TISP_PARAM_DMSC_SP_UD_W_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_W_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_B_STREN_ARRAY[TISP_PARAM_DMSC_SP_UD_B_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_B_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_BRIG_THRES_ARRAY[TISP_PARAM_DMSC_SP_UD_BRIG_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_BRIG_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_DARK_THRES_ARRAY[TISP_PARAM_DMSC_SP_UD_DARK_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_DARK_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_STD_STREN_ARRAY[TISP_PARAM_DMSC_SP_UD_STD_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_STD_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_STD_THRES_ARRAY[TISP_PARAM_DMSC_SP_UD_STD_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_STD_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_FLAT_THRES_ARRAY[TISP_PARAM_DMSC_SP_UD_FLAT_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_FLAT_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_FLAT_STREN_ARRAY[TISP_PARAM_DMSC_SP_UD_FLAT_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_FLAT_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_OE_STREN_ARRAY[TISP_PARAM_DMSC_SP_UD_OE_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_OE_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_PAR_ARRAY[TISP_PARAM_DMSC_SP_UD_PAR_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_V1_V2_PAR_ARRAY[TISP_PARAM_DMSC_SP_UD_V1_V2_PAR_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_V1_V2_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_ALIAS_THRES_ARRAY[TISP_PARAM_DMSC_SP_ALIAS_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_SP_ALIAS_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_ALIAS_PAR_ARRAY[TISP_PARAM_DMSC_SP_ALIAS_PAR_ARRAY_ROWS][TISP_PARAM_DMSC_SP_ALIAS_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_RGB_DIR_THRES_ARRAY[TISP_PARAM_DMSC_RGB_DIR_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_RGB_DIR_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_RGB_ALIAS_STREN_ARRAY[TISP_PARAM_DMSC_RGB_ALIAS_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_RGB_ALIAS_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_RGB_ALIAS_PAR_ARRAY[TISP_PARAM_DMSC_RGB_ALIAS_PAR_ARRAY_ROWS][TISP_PARAM_DMSC_RGB_ALIAS_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_FC_ALIAS_STREN_ARRAY[TISP_PARAM_DMSC_FC_ALIAS_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_FC_ALIAS_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_FC_T1_THRES_ARRAY[TISP_PARAM_DMSC_FC_T1_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_FC_T1_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_FC_T1_STREN_ARRAY[TISP_PARAM_DMSC_FC_T1_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_FC_T1_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_FC_T2_STREN_ARRAY[TISP_PARAM_DMSC_FC_T2_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_FC_T2_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_FC_T3_STREN_ARRAY[TISP_PARAM_DMSC_FC_T3_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_FC_T3_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_FC_LUM_STREN_ARRAY[TISP_PARAM_DMSC_FC_LUM_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_FC_LUM_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_FC_LUM_THRES_ARRAY[TISP_PARAM_DMSC_FC_LUM_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_FC_LUM_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_FC_PAR_ARRAY[TISP_PARAM_DMSC_FC_PAR_ARRAY_ROWS][TISP_PARAM_DMSC_FC_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_DEIR_OE_EN[TISP_PARAM_DMSC_DEIR_OE_EN_ROWS][TISP_PARAM_DMSC_DEIR_OE_EN_COLS];
	uint32_t TISP_PARAM_DMSC_DEIR_RGB_IR_OE_SLOPE[TISP_PARAM_DMSC_DEIR_RGB_IR_OE_SLOPE_ROWS][TISP_PARAM_DMSC_DEIR_RGB_IR_OE_SLOPE_COLS];
	uint32_t TISP_PARAM_DMSC_DEIR_FUSION_THRES_ARRAY[TISP_PARAM_DMSC_DEIR_FUSION_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_DEIR_FUSION_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_DEIR_FUSION_STREN_ARRAY[TISP_PARAM_DMSC_DEIR_FUSION_STREN_ARRAY_ROWS][TISP_PARAM_DMSC_DEIR_FUSION_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_NS_THRES_ARRAY[TISP_PARAM_DMSC_SP_D_NS_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_NS_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_NS_THRES_ARRAY[TISP_PARAM_DMSC_SP_UD_NS_THRES_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_NS_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_UD_NS_OPT[TISP_PARAM_DMSC_SP_D_UD_NS_OPT_ROWS][TISP_PARAM_DMSC_SP_D_UD_NS_OPT_COLS];
	uint32_t TISP_PARAM_DMSC_UU_THRES_WDR_ARRAY[TISP_PARAM_DMSC_UU_THRES_WDR_ARRAY_ROWS][TISP_PARAM_DMSC_UU_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_UU_STREN_WDR_ARRAY[TISP_PARAM_DMSC_UU_STREN_WDR_ARRAY_ROWS][TISP_PARAM_DMSC_UU_STREN_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_W_STREN_WDR_ARRAY[TISP_PARAM_DMSC_SP_D_W_STREN_WDR_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_W_STREN_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_D_B_STREN_WDR_ARRAY[TISP_PARAM_DMSC_SP_D_B_STREN_WDR_ARRAY_ROWS][TISP_PARAM_DMSC_SP_D_B_STREN_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_W_STREN_WDR_ARRAY[TISP_PARAM_DMSC_SP_UD_W_STREN_WDR_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_W_STREN_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_SP_UD_B_STREN_WDR_ARRAY[TISP_PARAM_DMSC_SP_UD_B_STREN_WDR_ARRAY_ROWS][TISP_PARAM_DMSC_SP_UD_B_STREN_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_DMSC_AWB_GAIN[TISP_PARAM_DMSC_AWB_GAIN_ROWS][TISP_PARAM_DMSC_AWB_GAIN_COLS];

	//CCM
	uint32_t TISP_PARAM_CCM_DP_CFG[TISP_PARAM_CCM_DP_CFG_ROWS][TISP_PARAM_CCM_DP_CFG_COLS];
	uint32_t TISP_PARAM_CCM_A_LINEAR[TISP_PARAM_CCM_A_LINEAR_ROWS][TISP_PARAM_CCM_A_LINEAR_COLS];
	uint32_t TISP_PARAM_CCM_T_LINEAR[TISP_PARAM_CCM_T_LINEAR_ROWS][TISP_PARAM_CCM_T_LINEAR_COLS];
	uint32_t TISP_PARAM_CCM_D_LINEAR[TISP_PARAM_CCM_D_LINEAR_ROWS][TISP_PARAM_CCM_D_LINEAR_COLS];
	uint32_t TISP_PARAM_CCM_EV_LIST[TISP_PARAM_CCM_EV_LIST_ROWS][TISP_PARAM_CCM_EV_LIST_COLS];
	uint32_t TISP_PARAM_CCM_SAT_LIST[TISP_PARAM_CCM_SAT_LIST_ROWS][TISP_PARAM_CCM_SAT_LIST_COLS];
	uint32_t TISP_PARAM_CCM_A_WDR[TISP_PARAM_CCM_A_WDR_ROWS][TISP_PARAM_CCM_A_WDR_COLS];
	uint32_t TISP_PARAM_CCM_T_WDR[TISP_PARAM_CCM_T_WDR_ROWS][TISP_PARAM_CCM_T_WDR_COLS];
	uint32_t TISP_PARAM_CCM_D_WDR[TISP_PARAM_CCM_D_WDR_ROWS][TISP_PARAM_CCM_D_WDR_COLS];
	uint32_t TISP_PARAM_CCM_EV_LIST_WDR[TISP_PARAM_CCM_EV_LIST_WDR_ROWS][TISP_PARAM_CCM_EV_LIST_WDR_COLS];
	uint32_t TISP_PARAM_CCM_SAT_LIST_WDR[TISP_PARAM_CCM_SAT_LIST_WDR_ROWS][TISP_PARAM_CCM_SAT_LIST_WDR_COLS];
 	uint32_t TISP_PARAM_CCM_AWB_LIST[TISP_PARAM_CCM_AWB_LIST_ROWS][TISP_PARAM_CCM_AWB_LIST_COLS];

	//SHARPEN
	uint32_t TISP_PARAM_Y_SP_OUT_OPT_ARRAY[TISP_PARAM_Y_SP_OUT_OPT_ARRAY_ROWS][TISP_PARAM_Y_SP_OUT_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_SL_EXP_THRES_ARRAY[TISP_PARAM_Y_SP_SL_EXP_THRES_ARRAY_ROWS][TISP_PARAM_Y_SP_SL_EXP_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_SL_EXP_NUM_ARRAY[TISP_PARAM_Y_SP_SL_EXP_NUM_ARRAY_ROWS][TISP_PARAM_Y_SP_SL_EXP_NUM_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_STD_CFG_ARRAY[TISP_PARAM_Y_SP_STD_CFG_ARRAY_ROWS][TISP_PARAM_Y_SP_STD_CFG_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_UU_MIN_STREN_ARRAY[TISP_PARAM_Y_SP_UU_MIN_STREN_ARRAY_ROWS][TISP_PARAM_Y_SP_UU_MIN_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_UU_MIN_THRES_ARRAY[TISP_PARAM_Y_SP_UU_MIN_THRES_ARRAY_ROWS][TISP_PARAM_Y_SP_UU_MIN_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_UU_THRES_ARRAY[TISP_PARAM_Y_SP_UU_THRES_ARRAY_ROWS][TISP_PARAM_Y_SP_UU_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_MV_UU_THRES_ARRAY[TISP_PARAM_Y_SP_MV_UU_THRES_ARRAY_ROWS][TISP_PARAM_Y_SP_MV_UU_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_MV_UU_STREN_ARRAY[TISP_PARAM_Y_SP_MV_UU_STREN_ARRAY_ROWS][TISP_PARAM_Y_SP_MV_UU_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_UU_STREN_ARRAY[TISP_PARAM_Y_SP_UU_STREN_ARRAY_ROWS][TISP_PARAM_Y_SP_UU_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_UU_PAR_CFG_ARRAY[TISP_PARAM_Y_SP_UU_PAR_CFG_ARRAY_ROWS][TISP_PARAM_Y_SP_UU_PAR_CFG_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_FL_STD_THRES_ARRAY[TISP_PARAM_Y_SP_FL_STD_THRES_ARRAY_ROWS][TISP_PARAM_Y_SP_FL_STD_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_MV_FL_STD_THRES_ARRAY[TISP_PARAM_Y_SP_MV_FL_STD_THRES_ARRAY_ROWS][TISP_PARAM_Y_SP_MV_FL_STD_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_FL_THRES_ARRAY[TISP_PARAM_Y_SP_FL_THRES_ARRAY_ROWS][TISP_PARAM_Y_SP_FL_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_FL_MIN_THRES_ARRAY[TISP_PARAM_Y_SP_FL_MIN_THRES_ARRAY_ROWS][TISP_PARAM_Y_SP_FL_MIN_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_MV_FL_THRES_ARRAY[TISP_PARAM_Y_SP_MV_FL_THRES_ARRAY_ROWS][TISP_PARAM_Y_SP_MV_FL_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_MV_FL_MIN_THRES_ARRAY[TISP_PARAM_Y_SP_MV_FL_MIN_THRES_ARRAY_ROWS][TISP_PARAM_Y_SP_MV_FL_MIN_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_FL_PAR_CFG_ARRAY[TISP_PARAM_Y_SP_FL_PAR_CFG_ARRAY_ROWS][TISP_PARAM_Y_SP_FL_PAR_CFG_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_V2_WIN5_THRES_ARRAY[TISP_PARAM_Y_SP_V2_WIN5_THRES_ARRAY_ROWS][TISP_PARAM_Y_SP_V2_WIN5_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_V1_V2_COEF_PAR_CFG_ARRAY[TISP_PARAM_Y_SP_V1_V2_COEF_PAR_CFG_ARRAY_ROWS][TISP_PARAM_Y_SP_V1_V2_COEF_PAR_CFG_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_W_B_LL_PAR_CFG_ARRAY[TISP_PARAM_Y_SP_W_B_LL_PAR_CFG_ARRAY_ROWS][TISP_PARAM_Y_SP_W_B_LL_PAR_CFG_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_UU_NP_ARRAY[TISP_PARAM_Y_SP_UU_NP_ARRAY_ROWS][TISP_PARAM_Y_SP_UU_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_W_WEI_NP_ARRAY[TISP_PARAM_Y_SP_W_WEI_NP_ARRAY_ROWS][TISP_PARAM_Y_SP_W_WEI_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_B_WEI_NP_ARRAY[TISP_PARAM_Y_SP_B_WEI_NP_ARRAY_ROWS][TISP_PARAM_Y_SP_B_WEI_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_W_SL_STREN_0_ARRAY[TISP_PARAM_Y_SP_W_SL_STREN_0_ARRAY_ROWS][TISP_PARAM_Y_SP_W_SL_STREN_0_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_W_SL_STREN_1_ARRAY[TISP_PARAM_Y_SP_W_SL_STREN_1_ARRAY_ROWS][TISP_PARAM_Y_SP_W_SL_STREN_1_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_W_SL_STREN_2_ARRAY[TISP_PARAM_Y_SP_W_SL_STREN_2_ARRAY_ROWS][TISP_PARAM_Y_SP_W_SL_STREN_2_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_W_SL_STREN_3_ARRAY[TISP_PARAM_Y_SP_W_SL_STREN_3_ARRAY_ROWS][TISP_PARAM_Y_SP_W_SL_STREN_3_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_B_SL_STREN_0_ARRAY[TISP_PARAM_Y_SP_B_SL_STREN_0_ARRAY_ROWS][TISP_PARAM_Y_SP_B_SL_STREN_0_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_B_SL_STREN_1_ARRAY[TISP_PARAM_Y_SP_B_SL_STREN_1_ARRAY_ROWS][TISP_PARAM_Y_SP_B_SL_STREN_1_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_B_SL_STREN_2_ARRAY[TISP_PARAM_Y_SP_B_SL_STREN_2_ARRAY_ROWS][TISP_PARAM_Y_SP_B_SL_STREN_2_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_B_SL_STREN_3_ARRAY[TISP_PARAM_Y_SP_B_SL_STREN_3_ARRAY_ROWS][TISP_PARAM_Y_SP_B_SL_STREN_3_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_UU_SL_0_ARRAY[TISP_PARAM_Y_SP_UU_SL_0_ARRAY_ROWS][TISP_PARAM_Y_SP_UU_SL_0_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_UU_SL_1_ARRAY[TISP_PARAM_Y_SP_UU_SL_1_ARRAY_ROWS][TISP_PARAM_Y_SP_UU_SL_1_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_UU_SL_2_ARRAY[TISP_PARAM_Y_SP_UU_SL_2_ARRAY_ROWS][TISP_PARAM_Y_SP_UU_SL_2_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_UU_SL_3_ARRAY[TISP_PARAM_Y_SP_UU_SL_3_ARRAY_ROWS][TISP_PARAM_Y_SP_UU_SL_3_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_FL_SL_0_ARRAY[TISP_PARAM_Y_SP_FL_SL_0_ARRAY_ROWS][TISP_PARAM_Y_SP_FL_SL_0_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_FL_SL_1_ARRAY[TISP_PARAM_Y_SP_FL_SL_1_ARRAY_ROWS][TISP_PARAM_Y_SP_FL_SL_1_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_FL_SL_2_ARRAY[TISP_PARAM_Y_SP_FL_SL_2_ARRAY_ROWS][TISP_PARAM_Y_SP_FL_SL_2_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_UU_THRES_WDR_ARRAY[TISP_PARAM_Y_SP_UU_THRES_WDR_ARRAY_ROWS][TISP_PARAM_Y_SP_UU_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_W_SL_STREN_0_WDR_ARRAY[TISP_PARAM_Y_SP_W_SL_STREN_0_WDR_ARRAY_ROWS][TISP_PARAM_Y_SP_W_SL_STREN_0_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_W_SL_STREN_1_WDR_ARRAY[TISP_PARAM_Y_SP_W_SL_STREN_1_WDR_ARRAY_ROWS][TISP_PARAM_Y_SP_W_SL_STREN_1_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_W_SL_STREN_2_WDR_ARRAY[TISP_PARAM_Y_SP_W_SL_STREN_2_WDR_ARRAY_ROWS][TISP_PARAM_Y_SP_W_SL_STREN_2_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_W_SL_STREN_3_WDR_ARRAY[TISP_PARAM_Y_SP_W_SL_STREN_3_WDR_ARRAY_ROWS][TISP_PARAM_Y_SP_W_SL_STREN_3_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_B_SL_STREN_0_WDR_ARRAY[TISP_PARAM_Y_SP_B_SL_STREN_0_WDR_ARRAY_ROWS][TISP_PARAM_Y_SP_B_SL_STREN_0_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_B_SL_STREN_1_WDR_ARRAY[TISP_PARAM_Y_SP_B_SL_STREN_1_WDR_ARRAY_ROWS][TISP_PARAM_Y_SP_B_SL_STREN_1_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_B_SL_STREN_2_WDR_ARRAY[TISP_PARAM_Y_SP_B_SL_STREN_2_WDR_ARRAY_ROWS][TISP_PARAM_Y_SP_B_SL_STREN_2_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_B_SL_STREN_3_WDR_ARRAY[TISP_PARAM_Y_SP_B_SL_STREN_3_WDR_ARRAY_ROWS][TISP_PARAM_Y_SP_B_SL_STREN_3_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_SP_FL_SL_3_ARRAY[TISP_PARAM_Y_SP_FL_SL_3_ARRAY_ROWS][TISP_PARAM_Y_SP_FL_SL_3_ARRAY_COLS];

	//DPC
	uint32_t TISP_PARAM_CTR_MD_NP_ARRAY[TISP_PARAM_CTR_MD_NP_ARRAY_ROWS][TISP_PARAM_CTR_MD_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_CTR_STD_NP_ARRAY[TISP_PARAM_CTR_STD_NP_ARRAY_ROWS][TISP_PARAM_CTR_STD_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_S_CON_PAR_ARRAY[TISP_PARAM_DPC_S_CON_PAR_ARRAY_ROWS][TISP_PARAM_DPC_S_CON_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M1_FTHRES_ARRAY[TISP_PARAM_DPC_D_M1_FTHRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M1_FTHRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M1_DTHRES_ARRAY[TISP_PARAM_DPC_D_M1_DTHRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M1_DTHRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M1_CON_PAR_ARRAY[TISP_PARAM_DPC_D_M1_CON_PAR_ARRAY_ROWS][TISP_PARAM_DPC_D_M1_CON_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_LEVEL_ARRAY[TISP_PARAM_DPC_D_M2_LEVEL_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_LEVEL_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_HTHRES_ARRAY[TISP_PARAM_DPC_D_M2_HTHRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_HTHRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_LTHRES_ARRAY[TISP_PARAM_DPC_D_M2_LTHRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_LTHRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_P0_D1_THRES_ARRAY[TISP_PARAM_DPC_D_M2_P0_D1_THRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_P0_D1_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_P1_D1_THRES_ARRAY[TISP_PARAM_DPC_D_M2_P1_D1_THRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_P1_D1_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_P2_D1_THRES_ARRAY[TISP_PARAM_DPC_D_M2_P2_D1_THRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_P2_D1_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_P3_D1_THRES_ARRAY[TISP_PARAM_DPC_D_M2_P3_D1_THRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_P3_D1_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_P0_D2_THRES_ARRAY[TISP_PARAM_DPC_D_M2_P0_D2_THRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_P0_D2_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_P1_D2_THRES_ARRAY[TISP_PARAM_DPC_D_M2_P1_D2_THRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_P1_D2_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_P2_D2_THRES_ARRAY[TISP_PARAM_DPC_D_M2_P2_D2_THRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_P2_D2_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_P3_D2_THRES_ARRAY[TISP_PARAM_DPC_D_M2_P3_D2_THRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_P3_D2_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M2_CON_PAR_ARRAY[TISP_PARAM_DPC_D_M2_CON_PAR_ARRAY_ROWS][TISP_PARAM_DPC_D_M2_CON_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M3_FTHRES_ARRAY[TISP_PARAM_DPC_D_M3_FTHRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M3_FTHRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M3_DTHRES_ARRAY[TISP_PARAM_DPC_D_M3_DTHRES_ARRAY_ROWS][TISP_PARAM_DPC_D_M3_DTHRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M3_CON_PAR_ARRAY[TISP_PARAM_DPC_D_M3_CON_PAR_ARRAY_ROWS][TISP_PARAM_DPC_D_M3_CON_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_COR_PAR_ARRAY[TISP_PARAM_DPC_D_COR_PAR_ARRAY_ROWS][TISP_PARAM_DPC_D_COR_PAR_ARRAY_COLS];
	uint32_t TISP_PARAM_CTR_STREN_ARRAY[TISP_PARAM_CTR_STREN_ARRAY_ROWS][TISP_PARAM_CTR_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_CTR_MD_THRES_ARRAY[TISP_PARAM_CTR_MD_THRES_ARRAY_ROWS][TISP_PARAM_CTR_MD_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_CTR_EL_THRES_ARRAY[TISP_PARAM_CTR_EL_THRES_ARRAY_ROWS][TISP_PARAM_CTR_EL_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_CTR_EH_THRES_ARRAY[TISP_PARAM_CTR_EH_THRES_ARRAY_ROWS][TISP_PARAM_CTR_EH_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M1_FTHRES_WDR_ARRAY[TISP_PARAM_DPC_D_M1_FTHRES_WDR_ARRAY_ROWS][TISP_PARAM_DPC_D_M1_FTHRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M1_DTHRES_WDR_ARRAY[TISP_PARAM_DPC_D_M1_DTHRES_WDR_ARRAY_ROWS][TISP_PARAM_DPC_D_M1_DTHRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M3_FTHRES_WDR_ARRAY[TISP_PARAM_DPC_D_M3_FTHRES_WDR_ARRAY_ROWS][TISP_PARAM_DPC_D_M3_FTHRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_DPC_D_M3_DTHRES_WDR_ARRAY[TISP_PARAM_DPC_D_M3_DTHRES_WDR_ARRAY_ROWS][TISP_PARAM_DPC_D_M3_DTHRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_CTR_CON_PAR_ARRAY[TISP_PARAM_CTR_CON_PAR_ARRAY_ROWS][TISP_PARAM_CTR_CON_PAR_ARRAY_COLS];

	//SDNS
	uint32_t TISP_PARAM_SDNS_AA_MV_DET_OPT[TISP_PARAM_SDNS_AA_MV_DET_OPT_ROWS][TISP_PARAM_SDNS_AA_MV_DET_OPT_COLS];
	uint32_t TISP_PARAM_SDNS_GRAD_ZX_THRES_ARRAY[TISP_PARAM_SDNS_GRAD_ZX_THRES_ARRAY_ROWS][TISP_PARAM_SDNS_GRAD_ZX_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_GRAD_ZY_THRES_ARRAY[TISP_PARAM_SDNS_GRAD_ZY_THRES_ARRAY_ROWS][TISP_PARAM_SDNS_GRAD_ZY_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_STD_THR1_ARRAY[TISP_PARAM_SDNS_STD_THR1_ARRAY_ROWS][TISP_PARAM_SDNS_STD_THR1_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_STD_THR2_ARRAY[TISP_PARAM_SDNS_STD_THR2_ARRAY_ROWS][TISP_PARAM_SDNS_STD_THR2_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_WEI[TISP_PARAM_SDNS_H_MV_WEI_ROWS][TISP_PARAM_SDNS_H_MV_WEI_COLS];
	uint32_t TISP_PARAM_SDNS_MV_NUM_THR_5X5_ARRAY[TISP_PARAM_SDNS_MV_NUM_THR_5X5_ARRAY_ROWS][TISP_PARAM_SDNS_MV_NUM_THR_5X5_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_MV_NUM_THR_7X7_ARRAY[TISP_PARAM_SDNS_MV_NUM_THR_7X7_ARRAY_ROWS][TISP_PARAM_SDNS_MV_NUM_THR_7X7_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_MV_NUM_THR_9X9_ARRAY[TISP_PARAM_SDNS_MV_NUM_THR_9X9_ARRAY_ROWS][TISP_PARAM_SDNS_MV_NUM_THR_9X9_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_MV_NUM_THR_11X11_ARRAY[TISP_PARAM_SDNS_MV_NUM_THR_11X11_ARRAY_ROWS][TISP_PARAM_SDNS_MV_NUM_THR_11X11_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_R_S[TISP_PARAM_SDNS_R_S_ROWS][TISP_PARAM_SDNS_R_S_COLS];
	uint32_t TISP_PARAM_SDNS_R_MV[TISP_PARAM_SDNS_R_MV_ROWS][TISP_PARAM_SDNS_R_MV_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_1_ARRAY[TISP_PARAM_SDNS_H_S_1_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_1_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_2_ARRAY[TISP_PARAM_SDNS_H_S_2_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_2_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_3_ARRAY[TISP_PARAM_SDNS_H_S_3_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_3_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_4_ARRAY[TISP_PARAM_SDNS_H_S_4_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_4_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_5_ARRAY[TISP_PARAM_SDNS_H_S_5_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_5_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_6_ARRAY[TISP_PARAM_SDNS_H_S_6_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_6_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_7_ARRAY[TISP_PARAM_SDNS_H_S_7_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_7_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_8_ARRAY[TISP_PARAM_SDNS_H_S_8_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_8_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_9_ARRAY[TISP_PARAM_SDNS_H_S_9_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_9_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_10_ARRAY[TISP_PARAM_SDNS_H_S_10_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_10_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_11_ARRAY[TISP_PARAM_SDNS_H_S_11_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_11_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_12_ARRAY[TISP_PARAM_SDNS_H_S_12_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_12_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_13_ARRAY[TISP_PARAM_SDNS_H_S_13_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_13_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_14_ARRAY[TISP_PARAM_SDNS_H_S_14_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_14_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_15_ARRAY[TISP_PARAM_SDNS_H_S_15_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_15_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_16_ARRAY[TISP_PARAM_SDNS_H_S_16_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_16_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_1_ARRAY[TISP_PARAM_SDNS_H_MV_1_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_1_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_2_ARRAY[TISP_PARAM_SDNS_H_MV_2_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_2_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_3_ARRAY[TISP_PARAM_SDNS_H_MV_3_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_3_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_4_ARRAY[TISP_PARAM_SDNS_H_MV_4_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_4_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_5_ARRAY[TISP_PARAM_SDNS_H_MV_5_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_5_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_6_ARRAY[TISP_PARAM_SDNS_H_MV_6_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_6_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_7_ARRAY[TISP_PARAM_SDNS_H_MV_7_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_7_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_8_ARRAY[TISP_PARAM_SDNS_H_MV_8_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_8_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_9_ARRAY[TISP_PARAM_SDNS_H_MV_9_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_9_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_10_ARRAY[TISP_PARAM_SDNS_H_MV_10_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_10_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_11_ARRAY[TISP_PARAM_SDNS_H_MV_11_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_11_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_12_ARRAY[TISP_PARAM_SDNS_H_MV_12_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_12_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_13_ARRAY[TISP_PARAM_SDNS_H_MV_13_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_13_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_14_ARRAY[TISP_PARAM_SDNS_H_MV_14_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_14_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_15_ARRAY[TISP_PARAM_SDNS_H_MV_15_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_15_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_16_ARRAY[TISP_PARAM_SDNS_H_MV_16_ARRAY_ROWS][TISP_PARAM_SDNS_H_MV_16_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_DARK_THRES_ARRAY[TISP_PARAM_SDNS_DARK_THRES_ARRAY_ROWS][TISP_PARAM_SDNS_DARK_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_LIGHT_THRES_ARRAY[TISP_PARAM_SDNS_LIGHT_THRES_ARRAY_ROWS][TISP_PARAM_SDNS_LIGHT_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_VAL_MAX[TISP_PARAM_SDNS_H_VAL_MAX_ROWS][TISP_PARAM_SDNS_H_VAL_MAX_COLS];
	uint32_t TISP_PARAM_SDNS_SHARPEN_TT_OPT[TISP_PARAM_SDNS_SHARPEN_TT_OPT_ROWS][TISP_PARAM_SDNS_SHARPEN_TT_OPT_COLS];
	uint32_t TISP_PARAM_SDNS_D_S1_THR[TISP_PARAM_SDNS_D_S1_THR_ROWS][TISP_PARAM_SDNS_D_S1_THR_COLS];
	uint32_t TISP_PARAM_SDNS_W_THR[TISP_PARAM_SDNS_W_THR_ROWS][TISP_PARAM_SDNS_W_THR_COLS];
	uint32_t TISP_PARAM_SDNS_AVE_FLITER[TISP_PARAM_SDNS_AVE_FLITER_ROWS][TISP_PARAM_SDNS_AVE_FLITER_COLS];
	uint32_t TISP_PARAM_SDNS_Y[TISP_PARAM_SDNS_Y_ROWS][TISP_PARAM_SDNS_Y_COLS];
	uint32_t TISP_PARAM_SDNS_X_1XG_1X4[TISP_PARAM_SDNS_X_1XG_1X4_ROWS][TISP_PARAM_SDNS_X_1XG_1X4_COLS];
	uint32_t TISP_PARAM_SDNS_K_1XG_1X4[TISP_PARAM_SDNS_K_1XG_1X4_ROWS][TISP_PARAM_SDNS_K_1XG_1X4_COLS];
	uint32_t TISP_PARAM_SDNS_H_VAL[TISP_PARAM_SDNS_H_VAL_ROWS][TISP_PARAM_SDNS_H_VAL_COLS];
	uint32_t TISP_PARAM_SDNS_SHARPEN_G_STD[TISP_PARAM_SDNS_SHARPEN_G_STD_ROWS][TISP_PARAM_SDNS_SHARPEN_G_STD_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UU_PAR[TISP_PARAM_SDNS_SP_UU_PAR_ROWS][TISP_PARAM_SDNS_SP_UU_PAR_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UU_THRES_ARRAY[TISP_PARAM_SDNS_SP_UU_THRES_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UU_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UU_STREN_ARRAY[TISP_PARAM_SDNS_SP_UU_STREN_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UU_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_MV_UU_THRES_ARRAY[TISP_PARAM_SDNS_SP_MV_UU_THRES_ARRAY_ROWS][TISP_PARAM_SDNS_SP_MV_UU_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_MV_UU_STREN_ARRAY[TISP_PARAM_SDNS_SP_MV_UU_STREN_ARRAY_ROWS][TISP_PARAM_SDNS_SP_MV_UU_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_MV_WEI_UU_VALUE[TISP_PARAM_SDNS_SP_MV_WEI_UU_VALUE_ROWS][TISP_PARAM_SDNS_SP_MV_WEI_UU_VALUE_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_V2_SIGMA_WIN5_SLOPE[TISP_PARAM_SDNS_SP_D_V2_SIGMA_WIN5_SLOPE_ROWS][TISP_PARAM_SDNS_SP_D_V2_SIGMA_WIN5_SLOPE_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_V2_WIN5_THRES_ARRAY[TISP_PARAM_SDNS_SP_D_V2_WIN5_THRES_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_V2_WIN5_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_WBHL_FLAT[TISP_PARAM_SDNS_SP_D_WBHL_FLAT_ROWS][TISP_PARAM_SDNS_SP_D_WBHL_FLAT_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_W_SP_STREN_0_ARRAY[TISP_PARAM_SDNS_SP_D_W_SP_STREN_0_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_W_SP_STREN_0_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_W_SP_STREN_1_ARRAY[TISP_PARAM_SDNS_SP_D_W_SP_STREN_1_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_W_SP_STREN_1_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_W_SP_STREN_2_ARRAY[TISP_PARAM_SDNS_SP_D_W_SP_STREN_2_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_W_SP_STREN_2_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_W_SP_STREN_3_ARRAY[TISP_PARAM_SDNS_SP_D_W_SP_STREN_3_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_W_SP_STREN_3_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_B_SP_STREN_0_ARRAY[TISP_PARAM_SDNS_SP_D_B_SP_STREN_0_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_B_SP_STREN_0_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_B_SP_STREN_1_ARRAY[TISP_PARAM_SDNS_SP_D_B_SP_STREN_1_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_B_SP_STREN_1_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_B_SP_STREN_2_ARRAY[TISP_PARAM_SDNS_SP_D_B_SP_STREN_2_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_B_SP_STREN_2_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_B_SP_STREN_3_ARRAY[TISP_PARAM_SDNS_SP_D_B_SP_STREN_3_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_B_SP_STREN_3_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_FLAT_THRES_ARRAY[TISP_PARAM_SDNS_SP_D_FLAT_THRES_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_FLAT_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_FLAT_STREN_ARRAY[TISP_PARAM_SDNS_SP_D_FLAT_STREN_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_FLAT_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_V2_1_COEF[TISP_PARAM_SDNS_SP_UD_V2_1_COEF_ROWS][TISP_PARAM_SDNS_SP_UD_V2_1_COEF_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_W_SP_STREN_0_ARRAY[TISP_PARAM_SDNS_SP_UD_W_SP_STREN_0_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_W_SP_STREN_0_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_W_SP_STREN_1_ARRAY[TISP_PARAM_SDNS_SP_UD_W_SP_STREN_1_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_W_SP_STREN_1_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_W_SP_STREN_2_ARRAY[TISP_PARAM_SDNS_SP_UD_W_SP_STREN_2_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_W_SP_STREN_2_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_W_SP_STREN_3_ARRAY[TISP_PARAM_SDNS_SP_UD_W_SP_STREN_3_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_W_SP_STREN_3_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_B_SP_STREN_0_ARRAY[TISP_PARAM_SDNS_SP_UD_B_SP_STREN_0_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_B_SP_STREN_0_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_B_SP_STREN_1_ARRAY[TISP_PARAM_SDNS_SP_UD_B_SP_STREN_1_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_B_SP_STREN_1_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_B_SP_STREN_2_ARRAY[TISP_PARAM_SDNS_SP_UD_B_SP_STREN_2_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_B_SP_STREN_2_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_B_SP_STREN_3_ARRAY[TISP_PARAM_SDNS_SP_UD_B_SP_STREN_3_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_B_SP_STREN_3_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_STD_THRES_ARRAY[TISP_PARAM_SDNS_SP_UD_STD_THRES_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_STD_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_STD_STREN_ARRAY[TISP_PARAM_SDNS_SP_UD_STD_STREN_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_STD_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_FLAT_THRES_ARRAY[TISP_PARAM_SDNS_SP_UD_FLAT_THRES_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_FLAT_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_FLAT_STREN_ARRAY[TISP_PARAM_SDNS_SP_UD_FLAT_STREN_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_FLAT_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_WBHL_FLAT[TISP_PARAM_SDNS_SP_UD_WBHL_FLAT_ROWS][TISP_PARAM_SDNS_SP_UD_WBHL_FLAT_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UU_NP_ARRAY[TISP_PARAM_SDNS_SP_UU_NP_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UU_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_W_WEI_NP_ARRAY[TISP_PARAM_SDNS_SP_D_W_WEI_NP_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_W_WEI_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_D_B_WEI_NP_ARRAY[TISP_PARAM_SDNS_SP_D_B_WEI_NP_ARRAY_ROWS][TISP_PARAM_SDNS_SP_D_B_WEI_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_W_WEI_NP_ARRAY[TISP_PARAM_SDNS_SP_UD_W_WEI_NP_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_W_WEI_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_AVE_THRES_ARRAY[TISP_PARAM_SDNS_AVE_THRES_ARRAY_ROWS][TISP_PARAM_SDNS_AVE_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_GRAD_ZX_THRES_WDR_ARRAY[TISP_PARAM_SDNS_GRAD_ZX_THRES_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_GRAD_ZX_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_GRAD_ZY_THRES_WDR_ARRAY[TISP_PARAM_SDNS_GRAD_ZY_THRES_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_GRAD_ZY_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_STD_THR1_WDR_ARRAY[TISP_PARAM_SDNS_STD_THR1_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_STD_THR1_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_STD_THR2_WDR_ARRAY[TISP_PARAM_SDNS_STD_THR2_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_STD_THR2_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_MV_WEI_WDR[TISP_PARAM_SDNS_H_MV_WEI_WDR_ROWS][TISP_PARAM_SDNS_H_MV_WEI_WDR_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_1_WDR_ARRAY[TISP_PARAM_SDNS_H_S_1_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_1_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_2_WDR_ARRAY[TISP_PARAM_SDNS_H_S_2_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_2_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_3_WDR_ARRAY[TISP_PARAM_SDNS_H_S_3_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_3_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_4_WDR_ARRAY[TISP_PARAM_SDNS_H_S_4_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_4_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_5_WDR_ARRAY[TISP_PARAM_SDNS_H_S_5_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_5_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_6_WDR_ARRAY[TISP_PARAM_SDNS_H_S_6_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_6_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_7_WDR_ARRAY[TISP_PARAM_SDNS_H_S_7_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_7_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_8_WDR_ARRAY[TISP_PARAM_SDNS_H_S_8_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_8_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_9_WDR_ARRAY[TISP_PARAM_SDNS_H_S_9_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_9_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_10_WDR_ARRAY[TISP_PARAM_SDNS_H_S_10_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_10_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_11_WDR_ARRAY[TISP_PARAM_SDNS_H_S_11_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_11_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_12_WDR_ARRAY[TISP_PARAM_SDNS_H_S_12_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_12_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_13_WDR_ARRAY[TISP_PARAM_SDNS_H_S_13_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_13_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_14_WDR_ARRAY[TISP_PARAM_SDNS_H_S_14_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_14_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_15_WDR_ARRAY[TISP_PARAM_SDNS_H_S_15_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_15_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_H_S_16_WDR_ARRAY[TISP_PARAM_SDNS_H_S_16_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_H_S_16_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SHARPEN_TT_OPT_WDR_ARRAY[TISP_PARAM_SDNS_SHARPEN_TT_OPT_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_SHARPEN_TT_OPT_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_AVE_FLITER_WDR[TISP_PARAM_SDNS_AVE_FLITER_WDR_ROWS][TISP_PARAM_SDNS_AVE_FLITER_WDR_COLS];
	uint32_t TISP_PARAM_SDNS_AVE_THRES_WDR_ARRAY[TISP_PARAM_SDNS_AVE_THRES_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_AVE_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UU_THRES_WDR_ARRAY[TISP_PARAM_SDNS_SP_UU_THRES_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UU_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UU_STREN_WDR_ARRAY[TISP_PARAM_SDNS_SP_UU_STREN_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UU_STREN_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_MV_UU_THRES_WDR_ARRAY[TISP_PARAM_SDNS_SP_MV_UU_THRES_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_SP_MV_UU_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_MV_UU_STREN_WDR_ARRAY[TISP_PARAM_SDNS_SP_MV_UU_STREN_WDR_ARRAY_ROWS][TISP_PARAM_SDNS_SP_MV_UU_STREN_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_SDNS_SP_UD_B_WEI_NP_ARRAY[TISP_PARAM_SDNS_SP_UD_B_WEI_NP_ARRAY_ROWS][TISP_PARAM_SDNS_SP_UD_B_WEI_NP_ARRAY_COLS];

	//MDNS
	uint32_t TISP_PARAM_MDNS_Y_FILTER_EN_ARRAY[TISP_PARAM_MDNS_Y_FILTER_EN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FILTER_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SF_CUR_EN_ARRAY[TISP_PARAM_MDNS_Y_SF_CUR_EN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SF_CUR_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SF_REF_EN_ARRAY[TISP_PARAM_MDNS_Y_SF_REF_EN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SF_REF_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DEBUG_ARRAY[TISP_PARAM_MDNS_Y_DEBUG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DEBUG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_UV_FILTER_EN_ARRAY[TISP_PARAM_MDNS_UV_FILTER_EN_ARRAY_ROWS][TISP_PARAM_MDNS_UV_FILTER_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_UV_SF_CUR_EN_ARRAY[TISP_PARAM_MDNS_UV_SF_CUR_EN_ARRAY_ROWS][TISP_PARAM_MDNS_UV_SF_CUR_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_UV_SF_REF_EN_ARRAY[TISP_PARAM_MDNS_UV_SF_REF_EN_ARRAY_ROWS][TISP_PARAM_MDNS_UV_SF_REF_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_UV_DEBUG_ARRAY[TISP_PARAM_MDNS_UV_DEBUG_ARRAY_ROWS][TISP_PARAM_MDNS_UV_DEBUG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_ASS_ENABLE_ARRAY[TISP_PARAM_MDNS_ASS_ENABLE_ARRAY_ROWS][TISP_PARAM_MDNS_ASS_ENABLE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_STA_INTER_EN_ARRAY[TISP_PARAM_MDNS_STA_INTER_EN_ARRAY_ROWS][TISP_PARAM_MDNS_STA_INTER_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_STA_GROUP_NUM_ARRAY[TISP_PARAM_MDNS_STA_GROUP_NUM_ARRAY_ROWS][TISP_PARAM_MDNS_STA_GROUP_NUM_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_STA_MAX_NUM_ARRAY[TISP_PARAM_MDNS_STA_MAX_NUM_ARRAY_ROWS][TISP_PARAM_MDNS_STA_MAX_NUM_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_BGM_ENABLE_ARRAY[TISP_PARAM_MDNS_BGM_ENABLE_ARRAY_ROWS][TISP_PARAM_MDNS_BGM_ENABLE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_BGM_INTER_EN_ARRAY[TISP_PARAM_MDNS_BGM_INTER_EN_ARRAY_ROWS][TISP_PARAM_MDNS_BGM_INTER_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_PSN_ENABLE_ARRAY[TISP_PARAM_MDNS_PSN_ENABLE_ARRAY_ROWS][TISP_PARAM_MDNS_PSN_ENABLE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_PSN_MAX_NUM_ARRAY[TISP_PARAM_MDNS_PSN_MAX_NUM_ARRAY_ROWS][TISP_PARAM_MDNS_PSN_MAX_NUM_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_REF_WEI_BYPS_ARRAY[TISP_PARAM_MDNS_REF_WEI_BYPS_ARRAY_ROWS][TISP_PARAM_MDNS_REF_WEI_BYPS_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_WIN_OPT_ARRAY[TISP_PARAM_MDNS_Y_SAD_WIN_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_WIN_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_AVE_THRES_ARRAY[TISP_PARAM_MDNS_Y_SAD_AVE_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_AVE_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_AVE_SLOPE_ARRAY[TISP_PARAM_MDNS_Y_SAD_AVE_SLOPE_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_AVE_SLOPE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_DTB_THRES_ARRAY[TISP_PARAM_MDNS_Y_SAD_DTB_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_DTB_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_ASS_THRES_ARRAY[TISP_PARAM_MDNS_Y_SAD_ASS_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_ASS_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_STA_BLK_SIZE_ARRAY[TISP_PARAM_MDNS_Y_STA_BLK_SIZE_ARRAY_ROWS][TISP_PARAM_MDNS_Y_STA_BLK_SIZE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_STA_WIN_OPT_ARRAY[TISP_PARAM_MDNS_Y_STA_WIN_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_STA_WIN_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_STA_AVE_THRES_ARRAY[TISP_PARAM_MDNS_Y_STA_AVE_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_STA_AVE_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_STA_DTB_THRES_ARRAY[TISP_PARAM_MDNS_Y_STA_DTB_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_STA_DTB_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_STA_ASS_THRES_ARRAY[TISP_PARAM_MDNS_Y_STA_ASS_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_STA_ASS_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_STA_MOTION_THRES_ARRAY[TISP_PARAM_MDNS_Y_STA_MOTION_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_STA_MOTION_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_STA_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_STA_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_STA_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_PSN_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_PSN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_PSN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_MV_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_MV_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_MV_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_FAKE_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_FAKE_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_FAKE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_STA_FS_OPT_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_STA_FS_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_STA_FS_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_PSN_FS_OPT_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_PSN_FS_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_PSN_FS_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_F_MAX_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_F_MAX_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_F_MAX_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_F_MIN_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_F_MIN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_F_MIN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_R_MAX_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_R_MAX_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_R_MAX_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_R_MIN_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_R_MIN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_R_MIN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_INCREASE_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_INCREASE_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_INCREASE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_CORNER_LENGTH_T_ARRAY[TISP_PARAM_MDNS_Y_CORNER_LENGTH_T_ARRAY_ROWS][TISP_PARAM_MDNS_Y_CORNER_LENGTH_T_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_CORNER_LENGTH_B_ARRAY[TISP_PARAM_MDNS_Y_CORNER_LENGTH_B_ARRAY_ROWS][TISP_PARAM_MDNS_Y_CORNER_LENGTH_B_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_CORNER_LENGTH_L_ARRAY[TISP_PARAM_MDNS_Y_CORNER_LENGTH_L_ARRAY_ROWS][TISP_PARAM_MDNS_Y_CORNER_LENGTH_L_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_CORNER_LENGTH_R_ARRAY[TISP_PARAM_MDNS_Y_CORNER_LENGTH_R_ARRAY_ROWS][TISP_PARAM_MDNS_Y_CORNER_LENGTH_R_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_WIN_OPT_ARRAY[TISP_PARAM_MDNS_Y_EDGE_WIN_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_WIN_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_DIV_OPT_ARRAY[TISP_PARAM_MDNS_Y_EDGE_DIV_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_DIV_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_TYPE_OPT_ARRAY[TISP_PARAM_MDNS_Y_EDGE_TYPE_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_TYPE_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_WIN_OPT_ARRAY[TISP_PARAM_MDNS_Y_LUMA_WIN_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_WIN_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_DIV_OPT_ARRAY[TISP_PARAM_MDNS_Y_DTB_DIV_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_DIV_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_SQU_EN_ARRAY[TISP_PARAM_MDNS_Y_DTB_SQU_EN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_SQU_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_SQU_DIV_OPT_ARRAY[TISP_PARAM_MDNS_Y_DTB_SQU_DIV_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_SQU_DIV_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_WIN_OPT_ARRAY[TISP_PARAM_MDNS_Y_ASS_WIN_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_WIN_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_DIV_OPT_ARRAY[TISP_PARAM_MDNS_Y_ASS_DIV_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_DIV_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_HIST_SAD_EN_ARRAY[TISP_PARAM_MDNS_Y_HIST_SAD_EN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_HIST_SAD_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_HIST_STA_EN_ARRAY[TISP_PARAM_MDNS_Y_HIST_STA_EN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_HIST_STA_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_HIST_NUM_THRES_ARRAY[TISP_PARAM_MDNS_Y_HIST_NUM_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_HIST_NUM_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_HIST_CMP_THRES0_ARRAY[TISP_PARAM_MDNS_Y_HIST_CMP_THRES0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_HIST_CMP_THRES0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_HIST_CMP_THRES1_ARRAY[TISP_PARAM_MDNS_Y_HIST_CMP_THRES1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_HIST_CMP_THRES1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_HIST_CMP_THRES2_ARRAY[TISP_PARAM_MDNS_Y_HIST_CMP_THRES2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_HIST_CMP_THRES2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_HIST_CMP_THRES3_ARRAY[TISP_PARAM_MDNS_Y_HIST_CMP_THRES3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_HIST_CMP_THRES3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_HIST_THRES0_ARRAY[TISP_PARAM_MDNS_Y_HIST_THRES0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_HIST_THRES0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_HIST_THRES1_ARRAY[TISP_PARAM_MDNS_Y_HIST_THRES1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_HIST_THRES1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_HIST_THRES2_ARRAY[TISP_PARAM_MDNS_Y_HIST_THRES2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_HIST_THRES2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_HIST_THRES3_ARRAY[TISP_PARAM_MDNS_Y_HIST_THRES3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_HIST_THRES3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_THR_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_Y_DTB_THR_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_THR_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_THR_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_Y_ASS_THR_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_THR_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_CORNER_THR_ADJ_VALUE_ARRAY[TISP_PARAM_MDNS_Y_CORNER_THR_ADJ_VALUE_ARRAY_ROWS][TISP_PARAM_MDNS_Y_CORNER_THR_ADJ_VALUE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_THR_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_THR_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_THR_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_THR_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_CORNER_WEI_ADJ_VALUE_ARRAY[TISP_PARAM_MDNS_Y_CORNER_WEI_ADJ_VALUE_ARRAY_ROWS][TISP_PARAM_MDNS_Y_CORNER_WEI_ADJ_VALUE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_Y_EDGE_WEI_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_Y_LUMA_WEI_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_Y_DTB_WEI_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_Y_ASS_WEI_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_WEI_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_AVE_THRES_WDR_ARRAY[TISP_PARAM_MDNS_Y_SAD_AVE_THRES_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_AVE_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_SAD_ASS_THRES_WDR_ARRAY[TISP_PARAM_MDNS_Y_SAD_ASS_THRES_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_SAD_ASS_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_STA_AVE_THRES_WDR_ARRAY[TISP_PARAM_MDNS_Y_STA_AVE_THRES_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_STA_AVE_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_STA_ASS_THRES_WDR_ARRAY[TISP_PARAM_MDNS_Y_STA_ASS_THRES_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_STA_ASS_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_STA_MOTION_THRES_WDR_ARRAY[TISP_PARAM_MDNS_Y_STA_MOTION_THRES_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_STA_MOTION_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_WDR_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_B_MAX_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_WDR_ARRAY[TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_REF_WEI_B_MIN_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI_SEG_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI1_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI2_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI3_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI4_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_OP_EN_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_OP_EN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_OP_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_WEI_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_LMT_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI_SEG_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI1_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI2_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI3_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI4_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_LMT_OP_EN_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_LMT_OP_EN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_LMT_OP_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_LMT_WEI_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_LMT_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_LMT_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES0_ARRAY[TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES1_ARRAY[TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES2_ARRAY[TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PIIR_EDGE_THRES2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI0_ARRAY[TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI1_ARRAY[TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI2_ARRAY[TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI3_ARRAY[TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PIIR_EDGE_WEI3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_ARRAY[TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_ARRAY[TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_THRES_ARRAY[TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_SWEI_ARRAY[TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_SWEI_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_SWEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_DWEI_ARRAY[TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_DWEI_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_FNL_FUS_DWEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_SEG_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_0_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_16_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_16_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_16_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_32_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_32_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_32_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_48_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_48_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_48_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_64_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_64_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_64_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_80_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_80_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_80_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_96_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_96_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_96_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_112_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_112_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_112_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_128_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_128_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_128_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_SEG_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_0_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_16_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_16_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_16_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_32_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_32_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_32_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_48_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_48_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_48_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_64_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_64_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_64_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_80_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_80_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_80_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_96_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_96_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_96_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_112_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_112_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_112_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_128_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_128_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_128_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES0_ARRAY[TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES1_ARRAY[TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES2_ARRAY[TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_EDGE_THRES2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI0_ARRAY[TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI1_ARRAY[TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI2_ARRAY[TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI3_ARRAY[TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_EDGE_WEI3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_SEG_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_CON_THRES_ARRAY[TISP_PARAM_MDNS_Y_CON_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_Y_CON_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_CON_STREN_ARRAY[TISP_PARAM_MDNS_Y_CON_STREN_ARRAY_ROWS][TISP_PARAM_MDNS_Y_CON_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_WDR[TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_WDR_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_MEDIAN_WIN_OPT_WDR_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_WDR_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_BI_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_WDR_ARRAY[TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_CUR_BI_WEI0_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_WDR[TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_WDR_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_MEDIAN_WIN_OPT_WDR_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_WDR_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_BI_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_WDR_ARRAY[TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PSPA_REF_BI_WEI0_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_WDR_ARRAY[TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PIIR_CUR_FS_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_WDR_ARRAY[TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_PIIR_REF_FS_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_144_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_160_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_176_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_192_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_208_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_224_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_CUR_FUS_WEI_240_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_144_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_160_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_176_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_192_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_208_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_224_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_WDR_ARRAY[TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FSPA_REF_FUS_WEI_240_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_WDR_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI0_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_WDR_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI1_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_WDR_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI2_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_WDR_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI3_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_WDR_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI4_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_WDR_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI5_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_WDR_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI6_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_WDR_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI7_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_WDR_ARRAY[TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_Y_FIIR_FUS_WEI8_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_WIN_OPT_ARRAY[TISP_PARAM_MDNS_C_SAD_WIN_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_WIN_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_AVE_THRES_ARRAY[TISP_PARAM_MDNS_C_SAD_AVE_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_AVE_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_AVE_SLOPE_ARRAY[TISP_PARAM_MDNS_C_SAD_AVE_SLOPE_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_AVE_SLOPE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_DTB_THRES_ARRAY[TISP_PARAM_MDNS_C_SAD_DTB_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_DTB_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_ASS_THRES_ARRAY[TISP_PARAM_MDNS_C_SAD_ASS_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_ASS_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_REF_WEI_MV_ARRAY[TISP_PARAM_MDNS_C_REF_WEI_MV_ARRAY_ROWS][TISP_PARAM_MDNS_C_REF_WEI_MV_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_REF_WEI_FAKE_ARRAY[TISP_PARAM_MDNS_C_REF_WEI_FAKE_ARRAY_ROWS][TISP_PARAM_MDNS_C_REF_WEI_FAKE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_REF_WEI_F_MAX_ARRAY[TISP_PARAM_MDNS_C_REF_WEI_F_MAX_ARRAY_ROWS][TISP_PARAM_MDNS_C_REF_WEI_F_MAX_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_REF_WEI_F_MIN_ARRAY[TISP_PARAM_MDNS_C_REF_WEI_F_MIN_ARRAY_ROWS][TISP_PARAM_MDNS_C_REF_WEI_F_MIN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_REF_WEI_B_MAX_ARRAY[TISP_PARAM_MDNS_C_REF_WEI_B_MAX_ARRAY_ROWS][TISP_PARAM_MDNS_C_REF_WEI_B_MAX_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_REF_WEI_B_MIN_ARRAY[TISP_PARAM_MDNS_C_REF_WEI_B_MIN_ARRAY_ROWS][TISP_PARAM_MDNS_C_REF_WEI_B_MIN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_REF_WEI_R_MAX_ARRAY[TISP_PARAM_MDNS_C_REF_WEI_R_MAX_ARRAY_ROWS][TISP_PARAM_MDNS_C_REF_WEI_R_MAX_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_REF_WEI_R_MIN_ARRAY[TISP_PARAM_MDNS_C_REF_WEI_R_MIN_ARRAY_ROWS][TISP_PARAM_MDNS_C_REF_WEI_R_MIN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_REF_WEI_INCREASE_ARRAY[TISP_PARAM_MDNS_C_REF_WEI_INCREASE_ARRAY_ROWS][TISP_PARAM_MDNS_C_REF_WEI_INCREASE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_THR_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_C_EDGE_THR_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_THR_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_THR_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_C_LUMA_THR_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_THR_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_THR_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_C_DTB_THR_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_THR_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_THR_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_C_DTB_THR_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_THR_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_CORNER_THR_ADJ_VALUE_ARRAY[TISP_PARAM_MDNS_C_CORNER_THR_ADJ_VALUE_ARRAY_ROWS][TISP_PARAM_MDNS_C_CORNER_THR_ADJ_VALUE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_THR_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_THR_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_THR_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_THR_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_WEI_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_C_DTB_WEI_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_WEI_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_WEI_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_C_ASS_WEI_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_WEI_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_WEI_ADJ_SEG_ARRAY[TISP_PARAM_MDNS_C_SAD_WEI_ADJ_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_WEI_ADJ_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_CORNER_WEI_ADJ_VALUE_ARRAY[TISP_PARAM_MDNS_C_CORNER_WEI_ADJ_VALUE_ARRAY_ROWS][TISP_PARAM_MDNS_C_CORNER_WEI_ADJ_VALUE_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_C_EDGE_WEI_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_C_LUMA_WEI_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_C_DTB_WEI_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_C_ASS_WEI_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE0_ARRAY[TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE0_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE1_ARRAY[TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE1_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE2_ARRAY[TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE2_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE3_ARRAY[TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE3_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE4_ARRAY[TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE4_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE5_ARRAY[TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE5_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_WEI_ADJ_VALUE5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_AVE_THRES_WDR_ARRAY[TISP_PARAM_MDNS_C_SAD_AVE_THRES_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_AVE_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAD_ASS_THRES_WDR_ARRAY[TISP_PARAM_MDNS_C_SAD_ASS_THRES_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAD_ASS_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_REF_WEI_B_MAX_WDR_ARRAY[TISP_PARAM_MDNS_C_REF_WEI_B_MAX_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_REF_WEI_B_MAX_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_REF_WEI_B_MIN_WDR_ARRAY[TISP_PARAM_MDNS_C_REF_WEI_B_MIN_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_REF_WEI_B_MIN_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_SMJ_THRES_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_SMJ_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_SMJ_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_EDG_THRES_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_EDG_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_EDG_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_OP_EN_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_OP_EN_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_OP_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_WEI_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_CUR_LMT_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_OP_EN_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_OP_EN_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_OP_EN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_WEI_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_REF_LMT_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_BGM_WIN_OPT_ARRAY[TISP_PARAM_MDNS_C_BGM_WIN_OPT_ARRAY_ROWS][TISP_PARAM_MDNS_C_BGM_WIN_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_BGM_CUR_SRC_ARRAY[TISP_PARAM_MDNS_C_BGM_CUR_SRC_ARRAY_ROWS][TISP_PARAM_MDNS_C_BGM_CUR_SRC_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_BGM_REF_SRC_ARRAY[TISP_PARAM_MDNS_C_BGM_REF_SRC_ARRAY_ROWS][TISP_PARAM_MDNS_C_BGM_REF_SRC_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_BGM_FALSE_THRES_ARRAY[TISP_PARAM_MDNS_C_BGM_FALSE_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_C_BGM_FALSE_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_BGM_FALSE_STEP_ARRAY[TISP_PARAM_MDNS_C_BGM_FALSE_STEP_ARRAY_ROWS][TISP_PARAM_MDNS_C_BGM_FALSE_STEP_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_PIIR_EDGE_THRES0_ARRAY[TISP_PARAM_MDNS_C_PIIR_EDGE_THRES0_ARRAY_ROWS][TISP_PARAM_MDNS_C_PIIR_EDGE_THRES0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_PIIR_EDGE_THRES1_ARRAY[TISP_PARAM_MDNS_C_PIIR_EDGE_THRES1_ARRAY_ROWS][TISP_PARAM_MDNS_C_PIIR_EDGE_THRES1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_PIIR_EDGE_THRES2_ARRAY[TISP_PARAM_MDNS_C_PIIR_EDGE_THRES2_ARRAY_ROWS][TISP_PARAM_MDNS_C_PIIR_EDGE_THRES2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_PIIR_EDGE_WEI0_ARRAY[TISP_PARAM_MDNS_C_PIIR_EDGE_WEI0_ARRAY_ROWS][TISP_PARAM_MDNS_C_PIIR_EDGE_WEI0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_PIIR_EDGE_WEI1_ARRAY[TISP_PARAM_MDNS_C_PIIR_EDGE_WEI1_ARRAY_ROWS][TISP_PARAM_MDNS_C_PIIR_EDGE_WEI1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_PIIR_EDGE_WEI2_ARRAY[TISP_PARAM_MDNS_C_PIIR_EDGE_WEI2_ARRAY_ROWS][TISP_PARAM_MDNS_C_PIIR_EDGE_WEI2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_PIIR_EDGE_WEI3_ARRAY[TISP_PARAM_MDNS_C_PIIR_EDGE_WEI3_ARRAY_ROWS][TISP_PARAM_MDNS_C_PIIR_EDGE_WEI3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_ARRAY[TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_ARRAY[TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_ARRAY_ROWS][TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_SEG_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_0_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_0_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_16_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_16_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_16_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_32_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_32_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_32_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_48_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_48_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_48_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_64_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_64_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_64_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_80_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_80_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_80_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_96_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_96_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_96_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_112_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_112_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_112_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_128_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_128_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_128_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_SEG_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_0_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_0_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_16_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_16_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_16_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_32_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_32_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_32_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_48_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_48_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_48_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_64_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_64_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_64_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_80_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_80_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_80_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_96_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_96_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_96_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_112_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_112_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_112_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_128_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_128_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_128_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_EDGE_THRES0_ARRAY[TISP_PARAM_MDNS_C_FIIR_EDGE_THRES0_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_EDGE_THRES0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_EDGE_THRES1_ARRAY[TISP_PARAM_MDNS_C_FIIR_EDGE_THRES1_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_EDGE_THRES1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_EDGE_THRES2_ARRAY[TISP_PARAM_MDNS_C_FIIR_EDGE_THRES2_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_EDGE_THRES2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_EDGE_WEI0_ARRAY[TISP_PARAM_MDNS_C_FIIR_EDGE_WEI0_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_EDGE_WEI0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_EDGE_WEI1_ARRAY[TISP_PARAM_MDNS_C_FIIR_EDGE_WEI1_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_EDGE_WEI1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_EDGE_WEI2_ARRAY[TISP_PARAM_MDNS_C_FIIR_EDGE_WEI2_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_EDGE_WEI2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_EDGE_WEI3_ARRAY[TISP_PARAM_MDNS_C_FIIR_EDGE_WEI3_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_EDGE_WEI3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_SEG_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_SEG_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_SEG_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_SMJ_THRES_ARRAY[TISP_PARAM_MDNS_C_FALSE_SMJ_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_SMJ_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_EDG_THRES0_ARRAY[TISP_PARAM_MDNS_C_FALSE_EDG_THRES0_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_EDG_THRES0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_EDG_THRES1_ARRAY[TISP_PARAM_MDNS_C_FALSE_EDG_THRES1_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_EDG_THRES1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_EDG_THRES2_ARRAY[TISP_PARAM_MDNS_C_FALSE_EDG_THRES2_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_EDG_THRES2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_THRES_S0_ARRAY[TISP_PARAM_MDNS_C_FALSE_THRES_S0_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_THRES_S0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_THRES_S1_ARRAY[TISP_PARAM_MDNS_C_FALSE_THRES_S1_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_THRES_S1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_THRES_S2_ARRAY[TISP_PARAM_MDNS_C_FALSE_THRES_S2_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_THRES_S2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_THRES_S3_ARRAY[TISP_PARAM_MDNS_C_FALSE_THRES_S3_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_THRES_S3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_STEP_S0_ARRAY[TISP_PARAM_MDNS_C_FALSE_STEP_S0_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_STEP_S0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_STEP_S1_ARRAY[TISP_PARAM_MDNS_C_FALSE_STEP_S1_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_STEP_S1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_STEP_S2_ARRAY[TISP_PARAM_MDNS_C_FALSE_STEP_S2_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_STEP_S2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_STEP_S3_ARRAY[TISP_PARAM_MDNS_C_FALSE_STEP_S3_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_STEP_S3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_THRES_M0_ARRAY[TISP_PARAM_MDNS_C_FALSE_THRES_M0_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_THRES_M0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_THRES_M1_ARRAY[TISP_PARAM_MDNS_C_FALSE_THRES_M1_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_THRES_M1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_THRES_M2_ARRAY[TISP_PARAM_MDNS_C_FALSE_THRES_M2_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_THRES_M2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_THRES_M3_ARRAY[TISP_PARAM_MDNS_C_FALSE_THRES_M3_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_THRES_M3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_STEP_M0_ARRAY[TISP_PARAM_MDNS_C_FALSE_STEP_M0_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_STEP_M0_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_STEP_M1_ARRAY[TISP_PARAM_MDNS_C_FALSE_STEP_M1_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_STEP_M1_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_STEP_M2_ARRAY[TISP_PARAM_MDNS_C_FALSE_STEP_M2_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_STEP_M2_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FALSE_STEP_M3_ARRAY[TISP_PARAM_MDNS_C_FALSE_STEP_M3_ARRAY_ROWS][TISP_PARAM_MDNS_C_FALSE_STEP_M3_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAT_LMT_THRES_ARRAY[TISP_PARAM_MDNS_C_SAT_LMT_THRES_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAT_LMT_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAT_LMT_STREN_ARRAY[TISP_PARAM_MDNS_C_SAT_LMT_STREN_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAT_LMT_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_WDR_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_CUR_SS_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_WDR_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_CUR_SE_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_WDR_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_CUR_MS_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_WDR_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_CUR_ME_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_WDR_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_REF_SS_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_WDR_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_REF_SE_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_WDR_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_REF_MS_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_WDR_ARRAY[TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_MEDIAN_REF_ME_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_WDR_ARRAY[TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_PIIR_CUR_FS_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_WDR_ARRAY[TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_PIIR_REF_FS_WEI_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_144_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_160_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_176_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_192_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_208_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_224_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_CUR_FUS_WEI_240_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_144_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_160_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_176_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_192_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_208_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_224_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_WDR_ARRAY[TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FSPA_REF_FUS_WEI_240_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_WDR_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI0_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_WDR_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI1_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_WDR_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI2_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_WDR_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI3_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_WDR_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI4_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_WDR_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI5_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_WDR_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI6_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_WDR_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI7_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_WDR_ARRAY[TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_WDR_ARRAY_ROWS][TISP_PARAM_MDNS_C_FIIR_FUS_WEI8_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_MDNS_C_SAT_NML_STREN_ARRAY[TISP_PARAM_MDNS_C_SAT_NML_STREN_ARRAY_ROWS][TISP_PARAM_MDNS_C_SAT_NML_STREN_ARRAY_COLS];

	//CLM
	int8_t TISP_PARAM_CLM_H_LUT[TISP_PARAM_CLM_H_LUT_ROWS][TISP_PARAM_CLM_H_LUT_COLS];
	int16_t TISP_PARAM_CLM_S_LUT[TISP_PARAM_CLM_S_LUT_ROWS][TISP_PARAM_CLM_S_LUT_COLS];
	uint32_t TISP_PARAM_CLM_LUT_SHIFT[TISP_PARAM_CLM_LUT_SHIFT_ROWS][TISP_PARAM_CLM_LUT_SHIFT_COLS];

	//DEFOG
	uint32_t TISP_PARAM_DEFOG_WEIGHTLUT20[TISP_PARAM_DEFOG_WEIGHTLUT20_ROWS][TISP_PARAM_DEFOG_WEIGHTLUT20_COLS];
	uint32_t TISP_PARAM_DEFOG_WEIGHTLUT02[TISP_PARAM_DEFOG_WEIGHTLUT02_ROWS][TISP_PARAM_DEFOG_WEIGHTLUT02_COLS];
	uint32_t TISP_PARAM_DEFOG_WEIGHTLUT12[TISP_PARAM_DEFOG_WEIGHTLUT12_ROWS][TISP_PARAM_DEFOG_WEIGHTLUT12_COLS];
	uint32_t TISP_PARAM_DEFOG_WEIGHTLUT22[TISP_PARAM_DEFOG_WEIGHTLUT22_ROWS][TISP_PARAM_DEFOG_WEIGHTLUT22_COLS];
	uint32_t TISP_PARAM_DEFOG_WEIGHTLUT21[TISP_PARAM_DEFOG_WEIGHTLUT21_ROWS][TISP_PARAM_DEFOG_WEIGHTLUT21_COLS];
	uint32_t TISP_PARAM_DEFOG_COL_CT_ARRAY[TISP_PARAM_DEFOG_COL_CT_ARRAY_ROWS][TISP_PARAM_DEFOG_COL_CT_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_CENT3_W_DIS_ARRAY[TISP_PARAM_DEFOG_CENT3_W_DIS_ARRAY_ROWS][TISP_PARAM_DEFOG_CENT3_W_DIS_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_CENT5_W_DIS_ARRAY[TISP_PARAM_DEFOG_CENT5_W_DIS_ARRAY_ROWS][TISP_PARAM_DEFOG_CENT5_W_DIS_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_EV_LIST[TISP_PARAM_DEFOG_EV_LIST_ROWS][TISP_PARAM_DEFOG_EV_LIST_COLS];
	uint32_t TISP_PARAM_DEFOG_TRSY0_LIST[TISP_PARAM_DEFOG_TRSY0_LIST_ROWS][TISP_PARAM_DEFOG_TRSY0_LIST_COLS];
	uint32_t TISP_PARAM_DEFOG_TRSY1_LIST[TISP_PARAM_DEFOG_TRSY1_LIST_ROWS][TISP_PARAM_DEFOG_TRSY1_LIST_COLS];
	uint32_t TISP_PARAM_DEFOG_TRSY2_LIST[TISP_PARAM_DEFOG_TRSY2_LIST_ROWS][TISP_PARAM_DEFOG_TRSY2_LIST_COLS];
	uint32_t TISP_PARAM_DEFOG_TRSY3_LIST[TISP_PARAM_DEFOG_TRSY3_LIST_ROWS][TISP_PARAM_DEFOG_TRSY3_LIST_COLS];
	uint32_t TISP_PARAM_DEFOG_TRSY4_LIST[TISP_PARAM_DEFOG_TRSY4_LIST_ROWS][TISP_PARAM_DEFOG_TRSY4_LIST_COLS];
	uint32_t TISP_PARAM_DEFOG_RGBRA_LIST[TISP_PARAM_DEFOG_RGBRA_LIST_ROWS][TISP_PARAM_DEFOG_RGBRA_LIST_COLS];
	uint32_t TISP_PARAM_DEFOG_MAIN_PARA_ARRAY[TISP_PARAM_DEFOG_MAIN_PARA_ARRAY_ROWS][TISP_PARAM_DEFOG_MAIN_PARA_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_COLOR_CONTROL_ARRAY[TISP_PARAM_DEFOG_COLOR_CONTROL_ARRAY_ROWS][TISP_PARAM_DEFOG_COLOR_CONTROL_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_LC_S_ARRAY[TISP_PARAM_DEFOG_LC_S_ARRAY_ROWS][TISP_PARAM_DEFOG_LC_S_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_LC_V_ARRAY[TISP_PARAM_DEFOG_LC_V_ARRAY_ROWS][TISP_PARAM_DEFOG_LC_V_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_CC_S_ARRAY[TISP_PARAM_DEFOG_CC_S_ARRAY_ROWS][TISP_PARAM_DEFOG_CC_S_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_CC_V_ARRAY[TISP_PARAM_DEFOG_CC_V_ARRAY_ROWS][TISP_PARAM_DEFOG_CC_V_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_DARK_L1_ARRAY[TISP_PARAM_DEFOG_DARK_L1_ARRAY_ROWS][TISP_PARAM_DEFOG_DARK_L1_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_DARK_L2_ARRAY[TISP_PARAM_DEFOG_DARK_L2_ARRAY_ROWS][TISP_PARAM_DEFOG_DARK_L2_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_BLOCK_TX[TISP_PARAM_DEFOG_BLOCK_TX_ROWS][TISP_PARAM_DEFOG_BLOCK_TX_COLS];
	uint32_t TISP_PARAM_DEFOG_BLOCK_TY[TISP_PARAM_DEFOG_BLOCK_TY_ROWS][TISP_PARAM_DEFOG_BLOCK_TY_COLS];
    	uint32_t TISP_PARAM_DEFOG_T_PAR_LIST1[TISP_PARAM_DEFOG_T_PAR_LIST1_ROWS][TISP_PARAM_DEFOG_T_PAR_LIST1_COLS];
    	uint32_t TISP_PARAM_DEFOG_T_PAR_LIST2[TISP_PARAM_DEFOG_T_PAR_LIST2_ROWS][TISP_PARAM_DEFOG_T_PAR_LIST2_COLS];
    	uint32_t TISP_PARAM_DEFOG_MANUAL_CTRL[TISP_PARAM_DEFOG_MANUAL_CTRL_ROWS][TISP_PARAM_DEFOG_MANUAL_CTRL_COLS];
	uint32_t TISP_PARAM_DEFOG_EV_LIST_WDR[TISP_PARAM_DEFOG_EV_LIST_WDR_ROWS][TISP_PARAM_DEFOG_EV_LIST_WDR_COLS];
	uint32_t TISP_PARAM_DEFOG_TRSY0_LIST_WDR[TISP_PARAM_DEFOG_TRSY0_LIST_WDR_ROWS][TISP_PARAM_DEFOG_TRSY0_LIST_WDR_COLS];
	uint32_t TISP_PARAM_DEFOG_TRSY1_LIST_WDR[TISP_PARAM_DEFOG_TRSY1_LIST_WDR_ROWS][TISP_PARAM_DEFOG_TRSY1_LIST_WDR_COLS];
	uint32_t TISP_PARAM_DEFOG_TRSY2_LIST_WDR[TISP_PARAM_DEFOG_TRSY2_LIST_WDR_ROWS][TISP_PARAM_DEFOG_TRSY2_LIST_WDR_COLS];
	uint32_t TISP_PARAM_DEFOG_TRSY3_LIST_WDR[TISP_PARAM_DEFOG_TRSY3_LIST_WDR_ROWS][TISP_PARAM_DEFOG_TRSY3_LIST_WDR_COLS];
	uint32_t TISP_PARAM_DEFOG_TRSY4_LIST_WDR[TISP_PARAM_DEFOG_TRSY4_LIST_WDR_ROWS][TISP_PARAM_DEFOG_TRSY4_LIST_WDR_COLS];
	uint32_t TISP_PARAM_DEFOG_MAIN_PARA_WDR_ARRAY[TISP_PARAM_DEFOG_MAIN_PARA_WDR_ARRAY_ROWS][TISP_PARAM_DEFOG_MAIN_PARA_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_DEFOG_BLOCK_TX_WDR[TISP_PARAM_DEFOG_BLOCK_TX_WDR_ROWS][TISP_PARAM_DEFOG_BLOCK_TX_WDR_COLS];
	uint32_t TISP_PARAM_DEFOG_FPGA_PARA_WDR[TISP_PARAM_DEFOG_FPGA_PARA_WDR_ROWS][TISP_PARAM_DEFOG_FPGA_PARA_WDR_COLS];
	uint32_t TISP_PARAM_DEFOG_FPGA_PARA[TISP_PARAM_DEFOG_FPGA_PARA_ROWS][TISP_PARAM_DEFOG_FPGA_PARA_COLS];

	//ADR
	uint32_t TISP_PARAM_ADR_PARA_ARRAY[TISP_PARAM_ADR_PARA_ARRAY_ROWS][TISP_PARAM_ADR_PARA_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_WEIGHT_20_LUT_ARRAY[TISP_PARAM_ADR_WEIGHT_20_LUT_ARRAY_ROWS][TISP_PARAM_ADR_WEIGHT_20_LUT_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_WEIGHT_02_LUT_ARRAY[TISP_PARAM_ADR_WEIGHT_02_LUT_ARRAY_ROWS][TISP_PARAM_ADR_WEIGHT_02_LUT_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_WEIGHT_12_LUT_ARRAY[TISP_PARAM_ADR_WEIGHT_12_LUT_ARRAY_ROWS][TISP_PARAM_ADR_WEIGHT_12_LUT_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_WEIGHT_22_LUT_ARRAY[TISP_PARAM_ADR_WEIGHT_22_LUT_ARRAY_ROWS][TISP_PARAM_ADR_WEIGHT_22_LUT_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_WEIGHT_21_LUT_ARRAY[TISP_PARAM_ADR_WEIGHT_21_LUT_ARRAY_ROWS][TISP_PARAM_ADR_WEIGHT_21_LUT_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_CTC_KNEEPOINT_ARRAY[TISP_PARAM_ADR_CTC_KNEEPOINT_ARRAY_ROWS][TISP_PARAM_ADR_CTC_KNEEPOINT_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_MIN_KNEEPOINT_ARRAY[TISP_PARAM_ADR_MIN_KNEEPOINT_ARRAY_ROWS][TISP_PARAM_ADR_MIN_KNEEPOINT_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_MAP_KNEEPOINT_ARRAY[TISP_PARAM_ADR_MAP_KNEEPOINT_ARRAY_ROWS][TISP_PARAM_ADR_MAP_KNEEPOINT_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_COC_KNEEPOINT_Y1_ARRAY[TISP_PARAM_ADR_COC_KNEEPOINT_Y1_ARRAY_ROWS][TISP_PARAM_ADR_COC_KNEEPOINT_Y1_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_COC_KNEEPOINT_Y2_ARRAY[TISP_PARAM_ADR_COC_KNEEPOINT_Y2_ARRAY_ROWS][TISP_PARAM_ADR_COC_KNEEPOINT_Y2_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_COC_KNEEPOINT_Y3_ARRAY[TISP_PARAM_ADR_COC_KNEEPOINT_Y3_ARRAY_ROWS][TISP_PARAM_ADR_COC_KNEEPOINT_Y3_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_COC_KNEEPOINT_Y4_ARRAY[TISP_PARAM_ADR_COC_KNEEPOINT_Y4_ARRAY_ROWS][TISP_PARAM_ADR_COC_KNEEPOINT_Y4_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_COC_KNEEPOINT_Y5_ARRAY[TISP_PARAM_ADR_COC_KNEEPOINT_Y5_ARRAY_ROWS][TISP_PARAM_ADR_COC_KNEEPOINT_Y5_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_COC_ADJUST_ARRAY[TISP_PARAM_ADR_COC_ADJUST_ARRAY_ROWS][TISP_PARAM_ADR_COC_ADJUST_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_CENTRE_W_DIS_ARRAY[TISP_PARAM_ADR_CENTRE_W_DIS_ARRAY_ROWS][TISP_PARAM_ADR_CENTRE_W_DIS_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_STAT_BLOCK_HIST_DIFF_ARRAY[TISP_PARAM_ADR_STAT_BLOCK_HIST_DIFF_ARRAY_ROWS][TISP_PARAM_ADR_STAT_BLOCK_HIST_DIFF_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_SOFT_TM_BASE_ARRAY[TISP_PARAM_ADR_SOFT_TM_BASE_ARRAY_ROWS][TISP_PARAM_ADR_SOFT_TM_BASE_ARRAY_COLS];
	uint16_t TISP_PARAM_ADR_SOFT_GAM_X_ARRAY[TISP_PARAM_ADR_SOFT_GAM_X_ARRAY_ROWS][TISP_PARAM_ADR_SOFT_GAM_X_ARRAY_COLS];
	uint16_t TISP_PARAM_ADR_SOFT_GAM_Y_ARRAY[TISP_PARAM_ADR_SOFT_GAM_Y_ARRAY_ROWS][TISP_PARAM_ADR_SOFT_GAM_Y_ARRAY_COLS];
	uint32_t TISP_ADR_CTC_MAP2CUT_Y[TISP_ADR_CTC_MAP2CUT_Y_ROWS][TISP_ADR_CTC_MAP2CUT_Y_COLS];
	uint32_t TISP_PARAM_ADR_SOFT_LIGHT_END_ARRAY[TISP_PARAM_ADR_SOFT_LIGHT_END_ARRAY_ROWS][TISP_PARAM_ADR_SOFT_LIGHT_END_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_ARRAY[TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_ARRAY_ROWS][TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_SOFT_MAP_MODE_ARRAY[TISP_PARAM_ADR_SOFT_MAP_MODE_ARRAY_ROWS][TISP_PARAM_ADR_SOFT_MAP_MODE_ARRAY_COLS];
	uint32_t TISP_HISTSUB_4096_DIFF[TISP_HISTSUB_4096_DIFF_ROWS][TISP_HISTSUB_4096_DIFF_COLS];
	uint32_t TISP_PARAM_ADR_TOOL_CONTROL_ARRAY[TISP_PARAM_ADR_TOOL_CONTROL_ARRAY_ROWS][TISP_PARAM_ADR_TOOL_CONTROL_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_EV_LIST[TISP_PARAM_ADR_EV_LIST_ROWS][TISP_PARAM_ADR_EV_LIST_COLS];
	uint32_t TISP_PARAM_ADR_LIGB_LIST[TISP_PARAM_ADR_LIGB_LIST_ROWS][TISP_PARAM_ADR_LIGB_LIST_COLS];
	uint32_t TISP_PARAM_ADR_MAPB1_LIST[TISP_PARAM_ADR_MAPB1_LIST_ROWS][TISP_PARAM_ADR_MAPB1_LIST_COLS];
	uint32_t TISP_PARAM_ADR_MAPB2_LIST[TISP_PARAM_ADR_MAPB2_LIST_ROWS][TISP_PARAM_ADR_MAPB2_LIST_COLS];
	uint32_t TISP_PARAM_ADR_MAPB3_LIST[TISP_PARAM_ADR_MAPB3_LIST_ROWS][TISP_PARAM_ADR_MAPB3_LIST_COLS];
	uint32_t TISP_PARAM_ADR_MAPB4_LIST[TISP_PARAM_ADR_MAPB4_LIST_ROWS][TISP_PARAM_ADR_MAPB4_LIST_COLS];
	uint32_t TISP_ADR_CTC_MAP2CUT_Y_WDR[TISP_ADR_CTC_MAP2CUT_Y_WDR_ROWS][TISP_ADR_CTC_MAP2CUT_Y_WDR_COLS];
	uint32_t TISP_PARAM_ADR_SOFT_LIGHT_END_WDR_ARRAY[TISP_PARAM_ADR_SOFT_LIGHT_END_WDR_ARRAY_ROWS][TISP_PARAM_ADR_SOFT_LIGHT_END_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_WDR_ARRAY[TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_WDR_ARRAY_ROWS][TISP_PARAM_ADR_SOFT_BLOCK_LIGHT_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_SOFT_MAP_MODE_WDR_ARRAY[TISP_PARAM_ADR_SOFT_MAP_MODE_WDR_ARRAY_ROWS][TISP_PARAM_ADR_SOFT_MAP_MODE_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_ADR_EV_LIST_WDR[TISP_PARAM_ADR_EV_LIST_WDR_ROWS][TISP_PARAM_ADR_EV_LIST_WDR_COLS];
	uint32_t TISP_PARAM_ADR_LIGB_LIST_WDR[TISP_PARAM_ADR_LIGB_LIST_WDR_ROWS][TISP_PARAM_ADR_LIGB_LIST_WDR_COLS];
	uint32_t TISP_PARAM_ADR_MAPB1_LIST_WDR[TISP_PARAM_ADR_MAPB1_LIST_WDR_ROWS][TISP_PARAM_ADR_MAPB1_LIST_WDR_COLS];
	uint32_t TISP_PARAM_ADR_MAPB2_LIST_WDR[TISP_PARAM_ADR_MAPB2_LIST_WDR_ROWS][TISP_PARAM_ADR_MAPB2_LIST_WDR_COLS];
	uint32_t TISP_PARAM_ADR_MAPB3_LIST_WDR[TISP_PARAM_ADR_MAPB3_LIST_WDR_ROWS][TISP_PARAM_ADR_MAPB3_LIST_WDR_COLS];
	uint32_t TISP_PARAM_ADR_MAPB4_LIST_WDR[TISP_PARAM_ADR_MAPB4_LIST_WDR_ROWS][TISP_PARAM_ADR_MAPB4_LIST_WDR_COLS];
	uint32_t TISP_PARAM_ADR_BLP2_LIST_WDR[TISP_PARAM_ADR_BLP2_LIST_WDR_ROWS][TISP_PARAM_ADR_BLP2_LIST_WDR_COLS];
	uint32_t TISP_PARAM_ADR_BLP2_LIST[TISP_PARAM_ADR_BLP2_LIST_ROWS][TISP_PARAM_ADR_BLP2_LIST_COLS];

	//HLDC
	uint32_t TISP_PARAM_HLDC_CON_PAR_ARRAY[TISP_PARAM_HLDC_CON_PAR_ARRAY_ROWS][TISP_PARAM_HLDC_CON_PAR_ARRAY_COLS];

	//AF
	uint32_t TISP_PARAM_AF_ZONE[TISP_PARAM_AF_ZONE_ROWS][TISP_PARAM_AF_ZONE_COLS];
	uint32_t TISP_PARAM_AF_TH_EN[TISP_PARAM_AF_TH_EN_ROWS][TISP_PARAM_AF_TH_EN_COLS];
	uint32_t TISP_PARAM_AF_FIR0_V[TISP_PARAM_AF_FIR0_V_ROWS][TISP_PARAM_AF_FIR0_V_COLS];
	uint32_t TISP_PARAM_AF_FIR0_LDG[TISP_PARAM_AF_FIR0_LDG_ROWS][TISP_PARAM_AF_FIR0_LDG_COLS];
	uint32_t TISP_PARAM_AF_FIR0_CORING[TISP_PARAM_AF_FIR0_CORING_ROWS][TISP_PARAM_AF_FIR0_CORING_COLS];
	uint32_t TISP_PARAM_AF_FIR1_V[TISP_PARAM_AF_FIR1_V_ROWS][TISP_PARAM_AF_FIR1_V_COLS];
	uint32_t TISP_PARAM_AF_FIR1_LDG[TISP_PARAM_AF_FIR1_LDG_ROWS][TISP_PARAM_AF_FIR1_LDG_COLS];
	uint32_t TISP_PARAM_AF_FIR1_CORING[TISP_PARAM_AF_FIR1_CORING_ROWS][TISP_PARAM_AF_FIR1_CORING_COLS];
	uint32_t TISP_PARAM_AF_IIR0_H[TISP_PARAM_AF_IIR0_H_ROWS][TISP_PARAM_AF_IIR0_H_COLS];
	uint32_t TISP_PARAM_AF_IIR0_LDG[TISP_PARAM_AF_IIR0_LDG_ROWS][TISP_PARAM_AF_IIR0_LDG_COLS];
	uint32_t TISP_PARAM_AF_IIR0_CORING[TISP_PARAM_AF_IIR0_CORING_ROWS][TISP_PARAM_AF_IIR0_CORING_COLS];
	uint32_t TISP_PARAM_AF_IIR1_H[TISP_PARAM_AF_IIR1_H_ROWS][TISP_PARAM_AF_IIR1_H_COLS];
	uint32_t TISP_PARAM_AF_IIR1_LDG[TISP_PARAM_AF_IIR1_LDG_ROWS][TISP_PARAM_AF_IIR1_LDG_COLS];
	uint32_t TISP_PARAM_AF_IIR1_CORING[TISP_PARAM_AF_IIR1_CORING_ROWS][TISP_PARAM_AF_IIR1_CORING_COLS];
	uint32_t TISP_PARAM_AF_POINTPOS[TISP_PARAM_AF_POINTPOS_ROWS][TISP_PARAM_AF_POINTPOS_COLS];
	uint32_t TISP_PARAM_AF_TILT[TISP_PARAM_AF_TILT_ROWS][TISP_PARAM_AF_TILT_COLS];
	uint32_t TISP_PARAM_AF_FVW_MEAN[TISP_PARAM_AF_FVW_MEAN_ROWS][TISP_PARAM_AF_FVW_MEAN_COLS];
	uint32_t TISP_PARAM_AF_FV[TISP_PARAM_AF_FV_ROWS][TISP_PARAM_AF_FV_COLS];
	uint32_t TISP_PARAM_AF_WEIGHT[TISP_PARAM_AF_WEIGHT_ROWS][TISP_PARAM_AF_WEIGHT_COLS];

	//BCSH
	uint32_t TISP_PARAM_BCSH_CCMMATRIX_D[TISP_PARAM_BCSH_CCMMATRIX_D_ROWS][TISP_PARAM_BCSH_CCMMATRIX_D_COLS];
	uint32_t TISP_PARAM_BCSH_CCMMATRIX_T[TISP_PARAM_BCSH_CCMMATRIX_T_ROWS][TISP_PARAM_BCSH_CCMMATRIX_T_COLS];
	uint32_t TISP_PARAM_BCSH_CCMMATRIX_A[TISP_PARAM_BCSH_CCMMATRIX_A_ROWS][TISP_PARAM_BCSH_CCMMATRIX_A_COLS];
	uint32_t TISP_PARAM_BCSH_HDP[TISP_PARAM_BCSH_HDP_ROWS][TISP_PARAM_BCSH_HDP_COLS];
	uint32_t TISP_PARAM_BCSH_HBP[TISP_PARAM_BCSH_HBP_ROWS][TISP_PARAM_BCSH_HBP_COLS];
	uint32_t TISP_PARAM_BCSH_HLSP[TISP_PARAM_BCSH_HLSP_ROWS][TISP_PARAM_BCSH_HLSP_COLS];
	uint32_t TISP_PARAM_BCSH_STHRES[TISP_PARAM_BCSH_STHRES_ROWS][TISP_PARAM_BCSH_STHRES_COLS];
	uint32_t TISP_PARAM_BCSH_EVLIST[TISP_PARAM_BCSH_EVLIST_ROWS][TISP_PARAM_BCSH_EVLIST_COLS];
	uint32_t TISP_PARAM_BCSH_SMINLISTS[TISP_PARAM_BCSH_SMINLISTS_ROWS][TISP_PARAM_BCSH_SMINLISTS_COLS];
	uint32_t TISP_PARAM_BCSH_SMAXLISTS[TISP_PARAM_BCSH_SMAXLISTS_ROWS][TISP_PARAM_BCSH_SMAXLISTS_COLS];
	uint32_t TISP_PARAM_BCSH_SMINLISTM[TISP_PARAM_BCSH_SMINLISTM_ROWS][TISP_PARAM_BCSH_SMINLISTM_COLS];
	uint32_t TISP_PARAM_BCSH_SMAXLISTM[TISP_PARAM_BCSH_SMAXLISTM_ROWS][TISP_PARAM_BCSH_SMAXLISTM_COLS];
	uint32_t TISP_PARAM_BCSH_C[TISP_PARAM_BCSH_C_ROWS][TISP_PARAM_BCSH_C_COLS];
	uint32_t TISP_PARAM_BCSH_CXL[TISP_PARAM_BCSH_CXL_ROWS][TISP_PARAM_BCSH_CXL_COLS];
	uint32_t TISP_PARAM_BCSH_CXH[TISP_PARAM_BCSH_CXH_ROWS][TISP_PARAM_BCSH_CXH_COLS];
	uint32_t TISP_PARAM_BCSH_CYL[TISP_PARAM_BCSH_CYL_ROWS][TISP_PARAM_BCSH_CYL_COLS];
	uint32_t TISP_PARAM_BCSH_CYH[TISP_PARAM_BCSH_CYH_ROWS][TISP_PARAM_BCSH_CYH_COLS];
	uint32_t TISP_PARAM_BCSH_B[TISP_PARAM_BCSH_B_ROWS][TISP_PARAM_BCSH_B_COLS];
	uint32_t TISP_PARAM_BCSH_OFFSETRGB[TISP_PARAM_BCSH_OFFSETRGB_ROWS][TISP_PARAM_BCSH_OFFSETRGB_COLS];
	uint32_t TISP_PARAM_BCSH_OFFSETYUVY[TISP_PARAM_BCSH_OFFSETYUVY_ROWS][TISP_PARAM_BCSH_OFFSETYUVY_COLS];
	uint32_t TISP_PARAM_BCSH_CLIP0[TISP_PARAM_BCSH_CLIP0_ROWS][TISP_PARAM_BCSH_CLIP0_COLS];
	uint32_t TISP_PARAM_BCSH_CLIP1[TISP_PARAM_BCSH_CLIP1_ROWS][TISP_PARAM_BCSH_CLIP1_COLS];
	uint32_t TISP_PARAM_BCSH_CCMMATRIX_D_WDR[TISP_PARAM_BCSH_CCMMATRIX_D_WDR_ROWS][TISP_PARAM_BCSH_CCMMATRIX_D_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_CCMMATRIX_T_WDR[TISP_PARAM_BCSH_CCMMATRIX_T_WDR_ROWS][TISP_PARAM_BCSH_CCMMATRIX_T_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_CCMMATRIX_A_WDR[TISP_PARAM_BCSH_CCMMATRIX_A_WDR_ROWS][TISP_PARAM_BCSH_CCMMATRIX_A_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_HDP_WDR[TISP_PARAM_BCSH_HDP_WDR_ROWS][TISP_PARAM_BCSH_HDP_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_HBP_WDR[TISP_PARAM_BCSH_HBP_WDR_ROWS][TISP_PARAM_BCSH_HBP_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_HLSP_WDR[TISP_PARAM_BCSH_HLSP_WDR_ROWS][TISP_PARAM_BCSH_HLSP_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_STHRES_WDR[TISP_PARAM_BCSH_STHRES_WDR_ROWS][TISP_PARAM_BCSH_STHRES_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_EVLIST_WDR[TISP_PARAM_BCSH_EVLIST_WDR_ROWS][TISP_PARAM_BCSH_EVLIST_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_SMINLISTS_WDR[TISP_PARAM_BCSH_SMINLISTS_WDR_ROWS][TISP_PARAM_BCSH_SMINLISTS_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_SMAXLISTS_WDR[TISP_PARAM_BCSH_SMAXLISTS_WDR_ROWS][TISP_PARAM_BCSH_SMAXLISTS_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_SMINLISTM_WDR[TISP_PARAM_BCSH_SMINLISTM_WDR_ROWS][TISP_PARAM_BCSH_SMINLISTM_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_SMAXLISTM_WDR[TISP_PARAM_BCSH_SMAXLISTM_WDR_ROWS][TISP_PARAM_BCSH_SMAXLISTM_WDR_COLS];
	uint32_t TISP_PARAM_BCSH_OFFSETRGB_WDR[TISP_PARAM_BCSH_OFFSETRGB_WDR_ROWS][TISP_PARAM_BCSH_OFFSETRGB_WDR_COLS];
	int32_t TISP_PARAM_BCSH_MMATRIX[TISP_PARAM_BCSH_MMATRIX_ROWS][TISP_PARAM_BCSH_MMATRIX_COLS];
	int32_t TISP_PARAM_BCSH_MINVMATRIX[TISP_PARAM_BCSH_MINVMATRIX_ROWS][TISP_PARAM_BCSH_MINVMATRIX_COLS];
	uint32_t TISP_PARAM_BCSH_CLIP2[TISP_PARAM_BCSH_CLIP2_ROWS][TISP_PARAM_BCSH_CLIP2_COLS];

	//YDNS
	uint32_t TISP_PARAM_YDNS_EDGE_OUT_ARRAY[TISP_PARAM_YDNS_EDGE_OUT_ARRAY_ROWS][TISP_PARAM_YDNS_EDGE_OUT_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_MV_THRES0_ARRAY[TISP_PARAM_YDNS_MV_THRES0_ARRAY_ROWS][TISP_PARAM_YDNS_MV_THRES0_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_MV_THRES1_ARRAY[TISP_PARAM_YDNS_MV_THRES1_ARRAY_ROWS][TISP_PARAM_YDNS_MV_THRES1_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_MV_THRES2_ARRAY[TISP_PARAM_YDNS_MV_THRES2_ARRAY_ROWS][TISP_PARAM_YDNS_MV_THRES2_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_FUS_LEVEL_ARRAY[TISP_PARAM_YDNS_FUS_LEVEL_ARRAY_ROWS][TISP_PARAM_YDNS_FUS_LEVEL_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_FUS_MIN_THRES_ARRAY[TISP_PARAM_YDNS_FUS_MIN_THRES_ARRAY_ROWS][TISP_PARAM_YDNS_FUS_MIN_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_FUS_MAX_THRES_ARRAY[TISP_PARAM_YDNS_FUS_MAX_THRES_ARRAY_ROWS][TISP_PARAM_YDNS_FUS_MAX_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_FUS_SSWEI_ARRAY[TISP_PARAM_YDNS_FUS_SSWEI_ARRAY_ROWS][TISP_PARAM_YDNS_FUS_SSWEI_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_FUS_SEWEI_ARRAY[TISP_PARAM_YDNS_FUS_SEWEI_ARRAY_ROWS][TISP_PARAM_YDNS_FUS_SEWEI_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_FUS_MSWEI_ARRAY[TISP_PARAM_YDNS_FUS_MSWEI_ARRAY_ROWS][TISP_PARAM_YDNS_FUS_MSWEI_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_FUS_MEWEI_ARRAY[TISP_PARAM_YDNS_FUS_MEWEI_ARRAY_ROWS][TISP_PARAM_YDNS_FUS_MEWEI_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_FUS_UVWEI_ARRAY[TISP_PARAM_YDNS_FUS_UVWEI_ARRAY_ROWS][TISP_PARAM_YDNS_FUS_UVWEI_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_EDGE_WEI_ARRAY[TISP_PARAM_YDNS_EDGE_WEI_ARRAY_ROWS][TISP_PARAM_YDNS_EDGE_WEI_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_EDGE_DIV_ARRAY[TISP_PARAM_YDNS_EDGE_DIV_ARRAY_ROWS][TISP_PARAM_YDNS_EDGE_DIV_ARRAY_COLS];
	uint32_t TISP_PARAM_YDNS_EDGE_THRES_ARRAY[TISP_PARAM_YDNS_EDGE_THRES_ARRAY_ROWS][TISP_PARAM_YDNS_EDGE_THRES_ARRAY_COLS];

	//GB
	uint32_t TISP_PARAM_GB_DGAIN_SHIFT[TISP_PARAM_GB_DGAIN_SHIFT_ROWS][TISP_PARAM_GB_DGAIN_SHIFT_COLS];
	uint32_t TISP_PARAM_GB_DGAIN_RGBIR_L[TISP_PARAM_GB_DGAIN_RGBIR_L_ROWS][TISP_PARAM_GB_DGAIN_RGBIR_L_COLS];
	uint32_t TISP_PARAM_GB_DGAIN_RGBIR_S[TISP_PARAM_GB_DGAIN_RGBIR_S_ROWS][TISP_PARAM_GB_DGAIN_RGBIR_S_COLS];
	uint32_t TISP_PARAM_GB_BLC_R[TISP_PARAM_GB_BLC_R_ROWS][TISP_PARAM_GB_BLC_R_COLS];
	uint32_t TISP_PARAM_GB_BLC_GR[TISP_PARAM_GB_BLC_GR_ROWS][TISP_PARAM_GB_BLC_GR_COLS];
	uint32_t TISP_PARAM_GB_BLC_GB[TISP_PARAM_GB_BLC_GB_ROWS][TISP_PARAM_GB_BLC_GB_COLS];
	uint32_t TISP_PARAM_GB_BLC_B[TISP_PARAM_GB_BLC_B_ROWS][TISP_PARAM_GB_BLC_B_COLS];
	uint32_t TISP_PARAM_GB_BLC_IR[TISP_PARAM_GB_BLC_IR_ROWS][TISP_PARAM_GB_BLC_IR_COLS];
	uint32_t TISP_PARAM_GB_BLC_MIN_EN[TISP_PARAM_GB_BLC_MIN_EN_ROWS][TISP_PARAM_GB_BLC_MIN_EN_COLS];
	uint32_t TISP_PARAM_GB_BLC_MIN[TISP_PARAM_GB_BLC_MIN_ROWS][TISP_PARAM_GB_BLC_MIN_COLS];

	//WDR
	uint32_t TISP_PARAM_WDR_PARA_ARRAY[TISP_PARAM_WDR_PARA_ARRAY_ROWS][TISP_PARAM_WDR_PARA_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_WEIGHTLUT20_ARRAY[TISP_PARAM_WDR_WEIGHTLUT20_ARRAY_ROWS][TISP_PARAM_WDR_WEIGHTLUT20_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_WEIGHTLUT02_ARRAY[TISP_PARAM_WDR_WEIGHTLUT02_ARRAY_ROWS][TISP_PARAM_WDR_WEIGHTLUT02_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_WEIGHTLUT12_ARRAY[TISP_PARAM_WDR_WEIGHTLUT12_ARRAY_ROWS][TISP_PARAM_WDR_WEIGHTLUT12_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_WEIGHTLUT22_ARRAY[TISP_PARAM_WDR_WEIGHTLUT22_ARRAY_ROWS][TISP_PARAM_WDR_WEIGHTLUT22_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_WEIGHTLUT21_ARRAY[TISP_PARAM_WDR_WEIGHTLUT21_ARRAY_ROWS][TISP_PARAM_WDR_WEIGHTLUT21_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_GAM_Y_ARRAY[TISP_PARAM_WDR_GAM_Y_ARRAY_ROWS][TISP_PARAM_WDR_GAM_Y_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_W_POINT_WEIGHT_X_ARRAY[TISP_PARAM_WDR_W_POINT_WEIGHT_X_ARRAY_ROWS][TISP_PARAM_WDR_W_POINT_WEIGHT_X_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_W_POINT_WEIGHT_Y_ARRAY[TISP_PARAM_WDR_W_POINT_WEIGHT_Y_ARRAY_ROWS][TISP_PARAM_WDR_W_POINT_WEIGHT_Y_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_W_POINT_WEIGHT_POW_ARRAY[TISP_PARAM_WDR_W_POINT_WEIGHT_POW_ARRAY_ROWS][TISP_PARAM_WDR_W_POINT_WEIGHT_POW_ARRAY_COLS];
	uint32_t TISP_PARAM_FUSION1_CURE_Y_ARRAY[TISP_PARAM_FUSION1_CURE_Y_ARRAY_ROWS][TISP_PARAM_FUSION1_CURE_Y_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_DETAIL_TH_W_ARRAY[TISP_PARAM_WDR_DETAIL_TH_W_ARRAY_ROWS][TISP_PARAM_WDR_DETAIL_TH_W_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_CONTRAST_T_Y_MUX_ARRAY[TISP_PARAM_WDR_CONTRAST_T_Y_MUX_ARRAY_ROWS][TISP_PARAM_WDR_CONTRAST_T_Y_MUX_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_CT_CL_PARA_ARRAY[TISP_PARAM_WDR_CT_CL_PARA_ARRAY_ROWS][TISP_PARAM_WDR_CT_CL_PARA_ARRAY_COLS];
	uint32_t TISP_PARAM_CENTRE5X5_W_DISTANCE_ARRAY[TISP_PARAM_CENTRE5X5_W_DISTANCE_ARRAY_ROWS][TISP_PARAM_CENTRE5X5_W_DISTANCE_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_STAT_PARA_ARRAY[TISP_PARAM_WDR_STAT_PARA_ARRAY_ROWS][TISP_PARAM_WDR_STAT_PARA_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_DEGOST_PARA_ARRAY[TISP_PARAM_WDR_DEGOST_PARA_ARRAY_ROWS][TISP_PARAM_WDR_DEGOST_PARA_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_DARKLABLE_ARRAY[TISP_PARAM_WDR_DARKLABLE_ARRAY_ROWS][TISP_PARAM_WDR_DARKLABLE_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_DARKLABLEN_ARRAY[TISP_PARAM_WDR_DARKLABLEN_ARRAY_ROWS][TISP_PARAM_WDR_DARKLABLEN_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_DARKWEIGHT_ARRAY[TISP_PARAM_WDR_DARKWEIGHT_ARRAY_ROWS][TISP_PARAM_WDR_DARKWEIGHT_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_THRLABLE_ARRAY[TISP_PARAM_WDR_THRLABLE_ARRAY_ROWS][TISP_PARAM_WDR_THRLABLE_ARRAY_COLS];
	uint32_t TISP_PARAM_COMPUTERMODLE_SOFTWARE_IN_ARRAY[TISP_PARAM_COMPUTERMODLE_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_COMPUTERMODLE_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_DEVIATIONPARA_SOFTWARE_IN_ARRAY[TISP_PARAM_DEVIATIONPARA_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_DEVIATIONPARA_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_RATIOPARA_SOFTWARE_IN_ARRAY[TISP_PARAM_RATIOPARA_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_RATIOPARA_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_X_THR_SOFTWARE_IN_ARRAY[TISP_PARAM_X_THR_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_X_THR_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_Y_THR_SOFTWARE_IN_ARRAY[TISP_PARAM_Y_THR_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_Y_THR_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_THRPARA_SOFTWARE_IN_ARRAY[TISP_PARAM_THRPARA_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_THRPARA_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_XY_PIX_LOW_SOFTWARE_IN_ARRAY[TISP_PARAM_XY_PIX_LOW_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_XY_PIX_LOW_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_MOTIONTHRPARA_SOFTWARE_IN_ARRAY[TISP_PARAM_MOTIONTHRPARA_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_MOTIONTHRPARA_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_D_THR_NORMAL_SOFTWARE_IN_ARRAY[TISP_PARAM_D_THR_NORMAL_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_D_THR_NORMAL_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_D_THR_NORMAL1_SOFTWARE_IN_ARRAY[TISP_PARAM_D_THR_NORMAL1_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_D_THR_NORMAL1_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_D_THR_NORMAL2_SOFTWARE_IN_ARRAY[TISP_PARAM_D_THR_NORMAL2_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_D_THR_NORMAL2_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_D_THR_NORMAL_MIN_SOFTWARE_IN_ARRAY[TISP_PARAM_D_THR_NORMAL_MIN_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_D_THR_NORMAL_MIN_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_MULTIVALUELOW_SOFTWARE_IN_ARRAY[TISP_PARAM_MULTIVALUELOW_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_MULTIVALUELOW_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_MULTIVALUEHIGH_SOFTWARE_IN_ARRAY[TISP_PARAM_MULTIVALUEHIGH_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_MULTIVALUEHIGH_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_D_THR_2_SOFTWARE_IN_ARRAY[TISP_PARAM_D_THR_2_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_D_THR_2_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_DETIAL_PARA_SOFTWARE_IN_ARRAY[TISP_PARAM_WDR_DETIAL_PARA_SOFTWARE_IN_ARRAY_ROWS][TISP_PARAM_WDR_DETIAL_PARA_SOFTWARE_IN_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_THRALL_SOFTWARE_OUT[TISP_PARAM_WDR_THRALL_SOFTWARE_OUT_ROWS][TISP_PARAM_WDR_THRALL_SOFTWARE_OUT_COLS];
	uint32_t TISP_PARAM_WDR_DBG_OUT_ARRAY[TISP_PARAM_WDR_DBG_OUT_ARRAY_ROWS][TISP_PARAM_WDR_DBG_OUT_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_EV_LIST[TISP_PARAM_WDR_EV_LIST_ROWS][TISP_PARAM_WDR_EV_LIST_COLS];
	uint32_t TISP_PARAM_WDR_WEIGHT_B_IN_LIST[TISP_PARAM_WDR_WEIGHT_B_IN_LIST_ROWS][TISP_PARAM_WDR_WEIGHT_B_IN_LIST_COLS];
	uint32_t TISP_PARAM_WDR_WEIGHT_P_IN_LIST[TISP_PARAM_WDR_WEIGHT_P_IN_LIST_ROWS][TISP_PARAM_WDR_WEIGHT_P_IN_LIST_COLS];
	uint32_t TISP_PARAM_WDR_EV_LIST_DEGHOST_LIST[TISP_PARAM_WDR_EV_LIST_DEGHOST_LIST_ROWS][TISP_PARAM_WDR_EV_LIST_DEGHOST_LIST_COLS];
	uint32_t TISP_PARAM_WDR_WEIGHT_IN_LIST_DEGHOST[TISP_PARAM_WDR_WEIGHT_IN_LIST_DEGHOST_ROWS][TISP_PARAM_WDR_WEIGHT_IN_LIST_DEGHOST_COLS];
	uint32_t TISP_PARAM_WDR_DETAIL_W_IN0_LIST[TISP_PARAM_WDR_DETAIL_W_IN0_LIST_ROWS][TISP_PARAM_WDR_DETAIL_W_IN0_LIST_COLS];
	uint32_t TISP_PARAM_WDR_DETAIL_W_IN1_LIST[TISP_PARAM_WDR_DETAIL_W_IN1_LIST_ROWS][TISP_PARAM_WDR_DETAIL_W_IN1_LIST_COLS];
	uint32_t TISP_PARAM_WDR_DETAIL_W_IN2_LIST[TISP_PARAM_WDR_DETAIL_W_IN2_LIST_ROWS][TISP_PARAM_WDR_DETAIL_W_IN2_LIST_COLS];
	uint32_t TISP_PARAM_WDR_DETAIL_W_IN3_LIST[TISP_PARAM_WDR_DETAIL_W_IN3_LIST_ROWS][TISP_PARAM_WDR_DETAIL_W_IN3_LIST_COLS];
	uint32_t TISP_PARAM_WDR_DETAIL_W_IN4_LIST[TISP_PARAM_WDR_DETAIL_W_IN4_LIST_ROWS][TISP_PARAM_WDR_DETAIL_W_IN4_LIST_COLS];
	uint32_t TISP_PARAM_WDR_PRIV_ARRAY[TISP_PARAM_WDR_PRIV_ARRAY_ROWS][TISP_PARAM_WDR_PRIV_ARRAY_COLS];
	uint32_t TISP_PARAM_WDR_TOOL_CONTROL_ARRAY[TISP_PARAM_WDR_TOOL_CONTROL_ARRAY_ROWS][TISP_PARAM_WDR_TOOL_CONTROL_ARRAY_COLS];

	//RDNS
	uint32_t TISP_PARAM_RDNS_OUT_OPT_ARRAY[TISP_PARAM_RDNS_OUT_OPT_ARRAY_ROWS][TISP_PARAM_RDNS_OUT_OPT_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_AWB_GAIN_PAR_CFG_ARRAY[TISP_PARAM_RDNS_AWB_GAIN_PAR_CFG_ARRAY_ROWS][TISP_PARAM_RDNS_AWB_GAIN_PAR_CFG_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_OE_NUM_ARRAY[TISP_PARAM_RDNS_OE_NUM_ARRAY_ROWS][TISP_PARAM_RDNS_OE_NUM_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_OPT_CFG_ARRAY[TISP_PARAM_RDNS_OPT_CFG_ARRAY_ROWS][TISP_PARAM_RDNS_OPT_CFG_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_GRAY_STREN_ARRAY[TISP_PARAM_RDNS_GRAY_STREN_ARRAY_ROWS][TISP_PARAM_RDNS_GRAY_STREN_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_SLOPE_PAR_CFG_ARRAY[TISP_PARAM_RDNS_SLOPE_PAR_CFG_ARRAY_ROWS][TISP_PARAM_RDNS_SLOPE_PAR_CFG_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_GRAY_STD_THRES_ARRAY[TISP_PARAM_RDNS_GRAY_STD_THRES_ARRAY_ROWS][TISP_PARAM_RDNS_GRAY_STD_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_TEXT_BASE_THRES_ARRAY[TISP_PARAM_RDNS_TEXT_BASE_THRES_ARRAY_ROWS][TISP_PARAM_RDNS_TEXT_BASE_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_FILTER_SAT_THRES_ARRAY[TISP_PARAM_RDNS_FILTER_SAT_THRES_ARRAY_ROWS][TISP_PARAM_RDNS_FILTER_SAT_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_OE_THRES_ARRAY[TISP_PARAM_RDNS_OE_THRES_ARRAY_ROWS][TISP_PARAM_RDNS_OE_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_FLAT_G_THRES_ARRAY[TISP_PARAM_RDNS_FLAT_G_THRES_ARRAY_ROWS][TISP_PARAM_RDNS_FLAT_G_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_TEXT_G_THRES_ARRAY[TISP_PARAM_RDNS_TEXT_G_THRES_ARRAY_ROWS][TISP_PARAM_RDNS_TEXT_G_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_FLAT_RB_THRES_ARRAY[TISP_PARAM_RDNS_FLAT_RB_THRES_ARRAY_ROWS][TISP_PARAM_RDNS_FLAT_RB_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_TEXT_RB_THRES_ARRAY[TISP_PARAM_RDNS_TEXT_RB_THRES_ARRAY_ROWS][TISP_PARAM_RDNS_TEXT_RB_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_GRAY_NP_ARRAY[TISP_PARAM_RDNS_GRAY_NP_ARRAY_ROWS][TISP_PARAM_RDNS_GRAY_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_TEXT_NP_ARRAY[TISP_PARAM_RDNS_TEXT_NP_ARRAY_ROWS][TISP_PARAM_RDNS_TEXT_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_LUM_NP_ARRAY[TISP_PARAM_RDNS_LUM_NP_ARRAY_ROWS][TISP_PARAM_RDNS_LUM_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_STD_NP_ARRAY[TISP_PARAM_RDNS_STD_NP_ARRAY_ROWS][TISP_PARAM_RDNS_STD_NP_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_MV_TEXT_THRES_ARRAY[TISP_PARAM_RDNS_MV_TEXT_THRES_ARRAY_ROWS][TISP_PARAM_RDNS_MV_TEXT_THRES_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_TEXT_BASE_THRES_WDR_ARRAY[TISP_PARAM_RDNS_TEXT_BASE_THRES_WDR_ARRAY_ROWS][TISP_PARAM_RDNS_TEXT_BASE_THRES_WDR_ARRAY_COLS];
	uint32_t TISP_PARAM_RDNS_SL_PAR_CFG[TISP_PARAM_RDNS_SL_PAR_CFG_ROWS][TISP_PARAM_RDNS_SL_PAR_CFG_COLS];

} tisp_params_data_t;

typedef struct {
	tisp_param_info_t  params_info[TISP_PARAM_TOTAL_SIZE];
	tisp_params_data_t params_data;
} tisp_params_t;

#define TISP_PARAM_DEF(x, name)                     \
	.params_info[name] = {#name, name##_ROWS, name##_COLS, x.params_data.name}, \
		.params_data.name

#define TISP_PARAM_INFO(name)               \
	[name] = {#name, name##_ROWS, name##_COLS}
#endif
