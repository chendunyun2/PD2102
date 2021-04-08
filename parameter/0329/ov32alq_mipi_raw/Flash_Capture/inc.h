/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2020. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/********************************************************************************************
 *     LEGAL DISCLAIMER
 *
 *     (Header of MediaTek Software/Firmware Release or Documentation)
 *
 *     BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *     THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED
 *     FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS
 *     ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR IMPLIED,
 *     INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
 *     A PARTICULAR PURPOSE OR NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY
 *     WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 *     INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK
 *     ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *     NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S SPECIFICATION
 *     OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *
 *     BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH
 *     RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION,
 *     TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LAWS
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LAWS PRINCIPLES.
 ************************************************************************************************/
#ifndef _FLASH_CAPTURE_H
#define _FLASH_CAPTURE_H

#include "camera_custom_nvram.h"

#include "camera_custom_isp_nvram.h"

#define M_CONC(A, B) M_CONC_(A, B)
#define M_CONC_(A, B) A##_##B

#define AE_AE_BASE                                                   M_CONC(TARGET_SENSOR, AE_0005)
#define AWB_AWB_BASE                                                 M_CONC(TARGET_SENSOR, AWB_0002)
#define Flash_AE_Flash_AE_BASE                                       M_CONC(TARGET_SENSOR, Flash_AE_0001)
#define Flash_AWB_Flash_AWB_BASE                                     M_CONC(TARGET_SENSOR, Flash_AWB_0001)
#define Flash_Calibration_Flash_Calibration_BASE                     M_CONC(TARGET_SENSOR, Flash_Calibration_0001)
#define LCE_TONE_BASE                                                M_CONC(TARGET_SENSOR, LCE_0005)
#define GMA_TONE_BASE                                                M_CONC(TARGET_SENSOR, GMA_0005)
#define DCE_TONE_BASE                                                M_CONC(TARGET_SENSOR, DCE_0005)
#define LTM_TONE_BASE                                                M_CONC(TARGET_SENSOR, LTM_0005)
#define HLR_TONE_BASE                                                M_CONC(TARGET_SENSOR, HLR_0005)
#define GMA_R3_TONE_BASE                                             M_CONC(TARGET_SENSOR, GMA_R3_0005)
#define DM_ISP_YUV_BASE                                              M_CONC(TARGET_SENSOR, DM_0234)
#define YNR_ISP_YUV_BASE                                             M_CONC(TARGET_SENSOR, YNR_0377)
#define YNR_LCE_LINK_ISP_YUV_BASE                                    M_CONC(TARGET_SENSOR, YNR_LCE_LINK_0195)
#define YNR_FD_ISP_YUV_BASE                                          M_CONC(TARGET_SENSOR, YNR_FD_0195)
#define CNR_CNR_ISP_YUV_BASE                                         M_CONC(TARGET_SENSOR, CNR_CNR_0299)
#define EE_ISP_YUV_BASE                                              M_CONC(TARGET_SENSOR, EE_0312)
#define NR3D_ISP_YUV_BASE                                            M_CONC(TARGET_SENSOR, NR3D_0221)
#define HFG_ISP_YUV_BASE                                             M_CONC(TARGET_SENSOR, HFG_0195)
#define AKS_ISP_YUV_BASE                                             M_CONC(TARGET_SENSOR, AKS_0234)
#define AD_NR_ISP_YUV_BASE                                           M_CONC(TARGET_SENSOR, AD_NR_0195)
#define DM_ISP_MFNR_BASE                                             M_CONC(TARGET_SENSOR, DM_0247)
#define YNR_ISP_MFNR_BASE                                            M_CONC(TARGET_SENSOR, YNR_0403)
#define CNR_CNR_ISP_MFNR_BASE                                        M_CONC(TARGET_SENSOR, CNR_CNR_0312)
#define EE_ISP_MFNR_BASE                                             M_CONC(TARGET_SENSOR, EE_0338)
#define LDNR_ISP_MFNR_BASE                                           M_CONC(TARGET_SENSOR, LDNR_0117)
#define CNR_CCR_ISP_MFNR_BASE                                        M_CONC(TARGET_SENSOR, CNR_CCR_0065)
#define CNR_ABF_ISP_MFNR_BASE                                        M_CONC(TARGET_SENSOR, CNR_ABF_0065)
#define MFNR_THRES_ISP_MFNR_BASE                                     M_CONC(TARGET_SENSOR, MFNR_THRES_0003)
#define MFNR_ISP_MFNR_BASE                                           M_CONC(TARGET_SENSOR, MFNR_0039)
#define BSS_ISP_MFNR_BASE                                            M_CONC(TARGET_SENSOR, BSS_0039)
#define AKS_ISP_MFNR_BASE                                            M_CONC(TARGET_SENSOR, AKS_0247)
#define SW_MSF_ISP_MFNR_BASE                                         M_CONC(TARGET_SENSOR, SW_MSF_0039)
#define MSYUV_ISP_MFNR_BASE                                          M_CONC(TARGET_SENSOR, MSYUV_0130)
#define OMC_ISP_MFNR_BASE                                            M_CONC(TARGET_SENSOR, OMC_0039)
#define YNR_ISP_LPNR_BASE                                            M_CONC(TARGET_SENSOR, YNR_0390)
#define EE_ISP_LPNR_BASE                                             M_CONC(TARGET_SENSOR, EE_0325)
#define MSYUV_ISP_LPNR_BASE                                          M_CONC(TARGET_SENSOR, MSYUV_0117)
#define MSNR_THRES_ISP_LPNR_BASE                                     M_CONC(TARGET_SENSOR, MSNR_THRES_0006)
#define CA_LTM_CA_LTM_BASE                                           M_CONC(TARGET_SENSOR, CA_LTM_0007)
#define YNR_TBL_ISP_YNR_TBL_BASE                                     M_CONC(TARGET_SENSOR, YNR_TBL_0013)

