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

#define NVRAM_AIAWB_MA_TUNING_PARAM_NUM 9283001

#define AIAWB_MA_BASE                                                AIAWB_MA_AIAWB_MA_BASE

const AIAWB_MA_NVRAM_T AIAWB_MA_BASE[1] = {
    // IDX_0
    {
        AWB_NVRAM_START
        9283001,
        {
            0x1, 0xb3bd0e20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xffffffff, 0x0, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xffffffff,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
            0x0, 0xffffffff, 0x0, 0x32000000, 0x0, 0x5600, 0x2b000000, 0x0, 0x640000,
            0x9600, 0x82, 0x64000000, 0x0, 0x460000, 0x320000, 0xfcffaeff, 0xff2afffd,
            0xffffc6ff, 0xffffff08, 0x7000000, 0x100, 0x3200, 0x320000, 0x320000,
            0x32000000, 0xfffdff30, 0xa2feffff, 0xbc000000, 0xffff60fc, 0x0, 0x10, 0x200000,
            0x0, 0x96, 0x46000000, 0x5000000, 0x320000, 0x3c0000, 0x1e00, 0x50000, 0x100,
            0x1, 0x1000000, 0x100, 0x100, 0x10000, 0x10000, 0x1000000, 0x1, 0x0, 0x0, 0x0,
            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1400, 0x280000, 0x3c00, 0x3c,
            0x3c000000, 0x3c00, 0x3c00, 0x0, 0x640000, 0xb8000b00, 0x500dc, 0xf0000000,
            0xa000000, 0x100, 0xa000000, 0x1e, 0x320000, 0xfdff30ff, 0xfffffea2, 0xbc000000,
            0xfcffff60, 0x1e0000, 0x640000, 0x3c00, 0x640000, 0x6400, 0x64, 0x64000000,
            0x6400, 0x6400, 0x640000, 0x640000, 0x64000000, 0x64, 0x64000000, 0x64000000,
            0x6400, 0x64000000, 0x64, 0x640000, 0x6400, 0x64, 0x64000000, 0x50, 0x500000,
            0x500000, 0x5000, 0x500000, 0x5000, 0x50, 0x50000000, 0x5000, 0x5000, 0x500000,
            0x500000, 0x50000000, 0x50, 0x50000000, 0x50000000, 0x5000, 0x50000000, 0x50,
            0x640000, 0x6400, 0x64, 0x64000000, 0x64, 0x640000, 0x640000, 0x6400, 0x640000,
            0x6400, 0x64, 0x64000000, 0x6400, 0x6400, 0x640000, 0x640000, 0x64000000, 0x64,
            0x64000000, 0x64000000, 0x6400, 0x64000000, 0x64, 0x640000, 0x6400, 0x64,
            0x64000000, 0x64, 0x640000, 0x640000, 0x6400, 0x640000, 0x6400, 0x64,
            0x64000000, 0x6400, 0x6400, 0x640000, 0x640000, 0x64000000, 0x64, 0x64000000,
            0x64000000, 0x6400, 0x64000000, 0x64, 0x640000, 0x6400, 0x64, 0x64000000, 0x64,
            0x640000, 0x640000, 0x6400, 0x640000, 0x6400, 0x64, 0x64000000, 0x6400, 0x6400,
            0x640000, 0x640000, 0x64000000, 0x64, 0x64000000, 0x64000000, 0x6400,
            0x64000000, 0x64, 0x640000, 0x6400, 0x64, 0x64000000, 0x64, 0x64, 0x64000000,
            0x64, 0x640000, 0x640000, 0x6400, 0x640000, 0x6400, 0x64, 0x64000000, 0x6400,
            0x6400, 0x640000, 0x640000, 0x64000000, 0x64, 0x64000000, 0x64000000, 0x6400,
            0x64000000, 0x64, 0x10000, 0x100, 0x1, 0x1000000, 0x1, 0x10000, 0x10000, 0x100,
            0x10000, 0x100, 0x1, 0x1000000, 0x100, 0x100, 0x10000, 0x10000, 0x1000000, 0x1,
            0x1000000, 0x0, 0x6400, 0x64000000, 0x64, 0x640000, 0x6400, 0x64, 0x64000000,
            0x64, 0x640000, 0x640000, 0x6400, 0x640000, 0x6400, 0x64, 0x64000000, 0x6400,
            0x6400, 0x640000, 0x640000, 0x64000000, 0x64, 0x64000000, 0x64000000, 0x6400,
            0x64000000, 0x64, 0x640000, 0x6400, 0x64, 0x64000000, 0x64, 0x640000, 0x640000,
            0x6400, 0x640000, 0x6400, 0x64, 0x64000000, 0x6400, 0x6400, 0x640000, 0x640000,
            0x64000000, 0x64, 0x64000000, 0x64000000, 0x6400, 0x64000000, 0x64, 0x640000,
            0x6400, 0x64, 0x64000000, 0x64, 0x640000, 0x640000, 0x6400, 0x640000, 0x6400,
            0x64, 0x64000000, 0x6400, 0x6400, 0x640000, 0x640000, 0x64000000, 0x64,
            0x64000000, 0x64000000, 0x6400, 0x64000000, 0x64, 0x640000, 0x6400, 0x64,
            0x64000000, 0x64, 0x640000, 0x640000, 0x6400, 0x640000, 0x6400, 0x64,
            0x64000000, 0x6400, 0x6400, 0x640000, 0x640000, 0x64000000, 0x64, 0x64000000,
            0x64000000, 0x6400, 0x64000000, 0x64, 0x320000, 0x3200, 0x32, 0x32000000, 0x32,
            0x320000, 0x320000, 0x3200, 0x320000, 0x3200, 0x32, 0x32000000, 0x3200, 0x3200,
            0x320000, 0x320000, 0x32000000, 0x32, 0x32000000, 0x32000000, 0x3200,
            0x32000000, 0x32, 0x320000, 0x3200, 0x32, 0x32000000, 0x32, 0x320000, 0x320000,
            0x3200, 0x320000, 0x3200, 0x32, 0x32000000, 0x3200, 0x3200, 0x320000, 0x10000,
            0x1000000, 0x1, 0x1000000, 0x1000000, 0x100, 0x1000000, 0x1, 0x10000, 0x100,
            0x1, 0x1000000, 0x1, 0x10000, 0x10000, 0x100, 0x10000, 0x100, 0x1, 0x0, 0x2800,
            0xa00, 0x30000, 0x640000, 0x32000000, 0x28, 0x401f0000, 0xa000000f, 0x5000,
            0x32000000, 0x23, 0x190000, 0x4000000, 0x0, 0x0, 0x0, 0x4000000, 0x0, 0x0, 0x0,
            0x4, 0x4000000, 0x0, 0x0, 0x0, 0x400, 0x0, 0x0, 0x0, 0x40000, 0x4, 0x0, 0x0,
            0x0, 0x4000000, 0x0, 0x0, 0x0, 0x4000000, 0x0, 0x10000, 0x0
        }
    },
};
