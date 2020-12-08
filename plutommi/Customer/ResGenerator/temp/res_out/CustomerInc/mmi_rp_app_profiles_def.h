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
 *   mmi_rp_app_profiles_def.h
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


#ifndef _MMI_RP_APP_PROFILES_DEF_H
#define _MMI_RP_APP_PROFILES_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MENU_ID_PROF_GENERAL = 40264 + 1, /* BASE_ID + 1 */
    MENU_ID_PROF_SILENT,
    MENU_ID_PROF_MEETING,
    MENU_ID_PROF_OUTDOOR,
    MENU_ID_PROF_MY_STYLE,
    MAIN_MENU_PROFILES_MENUID,
    MENU_ID_PROF_ACTIVATE,
    MENU_ID_PROF_CUSTOMIZE,
    MENU_ID_PROF_RESET,
    MENU_ID_PROF_RENAME,
    MENU_ID_PROF_MAIN_OPTIONS,
    MENU_ID_PROF_CHANGE,
    MENU_ID_PROF_SAVE,
    MENU_ID_PROF_CUSTOMIZE_OPTIONS,
    MENU_ID_PROF_RING_ONLY,
    MENU_ID_PROF_VIB_ONLY,
    MENU_ID_PROF_VIB_AND_RING,
    MENU_ID_PROF_VIB_THEN_RING,
    MENU_ID_PROF_ALERT_TYPE,
    MENU_ID_PROF_RINGING,
    MENU_ID_PROF_BEEP_ONCE,
    MENU_ID_PROF_RING_TYPE,
    MENU_ID_PROF_SILENT_TONE,
    MENU_ID_PROF_CLICK,
    MENU_ID_PROF_TONE,
    MENU_ID_PROF_KEYPAD_TONE,
    MENU_ID_PROF_SYSTEM_ALERT_ON,
    MENU_ID_PROF_SYSTEM_ALERT_OFF,
    MENU_ID_PROF_SYSTEM_ALERT,
    MENU_ID_PROF_USE_AS_RINGTONE,
    MENU_ID_PROF_USE_AS_SIM1_RINGTONE,
    MENU_ID_PROF_USE_AS_SIM2_RINGTONE,
    MENU_ID_PROF_USE_AS_SIM3_RINGTONE,
    MENU_ID_PROF_USE_AS_SIM4_RINGTONE,
    MMI_RP_APP_PROFILES_MENU_MAX
}mmi_rp_app_profiles_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_PROF_CAPTION = 40264 + 1, /* BASE_ID + 1 */
    STR_ID_PROF_GENERAL,
    STR_ID_PROF_SILENT,
    STR_ID_PROF_MEETING,
    STR_ID_PROF_OUTDOOR,
    STR_ID_PROF_MY_STYLE,
    STR_ID_PROF_GENERAL_ACTIVATED,
    STR_ID_PROF_SILENT_ACTIVATED,
    STR_ID_PROF_MEETING_ACTIVATED,
    STR_ID_PROF_OUTDOOR_ACTIVATED,
    STR_ID_PROF_MODE_ACTIVATED,
    STR_ID_PROF_CUSTOMIZE,
    STR_ID_PROF_ALERT_TYPE,
    STR_ID_PROF_RING_ONLY,
    STR_ID_PROF_VIB_ONLY,
    STR_ID_PROF_VIB_AND_RING,
    STR_ID_PROF_VIB_THEN_RING,
    STR_ID_PROF_RING_TYPE,
    STR_ID_PROF_RINGING,
    STR_ID_PROF_BEEP_ONCE,
    STR_ID_PROF_RING_TONE,
    STR_ID_PROF_SIM1_RING_TONE,
    STR_ID_PROF_SIM2_RING_TONE,
    STR_ID_PROF_SIM3_RING_TONE,
    STR_ID_PROF_SIM4_RING_TONE,
    STR_ID_PROF_RING_VOL,
    STR_ID_PROF_SIM1_MSG_TONE,
    STR_ID_PROF_SIM2_MSG_TONE,
    STR_ID_PROF_SIM3_MSG_TONE,
    STR_ID_PROF_SIM4_MSG_TONE,
    STR_ID_PROF_MSG_VOL,
    STR_ID_PROF_KEYPAD_TONE,
    STR_ID_PROF_CLICK,
    STR_ID_PROF_TONE,
    STR_ID_PROF_KEYPAD_VOL,
    STR_ID_PROF_SYSTEM_ALERT,
    STR_ID_PROF_CHANGE,
    STR_ID_PROF_SELECT_FROM_FILE,
    STR_ID_PROF_FILE_TOO_LARGE,
    STR_ID_PROF_NAME_EMPTY,
    STR_ID_PROF_NAME_INVALID,
    STR_ID_PROF_QUESTION_MARK,
    MMI_RP_APP_PROFILES_STR_MAX
}mmi_rp_app_profiles_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    GRP_ID_PROFILES = 40264 + 1, /* BASE_ID + 1 */
    SCR_KEY_TONE_VOLUME,
    MMI_RP_APP_PROFILES_SCR_MAX
}mmi_rp_app_profiles_scr_enum;
/******************** Screen resource IDs - finish ********************/


/******************** Timer resource IDs - begin ********************/
typedef enum
{
    TIMER_PROFILES_TONE_PLAY = 40264 + 1, /* BASE_ID + 1 */
    KEY_VOL_TIMER_ID,
    MMI_RP_APP_PROFILES_TIMER_MAX
}mmi_rp_app_profiles_timer_enum;
/******************** Timer resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_APP_PROFILES_VXML_LAYOUT_MAX
} mmi_rp_app_profiles_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** Image resource IDs - begin ********************/
typedef enum
{
    IMG_ID_PROF_GENERAL = 40264 + 1, /* BASE_ID + 1 */
    IMG_ID_PROF_SILENT,
    IMG_ID_PROF_MEETING,
    IMG_ID_PROF_OUTDOOR,
    IMG_ID_PROF_MY_STYLE,
    IMG_ID_PROF_TITLEE,
    IMG_ID_PROF_NO_IMAGE,
    IMG_ID_PROF_ACTIVATED,
    MMI_RP_APP_PROFILES_IMG_MAX
}mmi_rp_app_profiles_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_APP_PROFILES_DEF_H */
