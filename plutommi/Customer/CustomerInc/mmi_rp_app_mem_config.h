/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   mmi_rp_app_mem_config.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Resource populate function generated by XML resgen
 *
 * Author:
 * -------
 *   MTK resgenerator XML parser
 *
 *******************************************************************************/    
#ifndef __MMI_RP_APP_MEM_CONFIG_H__
#define __MMI_RP_APP_MEM_CONFIG_H__


/* heap */
typedef union {
    kal_uint8 APP_CAMERA[ASM_HEAP_SIZE_APP_CAMERA + 4];
    kal_uint8 APP_FILEMANAGER[ASM_HEAP_SIZE_APP_FILEMANAGER + 4];
    kal_uint8 APP_GB_WINGUO[ASM_HEAP_SIZE_APP_GB_WINGUO + 4];
    kal_uint8 APP_IDLE[ASM_HEAP_SIZE_APP_IDLE + 4];
    kal_uint8 APP_IMAGEVIEWER[ASM_HEAP_SIZE_APP_IMAGEVIEWER + 4];
    kal_uint8 APP_MOT[ASM_HEAP_SIZE_APP_MOT + 4];
    kal_uint8 APP_MRE[ASM_HEAP_SIZE_APP_MRE + 4];
    kal_uint8 APP_PHONEBOOK[ASM_HEAP_SIZE_APP_PHONEBOOK + 4];
    kal_uint8 APP_PHONEBOOK_S0S_[ASM_HEAP_SIZE_APP_PHONEBOOK_S0S_ + 4];
    kal_uint8 APP_PHONEBOOK_S1S_[ASM_HEAP_SIZE_APP_PHONEBOOK_S1S_ + 4];
    kal_uint8 APP_VENUS_WALLPAPER[ASM_HEAP_SIZE_APP_VENUS_WALLPAPER + 4];
    kal_uint8 APP_VENUS_WALLPAPER_TOTAL[ASM_HEAP_SIZE_APP_VENUS_WALLPAPER_TOTAL + 4];
    kal_uint8 CUI_IMAGEVIEWER[ASM_HEAP_SIZE_CUI_IMAGEVIEWER + 4];
    kal_uint8 SRV_GDI[ASM_HEAP_SIZE_SRV_GDI + 4];
    kal_uint8 SRV_MDI_AUDPLY[ASM_HEAP_SIZE_SRV_MDI_AUDPLY + 4];
    kal_uint8 SRV_MDI_AUD_INFO[ASM_HEAP_SIZE_SRV_MDI_AUD_INFO + 4];
    kal_uint8 SRV_MDI_CAMERA_AUTORAMA[ASM_HEAP_SIZE_SRV_MDI_CAMERA_AUTORAMA + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_HDR[ASM_HEAP_SIZE_SRV_MDI_CAMERA_CAP_HDR + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_MAV[ASM_HEAP_SIZE_SRV_MDI_CAMERA_CAP_MAV + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_VGA_BELOW[ASM_HEAP_SIZE_SRV_MDI_CAMERA_CAP_VGA_BELOW + 4];
    kal_uint8 SRV_MDI_CAMERA_FULL[ASM_HEAP_SIZE_SRV_MDI_CAMERA_FULL + 4];
    kal_uint8 SRV_MDI_CAMERA_ONLY_CAP_LCD[ASM_HEAP_SIZE_SRV_MDI_CAMERA_ONLY_CAP_LCD + 4];
    kal_uint8 SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA[ASM_HEAP_SIZE_SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA + 4];
    kal_uint8 SRV_MDI_CAMERA_STANDARD[ASM_HEAP_SIZE_SRV_MDI_CAMERA_STANDARD + 4];
    kal_uint8 SRV_MDI_VDOPLY[ASM_HEAP_SIZE_SRV_MDI_VDOPLY + 4];
    kal_uint8 SRV_MDI_VDOPLY_A[ASM_HEAP_SIZE_SRV_MDI_VDOPLY_A + 4];
    kal_uint8 SRV_MDI_VDOPLY_CIF[ASM_HEAP_SIZE_SRV_MDI_VDOPLY_CIF + 4];
    kal_uint8 SRV_MDI_VDOPLY_INFO[ASM_HEAP_SIZE_SRV_MDI_VDOPLY_INFO + 4];
    kal_uint8 SRV_MDI_VDOPLY_MP4[ASM_HEAP_SIZE_SRV_MDI_VDOPLY_MP4 + 4];
    kal_uint8 SRV_MDI_VDOPLY_PREVIEW[ASM_HEAP_SIZE_SRV_MDI_VDOPLY_PREVIEW + 4];
    kal_uint8 SRV_MDI_VDOPLY_QVGA[ASM_HEAP_SIZE_SRV_MDI_VDOPLY_QVGA + 4];
    kal_uint8 SRV_MDI_VDOPLY_QVGA_MPEG4SP[ASM_HEAP_SIZE_SRV_MDI_VDOPLY_QVGA_MPEG4SP + 4];
    kal_uint8 SRV_MDI_VDOPLY_SUBTITLE[ASM_HEAP_SIZE_SRV_MDI_VDOPLY_SUBTITLE + 4];
    kal_uint8 SRV_MDI_VDOPLY_V[ASM_HEAP_SIZE_SRV_MDI_VDOPLY_V + 4];
    kal_uint8 SRV_MOT[ASM_HEAP_SIZE_SRV_MOT + 4];
    kal_uint8 dummy;
} app_asm_pool_heap_union;

/* heap_shrink */
typedef union {
    kal_uint8 dummy;
} app_asm_pool_heap_shrink_union;

/* extra_base */
typedef union {
    kal_uint8 APP_CAMERA[ASM_EXTRA_BASE_SIZE_APP_CAMERA + 4];
    kal_uint8 APP_MOT[ASM_EXTRA_BASE_SIZE_APP_MOT + 4];
    kal_uint8 APP_PHONEBOOK_S1S_[ASM_EXTRA_BASE_SIZE_APP_PHONEBOOK_S1S_ + 4];
    kal_uint8 dummy;
} app_asm_pool_extra_base_union;

/* base */
typedef union {
    kal_uint8 APP_CAMERA[ASM_BASE_SIZE_APP_CAMERA + 4];
    kal_uint8 APP_FILEMANAGER[ASM_BASE_SIZE_APP_FILEMANAGER + 4];
    kal_uint8 APP_GB_WINGUO[ASM_BASE_SIZE_APP_GB_WINGUO + 4];
    kal_uint8 APP_IDLE[ASM_BASE_SIZE_APP_IDLE + 4];
    kal_uint8 APP_IMAGEVIEWER[ASM_BASE_SIZE_APP_IMAGEVIEWER + 4];
    kal_uint8 APP_MOT[ASM_BASE_SIZE_APP_MOT + 4];
    kal_uint8 APP_MRE[ASM_BASE_SIZE_APP_MRE + 4];
    kal_uint8 APP_PHONEBOOK[ASM_BASE_SIZE_APP_PHONEBOOK + 4];
    kal_uint8 APP_PHONEBOOK_S0S_[ASM_BASE_SIZE_APP_PHONEBOOK_S0S_ + 4];
    kal_uint8 APP_PHONEBOOK_S1S_[ASM_BASE_SIZE_APP_PHONEBOOK_S1S_ + 4];
    kal_uint8 APP_VENUS_WALLPAPER[ASM_BASE_SIZE_APP_VENUS_WALLPAPER + 4];
    kal_uint8 APP_VENUS_WALLPAPER_TOTAL[ASM_BASE_SIZE_APP_VENUS_WALLPAPER_TOTAL + 4];
    kal_uint8 CUI_IMAGEVIEWER[ASM_BASE_SIZE_CUI_IMAGEVIEWER + 4];
    kal_uint8 SRV_GDI[ASM_BASE_SIZE_SRV_GDI + 4];
    kal_uint8 SRV_MDI_AUDPLY[ASM_BASE_SIZE_SRV_MDI_AUDPLY + 4];
    kal_uint8 SRV_MDI_AUD_INFO[ASM_BASE_SIZE_SRV_MDI_AUD_INFO + 4];
    kal_uint8 SRV_MDI_CAMERA_AUTORAMA[ASM_BASE_SIZE_SRV_MDI_CAMERA_AUTORAMA + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_HDR[ASM_BASE_SIZE_SRV_MDI_CAMERA_CAP_HDR + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_MAV[ASM_BASE_SIZE_SRV_MDI_CAMERA_CAP_MAV + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_VGA_BELOW[ASM_BASE_SIZE_SRV_MDI_CAMERA_CAP_VGA_BELOW + 4];
    kal_uint8 SRV_MDI_CAMERA_FULL[ASM_BASE_SIZE_SRV_MDI_CAMERA_FULL + 4];
    kal_uint8 SRV_MDI_CAMERA_ONLY_CAP_LCD[ASM_BASE_SIZE_SRV_MDI_CAMERA_ONLY_CAP_LCD + 4];
    kal_uint8 SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA[ASM_BASE_SIZE_SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA + 4];
    kal_uint8 SRV_MDI_CAMERA_STANDARD[ASM_BASE_SIZE_SRV_MDI_CAMERA_STANDARD + 4];
    kal_uint8 SRV_MDI_VDOPLY[ASM_BASE_SIZE_SRV_MDI_VDOPLY + 4];
    kal_uint8 SRV_MDI_VDOPLY_A[ASM_BASE_SIZE_SRV_MDI_VDOPLY_A + 4];
    kal_uint8 SRV_MDI_VDOPLY_CIF[ASM_BASE_SIZE_SRV_MDI_VDOPLY_CIF + 4];
    kal_uint8 SRV_MDI_VDOPLY_INFO[ASM_BASE_SIZE_SRV_MDI_VDOPLY_INFO + 4];
    kal_uint8 SRV_MDI_VDOPLY_MP4[ASM_BASE_SIZE_SRV_MDI_VDOPLY_MP4 + 4];
    kal_uint8 SRV_MDI_VDOPLY_PREVIEW[ASM_BASE_SIZE_SRV_MDI_VDOPLY_PREVIEW + 4];
    kal_uint8 SRV_MDI_VDOPLY_QVGA[ASM_BASE_SIZE_SRV_MDI_VDOPLY_QVGA + 4];
    kal_uint8 SRV_MDI_VDOPLY_QVGA_MPEG4SP[ASM_BASE_SIZE_SRV_MDI_VDOPLY_QVGA_MPEG4SP + 4];
    kal_uint8 SRV_MDI_VDOPLY_SUBTITLE[ASM_BASE_SIZE_SRV_MDI_VDOPLY_SUBTITLE + 4];
    kal_uint8 SRV_MDI_VDOPLY_V[ASM_BASE_SIZE_SRV_MDI_VDOPLY_V + 4];
    kal_uint8 SRV_MOT[ASM_BASE_SIZE_SRV_MOT + 4];
    kal_uint8 dummy;
} app_asm_pool_base_union;

/* fg */
typedef union {
    kal_uint8 APP_CAMERA[ASM_FG_SIZE_APP_CAMERA + 4];
    kal_uint8 APP_FILEMANAGER[ASM_FG_SIZE_APP_FILEMANAGER + 4];
    kal_uint8 APP_GB_WINGUO[ASM_FG_SIZE_APP_GB_WINGUO + 4];
    kal_uint8 APP_IDLE[ASM_FG_SIZE_APP_IDLE + 4];
    kal_uint8 APP_IMAGEVIEWER[ASM_FG_SIZE_APP_IMAGEVIEWER + 4];
    kal_uint8 APP_MOT[ASM_FG_SIZE_APP_MOT + 4];
    kal_uint8 APP_MRE[ASM_FG_SIZE_APP_MRE + 4];
    kal_uint8 APP_PHONEBOOK[ASM_FG_SIZE_APP_PHONEBOOK + 4];
    kal_uint8 APP_PHONEBOOK_S0S_[ASM_FG_SIZE_APP_PHONEBOOK_S0S_ + 4];
    kal_uint8 APP_PHONEBOOK_S1S_[ASM_FG_SIZE_APP_PHONEBOOK_S1S_ + 4];
    kal_uint8 APP_VENUS_WALLPAPER[ASM_FG_SIZE_APP_VENUS_WALLPAPER + 4];
    kal_uint8 APP_VENUS_WALLPAPER_TOTAL[ASM_FG_SIZE_APP_VENUS_WALLPAPER_TOTAL + 4];
    kal_uint8 CUI_IMAGEVIEWER[ASM_FG_SIZE_CUI_IMAGEVIEWER + 4];
    kal_uint8 SRV_GDI[ASM_FG_SIZE_SRV_GDI + 4];
    kal_uint8 SRV_MDI_AUDPLY[ASM_FG_SIZE_SRV_MDI_AUDPLY + 4];
    kal_uint8 SRV_MDI_AUD_INFO[ASM_FG_SIZE_SRV_MDI_AUD_INFO + 4];
    kal_uint8 SRV_MDI_CAMERA_AUTORAMA[ASM_FG_SIZE_SRV_MDI_CAMERA_AUTORAMA + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_HDR[ASM_FG_SIZE_SRV_MDI_CAMERA_CAP_HDR + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_MAV[ASM_FG_SIZE_SRV_MDI_CAMERA_CAP_MAV + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_VGA_BELOW[ASM_FG_SIZE_SRV_MDI_CAMERA_CAP_VGA_BELOW + 4];
    kal_uint8 SRV_MDI_CAMERA_FULL[ASM_FG_SIZE_SRV_MDI_CAMERA_FULL + 4];
    kal_uint8 SRV_MDI_CAMERA_ONLY_CAP_LCD[ASM_FG_SIZE_SRV_MDI_CAMERA_ONLY_CAP_LCD + 4];
    kal_uint8 SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA[ASM_FG_SIZE_SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA + 4];
    kal_uint8 SRV_MDI_CAMERA_STANDARD[ASM_FG_SIZE_SRV_MDI_CAMERA_STANDARD + 4];
    kal_uint8 SRV_MDI_VDOPLY[ASM_FG_SIZE_SRV_MDI_VDOPLY + 4];
    kal_uint8 SRV_MDI_VDOPLY_A[ASM_FG_SIZE_SRV_MDI_VDOPLY_A + 4];
    kal_uint8 SRV_MDI_VDOPLY_CIF[ASM_FG_SIZE_SRV_MDI_VDOPLY_CIF + 4];
    kal_uint8 SRV_MDI_VDOPLY_INFO[ASM_FG_SIZE_SRV_MDI_VDOPLY_INFO + 4];
    kal_uint8 SRV_MDI_VDOPLY_MP4[ASM_FG_SIZE_SRV_MDI_VDOPLY_MP4 + 4];
    kal_uint8 SRV_MDI_VDOPLY_PREVIEW[ASM_FG_SIZE_SRV_MDI_VDOPLY_PREVIEW + 4];
    kal_uint8 SRV_MDI_VDOPLY_QVGA[ASM_FG_SIZE_SRV_MDI_VDOPLY_QVGA + 4];
    kal_uint8 SRV_MDI_VDOPLY_QVGA_MPEG4SP[ASM_FG_SIZE_SRV_MDI_VDOPLY_QVGA_MPEG4SP + 4];
    kal_uint8 SRV_MDI_VDOPLY_SUBTITLE[ASM_FG_SIZE_SRV_MDI_VDOPLY_SUBTITLE + 4];
    kal_uint8 SRV_MDI_VDOPLY_V[ASM_FG_SIZE_SRV_MDI_VDOPLY_V + 4];
    kal_uint8 SRV_MOT[ASM_FG_SIZE_SRV_MOT + 4];
    kal_uint8 dummy;
} app_asm_pool_fg_union;

/* total */
typedef union {
    kal_uint8 APP_CAMERA[ASM_TOTAL_SIZE_APP_CAMERA + 4];
    kal_uint8 APP_FILEMANAGER[ASM_TOTAL_SIZE_APP_FILEMANAGER + 4];
    kal_uint8 APP_GB_WINGUO[ASM_TOTAL_SIZE_APP_GB_WINGUO + 4];
    kal_uint8 APP_IDLE[ASM_TOTAL_SIZE_APP_IDLE + 4];
    kal_uint8 APP_IMAGEVIEWER[ASM_TOTAL_SIZE_APP_IMAGEVIEWER + 4];
    kal_uint8 APP_MOT[ASM_TOTAL_SIZE_APP_MOT + 4];
    kal_uint8 APP_MRE[ASM_TOTAL_SIZE_APP_MRE + 4];
    kal_uint8 APP_PHONEBOOK[ASM_TOTAL_SIZE_APP_PHONEBOOK + 4];
    kal_uint8 APP_PHONEBOOK_S0S_[ASM_TOTAL_SIZE_APP_PHONEBOOK_S0S_ + 4];
    kal_uint8 APP_PHONEBOOK_S1S_[ASM_TOTAL_SIZE_APP_PHONEBOOK_S1S_ + 4];
    kal_uint8 APP_VENUS_WALLPAPER[ASM_TOTAL_SIZE_APP_VENUS_WALLPAPER + 4];
    kal_uint8 APP_VENUS_WALLPAPER_TOTAL[ASM_TOTAL_SIZE_APP_VENUS_WALLPAPER_TOTAL + 4];
    kal_uint8 CUI_IMAGEVIEWER[ASM_TOTAL_SIZE_CUI_IMAGEVIEWER + 4];
    kal_uint8 SRV_GDI[ASM_TOTAL_SIZE_SRV_GDI + 4];
    kal_uint8 SRV_MDI_AUDPLY[ASM_TOTAL_SIZE_SRV_MDI_AUDPLY + 4];
    kal_uint8 SRV_MDI_AUD_INFO[ASM_TOTAL_SIZE_SRV_MDI_AUD_INFO + 4];
    kal_uint8 SRV_MDI_CAMERA_AUTORAMA[ASM_TOTAL_SIZE_SRV_MDI_CAMERA_AUTORAMA + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_HDR[ASM_TOTAL_SIZE_SRV_MDI_CAMERA_CAP_HDR + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_MAV[ASM_TOTAL_SIZE_SRV_MDI_CAMERA_CAP_MAV + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_VGA_BELOW[ASM_TOTAL_SIZE_SRV_MDI_CAMERA_CAP_VGA_BELOW + 4];
    kal_uint8 SRV_MDI_CAMERA_FULL[ASM_TOTAL_SIZE_SRV_MDI_CAMERA_FULL + 4];
    kal_uint8 SRV_MDI_CAMERA_ONLY_CAP_LCD[ASM_TOTAL_SIZE_SRV_MDI_CAMERA_ONLY_CAP_LCD + 4];
    kal_uint8 SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA[ASM_TOTAL_SIZE_SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA + 4];
    kal_uint8 SRV_MDI_CAMERA_STANDARD[ASM_TOTAL_SIZE_SRV_MDI_CAMERA_STANDARD + 4];
    kal_uint8 SRV_MDI_VDOPLY[ASM_TOTAL_SIZE_SRV_MDI_VDOPLY + 4];
    kal_uint8 SRV_MDI_VDOPLY_A[ASM_TOTAL_SIZE_SRV_MDI_VDOPLY_A + 4];
    kal_uint8 SRV_MDI_VDOPLY_CIF[ASM_TOTAL_SIZE_SRV_MDI_VDOPLY_CIF + 4];
    kal_uint8 SRV_MDI_VDOPLY_INFO[ASM_TOTAL_SIZE_SRV_MDI_VDOPLY_INFO + 4];
    kal_uint8 SRV_MDI_VDOPLY_MP4[ASM_TOTAL_SIZE_SRV_MDI_VDOPLY_MP4 + 4];
    kal_uint8 SRV_MDI_VDOPLY_PREVIEW[ASM_TOTAL_SIZE_SRV_MDI_VDOPLY_PREVIEW + 4];
    kal_uint8 SRV_MDI_VDOPLY_QVGA[ASM_TOTAL_SIZE_SRV_MDI_VDOPLY_QVGA + 4];
    kal_uint8 SRV_MDI_VDOPLY_QVGA_MPEG4SP[ASM_TOTAL_SIZE_SRV_MDI_VDOPLY_QVGA_MPEG4SP + 4];
    kal_uint8 SRV_MDI_VDOPLY_SUBTITLE[ASM_TOTAL_SIZE_SRV_MDI_VDOPLY_SUBTITLE + 4];
    kal_uint8 SRV_MDI_VDOPLY_V[ASM_TOTAL_SIZE_SRV_MDI_VDOPLY_V + 4];
    kal_uint8 SRV_MOT[ASM_TOTAL_SIZE_SRV_MOT + 4];
    kal_uint8 dummy;
} app_asm_pool_total_union;

/* app_fg */
typedef union {
    kal_uint8 APP_CAMERA[ASM_APP_FG_SIZE_APP_CAMERA + 4];
    kal_uint8 APP_IDLE[ASM_APP_FG_SIZE_APP_IDLE + 4];
    kal_uint8 APP_MOT[ASM_APP_FG_SIZE_APP_MOT + 4];
    kal_uint8 APP_VENUS_WALLPAPER[ASM_APP_FG_SIZE_APP_VENUS_WALLPAPER + 4];
    kal_uint8 APP_VENUS_WALLPAPER_TOTAL[ASM_APP_FG_SIZE_APP_VENUS_WALLPAPER_TOTAL + 4];
    kal_uint8 CUI_IMAGEVIEWER[ASM_APP_FG_SIZE_CUI_IMAGEVIEWER + 4];
    kal_uint8 SRV_GDI[ASM_APP_FG_SIZE_SRV_GDI + 4];
    kal_uint8 SRV_MDI_AUDPLY[ASM_APP_FG_SIZE_SRV_MDI_AUDPLY + 4];
    kal_uint8 SRV_MDI_AUD_INFO[ASM_APP_FG_SIZE_SRV_MDI_AUD_INFO + 4];
    kal_uint8 SRV_MDI_CAMERA_AUTORAMA[ASM_APP_FG_SIZE_SRV_MDI_CAMERA_AUTORAMA + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_HDR[ASM_APP_FG_SIZE_SRV_MDI_CAMERA_CAP_HDR + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_MAV[ASM_APP_FG_SIZE_SRV_MDI_CAMERA_CAP_MAV + 4];
    kal_uint8 SRV_MDI_CAMERA_CAP_VGA_BELOW[ASM_APP_FG_SIZE_SRV_MDI_CAMERA_CAP_VGA_BELOW + 4];
    kal_uint8 SRV_MDI_CAMERA_FULL[ASM_APP_FG_SIZE_SRV_MDI_CAMERA_FULL + 4];
    kal_uint8 SRV_MDI_CAMERA_ONLY_CAP_LCD[ASM_APP_FG_SIZE_SRV_MDI_CAMERA_ONLY_CAP_LCD + 4];
    kal_uint8 SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA[ASM_APP_FG_SIZE_SRV_MDI_CAMERA_ONLY_CAP_LCD_DISABLE_JAIA + 4];
    kal_uint8 SRV_MDI_CAMERA_STANDARD[ASM_APP_FG_SIZE_SRV_MDI_CAMERA_STANDARD + 4];
    kal_uint8 SRV_MDI_VDOPLY[ASM_APP_FG_SIZE_SRV_MDI_VDOPLY + 4];
    kal_uint8 SRV_MDI_VDOPLY_A[ASM_APP_FG_SIZE_SRV_MDI_VDOPLY_A + 4];
    kal_uint8 SRV_MDI_VDOPLY_CIF[ASM_APP_FG_SIZE_SRV_MDI_VDOPLY_CIF + 4];
    kal_uint8 SRV_MDI_VDOPLY_INFO[ASM_APP_FG_SIZE_SRV_MDI_VDOPLY_INFO + 4];
    kal_uint8 SRV_MDI_VDOPLY_MP4[ASM_APP_FG_SIZE_SRV_MDI_VDOPLY_MP4 + 4];
    kal_uint8 SRV_MDI_VDOPLY_PREVIEW[ASM_APP_FG_SIZE_SRV_MDI_VDOPLY_PREVIEW + 4];
    kal_uint8 SRV_MDI_VDOPLY_QVGA[ASM_APP_FG_SIZE_SRV_MDI_VDOPLY_QVGA + 4];
    kal_uint8 SRV_MDI_VDOPLY_QVGA_MPEG4SP[ASM_APP_FG_SIZE_SRV_MDI_VDOPLY_QVGA_MPEG4SP + 4];
    kal_uint8 SRV_MDI_VDOPLY_SUBTITLE[ASM_APP_FG_SIZE_SRV_MDI_VDOPLY_SUBTITLE + 4];
    kal_uint8 SRV_MDI_VDOPLY_V[ASM_APP_FG_SIZE_SRV_MDI_VDOPLY_V + 4];
    kal_uint8 SRV_MOT[ASM_APP_FG_SIZE_SRV_MOT + 4];
    kal_uint8 dummy;
} app_asm_pool_app_fg_union;

/* cui_fg */
typedef union {
    kal_uint8 APP_IMAGEVIEWER[ASM_CUI_FG_SIZE_APP_IMAGEVIEWER + 4];
    kal_uint8 APP_PHONEBOOK_S0S_[ASM_CUI_FG_SIZE_APP_PHONEBOOK_S0S_ + 4];
    kal_uint8 dummy;
} app_asm_pool_cui_fg_union;

/* cui_base */
typedef union {
    kal_uint8 APP_IMAGEVIEWER[ASM_CUI_BASE_SIZE_APP_IMAGEVIEWER + 4];
    kal_uint8 APP_PHONEBOOK_S0S_[ASM_CUI_BASE_SIZE_APP_PHONEBOOK_S0S_ + 4];
    kal_uint8 dummy;
} app_asm_pool_cui_base_union;

typedef union {
    kal_uint8 APP_CAMERA[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_CAMERA)];
    kal_uint8 APP_FILEMANAGER[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_FILEMANAGER)];
    kal_uint8 APP_GB_WINGUO[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_GB_WINGUO)];
    kal_uint8 APP_IDLE[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_IDLE)];
    kal_uint8 APP_IMAGEVIEWER[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_IMAGEVIEWER)];
    kal_uint8 APP_MOT[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_MOT)];
    kal_uint8 APP_MRE[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_MRE)];
    kal_uint8 APP_PHONEBOOK[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_PHONEBOOK)];
    kal_uint8 APP_PHONEBOOK_S0S_[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_PHONEBOOK_S0S_)];
    kal_uint8 APP_PHONEBOOK_S1S_[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_PHONEBOOK_S1S_)];
    kal_uint8 APP_VENUS_WALLPAPER[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_VENUS_WALLPAPER)];
    kal_uint8 APP_VENUS_WALLPAPER_TOTAL[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_TOTAL_SIZE_APP_VENUS_WALLPAPER_TOTAL)];
    kal_uint8 CONC_APP_CAMERA_APP_IMAGEVIEWER[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_CONC_TOTAL_SIZE_APP_CAMERA_APP_IMAGEVIEWER)];
    kal_uint8 CONC_APP_OPERA_APP_MEDPLY[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_CONC_TOTAL_SIZE_APP_OPERA_APP_MEDPLY)];
    kal_uint8 CONC_APP_OPERA_APP_MEDPLY_APP_VENUS_SCREEN_LOCK_KEY[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_CONC_TOTAL_SIZE_APP_OPERA_APP_MEDPLY_APP_VENUS_SCREEN_LOCK_KEY)];
    kal_uint8 CONC_APP_OPERA_APP_VDOPLY[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_CONC_TOTAL_SIZE_APP_OPERA_APP_VDOPLY)];
    kal_uint8 CONC_APP_OPERA_APP_VDOPLY_APP_VENUS_SCREEN_LOCK_KEY[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_CONC_TOTAL_SIZE_APP_OPERA_APP_VDOPLY_APP_VENUS_SCREEN_LOCK_KEY)];
    kal_uint8 CONC_APP_VENUS_WALLPAPER_TOTAL_APP_IDLE[APPLIB_MEM_AP_POOL_SIZE_CONFIG(ASM_CONC_TOTAL_SIZE_APP_VENUS_WALLPAPER_TOTAL_APP_IDLE)];
    kal_uint8 DEFAULT_POOL[APPLIB_MEM_AP_POOL_SIZE_CONFIG(APPLIB_MEM_AP_POOL_DEFAULT_SIZE)];
} app_asm_pool_sub_union;

typedef union {
    kal_uint8 dummy;
} app_asm_pool_global_union;

#endif /* __MMI_RP_APP_MEM_CONFIG_H__ */