extern const AE_NVRAM_T                                              AE_AE_BASE[1];
extern const AWB_NVRAM_T                                             AWB_AWB_BASE[1];
extern const FLASH_AE_NVRAM_T                                        Flash_AE_Flash_AE_BASE[1];
extern const FLASH_AWB_NVRAM_T                                       Flash_AWB_Flash_AWB_BASE[1];
extern const FLASH_CALIBRATION_NVRAM_T                               Flash_Calibration_Flash_Calibration_BASE[1];
extern const ISP_NVRAM_LCE_TUNING_PARAM_T                            LCE_TONE_BASE[1];
extern const ISP_NVRAM_GMA_STRUCT_T                                  GMA_TONE_BASE[1];
extern const ISP_NVRAM_DCE_TUNING_PARAM_T                            DCE_TONE_BASE[1];
extern const ISP_NVRAM_LTM_TUNING_PARAM_T                            LTM_TONE_BASE[1];
extern const ISP_NVRAM_HLR_TUNING_PARAM_T                            HLR_TONE_BASE[1];
extern const ISP_NVRAM_GMA_STRUCT_T                                  GMA_R3_TONE_BASE[1];
extern const ISP_NVRAM_DM_T                                          DM_ISP_YUV_BASE[13];
extern const ISP_NVRAM_YNR_T                                         YNR_ISP_YUV_BASE[13];
extern const ISP_NVRAM_YNR_LCE_LINK_T                                YNR_LCE_LINK_ISP_YUV_BASE[13];
extern const ISP_NVRAM_YNR_FD_T                                      YNR_FD_ISP_YUV_BASE[13];
extern const ISP_NVRAM_CNR_CNR_T                                     CNR_CNR_ISP_YUV_BASE[13];
extern const ISP_NVRAM_EE_T                                          EE_ISP_YUV_BASE[13];
extern const ISP_NVRAM_NR3D_T                                        NR3D_ISP_YUV_BASE[13];
extern const FEATURE_NVRAM_HFG_T                                     HFG_ISP_YUV_BASE[13];
extern const ISP_NVRAM_AKS_T                                         AKS_ISP_YUV_BASE[13];
extern const FEATURE_NVRAM_AD_NR_T                                   AD_NR_ISP_YUV_BASE[13];
extern const ISP_NVRAM_DM_T                                          DM_ISP_MFNR_BASE[13];
extern const ISP_NVRAM_YNR_T                                         YNR_ISP_MFNR_BASE[26];
extern const ISP_NVRAM_CNR_CNR_T                                     CNR_CNR_ISP_MFNR_BASE[26];
extern const ISP_NVRAM_EE_T                                          EE_ISP_MFNR_BASE[13];
extern const ISP_NVRAM_LDNR_T                                        LDNR_ISP_MFNR_BASE[13];
extern const ISP_NVRAM_CNR_CCR_T                                     CNR_CCR_ISP_MFNR_BASE[13];
extern const ISP_NVRAM_CNR_ABF_T                                     CNR_ABF_ISP_MFNR_BASE[13];
extern const NVRAM_CAMERA_FEATURE_MFNR_THRES_STRUCT                  MFNR_THRES_ISP_MFNR_BASE[1];
extern const NVRAM_CAMERA_FEATURE_MFLL_STRUCT                        MFNR_ISP_MFNR_BASE[13];
extern const FEATURE_NVRAM_BSS_T                                     BSS_ISP_MFNR_BASE[13];
extern const ISP_NVRAM_AKS_T                                         AKS_ISP_MFNR_BASE[13];
extern const FEATURE_NVRAM_SW_MSF_T                                  SW_MSF_ISP_MFNR_BASE[13];
extern const FEATURE_NVRAM_MSYUV_T                                   MSYUV_ISP_MFNR_BASE[13];
extern const ISP_NVRAM_OMC_T                                         OMC_ISP_MFNR_BASE[13];
extern const ISP_NVRAM_YNR_T                                         YNR_ISP_LPNR_BASE[13];
extern const ISP_NVRAM_EE_T                                          EE_ISP_LPNR_BASE[13];
extern const FEATURE_NVRAM_MSYUV_T                                   MSYUV_ISP_LPNR_BASE[13];
extern const NVRAM_CAMERA_FEATURE_MSNR_THRES_STRUCT                  MSNR_THRES_ISP_LPNR_BASE[1];
extern const FEATURE_NVRAM_CA_LTM_T                                  CA_LTM_CA_LTM_BASE[1];
extern const ISP_NVRAM_YNR_LUT_T                                     YNR_TBL_ISP_YNR_TBL_BASE[13];

#endif