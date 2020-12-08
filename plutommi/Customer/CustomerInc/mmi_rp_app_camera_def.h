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
 *   mmi_rp_app_camera_def.h
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


#ifndef _MMI_RP_APP_CAMERA_DEF_H
#define _MMI_RP_APP_CAMERA_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MENU_ID_CAMERA_TO_IMGVIEW = 34610 + 1, /* BASE_ID + 1 */
    MENU_ID_CAMERA_CAMERA_SETTING,
    MENU_ID_CAMERA_IMAGE_SETTING,
    MAIN_MENU_OPTION_CAMERA_APP,
    MENU_ID_CAMERA_WB_AUTO,
    MENU_ID_CAMERA_WB_DAYLIGHT,
    MENU_ID_CAMERA_WB_TUNGSTEN,
    MENU_ID_CAMERA_WB_FLUORESCENT,
    MENU_ID_CAMERA_WB_CLOUD,
    MENU_ID_CAMERA_WB_INCANDESCENCE,
    MENU_ID_CAMERA_DSC_MODE_AUTO,
    MENU_ID_CAMERA_DSC_MODE_NIGHT,
    MENU_ID_CAMERA_EFFECT_NORMAL,
    MENU_ID_CAMERA_EFFECT_GRAYSCALE,
    MENU_ID_CAMERA_EFFECT_SEPIA,
    MENU_ID_CAMERA_EFFECT_SEPIA_GREEN,
    MENU_ID_CAMERA_EFFECT_SEPIA_BLUE,
    MENU_ID_CAMERA_EFFECT_COLOR_INVERT,
    MENU_ID_CAMERA_STORAGE_PHONE,
    MENU_ID_CAMERA_STORAGE_MEMORY_CARD,
    MENU_ID_CAMERA_RESTORE_DEFAULT,
    MENU_ID_CAMERA_CONFIRM_OPTION_DELETE,
    MENU_ID_CAMERA_FORWARD_OPTION_TO_MMS,
    MENU_ID_CAMERA_FORWARD_OPTION_TO_BT,
    MENU_ID_CAMERA_FORWARD_OPTION_TO_EMAIL,
    MENU_ID_CAMERA_APP,
    MENU_ID_CAMERA_OPTION,
    MENU_ID_CAMERA_EFFECT_CUSTOM_FX_SET_OPTION,
    MENU_ID_CAMERA_EFFECT_CUSTOM_FX_EDIT_OPTION,
    MENU_ID_CAMERA_STORAGE,
    MENU_ID_CAMERA_WB,
    MENU_ID_CAMERA_DSC_MODE,
    MENU_ID_CAMERA_EFFECT_SETTING,
    MENU_ID_CAMERA_CONFIRM_OPTION,
    MENU_ID_CAMERA_FORWARD_OPTION,
    MMI_RP_APP_CAMERA_MENU_MAX
}mmi_rp_app_camera_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_CAMERA_APP_NAME = 34610 + 1, /* BASE_ID + 1 */
    STR_ID_CAMERA_TO_IMGVIEW,
    STR_ID_CAMERA_CAMERA_SETTING,
    STR_ID_CAMERA_IMAGE_SETTING,
    STR_ID_CAMERA_RESTORE_DEFAULT,
    STR_ID_CAMERA_EFFECT_SETTING,
    STR_ID_CAMERA_EFFECT_NORMAL,
    STR_ID_CAMERA_EFFECT_GRAYSCALE,
    STR_ID_CAMERA_EFFECT_SEPIA,
    STR_ID_CAMERA_EFFECT_SEPIA_GREEN,
    STR_ID_CAMERA_EFFECT_SEPIA_BLUE,
    STR_ID_CAMERA_EFFECT_COLOR_INVERT,
    STR_ID_CAMERA_DELETE_ASK,
    STR_ID_CAMERA_DELAY_TIMER,
    STR_ID_CAMERA_DELAY_TIMER_OFF,
    STR_ID_CAMERA_DELAY_TIMER_1,
    STR_ID_CAMERA_DELAY_TIMER_2,
    STR_ID_CAMERA_DELAY_TIMER_3,
    STR_ID_CAMERA_WB,
    STR_ID_CAMERA_WB_AUTO,
    STR_ID_CAMERA_WB_DAYLIGHT,
    STR_ID_CAMERA_WB_TUNGSTEN,
    STR_ID_CAMERA_WB_FLUORESCENT,
    STR_ID_CAMERA_WB_CLOUD,
    STR_ID_CAMERA_WB_INCANDESCENCE,
    STR_ID_CAMERA_DSC_MODE,
    STR_ID_CAMERA_DSC_MODE_AUTO,
    STR_ID_CAMERA_DSC_MODE_NIGHT,
    STR_ID_CAMERA_FLASH,
    STR_ID_CAMERA_SHUTTER_SOUND,
    STR_ID_CAMERA_SHUTTER_SOUND_OFF,
    STR_ID_CAMERA_SHUTTER_SOUND_1,
    STR_ID_CAMERA_SHUTTER_SOUND_2,
    STR_ID_CAMERA_SHUTTER_SOUND_3,
    STR_ID_CAMERA_EV,
    STR_ID_CAMERA_EV_N4,
    STR_ID_CAMERA_EV_N3,
    STR_ID_CAMERA_EV_N2,
    STR_ID_CAMERA_EV_N1,
    STR_ID_CAMERA_EV_0,
    STR_ID_CAMERA_EV_P1,
    STR_ID_CAMERA_EV_P2,
    STR_ID_CAMERA_EV_P3,
    STR_ID_CAMERA_EV_P4,
    STR_ID_CAMERA_CONTRAST,
    STR_ID_CAMERA_CONTRAST_HIGH,
    STR_ID_CAMERA_CONTRAST_MEDIUM,
    STR_ID_CAMERA_CONTRAST_LOW,
    STR_ID_CAMERA_BANDING,
    STR_ID_CAMERA_BANDING_50HZ,
    STR_ID_CAMERA_BANDING_60HZ,
    STR_ID_CAMERA_IMAGE_SIZE,
    STR_ID_CAMERA_IMAGE_SIZE_240x320,
    STR_ID_CAMERA_IMAGE_SIZE_160x120,
    STR_ID_CAMERA_IMAGE_SIZE_320x240,
    STR_ID_CAMERA_IMAGE_SIZE_640x480,
    STR_ID_CAMERA_IMAGE_QTY,
    STR_ID_CAMERA_IMAGE_QTY_LOW,
    STR_ID_CAMERA_IMAGE_QTY_NORMAL,
    STR_ID_CAMERA_IMAGE_QTY_HIGH,
    STR_ID_CAMERA_NOTIFY_NO_MEMORY_CARD,
    STR_ID_CAMERA_NOTIFY_WRITE_PROTECTION,
    STR_ID_CAMERA_NOTIFY_HW_NOT_READY,
    STR_ID_CAMERA_NOTIFY_ERROR,
    STR_ID_CAMERA_NOFIFY_CAPTURING,
    STR_ID_CAMERA_NOTIFY_SAVING_FAIL,
    STR_ID_CAMERA_NOTIFY_RESTORE_DEFAULT_CONFIRM,
    STR_ID_CAMERA_NOTIFY_CREATE_DIR_ERR,
    STR_ID_CAMERA_NOTIFY_CAPTURE_FAILED,
    STR_ID_CAMERA_NOTIFY_BT_IS_WORKING,
    STR_ID_CAMERA_NOTIFY_BEARER_IS_ACTIVE,
    STR_ID_CAMERA_NOTIFY_XENON_TIMEOUT,
    STR_ID_CAMERA_NOTIFY_XENON_LOW_BATTERY,
    MMI_RP_APP_CAMERA_STR_MAX
}mmi_rp_app_camera_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    SCR_ID_CAMERA_APP = 34610 + 1, /* BASE_ID + 1 */
    SCR_ID_CAMERA_OPTION,
    SCR_ID_CAMERA_CAMERA_SETTING,
    SCR_ID_CAMERA_IMAGE_SETTING,
    SCR_ID_CAMERA_EFFECT_SETTING,
    SCR_ID_CAMERA_ADD_FRAME,
    SCR_ID_CAMERA_ADD_FRAME_OPTION,
    SCR_ID_CAMERA_ADD_FRAME_VIEW,
    SCR_ID_CAMERA_CONT_SHOT,
    SCR_ID_CAMERA_DELAY_TIMER,
    SCR_ID_CAMERA_STORAGE,
    SCR_ID_CAMERA_EFFECT_SET_OPTION,
    SCR_ID_CAMERA_EFFECT_EDIT,
    SCR_ID_CAMERA_EFFECT_SAVE_OPTION,
    SCR_ID_CAMERA_ADD_FRAME_SET_OPTION,
    SCR_ID_CAMERA_RESTORE_DEFAULT,
    SCR_ID_CAMERA_DSC_MODE,
    SCR_ID_CAMERA_DSC_MODE_SETTING,
    SCR_ID_CAMERA_AUTOFOCUS_METERING,
    SCR_ID_CAMERA_AUTOFOCUS_MODE,
    SCR_ID_CAMERA_ISO,
    SCR_ID_CAMERA_WB,
    SCR_ID_CAMERA_WB_MANUAL,
    SCR_ID_CAMERA_WB_MANUAL_HELP,
    SCR_ID_GROUP_CAMERA_SUBLCD,
    SCR_ID_CAMERA_SUBLCD_APP,
    SCR_ID_CAMERA_SUBLCD_OPTION,
    SCR_ID_CAMERA_SUBLCD_OPTION_FLASH,
    SCR_ID_CAMERA_EXTERNAL_REQUESET_SCREEN,
    SCR_ID_CAMERA_SCREEN_SNAPSHOT,
    SCR_ID_CAMERA_FORWARD_OPTION,
    SCR_ID_CAMERA_END,
    MMI_RP_APP_CAMERA_SCR_MAX
}mmi_rp_app_camera_scr_enum;
/******************** Screen resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_APP_CAMERA_VXML_LAYOUT_MAX
} mmi_rp_app_camera_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** MMI Cache IDs - Begin ********************/
typedef enum
{
    NVRAM_CAM_FILENAME_SEQ_NO = 34610 + 1, /* BASE_ID + 1 */    /*        SHORT */ 
    NVRAM_SCR_SNAPSHOT_SEQ_NO,                                  /*        SHORT */ 
    MMI_RP_APP_CAMERA_MMI_CACHE_MAX
} mmi_rp_app_camera_mmi_cache_enum;
/******************** MMI Cache IDs - End ********************/


