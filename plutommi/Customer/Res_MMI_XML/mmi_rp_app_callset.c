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
 *   mmi_rp_app_callset.c
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
#include "mmi_rp_app_callset_def.h"

/* Application specified header files for using old res IDs */
#include "MMI_features.h"
#include "MMIDataType.h"    /* for resource base */

#include "CustResDef.h"         /* for image/audio path */
#include "GlobalMenuItems.h"    /* for menu resource */

#include "GlobalResDef.h"
#include "SettingResDef.h"
#include "GlobalMenuItems.h"
#include "Mmi_rp_all_defs.h"


/*****************************************************************************
* FUNCTION
*  mmi_rp_app_callset_populate
* DESCRIPTION
*  Automatically generated populate function for mmi_rp_app_callset_populate
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void mmi_rp_app_callset_populate(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

/******************** Menu resource IDs - begin ********************/
    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CALL_CENTER,
        MAIN_MENU_CALL_CENTER,
        2,
        MENU_ID_CALLSET_CALL_LOG,
        MENU_ID_CALLSET_CALL_SETTING,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CALL_CENTER,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CALL_LOG,
        MENU_ID_CALLSET_CALL_CENTER,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        MAIN_MENU_CALL_LOG_TEXT,
        IMG_ID_CLOG_MAIN_ICON));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CID,
        MENU_ID_CALLSET_CALL_SETTING,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CALL_WAIT,
        MENU_ID_CALLSET_CALL_SETTING,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CALLWAIT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_LINE_SWITCH,
        MENU_ID_CALLSET_CALL_SETTING,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_LINE_SWITCH,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CUG,
        MENU_ID_CALLSET_CALL_SETTING,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CUG,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CALL_SETTING,
        MAIN_MENU_CALL_CENTER,
        7,
        MENU_ID_CALLSET_CID,
        MENU_ID_CALLSET_CALL_WAIT,
        MENU_ID_CALLSET_CALL_FWD,
        MENU_ID_CALLSET_CALL_BAR,
        MENU_ID_CALLSET_LINE_SWITCH,
        MENU_ID_CALLSET_CUG,
        MENU_ID_CALLSET_MORE,
        SHOW,
        MOVEABLEWITHINPARENT,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CALL_SETTING,
        IMG_ID_CALLSET_CALL_SETTING));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFU_VOICE,
        MENU_ID_CALLSET_CALL_FWD,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CFU_VOICE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFNRC_VOICE,
        MENU_ID_CALLSET_CALL_FWD,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CFNRC,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFNRY_VOICE,
        MENU_ID_CALLSET_CALL_FWD,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CFNRY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFB_VOICE,
        MENU_ID_CALLSET_CALL_FWD,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CFB,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFU_DATA,
        MENU_ID_CALLSET_CALL_FWD,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CFU_DATA,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CALLFWD_CANCELALL,
        MENU_ID_CALLSET_CALL_FWD,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CALLFWD_CANCELALL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CALL_FWD,
        0,
        6,
        MENU_ID_CALLSET_CFU_VOICE,
        MENU_ID_CALLSET_CFNRC_VOICE,
        MENU_ID_CALLSET_CFNRY_VOICE,
        MENU_ID_CALLSET_CFB_VOICE,
        MENU_ID_CALLSET_CFU_DATA,
        MENU_ID_CALLSET_CALLFWD_CANCELALL,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CALLFWD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CALL_BAR,
        0,
        4,
        MENU_ID_CALLSET_CB_OUT,
        MENU_ID_CALLSET_CB_IN,
        MENU_ID_CALLSET_CB_CANCELALL,
        MENU_ID_CALLSET_CB_CHANGEPASS,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CALL_BAR,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CB_OUT,
        MENU_ID_CALLSET_CALL_BAR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CB_OUT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CB_IN,
        MENU_ID_CALLSET_CALL_BAR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CB_IN,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CB_CANCELALL,
        MENU_ID_CALLSET_CALL_BAR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CB_CANCELALL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CB_CHANGEPASS,
        MENU_ID_CALLSET_CALL_BAR,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CB_CHANGEPASS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_MORE,
        0,
        9,
        MENU_ID_CALLSET_BLACKLIST,
        MENU_ID_CALLSET_AUTOREDIAL,
        MENU_ID_CALLSET_IP_NUMBER,
        MENU_ID_CALLSET_CTD,
        MENU_ID_CALLSET_CTR,
        MENU_ID_CALLSET_QUICK_END,
        MENU_ID_CALLSET_REJ_BY_SMS,
        MENU_ID_CALLSET_CONNECT_NOTICE,
        MENU_ID_CALLSET_ANS_MODE,
        SHOW,
        MOVEABLEWITHINPARENT,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_MORE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_AUTOREDIAL,
        MENU_ID_CALLSET_MORE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_AUTOREDIAL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_IP_NUMBER,
        MENU_ID_CALLSET_MORE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_IP_NUMBER,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CTD,
        MENU_ID_CALLSET_MORE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CTD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CTR,
        MENU_ID_CALLSET_MORE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CTR,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_QUICK_END,
        MENU_ID_CALLSET_MORE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_QUICK_END,
        IMG_ID_CALLSET_QUICK_END));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_REJ_BY_SMS,
        MENU_ID_CALLSET_MORE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_REJ_BY_SMS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CONNECT_NOTICE,
        MENU_ID_CALLSET_MORE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CONNECT_NOTICE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_ANS_MODE,
        MENU_ID_CALLSET_MORE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_ANS_MODE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_BL_REJ_UNKNOWN_NUM,
        MENU_ID_CALLSET_BLACKLIST,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_BLACKLIST_REJ_UNKNOWN_NUM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_BL_FROM_LIST,
        MENU_ID_CALLSET_BLACKLIST,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_BLACKLIST_FROM_LIST,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_BL_NUM,
        MENU_ID_CALLSET_BLACKLIST,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_BLACKLIST_NUM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_BLACKLIST,
        0,
        3,
        MENU_ID_CALLSET_BL_REJ_UNKNOWN_NUM,
        MENU_ID_CALLSET_BL_FROM_LIST,
        MENU_ID_CALLSET_BL_NUM,
        SHOW,
        MOVEABLEWITHINPARENT,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_BLACKLIST,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CID_MODE,
        0,
        3,
        MENU_ID_CALLSET_CID_AUTO,
        MENU_ID_CALLSET_CID_HIDE,
        MENU_ID_CALLSET_CID_SEND,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CID,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CID_AUTO,
        MENU_ID_CALLSET_CID_MODE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CID_AUTO,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CID_HIDE,
        MENU_ID_CALLSET_CID_MODE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CID_HIDE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CID_SEND,
        MENU_ID_CALLSET_CID_MODE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CID_SEND,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_ACTIVATE,
        MENU_ID_CALLSET_CALL_WAIT_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_ACTIVATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_CALL_WAIT_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DEACTIVATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_QUERY,
        MENU_ID_CALLSET_CALL_WAIT_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_QUERY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CF_NUM_EDIT_FROM_PHB,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CF_NUM_EDIT_FROM_PHB,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CALL_WAIT_OPT,
        0,
        3,
        MENU_ID_CALLSET_ACTIVATE,
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_QUERY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CALLWAIT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_ACTIVATE_CF,
        MENU_ID_CALLSET_CFU_VOICE_OPT,
        2,
        MENU_ID_CALLSET_CF_TO_NEW,
        MENU_ID_CALLSET_CF_TO_VM,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_GLOBAL_ACTIVATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CF_TO_NEW,
        MENU_ID_CALLSET_ACTIVATE_CF,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CF_TO_NEW,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CF_TO_VM,
        MENU_ID_CALLSET_ACTIVATE_CF,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CF_TO_VM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFU_VOICE_OPT,
        0,
        3,
        MENU_ID_CALLSET_ACTIVATE_CF,
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_QUERY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CALLFWD_OPT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFNRC_VOICE_OPT,
        0,
        3,
        MENU_ID_CALLSET_ACTIVATE_CF,
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_QUERY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CALLFWD_OPT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFNRY_VOICE_OPT,
        0,
        3,
        MENU_ID_CALLSET_ACTIVATE_CF,
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_QUERY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CALLFWD_OPT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFB_VOICE_OPT,
        0,
        3,
        MENU_ID_CALLSET_ACTIVATE_CF,
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_QUERY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CALLFWD_OPT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFU_DATA_OPT,
        0,
        3,
        MENU_ID_CALLSET_ACTIVATE_CF,
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_QUERY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CALLFWD_OPT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFNRY_TIME_OPT,
        0,
        6,
        MENU_ID_CALLSET_CFNRY_5_SEC,
        MENU_ID_CALLSET_CFNRY_10_SEC,
        MENU_ID_CALLSET_CFNRY_15_SEC,
        MENU_ID_CALLSET_CFNRY_20_SEC,
        MENU_ID_CALLSET_CFNRY_25_SEC,
        MENU_ID_CALLSET_CFNRY_30_SEC,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CFNRY_WAIT_TIME,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFNRY_5_SEC,
        MENU_ID_CALLSET_CFNRY_TIME_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CFNRY_5_SEC,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFNRY_10_SEC,
        MENU_ID_CALLSET_CFNRY_TIME_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CFNRY_10_SEC,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFNRY_15_SEC,
        MENU_ID_CALLSET_CFNRY_TIME_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CFNRY_15_SEC,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFNRY_20_SEC,
        MENU_ID_CALLSET_CFNRY_TIME_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CFNRY_20_SEC,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFNRY_25_SEC,
        MENU_ID_CALLSET_CFNRY_TIME_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CFNRY_25_SEC,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CFNRY_30_SEC,
        MENU_ID_CALLSET_CFNRY_TIME_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CFNRY_30_SEC,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CB_OUT_OPT,
        0,
        3,
        MENU_ID_CALLSET_CB_OUT_BAOC_VOICE,
        MENU_ID_CALLSET_CB_OUT_BOIC_VOICE,
        MENU_ID_CALLSET_CB_OUT_BOICEXHC_VOICE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CB_OUT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CB_OUT_BAOC_VOICE,
        MENU_ID_CALLSET_CB_OUT_OPT,
        3,
        MENU_ID_CALLSET_ACTIVATE,
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_QUERY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CB_BAOC_BAIC_VOICE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CB_OUT_BOIC_VOICE,
        MENU_ID_CALLSET_CB_OUT_OPT,
        3,
        MENU_ID_CALLSET_ACTIVATE,
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_QUERY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CB_OUT_BOIC_VOICE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CB_OUT_BOICEXHC_VOICE,
        MENU_ID_CALLSET_CB_OUT_OPT,
        3,
        MENU_ID_CALLSET_ACTIVATE,
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_QUERY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CB_OUT_BOICEXHC_VOICE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CB_IN_OPT,
        0,
        2,
        MENU_ID_CALLSET_CB_IN_BAIC_VOICE,
        MENU_ID_CALLSET_CB_IN_BAICROAM_VOICE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CB_IN,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CB_IN_BAIC_VOICE,
        MENU_ID_CALLSET_CB_IN_OPT,
        3,
        MENU_ID_CALLSET_ACTIVATE,
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_QUERY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CB_BAOC_BAIC_VOICE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CB_IN_BAICROAM_VOICE,
        MENU_ID_CALLSET_CB_IN_OPT,
        3,
        MENU_ID_CALLSET_ACTIVATE,
        MENU_ID_CALLSET_DEACTIVATE,
        MENU_ID_CALLSET_QUERY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CB_IN_BAICROAM_VOICE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CUG_OPT,
        0,
        5,
        MENU_ID_CALLSET_CUG_EDIT,
        MENU_ID_CALLSET_CUG_ADD,
        MENU_ID_CALLSET_CUG_ACTIVATE,
        MENU_ID_CALLSET_CUG_DEACTIVATE,
        MENU_ID_CALLSET_CUG_DELETE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_ID_CALLSET_CUG_OPT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CUG_EDIT,
        MENU_ID_CALLSET_CUG_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_EDIT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CUG_ADD,
        MENU_ID_CALLSET_CUG_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_ADD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CUG_ACTIVATE,
        MENU_ID_CALLSET_CUG_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_ACTIVATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CUG_DEACTIVATE,
        MENU_ID_CALLSET_CUG_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DEACTIVATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CUG_DELETE,
        MENU_ID_CALLSET_CUG_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DELETE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_OFF,
        MENU_ID_CALLSET_AUTOREDIAL_MODE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_OFF,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_ON,
        MENU_ID_CALLSET_AUTOREDIAL_MODE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_ON,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_AUTOREDIAL_MODE,
        0,
        2,
        MENU_ID_CALLSET_OFF,
        MENU_ID_CALLSET_ON,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_AUTOREDIAL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CTD_MODE,
        0,
        2,
        MENU_ID_CALLSET_OFF,
        MENU_ID_CALLSET_ON,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CTD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CTR_MODE,
        0,
        3,
        MENU_ID_CALLSET_OFF,
        MENU_ID_CALLSET_CTR_SINGLE,
        MENU_ID_CALLSET_CTR_PERIODIC,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CTR,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CTR_SINGLE,
        MENU_ID_CALLSET_CTR_MODE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CTR_SING,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CTR_PERIODIC,
        MENU_ID_CALLSET_CTR_MODE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_CTR_PERIOD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_REJ_BY_SMS_MODE,
        0,
        2,
        MENU_ID_CALLSET_OFF,
        MENU_ID_CALLSET_ON,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_REJ_BY_SMS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_CONNECT_NOTICE_MODE,
        0,
        2,
        MENU_ID_CALLSET_OFF,
        MENU_ID_CALLSET_ON,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_CONNECT_NOTICE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_ANS_MODE_OPT,
        0,
        2,
        MENU_ID_CALLSET_ANS_MODE_ANYKEY,
        MENU_ID_CALLSET_ANS_MODE_AUTO,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_ANS_MODE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_ANS_MODE_ANYKEY,
        MENU_ID_CALLSET_ANS_MODE_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_ANS_MODE_ANYKEY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_ANS_MODE_AUTO,
        MENU_ID_CALLSET_ANS_MODE_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_ANS_MODE_AUTO,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_LINE_SWITCH_MODE,
        0,
        2,
        MENU_ID_CALLSET_LSW_LINE1,
        MENU_ID_CALLSET_LSW_LINE2,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_LINE_SWITCH,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_LSW_LINE1,
        MENU_ID_CALLSET_LINE_SWITCH_MODE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_LSW_LINE1,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_LSW_LINE2,
        MENU_ID_CALLSET_LINE_SWITCH_MODE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_CALLSET_LSW_LINE2,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_IP_NUMBER_OPT,
        0,
        3,
        MENU_ID_CALLSET_IP_ACTIVATE_SIM1,
        MENU_ID_CALLSET_IP_DEACTIVATE_SIM1,
        MENU_ID_CALLSET_IP_EDIT,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_ID_CALLSET_IP_NUMBER,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_IP_ACTIVATE_SIM1,
        MENU_ID_CALLSET_IP_NUMBER_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_ACTIVATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_IP_DEACTIVATE_SIM1,
        MENU_ID_CALLSET_IP_NUMBER_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DEACTIVATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_IP_EDIT,
        MENU_ID_CALLSET_IP_NUMBER_OPT,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_EDIT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_IP_ACTIVATE,
        0,
        2,
        MENU_ID_CALLSET_IP_ACTIVATE_CLUB_SIM1,
        MENU_ID_CALLSET_IP_ACTIVATE_CLUB_SIM2,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_ACTIVATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_IP_ACTIVATE_CLUB_SIM1,
        MENU_ID_CALLSET_IP_ACTIVATE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SIM_1,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_IP_ACTIVATE_CLUB_SIM2,
        MENU_ID_CALLSET_IP_ACTIVATE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SIM_2,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_IP_DEACTIVATE,
        0,
        2,
        MENU_ID_CALLSET_IP_DEACTIVATE_CLUB_SIM1,
        MENU_ID_CALLSET_IP_DEACTIVATE_CLUB_SIM2,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_DEACTIVATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_IP_DEACTIVATE_CLUB_SIM1,
        MENU_ID_CALLSET_IP_DEACTIVATE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SIM_1,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_IP_DEACTIVATE_CLUB_SIM2,
        MENU_ID_CALLSET_IP_DEACTIVATE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SIM_2,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_BL_REJ_UNKNOWN_NUM_MODE,
        0,
        2,
        MENU_ID_CALLSET_OFF,
        MENU_ID_CALLSET_ON,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_BLACKLIST_REJ_UNKNOWN_NUM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_CALLSET_BL_FROM_LIST_MODE,
        0,
        2,
        MENU_ID_CALLSET_OFF,
        MENU_ID_CALLSET_ON,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_CALLSET_BLACKLIST_FROM_LIST,
        0));

/******************** Menu resource IDs - finish ********************/

/******************** Menu Hilite/Hint Handlers - begin ********************/
/******************** Menu Hilite/Hint Handlers - finish ********************/
}
