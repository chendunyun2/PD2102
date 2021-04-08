/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2019. All rights reserved.
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
#include "camera_custom_nvram.h"
#include "camera_custom_isp_nvram.h"

#include "inc.h"

#define Flash_Calibration_BASE                                       Flash_Calibration_Flash_Calibration_BASE

const FLASH_CALIBRATION_NVRAM_T Flash_Calibration_BASE[1] = {
    // IDX_0
    {
        .engTab = {
            .exp = 30000,//27024,
            .afe_gain = 2144,//1024,
            .isp_gain = 4096,
            .distance = 0,
            .yTab = {
				361, 704,1041,1368,1688,2001,2304,2603,2892,3176,3455,3727,3994,4255,4512,4762,5263,5729,6180,6614,7022,7414,7803,8161,8515,8837,9149,9452,9740,9999,
				//358, 703,1037,1358,1670,1975,2270,2561,2846,3124,3398,3666,3929,4187,4443,4691,5192,5666,6128,6578,7007,7420,7817,8212,8557,8887,9200,9486,9757,9999,
				//257, 542, 817,1086,1354,1618,1875,2135,2381,2636,2882,3124,3356,3592,3834,4069,4533,4955,5357,5798,6239,6589,7021,7311,7579,8063,8316,8632,8947,9246,9549,9999,
            },
        },
        .flashWBGain = {
    { 879,1085},
    { 876,1075},
    { 875,1069},
    { 876,1063},
    { 876,1057},
    { 875,1052},
    { 875,1048},
    { 878,1049},
    { 878,1044},
    { 877,1039},
    { 877,1036},
    { 877,1031},
    { 876,1028},
    { 876,1025},
    { 876,1021},
    { 876,1018},
    { 875,1011},
    { 875,1005},
    { 875, 999},
    { 875, 994},
    { 875, 989},
    { 875, 984},
    { 875, 979},
    { 875, 975},
    { 876, 971},
    { 876, 966},
    { 876, 962},
    { 876, 958},
    { 877, 955},
    { 877, 950},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
    { 512, 512},
        },
    },
};