/******************** Image resource IDs - begin ********************/
typedef enum
{
    IMG_ID_CAMERA_APP_ICON = 34610 + 1, /* BASE_ID + 1 */
    IMG_ID_CAMERA_OSD_WB_START,
    IMG_ID_CAMERA_OSD_WB_AUTO,
    IMG_ID_CAMERA_OSD_WB_DAYLIGHT,
    IMG_ID_CAMERA_OSD_WB_TUNGSTEN,
    IMG_ID_CAMERA_OSD_WB_FLUORESCENT,
    IMG_ID_CAMERA_OSD_WB_CLOUD,
    IMG_ID_CAMERA_OSD_WB_INCANDESCENCE,
    IMG_ID_CAMERA_OSD_EV_START,
    IMG_ID_CAMERA_OSD_EV_N4,
    IMG_ID_CAMERA_OSD_EV_N3,
    IMG_ID_CAMERA_OSD_EV_N2,
    IMG_ID_CAMERA_OSD_EV_N1,
    IMG_ID_CAMERA_OSD_EV_0,
    IMG_ID_CAMERA_OSD_EV_P1,
    IMG_ID_CAMERA_OSD_EV_P2,
    IMG_ID_CAMERA_OSD_EV_P3,
    IMG_ID_CAMERA_OSD_EV_P4,
    IMG_ID_CAMERA_OSD_EV_INC,
    IMG_ID_CAMERA_OSD_EV_INC_SEL,
    IMG_ID_CAMERA_OSD_EV_INC_DIS,
    IMG_ID_CAMERA_OSD_EV_DEC,
    IMG_ID_CAMERA_OSD_EV_DEC_SEL,
    IMG_ID_CAMERA_OSD_EV_DEC_DIS,
    IMG_ID_CAMERA_OSD_IMAGE_SIZE_START,
    IMG_ID_CAMERA_IMAGE_SIZE_240x320,
    IMG_ID_CAMERA_IMAGE_SIZE_160x120,
    IMG_ID_CAMERA_IMAGE_SIZE_320x240,
    IMG_ID_CAMERA_IMAGE_SIZE_640x480,
    IMG_ID_CAMERA_OSD_IMAGE_QTY_START,
    IMG_ID_CAMERA_OSD_IMAGE_QTY_LOW,
    IMG_ID_CAMERA_OSD_IMAGE_QTY_NORMAL,
    IMG_ID_CAMERA_OSD_IMAGE_QTY_HIGH,
    IMG_ID_CAMERA_OSD_DSC_MODE_START,
    IMG_ID_CAMERA_OSD_DSC_MODE_AUTO,
    IMG_ID_CAMERA_OSD_DSC_MODE_NIGHT,
    IMG_ID_CAMERA_OSD_DELAY_TIMER_START,
    IMG_ID_CAMERA_OSD_DELAY_TIMER_OFF,
    IMG_ID_CAMERA_OSD_DELAY_TIMER_1,
    IMG_ID_CAMERA_OSD_DELAY_TIMER_2,
    IMG_ID_CAMERA_OSD_DELAY_TIMER_3,
    IMG_ID_CAMERA_OSD_EFFECT_START,
    IMG_ID_CAMERA_OSD_EFFECT_NORMAL,
    IMG_ID_CAMERA_OSD_EFFECT_GRAYSCALE,
    IMG_ID_CAMERA_OSD_EFFECT_SEPIA,
    IMG_ID_CAMERA_OSD_EFFECT_SEPIA_GREEN,
    IMG_ID_CAMERA_OSD_EFFECT_SEPIA_BLUE,
    IMG_ID_CAMERA_OSD_EFFECT_COLOR_INVERT,
    IMG_ID_CAMERA_OSD_CAPTURE,
    IMG_ID_CAMERA_OSD_CAPTURE_SEL,
    IMG_ID_CAMERA_OSD_ZOOM_HEAD,
    IMG_ID_CAMERA_OSD_NUM_00,
    IMG_ID_CAMERA_OSD_NUM_01,
    IMG_ID_CAMERA_OSD_NUM_02,
    IMG_ID_CAMERA_OSD_NUM_03,
    IMG_ID_CAMERA_OSD_NUM_04,
    IMG_ID_CAMERA_OSD_NUM_05,
    IMG_ID_CAMERA_OSD_NUM_06,
    IMG_ID_CAMERA_OSD_NUM_07,
    IMG_ID_CAMERA_OSD_NUM_08,
    IMG_ID_CAMERA_OSD_NUM_09,
    IMG_ID_CAMERA_OSD_NUM_DOT,
    IMG_ID_CAMERA_OSD_NUM_DASH,
    IMG_ID_CAMERA_OSD_ZOOM_BAR,
    IMG_ID_CAMERA_OSD_ZOOM_INC,
    IMG_ID_CAMERA_OSD_ZOOM_DEC,
    IMG_ID_CAMERA_OSD_ZOOM_INC_SEL,
    IMG_ID_CAMERA_OSD_ZOOM_DEC_SEL,
    IMG_ID_CAMERA_OSD_ZOOM_INC_DIS,
    IMG_ID_CAMERA_OSD_ZOOM_DEC_DIS,
    MMI_RP_APP_CAMERA_IMG_MAX
}mmi_rp_app_camera_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_APP_CAMERA_DEF_H */
