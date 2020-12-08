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
 *   mmi_rp_app_sms.c
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
#include "CustDataProts.h"
#include "mmi_rp_app_sms_def.h"

/* Application specified header files for using old res IDs */
#include "MMI_features.h"
#include "MMIDataType.h"    /* for resource base */

#include "CustResDef.h"         /* for image/audio path */
#include "GlobalMenuItems.h"    /* for menu resource */

#include "GlobalResDef.h"
#include "mmi_rp_app_unifiedmessage_def.h"
#include "mmi_rp_srv_editor_def.h"
#include "gui_config.h"


/*****************************************************************************
* FUNCTION
*  mmi_rp_app_sms_populate
* DESCRIPTION
*  Automatically generated populate function for mmi_rp_app_sms_populate
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void mmi_rp_app_sms_populate(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

/******************** Menu resource IDs - begin ********************/
    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VM_VMAIL_MENUID,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_VM_VMAIL_MENUENTRY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VM_ITEM_VOICE_MAIL_OPTION,
        0,
        2,
        MENU_ID_SMS_VM_ITEM_VM_3_CONNECT_TO_VOICE,
        MENU_ID_SMS_VM_ITEM_VM_1_EDIT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VM_ITEM_VM_1_EDIT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_EDIT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VM_ITEM_VM_3_CONNECT_TO_VOICE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DIAL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_TEMPLATES_OPTIONS_MENUENTRY,
        0,
        5,
        MENU_ID_SMS_TEMPLATES_OPTIONS_WRITE_MESSAGE_MENUENTRY,
        MENU_ID_SMS_TEMPLATES_OPTIONS_NEW_MENUENTRY,
        MENU_ID_SMS_TEMPLATES_OPTIONS_EDIT_MENUENTRY,
        MENU_ID_SMS_TEMPLATES_OPTIONS_DELETE_MENUENTRY,
        MENU_ID_SMS_TEMPLATES_OPTIONS_ERASE_MENUENTRY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_TEMPLATES_OPTIONS_NEW_MENUENTRY,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_ADD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_TEMPLATES_OPTIONS_EDIT_MENUENTRY,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_EDIT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_TEMPLATES_OPTIONS_DELETE_MENUENTRY,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DELETE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_TEMPLATES_OPTIONS_ERASE_MENUENTRY,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_REMOVE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_TEMPLATES_OPTIONS_WRITE_MESSAGE_MENUENTRY,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_TEMPL_OPTIONS_WRITE_MESSAGE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_TEMPL_OPTIONS_MENU_ID,
        0,
        2,
        MENU_ID_SMS_ED_TEMPL_OPT_DONE_MENU,
        MENU_ID_SMS_ED_TEMPL_OPT_INPUT_METHODS_MENU,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_TEMPL_OPT_DONE_MENU,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SAVE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_TEMPL_OPT_INPUT_METHODS_MENU,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_INPUT_METHOD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_PROFILE_SETTING,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_PROFILE_SETTING_MENUENTRY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_PROFILE_SETTING_OPTION,
        0,
        2,
        MENU_ID_SMS_PROFILE_SETTING_OPTION_ACTIVE,
        MENU_ID_SMS_PROFILE_SETTING_OPTION_EDIT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_PROFILE_SETTING_OPTION_ACTIVE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_ACTIVATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_PROFILE_SETTING_OPTION_EDIT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_EDIT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_PREFERED_BEARER,
        0,
        3,
        MENU_ID_SMS_PREFERED_BEARER_PREFER_GPRS,
        MENU_ID_SMS_PREFERED_BEARER_PREFER_GSM,
        MENU_ID_SMS_PREFERED_BEARER_GSM,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_SMS_PREFERED_BEARER_MENUENTRY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_PREFERED_BEARER_PREFER_GSM,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_PREFER_GSM_BEARER_MENUENTRY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_PREFERED_BEARER_PREFER_GPRS,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_PREFER_GPRS_BEARER_MENUENTRY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_PREFERED_BEARER_GSM,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_GSM_BEARER_MENUENTRY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_DEFAULT_LIST_OPT,
        0,
        6,
        MENU_ID_SMS_LIST_OPT_VIEW,
        MENU_ID_SMS_LIST_OPT_CALL_SENDER,
        MENU_ID_SMS_LIST_OPT_DELETE,
        MENU_ID_UM_DEL_ALL_OPT,
        MENU_ID_UM_MS_OPT,
        MENU_ID_UM_MS_DELETE_OPT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_INBOX_LIST_OPT,
        0,
        12,
        MENU_ID_SMS_LIST_OPT_VIEW,
        MENU_ID_SMS_LIST_OPT_REPLY,
        MENU_ID_SMS_LIST_OPT_REPLY_BY_MMS,
        MENU_ID_SMS_LIST_OPT_CALL_SENDER,
        MENU_ID_SMS_LIST_OPT_FORWARD,
        MENU_ID_SMS_LIST_OPT_DELETE,
        MENU_ID_UM_DEL_ALL_OPT,
        MENU_ID_SMS_LIST_OPT_SAVE_CONTACT,
        MENU_ID_UM_MS_OPT,
        MENU_ID_UM_MS_DELETE_OPT,
        MENU_ID_SMS_LIST_OPT_MARK_AS_READ,
        MENU_ID_SMS_LIST_OPT_MARK_AS_UNREAD,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_SENT_LIST_OPT,
        0,
        6,
        MENU_ID_SMS_LIST_OPT_VIEW,
        MENU_ID_SMS_LIST_OPT_FORWARD,
        MENU_ID_SMS_LIST_OPT_DELETE,
        MENU_ID_UM_DEL_ALL_OPT,
        MENU_ID_UM_MS_OPT,
        MENU_ID_UM_MS_DELETE_OPT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_DRAFTS_LIST_OPT,
        0,
        6,
        MENU_ID_SMS_LIST_OPT_VIEW,
        MENU_ID_SMS_LIST_OPT_EDIT,
        MENU_ID_SMS_LIST_OPT_DELETE,
        MENU_ID_UM_DEL_ALL_OPT,
        MENU_ID_UM_MS_OPT,
        MENU_ID_UM_MS_DELETE_OPT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_VIEW,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_VIEW,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_REPLY,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_REPLY_BY_SMS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_REPLY_BY_MMS,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_REPLY_BY_MMS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_CALL_SENDER,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_SMS_CALL_SENDER,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_SEND,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SEND,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_EDIT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_EDIT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_FORWARD,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_FORWARD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_DELETE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DELETE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_SAVE_CONTACT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SAVE_TO_PHONEBOOK,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_MARK_AS_READ,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_MARK_AS_READ,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_MARK_AS_UNREAD,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_MARK_AS_UNREAD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_ADV_OPT_COPY_TO_PHONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_COPY_TO_PHONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_ADV_OPT_MOVE_TO_PHONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_MOVE_TO_PHONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_ADV_OPT_COPY_ALL,
        0,
        2,
        MENU_ID_SMS_LIST_ADV_OPT_COPY_ALL_FROM_SIM,
        MENU_ID_SMS_LIST_ADV_OPT_COPY_ALL_FROM_PHONE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_ID_SMS_COPY_ALL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_ADV_OPT_MOVE_ALL,
        0,
        2,
        MENU_ID_SMS_LIST_ADV_OPT_MOVE_ALL_FROM_SIM,
        MENU_ID_SMS_LIST_ADV_OPT_MOVE_ALL_FROM_PHONE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_ID_SMS_MOVE_ALL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_ADV_OPT_COPY_TO_SIM,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_COPY_TO_SIM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_ADV_OPT_MOVE_TO_SIM,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_MOVE_TO_SIM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_ADV_OPT_COPY_ALL_FROM_SIM,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_FROM_SIM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_ADV_OPT_COPY_ALL_FROM_PHONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_FROM_PHONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_ADV_OPT_MOVE_ALL_FROM_SIM,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_FROM_SIM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_ADV_OPT_MOVE_ALL_FROM_PHONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_FROM_PHONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_UNSENT_LIST_OPT,
        0,
        5,
        MENU_ID_SMS_LIST_OPT_BG_SEND,
        MENU_ID_SMS_LIST_OPT_BG_CALCEL_SEND,
        MENU_ID_SMS_LIST_OPT_BG_EDIT,
        MENU_ID_SMS_LIST_OPT_BG_DELETE,
        MENU_ID_UM_DEL_ALL_OPT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_BG_SEND,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SEND,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_BG_CALCEL_SEND,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_SMS_BACKGROUND_CANCELSEND_SMS_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_BG_EDIT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_EDIT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_LIST_OPT_BG_DELETE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DELETE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_DEFAULT_VIEWER_OPT,
        0,
        2,
        MENU_ID_SMS_VIEWER_OPT_CALL_SENDER,
        MENU_ID_SMS_VIEWER_OPT_DELETE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_INBOX_VIEWER_OPT,
        0,
        10,
        MENU_ID_SMS_VIEWER_OPT_REPLY,
        MENU_ID_SMS_VIEWER_OPT_REPLY_BY_MMS,
        MENU_ID_SMS_VIEWER_OPT_CALL_SENDER,
        MENU_ID_SMS_VIEWER_OPT_FORWARD,
        MENU_ID_SMS_VIEWER_OPT_DELETE,
        MENU_ID_SMS_USE_NUMBER_OPT,
        MENU_ID_SMS_USE_EMAIL_OPT_SAVE_TO_EMAIL,
        MENU_ID_SMS_SEND_USSD_OPT,
        MENU_ID_SMS_SAVE_OBJECTS_OPT,
        MENU_ID_SMS_VIEWER_OPT_ADVANCED,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_SENT_VIEWER_OPT,
        0,
        7,
        MENU_ID_SMS_VIEWER_OPT_FORWARD,
        MENU_ID_SMS_VIEWER_OPT_DELETE,
        MENU_ID_SMS_USE_NUMBER_OPT,
        MENU_ID_SMS_USE_EMAIL_OPT_SAVE_TO_EMAIL,
        MENU_ID_SMS_SEND_USSD_OPT,
        MENU_ID_SMS_SAVE_OBJECTS_OPT,
        MENU_ID_SMS_VIEWER_OPT_ADVANCED,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_DRAFTS_VIEWER_OPT,
        0,
        7,
        MENU_ID_SMS_VIEWER_OPT_EDIT,
        MENU_ID_SMS_VIEWER_OPT_DELETE,
        MENU_ID_SMS_USE_NUMBER_OPT,
        MENU_ID_SMS_USE_EMAIL_OPT_SAVE_TO_EMAIL,
        MENU_ID_SMS_SEND_USSD_OPT,
        MENU_ID_SMS_SAVE_OBJECTS_OPT,
        MENU_ID_SMS_VIEWER_OPT_ADVANCED,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_OPT_REPLY,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_REPLY_BY_SMS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_OPT_REPLY_BY_MMS,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_REPLY_BY_MMS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_OPT_CALL_SENDER,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_SMS_CALL_SENDER,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_OPT_SEND,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SEND,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_OPT_EDIT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_EDIT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_OPT_FORWARD,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_FORWARD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_OPT_DELETE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DELETE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_USE_NUMBER_OPT,
        SMS_CLASS0_OPT_MENUID,
        4,
        MENU_ID_SMS_USE_NUMBER_OPT_DIAL_NUM,
        MENU_ID_SMS_USE_NUMBER_OPT_SAVE_TO_PB,
        MENU_ID_SMS_USE_NUMBER_OPT_SEND_SMS,
        MENU_ID_SMS_USE_NUMBER_OPT_SEND_MMS,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_ID_SMS_USE_NUM_ADDRESS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_USE_EMAIL_OPT,
        0,
        1,
        MENU_ID_SMS_USE_EMAIL_OPT_SAVE_TO_EMAIL,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_ID_SMS_USE_EMAIL_ADDRESS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_USE_EMAIL_OPT_SAVE_TO_EMAIL,
        SMS_CLASS0_OPT_MENUID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SAVE_TO_PHONEBOOK,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_SEND_USSD_OPT,
        MENU_ID_SMS_USE_USSD_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_SEND_USSD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_SAVE_OBJECTS_OPT,
        MENU_ID_SMS_USE_OBJECT_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_SAVE_AS_OBJECT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_USE_USSD_OPT,
        0,
        1,
        MENU_ID_SMS_SEND_USSD_OPT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_ID_SMS_USE_USSD_ADDRESS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_USE_OBJECT_OPT,
        0,
        1,
        MENU_ID_SMS_SAVE_OBJECTS_OPT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_ID_SMS_USE_OBJECT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_OPT_ADVANCED,
        0,
        6,
        MENU_ID_SMS_VIEWER_ADV_OPT_COPY_TO_PHONE,
        MENU_ID_SMS_VIEWER_ADV_OPT_COPY_TO_SIM,
        MENU_ID_SMS_VIEWER_ADV_OPT_MOVE_TO_PHONE,
        MENU_ID_SMS_VIEWER_ADV_OPT_MOVE_TO_SIM,
        MENU_ID_SMS_VIEWER_ADV_OPT_AUTO_FIND_ON,
        MENU_ID_SMS_VIEWER_ADV_OPT_AUTO_FIND_OFF,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_ADVANCED,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_ADV_OPT_COPY_TO_PHONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_COPY_TO_PHONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_ADV_OPT_MOVE_TO_PHONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_MOVE_TO_PHONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_ADV_OPT_COPY_TO_SIM,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_COPY_TO_SIM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_ADV_OPT_MOVE_TO_SIM,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_MOVE_TO_SIM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_ADV_OPT_AUTO_FIND_ON,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_AUTO_FIND_ON,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_VIEWER_ADV_OPT_AUTO_FIND_OFF,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_AUTO_FIND_OFF,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_USE_NUMBER_OPT_DIAL_NUM,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DIAL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_USE_NUMBER_OPT_SAVE_TO_PB,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SAVE_TO_PHONEBOOK,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_USE_NUMBER_OPT_SEND_SMS,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SEND_TEXT_MESSAGE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_USE_NUMBER_OPT_SEND_MMS,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SEND_MULTIMEDIA_MESSAGE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EDITOR_OPTIONS,
        0,
        8,
        MENU_ID_SMS_ED_OPT_SEND_TO,
        MENU_ID_SMS_ED_OPT_ADD_RECIPIENT,
        MENU_ID_EDITOR_OPT_INSERT_SYMBOL,
        MENU_ID_EDITOR_OPT_INPUT_METHOD,
        MENU_ID_EDITOR_OPT_INPUT_METHOD_OPTIONS,
        MENU_ID_SMS_ED_OPT_INSERT_TEMPLATE,
        MENU_ID_SMS_ED_OPT_ADVANCED,
        MENU_ID_SMS_ED_OPT_SAVE_TO_DRAFTS,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_OPT_SEND_TO,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SEND,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_OPT_ADD_RECIPIENT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_ADD_RECIPIENT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_OPT_INSERT_TEMPLATE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_INSERT_TEMPLATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_OPT_ADVANCED,
        0,
        4,
        MENU_ID_SMS_ED_OPT_INSERT_OBJECT,
        MENU_ID_SMS_ED_OPT_INSERT_NUMBER,
        MENU_ID_SMS_ED_OPT_INSERT_NAME,
        MENU_ID_SMS_ED_OPT_TEXT_FORMAT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_ADVANCED,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_OPT_SAVE_TO_DRAFTS,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SAVE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_OPT_INSERT_OBJECT,
        0,
        7,
        MENU_ID_SMS_EMS_PICTURE,
        MENU_ID_SMS_EMS_MY_PICTURE,
        MENU_ID_SMS_EMS_PREDEF_ANIMATION,
        MENU_ID_SMS_EMS_MY_ANIMATION,
        MENU_ID_SMS_EMS_MELODY,
        MENU_ID_SMS_EMS_MY_MELODY,
        MENU_ID_SMS_EMS_PREDEF_SOUND,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_OPT_INS_OBJECT_MENUENTRY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_OPT_TEXT_FORMAT,
        0,
        4,
        MENU_ID_SMS_EMS_TEXT_SIZE,
        MENU_ID_SMS_EMS_TEXT_STYLE,
        MENU_ID_SMS_EMS_ALIGNMENT,
        MENU_ID_SMS_EMS_NEW_PARAGRAPH,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_EMS_FORMATING_TEXT_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_OPT_INSERT_NUMBER,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_INSERT_NUMBER,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_ED_OPT_INSERT_NAME,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_INSERT_NAME,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_RECIPIENT_OPTIONS,
        0,
        5,
        MENU_ID_SMS_RECIPIENT_OPT_SEND,
        MENU_ID_SMS_RECIPIENT_OPT_EDIT,
        MENU_ID_SMS_RECIPIENT_OPT_REMOVE,
        MENU_ID_SMS_RECIPIENT_OPT_REMOVE_ALL,
        MENU_ID_SMS_RECIPIENT_OPT_SAVE_TO_DRAFTS,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_RECIPIENT_OPT_SEND,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SEND,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_RECIPIENT_OPT_SAVE_TO_DRAFTS,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SAVE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_RECIPIENT_OPT_EDIT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_EDIT_RECIPIENT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_RECIPIENT_OPT_REMOVE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_REMOVE_RECIPIENT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_RECIPIENT_OPT_REMOVE_ALL,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_REMOVE_ALL_RECIPIENT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_PICTURE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_PICTURE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_MY_PICTURE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_INS_OBJ_MY_PICTURE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_PREDEF_ANIMATION,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_INS_OBJ_PRED_ANIMATION,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_MY_ANIMATION,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_INS_OBJ_MY_ANIMATION,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_MELODY,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_INS_OBJ_MELODY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_MY_MELODY,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_INS_OBJ_MY_MELODY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_PREDEF_SOUND,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_INS_OBJ_MY_SOUND,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_TEXT_SIZE,
        0,
        3,
        MENU_ID_SMS_EMS_TEXT_SIZE_SMALL,
        MENU_ID_SMS_EMS_TEXT_SIZE_NORMAL,
        MENU_ID_SMS_EMS_TEXT_SIZE_LARGE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_EMS_TEXT_SIZE_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_TEXT_STYLE,
        0,
        4,
        MENU_ID_SMS_EMS_TEXT_STYLE_BOLD,
        MENU_ID_SMS_EMS_TEXT_STYLE_ITALICS,
        MENU_ID_SMS_EMS_TEXT_STYLE_UNDERLINE,
        MENU_ID_SMS_EMS_TEXT_STYLE_STRIKETHROUGH,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_EMS_TEXT_STYLE_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_ALIGNMENT,
        0,
        4,
        MENU_ID_SMS_EMS_ALIGNMENT_AUTOMATIC,
        MENU_ID_SMS_EMS_ALIGNMENT_LEFT,
        MENU_ID_SMS_EMS_ALIGNMENT_CENTER,
        MENU_ID_SMS_EMS_ALIGNMENT_RIGHT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_EMS_ALIGNMENT_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_NEW_PARAGRAPH,
        0,
        4,
        MENU_ID_SMS_EMS_NEW_PARAGRAPH_AUTOMATIC,
        MENU_ID_SMS_EMS_NEW_PARAGRAPH_LEFT,
        MENU_ID_SMS_EMS_NEW_PARAGRAPH_CENTER,
        MENU_ID_SMS_EMS_NEW_PARAGRAPH_RIGHT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_EMS_NEW_PARAGRAPH_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_TEXT_SIZE_SMALL,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_TEXT_SIZE_SMALL_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_TEXT_SIZE_NORMAL,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_MEDIUM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_TEXT_SIZE_LARGE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_TEXT_SIZE_LARGE_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_TEXT_STYLE_BOLD,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_TEXT_STYLE_BOLD_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_TEXT_STYLE_ITALICS,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_TEXT_STYLE_ITALICS_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_TEXT_STYLE_UNDERLINE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_TEXT_STYLE_UNDERLINE_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_TEXT_STYLE_STRIKETHROUGH,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_TEXT_STYLE_STRIKETHROUGH_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_ALIGNMENT_AUTOMATIC,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_AUTOMATIC,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_ALIGNMENT_LEFT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_ALIGNMENT_LEFT_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_ALIGNMENT_CENTER,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_ALIGNMENT_CENTER_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_ALIGNMENT_RIGHT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_ALIGNMENT_RIGHT_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_NEW_PARAGRAPH_AUTOMATIC,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_AUTOMATIC,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_NEW_PARAGRAPH_LEFT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_NEW_PARAGRAPH_LEFT_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_NEW_PARAGRAPH_CENTER,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_NEW_PARAGRAPH_CENTER_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_EMS_NEW_PARAGRAPH_RIGHT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_EMS_NEW_PARAGRAPH_RIGHT_ID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_FMGR_FWD_EMS,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_AS_TEXT_MESSAGE,
        0));

    ADD_APPLICATION_MENUITEM5((
        SMS_CLASS0_OPT_MENUID,
        0,
        7,
        MENU_ID_SMS_USE_NUMBER_OPT,
        MENU_ID_SMS_USE_EMAIL_OPT_SAVE_TO_EMAIL,
        MENU_ID_SMS_SEND_USSD_OPT,
        MENU_ID_SMS_SAVE_OBJECTS_OPT,
        MENU_ID_SMS_CLSASS0_OPT_SAVE_TO_INBOX,
        SMS_CLSASS0_OPT_AUTO_FIND_ON,
        SMS_CLSASS0_OPT_AUTO_FIND_OFF,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        SMS_CLSASS0_OPT_USE_NUMBER_MENUID,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_USE_NUM_ADDRESS,
        0));

    ADD_APPLICATION_MENUITEM5((
        SMS_CLSASS0_OPT_USE_EMAIL_OPT_SAVE_TO_EMAIL,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SAVE_TO_PHONEBOOK,
        0));

    ADD_APPLICATION_MENUITEM5((
        SMS_CLSASS0_OPT_SEND_USSD_OPT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_SEND_USSD,
        0));

    ADD_APPLICATION_MENUITEM5((
        SMS_CLSASS0_OPT_SAVE_OBJECTS_OPT,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_SAVE_AS_OBJECT,
        0));

    ADD_APPLICATION_MENUITEM5((
        SMS_CLSASS0_OPT_AUTO_FIND_ON,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_AUTO_FIND_ON,
        0));

    ADD_APPLICATION_MENUITEM5((
        SMS_CLSASS0_OPT_AUTO_FIND_OFF,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_AUTO_FIND_OFF,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SMS_CLSASS0_OPT_SAVE_TO_INBOX,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SMS_SAVE_TO_INBOX,
        0));

    ADD_APPLICATION_MENUITEM5((
        SMS_INBOX_OPT_SAVE_OBJECT_OPTION,
        0,
        2,
        SMS_INBOX_OPT_SAVE_OPTION_DONE,
        SMS_INBOX_OPT_SAVE_OPTION_INPUT_METHOD,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        SMS_INBOX_OPT_SAVE_OPTION_DONE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        SMS_INBOX_OPT_SAVE_OPTION_INPUT_METHOD,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_INPUT_METHOD,
        0));

/******************** Menu resource IDs - finish ********************/

/******************** Menu Hilite/Hint Handlers - begin ********************/
/******************** Menu Hilite/Hint Handlers - finish ********************/
}
