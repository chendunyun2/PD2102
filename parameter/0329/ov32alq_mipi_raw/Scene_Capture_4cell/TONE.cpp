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
#include "camera_custom_nvram.h"
#include "camera_custom_isp_nvram.h"

#include "inc.h"

#define LCE_BASE                                                     LCE_TONE_BASE
#define GMA_BASE                                                     GMA_TONE_BASE
#define DCE_BASE                                                     DCE_TONE_BASE
#define LTM_BASE                                                     LTM_TONE_BASE
#define HLR_BASE                                                     HLR_TONE_BASE
#define GMA_R3_BASE                                                  GMA_R3_TONE_BASE

const ISP_NVRAM_LCE_TUNING_PARAM_T LCE_BASE[1] = {
    // IDX_0
    {
        .rAutoLCEParam = {
            .rLCEBasic = {
    
                {  30,  50,  80, 120 },  // base strength LV (base10)
                { 230, 250, 315, 315 },  // dark strength base ratio
                { 400, 400, 475, 475 },  // bright strength base ratio
    
               //  LV0    LV1    LV2    LV3    LV4    LV5    LV6    LV7    LV8    LV9   LV10   LV11   LV12   LV13   LV14   LV15   LV16   LV17   LV18
                { 1450,  1600,  1650,  1700,  2100,  2100,  2100,  2100,  2100,  2100,  2100,  2150,  2150,  2150,  2150,  2150,  2150,  2150,  2150 }, // LVTarget
                {  200,   240,   350,   430,   450,   450,   450,   450,   450,   512,   512,   512,   512,   512,   512,   512,   512,   512,   512 }, // MaxLceGain
                { 2100,  2200,  2300,  2400,  2500,  2600,  2600,  2600,  2600,  2600,  2600,  2600,  2600,  2600,  2600,  2600,  2600,  2600,  2600 }  // MaxFinalTarget
            },
    
            .rLCEStats = {
                20,     //HistCCLB
                1600,   //HistCCUB
                500,    //GCEratio
                1000,   //i4TCPLB
                20000,  //I4TCPUB
                0,      //Reserve
                20,     //i4DetailRangeRatio --> base 1000
                64,     //i4CenSlopeMin
    
                600,    //DR_Low_Y_Ratio
                800,    //DR_High_Y_Ratio
                1,      //DR_CompEnable
                800,    //DR_Comp_Y_High_Ratio
                2000,   //DR_Diff_Maximum
                1000,   //DR_Diff_Minimum
                500,    //DR_Flat_Ratio_High_Bound
    
                1,      //multi-slope enable
                32,     //SlopePoint0
                64,     //SlopePoint1
                128,    //SlopePoint2
                256,    //SlopePoint3
                512,    //SlopePoint4
                51,     //SlopeLow (256 base)
    
                1536,  //SlopeHigh0 (256 base)
                1536,  //SlopeHigh1
                1536,  //SlopeHigh2
                1280,  //SlopeHigh3
                1024,  //SlopeHigh4
    
                500,  //dr base
                1,    //lcesho enable
                0,    //lcesho mode (0: 8dir, 1: 4dir)
    
                0,   //reserve0
                0,   //reserve1
                0,   //reserve2
                0,   //reserve3
                0,   //reserve4
                0,   //reserve5
                0,   //reserve6
                0,   //reserve7
    
            },
    
            .rLCELUTs = {//i4LCETbl
    
                {//  /*                                                Dark    Strength                                               */
                 //   LV0   LV1   LV2   LV3   LV4   LV5   LV6   LV7   LV8   LV9   LV10  LV11  LV12  LV13  LV14  LV15  LV16  LV17  LV18
                    { 200,  256,  256,  256,  256,  256,  256,  256,  256,  256,  320,  320,  320,  320,  320,  320,  320,  320,  320 },   //  0 DR index
                    { 256,  256,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384 },   //  1
                    { 384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384 },   //  2
                    { 448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  448 },   //  3
                    { 448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  512,  512,  512,  512,  512,  512,  512,  512,  512 },   //  4
                    { 448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  512,  512,  512,  512,  512,  512,  512,  512,  512 },   //  5
                    { 448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  512,  512,  512,  512,  512,  512,  512,  512,  512 },   //  6
                    { 448,  448,  448,  448,  448,  448,  448,  448,  448,  448,  512,  512,  512,  512,  512,  512,  512,  512,  512 },   //  7
                    { 512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  576,  512,  512,  512,  512,  512,  512,  512,  512 },   //  8
                    { 512,  512,  512,  512,  512,  512,  512,  576,  576,  576,  576,  512,  512,  512,  512,  512,  512,  512,  512 },   //  9
                    { 512,  512,  512,  512,  512,  512,  512,  576,  576,  576,  576,  512,  512,  512,  512,  512,  512,  512,  512 }    // 10
                },
    
                {//  /*                                                Bright    Strength                                               */
                 //   LV0   LV1   LV2   LV3   LV4   LV5   LV6   LV7   LV8   LV9   LV10  LV11  LV12  LV13  LV14  LV15  LV16  LV17  LV18
                    { 128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128,  128 },   //  0 DR index
                    { 256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256,  256 },   //  1
                    { 384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384,  384 },   //  2
                    { 512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512 },   //  3
                    { 512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512 },   //  4
                    { 512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512 },   //  5
                    { 512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512 },   //  6
                    { 512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512 },   //  7
                    { 512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512 },   //  8
                    { 512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512 },   //  9
                    { 512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512 }    // 10
                },
    
                { //i4CenSlopeEnhance
                  //  0   1   2   3   4   5   6   7   8   9   10   11
                      0,  3,  5, 10, 12, 16, 12, 10,  5,  3,   0,   0
                }
    
            },
    
            .rLCEPara = {
                5,    // FlatAreaPercentage
                400,  // FlatRatioTH
                0,    // dark sky protection enable
                300,  // dark sky percentage
                1700, // dark y low bound
                2000, // dark y high bound
                30,   // dark sky lv low bound
                60,   // dark sky lv high bound
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
    
                //{//  LV0    LV1    LV2    LV3    LV4    LV5    LV6    LV7    LV8    LV9   LV10   LV11   LV12   LV13   LV14   LV15   LV16   LV17   LV18
                    {   50,    50,    50,    50,    50,    50,    60,    60,    70,    90,   100,   110,   110,   110,   110,   110,   120,   130,   140 }, // 0 LVBriRatio
                    {  170,   140,   140,   387,   387,   387,   485,   542,   542,   679,   679,   679,   679,   679,   679,   679,   679,   679,   679 }, // 1 LVBriLimit
                    {  141,   141,   141,   141,   141,   141,   141,   141,   141,   141,   141,   141,   141,   141,   141,   141,   141,   141,   141 }, // 2 FlatLumaLoBound
                    {  679,   679,   679,   679,   679,   679,   679,   679,   679,   679,   679,   679,   679,   679,   679,   679,   679,   679,   679 }, // 3 FlatLumaHiBound
                    {    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0 }, // 4 i4LCEParaTbl0
                    {    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0 }, // 5 i4LCEParaTbl1
                    {    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0 }, // 6 i4LCEParaTbl2
                    {    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0 } // 7 i4LCEParaTbl3
                //}
            },
    
            .rFaceLCE = {    //i4FaceLCEPara
                1,    //LCE_FD_Enable
                128,  //LoBoundGainRatio
                128,  //HiBoundGainRatio
                1600, //DarkFaceLimit
                3000, //FrontLightTH_L
                3360, //FrontLightTH_H
                1,    //face multi-slope enable // Face SlopeCtrl Enable
                1536, //SlopeHigh0      -> 6*256 normal max
                1536, //SlopeHigh1
                1536, //SlopeHigh2
                1280, //SlopeHigh3
                1024, //SlopeHigh4
                102,  //SlopeLow        -> 0.4*256 normal min
                512,  //FaceSlopeHigh   -> 2.0*256 face max
                205,  //FaceSlopeLow    -> 0.8*256 face min
                500,  //FaceSlopIntpRat -> 1000 based slope intp ratio
                800,  //Dark face range
                71,   //FDWidthCropRat
                70,   //FDHeightCropRat
                 0,   //reserve0
                 0,   //reserve1
                 0,   //reserve2
                 0,   //reserve3
                 0,   //reserve4
                 0,   //reserve5
                 0,   //reserve6
                 0,   //reserve7
                 0,   //reserve8
                 0,   //reserve9
                      //LV0  LV2   LV4   LV6   LV8   LV10  LV12  LV14  LV16   LV0  LV2   LV4   LV6   LV8   LV10  LV12  LV14  LV16  rsv
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,  105,  105,  105,  105,  105,  105,  105,  105,  105,    0 },   //  i4LCEfaceTbl0  // Bright blend ratio, 1000 based // BrightTH by LV
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl1  // Dark linear ratio, 1000 based
                      //LV0  LV1   LV2   LV3   LV4   LV5   LV6   LV7   LV8   LV9  LV10  LV11  LV12  LV13  LV14  LV15  LV16  LV17  LV18
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl2  // Gain Diff Low
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl3  // Gain Diff High
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl4  // Blend Low
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl5  // Blend High
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl6  // Face DR Low
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl7  // Face DR High
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl8  // Slope Adjust Low
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl9  // Slope Adjust High
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl10 // Face Bright Low
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl11 // Face Bright High
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl12 // Slope Strength Low
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl13 // Slope Strength High
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl14
                {        0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4LCEfaceTbl15
    
                {     //i4CenSlopeEnhance
                      //  0   1   2   3   4   5   6   7   8   9   10   11
                          0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   0,   0
                },
                1,    //bFaceLCESmoothLinkEnable
                0,    //u4RobustFaceSlowSpeedCnt
                20,   //i4RobustFaceSmoothSpeed
                10,   //i4RobustFaceSmoothSlowSpeed
                5,    //i4RobustTargetUpdateFrame
                3,    //u4FaceLCEStableMaxCnt
                0,    //i4FaceLCEInStableThd
                0,    //i4FaceLCEOutStableThd
                0,    //reserve
                0,    //reserve
                0,    //reserve
                0     //reserve
            },
    
            .rMultiCamSync = {
                0,        // enableSync
                10,       // zoomBase, 1x = 10, 5x = 50, 0.6x = 6
                {         //syncWin[4][4] Record Tele in Wide Window position, and Wide in UltraWide window position.
                    { 0, 0, 0, 0},{ 0, 0, 0, 0},{ 0, 0, 0, 0},{ 0, 0, 0, 0}
                },
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} //reserve[10]
            },
    
            .rLCECustom = {  // rLCECustom
                1,   // calculate lce current gain enable (for 3rd party HDR)
                128, // max_lce_gain_ratio
                30,  //max pline threshold
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
                0,   //reserve
    
             // rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv   rsv
                { 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4ReserveTbl0
                { 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4ReserveTbl1
                { 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4ReserveTbl2
                { 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },   //  i4ReserveTbl3
            },
    
            .rLCESmooth = {  // rLCESmooth
                1,        // bSmoothEnable
                70,       // i4LCEPosSpeed
                10,       // i4LCENegSpeed
                10,       // i4LCECrosPosSpeed
                10,       // i4LCECrosNegSpeed
                10,       //i4LCESpeed4AEStable
                10,       //minimum ev step
                0,        //reserve0
                0,        //reserve1
                0,        //reserve2
                0,        //reserve3
                0,        //reserve4
                0,        //reserve5
                0,        //reserve6
                0,        //reserve7
                0,        //reserve8
                0,        //reserve9
                0,        //reserve10
                0,        //reserve11
                0,        //reserve12
                0,        //reserve13
                0         //reserve14
                }
            }
    },
};
const ISP_NVRAM_GMA_STRUCT_T GMA_BASE[1] = {
    // IDX_0
    {
         .GGM_Reg = {
            {.set={
            0x00000000, 0x00802008, 0x01004010, 0x01806018, 0x02008020, 0x0280A028, 0x0300C030, 0x0380E038, 0x04010040, 0x04812048, 
		    0x05014050, 0x05816058, 0x06018060, 0x06619866, 0x06C1B06C, 0x0741D074, 0x07C1F07C, 0x08421084, 0x08C2308C, 0x09224892, 
			0x09826098, 0x0A0280A0, 0x0A82A0A8, 0x0B02C0B0, 0x0B82E0B8, 0x0BE2F8BE, 0x0C4310C4, 0x0CC330CC, 0x0D4350D4, 0x0DA368DA, 
			0x0E0380E0, 0x0E83A0E8, 0x0F03C0F0, 0x0F83E0F8, 0x10040100, 0x10641906, 0x10C4310C, 0x11445114, 0x11C4711C, 0x12248922, 
			0x1284A128, 0x12E4B92E, 0x1344D134, 0x1384E138, 0x13C4F13C, 0x14250942, 0x14852148, 0x14E5394E, 0x15455154, 0x15A5695A, 
			0x16058160, 0x16659966, 0x16C5B16C, 0x1725C972, 0x1785E178, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18E6398E, 
			0x19465194, 0x19866198, 0x19C6719C, 0x1A0681A0, 0x1A4691A4, 0x1AC6B1AC, 0x1B46D1B4, 0x1BC6F1BC, 0x1C4711C4, 0x1CC731CC, 
			0x1D4751D4, 0x1D8761D8, 0x1E0781E0, 0x1E87A1E8, 0x1EC7B1EC, 0x1F47D1F4, 0x1F87E1F8, 0x20080200, 0x20481204, 0x20C8320C, 
			0x21084210, 0x21886218, 0x21C8721C, 0x22489224, 0x22C8B22C, 0x2308C230, 0x2388E238, 0x23C8F23C, 0x24491244, 0x24892248, 
			0x25094250, 0x25495254, 0x25896258, 0x25C9725C, 0x26499264, 0x2689A268, 0x26C9B26C, 0x2749D274, 0x27C9F27C, 0x288A2288, 
			0x290A4290, 0x298A6298, 0x2A0A82A0, 0x2A8AA2A8, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C4B12C4, 0x2CCB32CC, 0x2D0B42D0, 
			0x2D8B62D8, 0x2DCB72DC, 0x2E0B82E0, 0x2E8BA2E8, 0x2ECBB2EC, 0x2F4BD2F4, 0x2F8BE2F8, 0x300C0300, 0x304C1304, 0x30CC330C, 
			0x310C4310, 0x314C5314, 0x31CC731C, 0x320C8320, 0x324C9324, 0x328CA328, 0x32CCB32C, 0x330CC330, 0x334CD334, 0x338CE338, 
			0x338CE338, 0x33CCF33C, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 0x358D6358, 0x35CD735C, 
			0x364D9364, 0x368DA368, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x374DD374, 0x374DD374, 0x378DE378, 0x37CDF37C, 0x380E0380, 
			0x380E0380, 0x384E1384, 0x388E2388, 0x38CE338C, 0x38CE338C, 0x390E4390, 0x394E5394, 0x398E6398, 0x398E6398, 0x39CE739C, 
			0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B4ED3B4, 0x3B8EE3B8, 0x3BCEF3BC, 
			0x3C0F03C0, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3CCF33CC, 0x3D0F43D0, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 
			0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F4FD3F4, 
			0x3F8FE3F8, 0x3FCFF3FC
        }},
            {.set={
            0x00000000, 0x00802008, 0x01004010, 0x01806018, 0x02008020, 0x0280A028, 0x0300C030, 0x0380E038, 0x04010040, 0x04812048, 
			0x05014050, 0x05816058, 0x06018060, 0x06619866, 0x06C1B06C, 0x0741D074, 0x07C1F07C, 0x08421084, 0x08C2308C, 0x09224892, 
			0x09826098, 0x0A0280A0, 0x0A82A0A8, 0x0B02C0B0, 0x0B82E0B8, 0x0BE2F8BE, 0x0C4310C4, 0x0CC330CC, 0x0D4350D4, 0x0DA368DA, 
			0x0E0380E0, 0x0E83A0E8, 0x0F03C0F0, 0x0F83E0F8, 0x10040100, 0x10641906, 0x10C4310C, 0x11445114, 0x11C4711C, 0x12248922, 
			0x1284A128, 0x12E4B92E, 0x1344D134, 0x1384E138, 0x13C4F13C, 0x14250942, 0x14852148, 0x14E5394E, 0x15455154, 0x15A5695A, 
			0x16058160, 0x16659966, 0x16C5B16C, 0x1725C972, 0x1785E178, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18E6398E, 
			0x19465194, 0x19866198, 0x19C6719C, 0x1A0681A0, 0x1A4691A4, 0x1AC6B1AC, 0x1B46D1B4, 0x1BC6F1BC, 0x1C4711C4, 0x1CC731CC, 
			0x1D4751D4, 0x1D8761D8, 0x1E0781E0, 0x1E87A1E8, 0x1EC7B1EC, 0x1F47D1F4, 0x1F87E1F8, 0x20080200, 0x20481204, 0x20C8320C, 
			0x21084210, 0x21886218, 0x21C8721C, 0x22489224, 0x22C8B22C, 0x2308C230, 0x2388E238, 0x23C8F23C, 0x24491244, 0x24892248, 
			0x25094250, 0x25495254, 0x25896258, 0x25C9725C, 0x26499264, 0x2689A268, 0x26C9B26C, 0x2749D274, 0x27C9F27C, 0x288A2288, 
			0x290A4290, 0x298A6298, 0x2A0A82A0, 0x2A8AA2A8, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C4B12C4, 0x2CCB32CC, 0x2D0B42D0, 
			0x2D8B62D8, 0x2DCB72DC, 0x2E0B82E0, 0x2E8BA2E8, 0x2ECBB2EC, 0x2F4BD2F4, 0x2F8BE2F8, 0x300C0300, 0x304C1304, 0x30CC330C, 
			0x310C4310, 0x314C5314, 0x31CC731C, 0x320C8320, 0x324C9324, 0x328CA328, 0x32CCB32C, 0x330CC330, 0x334CD334, 0x338CE338, 
			0x338CE338, 0x33CCF33C, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 0x358D6358, 0x35CD735C, 
			0x364D9364, 0x368DA368, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x374DD374, 0x374DD374, 0x378DE378, 0x37CDF37C, 0x380E0380, 
			0x380E0380, 0x384E1384, 0x388E2388, 0x38CE338C, 0x38CE338C, 0x390E4390, 0x394E5394, 0x398E6398, 0x398E6398, 0x39CE739C, 
			0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B4ED3B4, 0x3B8EE3B8, 0x3BCEF3BC, 
			0x3C0F03C0, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3CCF33CC, 0x3D0F43D0, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 
			0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F4FD3F4, 
			0x3F8FE3F8, 0x3FCFF3FC 
        }},
            {.set={
            0x00000000, 0x00802008, 0x01004010, 0x01806018, 0x02008020, 0x0280A028, 0x0300C030, 0x0380E038, 0x04010040, 0x04812048, 
			0x05014050, 0x05816058, 0x06018060, 0x06619866, 0x06C1B06C, 0x0741D074, 0x07C1F07C, 0x08421084, 0x08C2308C, 0x09224892, 
			0x09826098, 0x0A0280A0, 0x0A82A0A8, 0x0B02C0B0, 0x0B82E0B8, 0x0BE2F8BE, 0x0C4310C4, 0x0CC330CC, 0x0D4350D4, 0x0DA368DA, 
			0x0E0380E0, 0x0E83A0E8, 0x0F03C0F0, 0x0F83E0F8, 0x10040100, 0x10641906, 0x10C4310C, 0x11445114, 0x11C4711C, 0x12248922, 
			0x1284A128, 0x12E4B92E, 0x1344D134, 0x1384E138, 0x13C4F13C, 0x14250942, 0x14852148, 0x14E5394E, 0x15455154, 0x15A5695A, 
			0x16058160, 0x16659966, 0x16C5B16C, 0x1725C972, 0x1785E178, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18E6398E, 
			0x19465194, 0x19866198, 0x19C6719C, 0x1A0681A0, 0x1A4691A4, 0x1AC6B1AC, 0x1B46D1B4, 0x1BC6F1BC, 0x1C4711C4, 0x1CC731CC, 
			0x1D4751D4, 0x1D8761D8, 0x1E0781E0, 0x1E87A1E8, 0x1EC7B1EC, 0x1F47D1F4, 0x1F87E1F8, 0x20080200, 0x20481204, 0x20C8320C, 
			0x21084210, 0x21886218, 0x21C8721C, 0x22489224, 0x22C8B22C, 0x2308C230, 0x2388E238, 0x23C8F23C, 0x24491244, 0x24892248, 
			0x25094250, 0x25495254, 0x25896258, 0x25C9725C, 0x26499264, 0x2689A268, 0x26C9B26C, 0x2749D274, 0x27C9F27C, 0x288A2288, 
			0x290A4290, 0x298A6298, 0x2A0A82A0, 0x2A8AA2A8, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C4B12C4, 0x2CCB32CC, 0x2D0B42D0, 
			0x2D8B62D8, 0x2DCB72DC, 0x2E0B82E0, 0x2E8BA2E8, 0x2ECBB2EC, 0x2F4BD2F4, 0x2F8BE2F8, 0x300C0300, 0x304C1304, 0x30CC330C, 
			0x310C4310, 0x314C5314, 0x31CC731C, 0x320C8320, 0x324C9324, 0x328CA328, 0x32CCB32C, 0x330CC330, 0x334CD334, 0x338CE338, 
			0x338CE338, 0x33CCF33C, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 0x358D6358, 0x35CD735C, 
			0x364D9364, 0x368DA368, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x374DD374, 0x374DD374, 0x378DE378, 0x37CDF37C, 0x380E0380, 
			0x380E0380, 0x384E1384, 0x388E2388, 0x38CE338C, 0x38CE338C, 0x390E4390, 0x394E5394, 0x398E6398, 0x398E6398, 0x39CE739C, 
			0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B4ED3B4, 0x3B8EE3B8, 0x3BCEF3BC, 
			0x3C0F03C0, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3CCF33CC, 0x3D0F43D0, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 
			0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F4FD3F4, 
			0x3F8FE3F8, 0x3FCFF3FC 
        }},
            {.set={
    	    0x00000000, 0x00802008, 0x01004010, 0x01806018, 0x02008020, 0x0280A028, 0x0300C030, 0x0380E038, 0x04010040, 0x04812048, 
			0x05014050, 0x05816058, 0x06018060, 0x06619866, 0x06C1B06C, 0x0741D074, 0x07C1F07C, 0x08421084, 0x08C2308C, 0x09224892, 
			0x09826098, 0x0A0280A0, 0x0A82A0A8, 0x0B02C0B0, 0x0B82E0B8, 0x0BE2F8BE, 0x0C4310C4, 0x0CC330CC, 0x0D4350D4, 0x0DA368DA, 
			0x0E0380E0, 0x0E83A0E8, 0x0F03C0F0, 0x0F83E0F8, 0x10040100, 0x10641906, 0x10C4310C, 0x11445114, 0x11C4711C, 0x12248922, 
			0x1284A128, 0x12E4B92E, 0x1344D134, 0x1384E138, 0x13C4F13C, 0x14250942, 0x14852148, 0x14E5394E, 0x15455154, 0x15A5695A, 
			0x16058160, 0x16659966, 0x16C5B16C, 0x1725C972, 0x1785E178, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18E6398E, 
			0x19465194, 0x19866198, 0x19C6719C, 0x1A0681A0, 0x1A4691A4, 0x1AC6B1AC, 0x1B46D1B4, 0x1BC6F1BC, 0x1C4711C4, 0x1CC731CC, 
			0x1D4751D4, 0x1D8761D8, 0x1E0781E0, 0x1E87A1E8, 0x1EC7B1EC, 0x1F47D1F4, 0x1F87E1F8, 0x20080200, 0x20481204, 0x20C8320C, 
			0x21084210, 0x21886218, 0x21C8721C, 0x22489224, 0x22C8B22C, 0x2308C230, 0x2388E238, 0x23C8F23C, 0x24491244, 0x24892248, 
			0x25094250, 0x25495254, 0x25896258, 0x25C9725C, 0x26499264, 0x2689A268, 0x26C9B26C, 0x2749D274, 0x27C9F27C, 0x288A2288, 
			0x290A4290, 0x298A6298, 0x2A0A82A0, 0x2A8AA2A8, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C4B12C4, 0x2CCB32CC, 0x2D0B42D0, 
			0x2D8B62D8, 0x2DCB72DC, 0x2E0B82E0, 0x2E8BA2E8, 0x2ECBB2EC, 0x2F4BD2F4, 0x2F8BE2F8, 0x300C0300, 0x304C1304, 0x30CC330C, 
			0x310C4310, 0x314C5314, 0x31CC731C, 0x320C8320, 0x324C9324, 0x328CA328, 0x32CCB32C, 0x330CC330, 0x334CD334, 0x338CE338, 
			0x338CE338, 0x33CCF33C, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 0x358D6358, 0x35CD735C, 
			0x364D9364, 0x368DA368, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x374DD374, 0x374DD374, 0x378DE378, 0x37CDF37C, 0x380E0380, 
			0x380E0380, 0x384E1384, 0x388E2388, 0x38CE338C, 0x38CE338C, 0x390E4390, 0x394E5394, 0x398E6398, 0x398E6398, 0x39CE739C, 
			0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B4ED3B4, 0x3B8EE3B8, 0x3BCEF3BC, 
			0x3C0F03C0, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3CCF33CC, 0x3D0F43D0, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 
			0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F4FD3F4, 
			0x3F8FE3F8, 0x3FCFF3FC 
        }}
          },
          .rGmaParam =  {
             // Normal Preview
               eISP_DYNAMIC_GMA_MODE,  // eGMAMode
               8,                  // i4LowContrastThr
               80,                  // i4LowContrastRatio
               3,                  // i4LowContrastSeg
               {
                   {   // i4ContrastWeightingTbl
                       //  0   1   2    3    4    5    6    7    8    9    10
                          50, 80, 100, 100, 100, 100, 100, 100, 100, 100, 100
                   },
                   {   // i4LVWeightingTbl
                       //LV0   1   2   3   4   5   6   7   8   9   10   11   12   13   14   15   16   17   18   19
                           0,  0,  0,  0,  0,  0,  0,  0, 33, 66, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100
                       //  0,  0,  0,  0,  0, 33, 33, 33, 33, 33,  80,  100, 100, 100, 100, 100, 100, 100, 100, 100
                   },
                   {   // i4NightContrastWtTbl
                       //  0   1   2    3    4    5    6    7    8    9    10
                        //  50, 50, 50, 50,  50, 30, 20,  15,   0,   0,   0
                     85, 85, 75, 50,  50, 30, 20,  15,   0,   0,   0
                   },
                   {   // i4NightLVWtTbl
                       //LV0   1    2    3   4   5   6   7   8   9   10   11   12   13   14   15   16   17   18   19
                       //  50,  50,  50,  40, 40, 40, 30, 30,  0,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  0
                          100, 100, 100, 100, 80, 50, 20, 0,  0,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  0
                   }
               },
               {
                   1,      // i4Enable
                   0,      // i4WaitAEStable
                   1       // i4Speed
               },
               {
                   0,      // i4Enable
                   51801,  // i4CenterPt
                   0,      // i4LowPercent //Enable Dualcam Gamma sync
                   100000, // i4LowCurve100
                   100000, // i4HighCurve100
                   50,     // i4HighPercent
                   100,    // i4SlopeH100
                   0       // i4SlopeL100
               },
               {
                   0       // rGMAFlare.i4Enable
               }
            }
    },
};
const ISP_NVRAM_DCE_TUNING_PARAM_T DCE_BASE[1] = {
    // IDX_0
    {
        .rDceParam =
            0,      //disable DCE
            10,    //smooth speed
            2,      //dce sub-hist num
            950,    //dce_flat_ratio_thd_h
            717,    //dce_flat_ratio_thd_l
            0,      //reserve
            0,      //reserve
            {
                    0,      //dce_flat_prot_flag for sub-hist1
                    0,      //dce_flat_prot_flag for sub-hist2
                    0,      //dce_flat_prot_flag for sub-hist3
                    {
                            //LV0   LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9     LV10    LV11    LV12    LV13    LV14    LV15    LV16    LV17    LV18   
                            {1100,  1200,   1300,   1600,   1800,   2000,   2000,   2000,   2048,   2200,   2250,   2350,   2350,   2480,   2600,   2700,   2800,   2900,   3096    },//0 slope constrain
                            {0,     0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0       }, // high bound ratio
                            {0,     0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0       }, // low bound ratio
                    }
            },
            {
                    //contrast strength in sub-hist 1
                    {
                            //LV0   LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9     LV10    LV11    LV12    LV13    LV14    LV15    LV16    LV17    LV18    DR
                            {0,     5,      10,     64,    128,     256,    256,    256,    256,    256,    350,    350,    350,    350,    350,    350,     95,      0,      0}, //0
                            {0,     5,      10,     64,    128,     256,    256,    256,    256,    256,    350,    350,    350,    350,    350,    350,     95,      0,      0}, //1
                            {0,     5,      10,     64,    128,     256,    256,    256,    256,    256,    350,    350,    350,    350,    350,    350,     95,      0,      0}, //2
                            {0,     5,      10,     64,    128,     256,    256,    256,    256,    256,    350,    350,    350,    350,    350,    350,     95,      0,      0}, //3
                            {0,     5,      10,     64,    128,     256,    256,    256,    256,    256,    350,    350,    350,    350,    350,    350,     95,      0,      0}, //4
                            {0,     3,      9,      64,    128,     256,    256,    256,    256,    256,    350,    350,    350,    350,    350,    350,     95,      0,      0}, //5
                            {0,     2,      8,      64,    128,     256,    256,    256,    256,    256,    350,    350,    350,    350,    350,    350,     80,      0,      0}, //6
                            {0,     1,      7,      64,    128,     256,    256,    256,    256,    256,    350,    350,    350,    350,    350,    350,     75,      0,      0}, //7
                            {0,     1,      7,      64,    128,     256,    256,    256,    256,    256,    350,    350,    350,    350,    350,    350,     69,      0,      0}, //8
                            {0,     1,      7,      64,    128,     256,    256,    256,    256,    256,    350,    350,    350,    350,    350,    350,     64,      0,      0}, //9
                            {0,     1,      7,      64,    128,     256,    256,    256,    256,    256,    350,    350,    350,    350,    350,    350,     64,      0,      0}, //10
                    },
                    //contrast strength in sub-hist 2
                    {
                            //LV0   LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9     LV10    LV11    LV12    LV13    LV14    LV15    LV16    LV17    LV18    DR
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    350,    350,    350,    380,    380,    380,     95,      0,      0}, //0
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    350,    350,    350,    380,    380,    380,     95,      0,      0}, //1
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    350,    350,    350,    380,    380,    380,     95,      0,      0}, //2
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    350,    350,    350,    380,    380,    380,     95,      0,      0}, //3
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    350,    350,    350,    380,    380,    380,     95,      0,      0}, //4
                            {0,     3,      10,     100,    250,    350,    350,    350,    350,    350,    350,    350,    350,    380,    380,    380,     95,      0,      0}, //5
                            {0,     2,      8,      100,    250,    350,    350,    350,    350,    350,    350,    350,    350,    380,    380,    320,     80,      0,      0}, //6
                            {0,     1,      7,      100,    250,    350,    350,    350,    350,    350,    350,    350,    350,    380,    380,    300,     75,      0,      0}, //7
                            {0,     0,      5,      100,    250,    350,    350,    350,    350,    350,    350,    350,    350,    380,    380,    278,     69,      0,      0}, //8
                            {0,     0,      5,      100,    250,    350,    350,    350,    350,    350,    350,    350,    350,    380,    380,    256,     64,      0,      0}, //9
                            {0,     0,      5,      100,    250,    350,    350,    350,    350,    350,    350,    350,    350,    380,    380,    256,     64,      0,      0}, //10
                    },
                    //contrast strength in sub-hist 3
                    {
                            //LV0   LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9     LV10    LV11    LV12    LV13    LV14    LV15    LV16    LV17    LV18    DR
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //0
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //1
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //2
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //3
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //4
                            {0,     3,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //5
                            {0,     2,      8,      100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //6
                            {0,     1,      7,      100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //7
                            {0,     0,      5,      100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //8
                            {0,     0,      5,      100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //9
                            {0,     0,      5,      100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //10
                    },
                    //contrast strength in face
                    {
                            //LV0   LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9     LV10    LV11    LV12    LV13    LV14    LV15    LV16    LV17    LV18    DR
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //0
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //1
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //2
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //3
                            {0,     5,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //4
                            {0,     3,      10,     100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //5
                            {0,     2,      8,      100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //6
                            {0,     1,      7,      100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //7
                            {0,     0,      5,      100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //8
                            {0,     0,      5,      100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //9
                            {0,     0,      5,      100,    250,    350,    350,    350,    350,    350,    700,    700,    700,    700,    700,    700,    175,      0,      0}, //10
                    }
            },
            {
                   0,//dce_rsv0
                   1,//dce_rsv1 // dce_face_enable
                   5,//dce_rsv2 // dce_face_lv_l
                  10,//dce_rsv3 // dce_face_lv_h
                 100,//dce_rsv4 // dce_face_dark_blend_ratio_l
                 100,//dce_rsv5 // dce_face_dark_blend_ratio_h
                 100,//dce_rsv6 // dce_face_middle_blend_ratio_l
                 100,//dce_rsv7 // dce_face_middle_blend_ratio_h
                  75,//dce_rsv8 // dce_face_bright_blend_ratio_l
                   0,//dce_rsv9 // dce_face_bright_blend_ratio_h
                   {
                            //LV0   LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9     LV10    LV11    LV12    LV13    LV14    LV15    LV16    LV17    LV18   
                            {0,     0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0    }, //0 slope constrain
                            {0,     0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0    }, //1
                    }
            }
    },
};
const ISP_NVRAM_LTM_TUNING_PARAM_T LTM_BASE[1] = {
    // IDX_0
    {
            .rAutoLTMParam = {
                LTM_MODE_LOCAL,    /* local_tone_mode */
                /* global tone info */
                10,    /* clipping_thd_perc */
                500,    /* high_bound_perc */
                /* strut mid_perc_lut */
                {
                    2,
                    {    600,    900 }
                },
                //   LV0     LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9    LV10    LV11    LV12    LV13
                {     20,     20,     20,     20,     20,     20,     20,     20,     20,     20,     20,     20,     20,     20 },    /* gct_limit_ratio */
                4095,    /* fix_clipping_thd */
                4095,    /* fix_turning_point */
                0,    /* fix_gtc_blending_ratio */
                /* local tone info */
                //   LV0     LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9    LV10    LV11    LV12    LV13
                {    300,    300,    300,    300,    300,    300,    300,    300,    300,    300,    300,    300,    400,    500 },    /* strength_lct */
                {   2500,   4095 },    /* strength_ltp_mean_idx */
                /* strength_ltp */
                {
                    //   LV0     LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9    LV10    LV11    LV12    LV13
                    {     80,     80,     80,     80,     80,     80,     80,     80,     80,     80,     80,     80,     80,     80 },
                    {     20,     20,     20,     20,     20,     20,     20,     20,     20,     20,     20,     20,     20,     20 }
                },
                /* struct local_global_blending */
                {
                    {   4095,   6000 },
                    {    100,     80 },
                    //   LV0     LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9    LV10    LV11    LV12    LV13
                    {     80,     80,     80,     80,     80,     80,     80,     80,     80,     80,     80,     80,     80,     80 }
                },
                /* face tone info */
                1,    /* ltm_face_protection_enable */
                1,    /* multi_face_protection_enable */
                0,    /* ltm_face_state_link_enable */
                1,    /* ltm_face_ct_enable */
                0,    /* fcae_ct_size_prob */
                1,    /* fcae_ct_perc */
                //   LV0     LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9    LV10    LV11    LV12    LV13
                {     96,     96,     96,     96,     96,     96,     96,     96,     96,     96,     96,     96,     96,     96 },    /* fcae_ct_blending_ratio */
                1,    /* ltm_face_tp_enable */
                500,    /* non_robust_face_turning_point_reduction_ratio */
                200,    /* face_ratio_low_bound */
                400,    /* face_ratio_high_bound */
                //   LV0     LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9    LV10    LV11    LV12    LV13
                {   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000 },    /* face_protection_strength */
                /* spatial smooth */
                1,    /* spatial_smooth_enable */
                /* spatial_smooth_strength_table */
                {      0,  65535 },
                {   //   LV0     LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9    LV10    LV11    LV12    LV13
                    {   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000 },
                    {  20000,  20000,  20000,  20000,  20000,  20000,  20000,  20000,  20000,  20000,  20000,  20000,  10000,   1000 }
                },
                /* spatial_smooth_diff_table */
                {    600,    950,   1100,   2000 },
                /* spatial_smooth_variance_table */
                {      0,   5000,  65535,  70000 },
                {   1000,   1000,   1000,   1000 },
                /* face spatial smooth */
                0,        /* ltm_face_spatial_smooth_enable */
                /* ltm_b2f_turning_point_diff_spatial_smooth_weighting_table */
                {   //   LV0     LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9    LV10    LV11    LV12    LV13
                    {      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },    // x1
                    {   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000 },    // x2
                    {      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },    // y1
                    {      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 }     // y2
                },
                /* ltm_b2f_distance_reduction_ratio */
                {   1000,    500 },
                /* ltm_f2b_turning_point_diff_spatial_smooth_weighting_table */
                {   //   LV0     LV1     LV2     LV3     LV4     LV5     LV6     LV7     LV8     LV9    LV10    LV11    LV12    LV13
                    {      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },    // x1
                    {   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000,   1000 },    // x2
                    {      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },    // y1
                    {      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 }     // y2
                },
                /* ltm_f2b_distance_reduction_ratio */
                {   1000,    500 },
    
                /* multicamSync */
                {
                    0,    /* enableSync */
                    10,    /* zoomBase, 1x = 10, 5x = 50, 0.6x = 6 */
                    {    /* syncWin[4][4]   Record Tele in Wide Window position, and Wide in UltraWide window position */
                        {      0,      0,      0,      0 },
                        {      0,      0,      0,      0 },
                        {      0,      0,      0,      0 },
                        {      0,      0,      0,      0 }
                    }
                },
    
                /* table */
                {      0,      0,      1,      0,      2,     14,     32 },
    
                /* reserve - HDR */
                {
                    {    300,    300,    100,    100,      3,      0,    300,    300,    100,    100,      3,      0,     10,     10 },
                    {    300,    500,   1000,    100,     35,     10,     10,      5,      0,      0,      0,      0,      0,      0 },
                    {      1,      1,      0,      1,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },
                    {     96,     96,     96,     96,     96,     96,     96,     96,     96,     96,     96,     96,     96,     96 },
                    {      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 },
                    {      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0,      0 }
                },
    
                /* temporal Smooth */
                /* struct ltms_lock */
                {
                    300,
                    300,
                    0,
                    0,
                    3,
                    0
                },
                /* struct global_tone_lock */
                {
                    300,
                    300,
                    100,
                    100,
                    3,
                    0
                },
                /* struct local_tone_lock */
                {
                    300,
                    300,
                    100,
                    100,
                    3,
                    0
                },
                /* struct smooth_speed */
                {
                    40,
                    40,
                    40,
                    60
                },
                /* struct face_smooth_speed */
                {
                    40,
                    40,
                    40,
                    60
                },
                10,    /* ct_stable_thd */
                10,    /* tp_stable_thd */
                5,    /* pline_boudary_thd */
                /* pline_delta_ev_speed */
                { 300,    500,   1000 },
                { 100,     35,     10 },
                2,    /* delta_cwr_thsouhld */
                2    /* max_index_count_thsouhld */
            }
    },
};
const ISP_NVRAM_HLR_TUNING_PARAM_T HLR_BASE[1] = {
    // IDX_0
    {
        .rAutoHLRParam={
                //   LV00    LV01    LV02    LV03  
                { 0,      30,      85,      120 },  //Not support negative lv
                                                    //   Low  Mid  High   
    			{	2200,3400,5800 },
                HLR_MODE_ON,      //HLR_ON_OFF
                {
                    0,
                    1024,
                    2304,
                    3136,
                    3600,
                    3844,
                    3969,
                    4096,
                    18,
    				1,
                    16,
                    16,
                    4,
                    0,
                },
                {
                    //Low CT
                    {   // LV00       LV01       LV02      LV03 
                        { 16,12,2 },{ 16,14,2 },{ 16,16,4 },{ 16,16,4 }
                    },
            //Mid CT
                    {   // LV00       LV01       LV02      LV03
                        { 14,14,2 },{ 14,14,2 },{ 16,16,4 },{ 16,16,4 }
                    },
            //High CT
                    {   // LV00       LV01       LV02      LV03
                        { 14,16,2 },{ 16,16,2 },{ 16,16,4 },{ 16,16,4 }
                    },
                },
            //Reserve
                {
                    { 0,0,0 },{ 0,0,0 },{ 0,0,0 },{ 0,0,0 }
                },
    		    0,//Reserve0
    		    0,//Reserve1
    		    0,//Reserve2
    		    0,//Reserve3
    		    0,//Reserve4
    		    0,//Reserve5
    		    0,//Reserve6   
    		    0,//Reserve7
            }
    },
};
const ISP_NVRAM_GMA_STRUCT_T GMA_R3_BASE[1] = {
    // IDX_0
    {
      .GGM_Reg = {
            {.set={
            0x00000000, 0x00802008, 0x01004010, 0x01806018, 0x02008020, 0x0280A028, 0x0300C030, 0x0380E038, 0x04010040, 0x04812048, 
		    0x05014050, 0x05816058, 0x06018060, 0x06619866, 0x06C1B06C, 0x0741D074, 0x07C1F07C, 0x08421084, 0x08C2308C, 0x09224892, 
			0x09826098, 0x0A0280A0, 0x0A82A0A8, 0x0B02C0B0, 0x0B82E0B8, 0x0BE2F8BE, 0x0C4310C4, 0x0CC330CC, 0x0D4350D4, 0x0DA368DA, 
			0x0E0380E0, 0x0E83A0E8, 0x0F03C0F0, 0x0F83E0F8, 0x10040100, 0x10641906, 0x10C4310C, 0x11445114, 0x11C4711C, 0x12248922, 
			0x1284A128, 0x12E4B92E, 0x1344D134, 0x1384E138, 0x13C4F13C, 0x14250942, 0x14852148, 0x14E5394E, 0x15455154, 0x15A5695A, 
			0x16058160, 0x16659966, 0x16C5B16C, 0x1725C972, 0x1785E178, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18E6398E, 
			0x19465194, 0x19866198, 0x19C6719C, 0x1A0681A0, 0x1A4691A4, 0x1AC6B1AC, 0x1B46D1B4, 0x1BC6F1BC, 0x1C4711C4, 0x1CC731CC, 
			0x1D4751D4, 0x1D8761D8, 0x1E0781E0, 0x1E87A1E8, 0x1EC7B1EC, 0x1F47D1F4, 0x1F87E1F8, 0x20080200, 0x20481204, 0x20C8320C, 
			0x21084210, 0x21886218, 0x21C8721C, 0x22489224, 0x22C8B22C, 0x2308C230, 0x2388E238, 0x23C8F23C, 0x24491244, 0x24892248, 
			0x25094250, 0x25495254, 0x25896258, 0x25C9725C, 0x26499264, 0x2689A268, 0x26C9B26C, 0x2749D274, 0x27C9F27C, 0x288A2288, 
			0x290A4290, 0x298A6298, 0x2A0A82A0, 0x2A8AA2A8, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C4B12C4, 0x2CCB32CC, 0x2D0B42D0, 
			0x2D8B62D8, 0x2DCB72DC, 0x2E0B82E0, 0x2E8BA2E8, 0x2ECBB2EC, 0x2F4BD2F4, 0x2F8BE2F8, 0x300C0300, 0x304C1304, 0x30CC330C, 
			0x310C4310, 0x314C5314, 0x31CC731C, 0x320C8320, 0x324C9324, 0x328CA328, 0x32CCB32C, 0x330CC330, 0x334CD334, 0x338CE338, 
			0x338CE338, 0x33CCF33C, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 0x358D6358, 0x35CD735C, 
			0x364D9364, 0x368DA368, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x374DD374, 0x374DD374, 0x378DE378, 0x37CDF37C, 0x380E0380, 
			0x380E0380, 0x384E1384, 0x388E2388, 0x38CE338C, 0x38CE338C, 0x390E4390, 0x394E5394, 0x398E6398, 0x398E6398, 0x39CE739C, 
			0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B4ED3B4, 0x3B8EE3B8, 0x3BCEF3BC, 
			0x3C0F03C0, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3CCF33CC, 0x3D0F43D0, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 
			0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F4FD3F4, 
			0x3F8FE3F8, 0x3FCFF3FC
        }},
            {.set={
            0x00000000, 0x00802008, 0x01004010, 0x01806018, 0x02008020, 0x0280A028, 0x0300C030, 0x0380E038, 0x04010040, 0x04812048, 
			0x05014050, 0x05816058, 0x06018060, 0x06619866, 0x06C1B06C, 0x0741D074, 0x07C1F07C, 0x08421084, 0x08C2308C, 0x09224892, 
			0x09826098, 0x0A0280A0, 0x0A82A0A8, 0x0B02C0B0, 0x0B82E0B8, 0x0BE2F8BE, 0x0C4310C4, 0x0CC330CC, 0x0D4350D4, 0x0DA368DA, 
			0x0E0380E0, 0x0E83A0E8, 0x0F03C0F0, 0x0F83E0F8, 0x10040100, 0x10641906, 0x10C4310C, 0x11445114, 0x11C4711C, 0x12248922, 
			0x1284A128, 0x12E4B92E, 0x1344D134, 0x1384E138, 0x13C4F13C, 0x14250942, 0x14852148, 0x14E5394E, 0x15455154, 0x15A5695A, 
			0x16058160, 0x16659966, 0x16C5B16C, 0x1725C972, 0x1785E178, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18E6398E, 
			0x19465194, 0x19866198, 0x19C6719C, 0x1A0681A0, 0x1A4691A4, 0x1AC6B1AC, 0x1B46D1B4, 0x1BC6F1BC, 0x1C4711C4, 0x1CC731CC, 
			0x1D4751D4, 0x1D8761D8, 0x1E0781E0, 0x1E87A1E8, 0x1EC7B1EC, 0x1F47D1F4, 0x1F87E1F8, 0x20080200, 0x20481204, 0x20C8320C, 
			0x21084210, 0x21886218, 0x21C8721C, 0x22489224, 0x22C8B22C, 0x2308C230, 0x2388E238, 0x23C8F23C, 0x24491244, 0x24892248, 
			0x25094250, 0x25495254, 0x25896258, 0x25C9725C, 0x26499264, 0x2689A268, 0x26C9B26C, 0x2749D274, 0x27C9F27C, 0x288A2288, 
			0x290A4290, 0x298A6298, 0x2A0A82A0, 0x2A8AA2A8, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C4B12C4, 0x2CCB32CC, 0x2D0B42D0, 
			0x2D8B62D8, 0x2DCB72DC, 0x2E0B82E0, 0x2E8BA2E8, 0x2ECBB2EC, 0x2F4BD2F4, 0x2F8BE2F8, 0x300C0300, 0x304C1304, 0x30CC330C, 
			0x310C4310, 0x314C5314, 0x31CC731C, 0x320C8320, 0x324C9324, 0x328CA328, 0x32CCB32C, 0x330CC330, 0x334CD334, 0x338CE338, 
			0x338CE338, 0x33CCF33C, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 0x358D6358, 0x35CD735C, 
			0x364D9364, 0x368DA368, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x374DD374, 0x374DD374, 0x378DE378, 0x37CDF37C, 0x380E0380, 
			0x380E0380, 0x384E1384, 0x388E2388, 0x38CE338C, 0x38CE338C, 0x390E4390, 0x394E5394, 0x398E6398, 0x398E6398, 0x39CE739C, 
			0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B4ED3B4, 0x3B8EE3B8, 0x3BCEF3BC, 
			0x3C0F03C0, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3CCF33CC, 0x3D0F43D0, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 
			0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F4FD3F4, 
			0x3F8FE3F8, 0x3FCFF3FC 
        }},
            {.set={
            0x00000000, 0x00802008, 0x01004010, 0x01806018, 0x02008020, 0x0280A028, 0x0300C030, 0x0380E038, 0x04010040, 0x04812048, 
			0x05014050, 0x05816058, 0x06018060, 0x06619866, 0x06C1B06C, 0x0741D074, 0x07C1F07C, 0x08421084, 0x08C2308C, 0x09224892, 
			0x09826098, 0x0A0280A0, 0x0A82A0A8, 0x0B02C0B0, 0x0B82E0B8, 0x0BE2F8BE, 0x0C4310C4, 0x0CC330CC, 0x0D4350D4, 0x0DA368DA, 
			0x0E0380E0, 0x0E83A0E8, 0x0F03C0F0, 0x0F83E0F8, 0x10040100, 0x10641906, 0x10C4310C, 0x11445114, 0x11C4711C, 0x12248922, 
			0x1284A128, 0x12E4B92E, 0x1344D134, 0x1384E138, 0x13C4F13C, 0x14250942, 0x14852148, 0x14E5394E, 0x15455154, 0x15A5695A, 
			0x16058160, 0x16659966, 0x16C5B16C, 0x1725C972, 0x1785E178, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18E6398E, 
			0x19465194, 0x19866198, 0x19C6719C, 0x1A0681A0, 0x1A4691A4, 0x1AC6B1AC, 0x1B46D1B4, 0x1BC6F1BC, 0x1C4711C4, 0x1CC731CC, 
			0x1D4751D4, 0x1D8761D8, 0x1E0781E0, 0x1E87A1E8, 0x1EC7B1EC, 0x1F47D1F4, 0x1F87E1F8, 0x20080200, 0x20481204, 0x20C8320C, 
			0x21084210, 0x21886218, 0x21C8721C, 0x22489224, 0x22C8B22C, 0x2308C230, 0x2388E238, 0x23C8F23C, 0x24491244, 0x24892248, 
			0x25094250, 0x25495254, 0x25896258, 0x25C9725C, 0x26499264, 0x2689A268, 0x26C9B26C, 0x2749D274, 0x27C9F27C, 0x288A2288, 
			0x290A4290, 0x298A6298, 0x2A0A82A0, 0x2A8AA2A8, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C4B12C4, 0x2CCB32CC, 0x2D0B42D0, 
			0x2D8B62D8, 0x2DCB72DC, 0x2E0B82E0, 0x2E8BA2E8, 0x2ECBB2EC, 0x2F4BD2F4, 0x2F8BE2F8, 0x300C0300, 0x304C1304, 0x30CC330C, 
			0x310C4310, 0x314C5314, 0x31CC731C, 0x320C8320, 0x324C9324, 0x328CA328, 0x32CCB32C, 0x330CC330, 0x334CD334, 0x338CE338, 
			0x338CE338, 0x33CCF33C, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 0x358D6358, 0x35CD735C, 
			0x364D9364, 0x368DA368, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x374DD374, 0x374DD374, 0x378DE378, 0x37CDF37C, 0x380E0380, 
			0x380E0380, 0x384E1384, 0x388E2388, 0x38CE338C, 0x38CE338C, 0x390E4390, 0x394E5394, 0x398E6398, 0x398E6398, 0x39CE739C, 
			0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B4ED3B4, 0x3B8EE3B8, 0x3BCEF3BC, 
			0x3C0F03C0, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3CCF33CC, 0x3D0F43D0, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 
			0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F4FD3F4, 
			0x3F8FE3F8, 0x3FCFF3FC 
        }},
            {.set={
    	    0x00000000, 0x00802008, 0x01004010, 0x01806018, 0x02008020, 0x0280A028, 0x0300C030, 0x0380E038, 0x04010040, 0x04812048, 
			0x05014050, 0x05816058, 0x06018060, 0x06619866, 0x06C1B06C, 0x0741D074, 0x07C1F07C, 0x08421084, 0x08C2308C, 0x09224892, 
			0x09826098, 0x0A0280A0, 0x0A82A0A8, 0x0B02C0B0, 0x0B82E0B8, 0x0BE2F8BE, 0x0C4310C4, 0x0CC330CC, 0x0D4350D4, 0x0DA368DA, 
			0x0E0380E0, 0x0E83A0E8, 0x0F03C0F0, 0x0F83E0F8, 0x10040100, 0x10641906, 0x10C4310C, 0x11445114, 0x11C4711C, 0x12248922, 
			0x1284A128, 0x12E4B92E, 0x1344D134, 0x1384E138, 0x13C4F13C, 0x14250942, 0x14852148, 0x14E5394E, 0x15455154, 0x15A5695A, 
			0x16058160, 0x16659966, 0x16C5B16C, 0x1725C972, 0x1785E178, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18E6398E, 
			0x19465194, 0x19866198, 0x19C6719C, 0x1A0681A0, 0x1A4691A4, 0x1AC6B1AC, 0x1B46D1B4, 0x1BC6F1BC, 0x1C4711C4, 0x1CC731CC, 
			0x1D4751D4, 0x1D8761D8, 0x1E0781E0, 0x1E87A1E8, 0x1EC7B1EC, 0x1F47D1F4, 0x1F87E1F8, 0x20080200, 0x20481204, 0x20C8320C, 
			0x21084210, 0x21886218, 0x21C8721C, 0x22489224, 0x22C8B22C, 0x2308C230, 0x2388E238, 0x23C8F23C, 0x24491244, 0x24892248, 
			0x25094250, 0x25495254, 0x25896258, 0x25C9725C, 0x26499264, 0x2689A268, 0x26C9B26C, 0x2749D274, 0x27C9F27C, 0x288A2288, 
			0x290A4290, 0x298A6298, 0x2A0A82A0, 0x2A8AA2A8, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C4B12C4, 0x2CCB32CC, 0x2D0B42D0, 
			0x2D8B62D8, 0x2DCB72DC, 0x2E0B82E0, 0x2E8BA2E8, 0x2ECBB2EC, 0x2F4BD2F4, 0x2F8BE2F8, 0x300C0300, 0x304C1304, 0x30CC330C, 
			0x310C4310, 0x314C5314, 0x31CC731C, 0x320C8320, 0x324C9324, 0x328CA328, 0x32CCB32C, 0x330CC330, 0x334CD334, 0x338CE338, 
			0x338CE338, 0x33CCF33C, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 0x358D6358, 0x35CD735C, 
			0x364D9364, 0x368DA368, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x374DD374, 0x374DD374, 0x378DE378, 0x37CDF37C, 0x380E0380, 
			0x380E0380, 0x384E1384, 0x388E2388, 0x38CE338C, 0x38CE338C, 0x390E4390, 0x394E5394, 0x398E6398, 0x398E6398, 0x39CE739C, 
			0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B4ED3B4, 0x3B8EE3B8, 0x3BCEF3BC, 
			0x3C0F03C0, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3CCF33CC, 0x3D0F43D0, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 
			0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F4FD3F4, 
			0x3F8FE3F8, 0x3FCFF3FC 
        }}
      },
      .rGmaParam =  {
         // Normal Preview
           eISP_DYNAMIC_GMA_MODE,  // eGMAMode
           8,                  // i4LowContrastThr
           80,                  // i4LowContrastRatio
           3,                  // i4LowContrastSeg
           {
               {   // i4ContrastWeightingTbl
                   //  0   1   2    3    4    5    6    7    8    9    10
                      50, 80, 100, 100, 100, 100, 100, 100, 100, 100, 100
               },
               {   // i4LVWeightingTbl
                   //LV0   1   2   3   4   5   6   7   8   9   10   11   12   13   14   15   16   17   18   19
                       0,  0,  0,  0,  0,  0,  0,  0, 33, 66, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100
                   //  0,  0,  0,  0,  0, 33, 33, 33, 33, 33,  80,  100, 100, 100, 100, 100, 100, 100, 100, 100
               },
               {   // i4NightContrastWtTbl
                   //  0   1   2    3    4    5    6    7    8    9    10
                    //  50, 50, 50, 50,  50, 30, 20,  15,   0,   0,   0
                 85, 85, 75, 50,  50, 30, 20,  15,   0,   0,   0
               },
               {   // i4NightLVWtTbl
                   //LV0   1    2    3   4   5   6   7   8   9   10   11   12   13   14   15   16   17   18   19
                   //  50,  50,  50,  40, 40, 40, 30, 30,  0,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  0
                      100, 100, 100, 100, 80, 50, 20, 0,  0,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  0
               }
           },
           {
               1,      // i4Enable
               0,      // i4WaitAEStable
               1       // i4Speed
           },
           {
               0,      // i4Enable
               9202,   // i4CenterPt
               50,     // i4LowPercent
               100000, // i4LowCurve100
               100000, // i4HighCurve100
               50,     // i4HighPercent
               100,    // i4SlopeH100
               0     // i4SlopeL100
           },
           {
               0       // rGMAFlare.i4Enable
           }
        }
    },
};
