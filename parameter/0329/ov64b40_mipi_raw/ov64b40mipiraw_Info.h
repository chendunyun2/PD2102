/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2021. All rights reserved.
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
#include "WeChatQQ_Preview/inc.h"
#include "WeChatQQ_Video/inc.h"
#include "3rd_Capture_1080P/inc.h"
#include "Scene_Capture/inc.h"
#include "Capture_Zoom/inc.h"
#include "Flash_Capture/inc.h"
#include "HDR_Preview/inc.h"
#include "Video_4k/inc.h"
#include "SuperNight_Preview/inc.h"
#include "Panorama_Preview/inc.h"
#include "Production_Preview/inc.h"
#include "SuperClearness_Preview_64M/inc.h"
#include "N3D_Preview/inc.h"
#include "Video_720P_60fps/inc.h"
#include "Face_Capture/inc.h"
#include "SuperNight_Capture/inc.h"
#include "3rd_Preview_1080P/inc.h"
#include "Scene_Preview/inc.h"
#include "Scene_Preview_Zoom_1x/inc.h"
#include "HDR_Capture/inc.h"
#include "Panorama_Capture/inc.h"
#include "Production_Capture/inc.h"
#include "LLHDR_Scene_Capture/inc.h"
#include "WeChatQQ_VideoCall/inc.h"
#include "3rd_Preview_720P/inc.h"
#include "3rd_Preview_480P/inc.h"
#include "FaceBeauty_Capture/inc.h"
#include "Scene_Preview_Zoom_2x/inc.h"
#include "Scene_Preview_Zoom_4x/inc.h"
#include "Capture_Preview_Full/inc.h"
#include "Capture_Preview_Full_Zoom_1x/inc.h"
#include "Capture_Preview_Full_Zoom_2x/inc.h"
#include "Capture_Preview_Full_Zoom_4x/inc.h"
#include "Face_Preview/inc.h"
#include "Face_Preview_Zoom_1x/inc.h"
#include "Face_Preview_Zoom_2x/inc.h"
#include "Face_Preview_Zoom_4x/inc.h"
#include "Professional_Scene_Preview/inc.h"
#include "Professional_Scene_Preview_Zoom_1x/inc.h"
#include "Professional_Face_Preview/inc.h"
#include "Professional_Face_Preview_Zoom_1x/inc.h"
#include "Professional_Preview_Zoom_2x/inc.h"
#include "Professional_Preview_Zoom_4x/inc.h"
#include "FaceBeauty_HDR_Capture/inc.h"
#include "HDR_Blurless_Capture/inc.h"
#include "Video_720P_120fps/inc.h"
#include "Video_720P_240fps/inc.h"
#include "Video_1080P_120fps/inc.h"
#include "Video_720P_30fps/inc.h"
#include "Video_720P_30fps_Zoom_1x/inc.h"
#include "Video_720P_30fps_Zoom_2x/inc.h"
#include "Video_720P_30fps_Zoom_4x/inc.h"
#include "Video_720P_60fps_Zoom_1x/inc.h"
#include "Video_720P_60fps_Zoom_2x/inc.h"
#include "Video_720P_60fps_Zoom_4x/inc.h"
#include "Video_1080P_30fps/inc.h"
#include "Video_1080P_30fps_Zoom_1x/inc.h"
#include "Video_1080P_30fps_Zoom_2x/inc.h"
#include "Video_1080P_30fps_Zoom_4x/inc.h"
#include "Video_1080P_60fps/inc.h"
#include "Video_1080P_60fps_Zoom_1x/inc.h"
#include "Video_1080P_60fps_Zoom_2x/inc.h"
#include "Video_1080P_60fps_Zoom_4x/inc.h"
#include "Video_4k_Zoom_1x/inc.h"
#include "Video_4k_30fps_Zoom_2x/inc.h"
#include "Video_4k_30fps_Zoom_4x/inc.h"
#include "Recording_Capture_30fps_1080P_720P/inc.h"
#include "Recording_Capture_30fps_4k/inc.h"
#include "Recording_Capture_60fps/inc.h"
#include "Professional_Capture/inc.h"
#include "Professional_Capture_Zoom_1x/inc.h"
#include "Professional_Capture_Zoom_2x/inc.h"
#include "Professional_Capture_Zoom_4x/inc.h"
#include "SuperNight_Face_Capture/inc.h"
#include "ARStickers_Capture/inc.h"
#include "ARStickers_Capture_1x/inc.h"
#include "ARStickers_Capture_2x/inc.h"
#include "ARStickers_Capture_4x/inc.h"
#include "SuperClearness_Binning_Capture_64M/inc.h"
#include "SuperClearness_Capture_64M/inc.h"
#include "SuperClearness_Face_Binning_Capture_64M/inc.h"
#include "SuperClearness_Face_Capture_64M/inc.h"
#include "P1_YUV/inc.h"
#include "Facebook/inc.h"
