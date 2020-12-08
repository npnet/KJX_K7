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
 *   mmi_rp_app_todolist.c
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
#include "mmi_rp_app_todolist_def.h"

/* Application specified header files for using old res IDs */
#include "MMI_features.h"
#include "MMIDataType.h"    /* for resource base */

#include "CustResDef.h"         /* for image/audio path */
#include "GlobalMenuItems.h"    /* for menu resource */

#include "GlobalResDef.h"
#include "mmi_rp_srv_vcalendar_def.h"
#include "mmi_rp_srv_vobject_def.h"
#include "mmi_rp_app_calendar_def.h"
#include "Mmi_rp_app_alarm_def.h"
#include "mmi_rp_app_mainmenu_def.h"
#include "OrganizerResDef.h"


/*****************************************************************************
* FUNCTION
*  mmi_rp_app_todolist_populate
* DESCRIPTION
*  Automatically generated populate function for mmi_rp_app_todolist_populate
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void mmi_rp_app_todolist_populate(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

/******************** Menu resource IDs - begin ********************/
    ADD_APPLICATION_MENUITEM5((
        ORGANIZER_TODOLIST_MENU,
        MAIN_MENU_ORGANIZER_MENUID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_MAIN,
        ORGANIZER_MENU_TODOLIST_STRINGID,
        ORGANIZER_MENU_TODOLIST_IMAGEID));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_VIEW_UNDONE,
        MITEM_TODO_LIST_TASK_OPTION_1,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_LIST_VIEW_UNDONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_JUMP_TO_DATE,
        MITEM_TODO_LIST_TASK_OPTION_1,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_LIST_JUMP_TO_DATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_DELETE_ALL_OVERDUE,
        MITEM_TODO_LIST_TASK_OPTION_1,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_LIST_DELETE_OVERDUE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_VIEW,
        MITEM_TODO_LIST_TASK_OPTION_1,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_VIEW,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_ADD,
        MITEM_TODO_LIST_TASK_OPTION_1,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_ADD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_EDIT,
        MITEM_TODO_LIST_TASK_OPTION_1,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_EDIT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_DELETE,
        MITEM_TODO_LIST_TASK_OPTION_1,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DELETE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_DELETE_ALL,
        MITEM_TODO_LIST_TASK_OPTION_1,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DELETE_ALL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_USE_TEMPLATE,
        0,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_USE_TEMPLATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_VCLNDR_SEND_BY_FILEMGR,
        MITEM_TODO_LIST_TASK_OPTION_1,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_VOBJ_FORWARD_TO_FILE_MGR,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_VCLNDR_FORWARD,
        MITEM_TODO_LIST_TASK_OPTION_1,
        2,
        MENU_VCLNDR_SEND_BY_SMS,
        MENU_VCLNDR_SEND_BY_MMS,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_ID_VCLNDR_FORWARD,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_VCLNDR_SEND_BY_SMS,
        MENU_VCLNDR_FORWARD,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_AS_TEXT_MESSAGE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_VCLNDR_SEND_BY_MMS,
        MENU_VCLNDR_FORWARD,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_AS_MULTIMEDIA_MSG,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_TASK_OPTION_1,
        0,
        10,
        MITEM_TODO_LIST_VIEW,
        MITEM_TODO_LIST_ADD,
        MITEM_TODO_LIST_EDIT,
        MITEM_TODO_LIST_DELETE,
        MITEM_TODO_LIST_DELETE_ALL_OVERDUE,
        MITEM_TODO_LIST_DELETE_ALL,
        MITEM_TODO_LIST_JUMP_TO_DATE,
        MITEM_TODO_LIST_VIEW_UNDONE,
        MENU_VCLNDR_FORWARD,
        MENU_VCLNDR_SEND_BY_FILEMGR,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_TASK_OPTION_SEARCH,
        0,
        6,
        MITEM_TODO_LIST_VIEW,
        MITEM_TODO_LIST_EDIT,
        MITEM_TODO_LIST_DELETE,
        MITEM_TODO_LIST_DELETE_ALL,
        MENU_VCLNDR_FORWARD,
        MENU_VCLNDR_SEND_BY_FILEMGR,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_TASK_OPTION_GOTO_DATE,
        0,
        7,
        MITEM_TODO_LIST_VIEW,
        MITEM_TODO_LIST_EDIT,
        MITEM_TODO_LIST_DELETE,
        MITEM_TODO_LIST_DELETE_ALL,
        MITEM_TODO_LIST_JUMP_TO_DATE,
        MENU_VCLNDR_FORWARD,
        MENU_VCLNDR_SEND_BY_FILEMGR,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_TASK_OPTION_VEVENT,
        0,
        6,
        MITEM_TODO_LIST_VIEW,
        MITEM_TODO_LIST_ADD,
        MITEM_TODO_LIST_EDIT,
        MITEM_TODO_LIST_DELETE,
        MENU_VCLNDR_FORWARD,
        MENU_VCLNDR_SEND_BY_FILEMGR,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_TASK_OPTION_VIEW_UNDONE,
        0,
        6,
        MITEM_TODO_LIST_VIEW,
        MITEM_TODO_LIST_EDIT,
        MITEM_TODO_LIST_DELETE,
        MITEM_TODO_LIST_DELETE_ALL,
        MENU_VCLNDR_FORWARD,
        MENU_VCLNDR_SEND_BY_FILEMGR,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_CATEGORY_TYPE,
        0,
        7,
        MITEM_TODO_LIST_REMINDER,
        MITEM_TODO_LIST_MEETING,
        MITEM_TODO_LIST_COURSE,
        MITEM_TODO_LIST_DATE,
        MITEM_TODO_LIST_CALL,
        MITEM_TODO_LIST_ANNIVERSARY,
        MITEM_TODO_LIST_BIRTHDAY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_TDL_CATEGORY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_REMINDER,
        MITEM_TDL_CATEGORY_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_REMINDER,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_MEETING,
        MITEM_TDL_CATEGORY_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_MEETING,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_COURSE,
        MITEM_TDL_CATEGORY_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_COURSE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_DATE,
        MITEM_TDL_CATEGORY_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_DATE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_CALL,
        MITEM_TDL_CATEGORY_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_CALL,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_ANNIVERSARY,
        MITEM_TDL_CATEGORY_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_ANNIVERSARY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TODO_LIST_BIRTHDAY,
        MITEM_TDL_CATEGORY_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_BIRTHDAY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_REPEAT_TYPE,
        0,
        6,
        MITEM_TDL_LIST_ONCE,
        MITEM_TDL_LIST_DAILY,
        MITEM_TDL_LIST_DAYS,
        MITEM_TDL_LIST_WEEKLY,
        MITEM_TDL_LIST_MONTHLY,
        MITEM_TDL_LIST_YEARLY,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_TDL_CATEGORY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_LIST_ONCE,
        MITEM_TDL_REPEAT_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        ALARM_ONCE_STRING,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_LIST_DAILY,
        MITEM_TDL_REPEAT_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        ALARM_EVREYDAY_STRING,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_LIST_DAYS,
        MITEM_TDL_REPEAT_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_CUSTOM,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_LIST_WEEKLY,
        MITEM_TDL_REPEAT_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        ALARM_WEEKLY_STRING,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_LIST_MONTHLY,
        MITEM_TDL_REPEAT_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        ALARM_MONTHLY_STRING,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_LIST_YEARLY,
        MITEM_TDL_REPEAT_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        ALARM_YEARLY_STRING,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_ALARM_TYPE,
        0,
        6,
        MITEM_TDL_ALM_OFF,
        MITEM_TDL_ALM_ON,
        MITEM_TDL_ALM_BEFORE_5_MINS,
        MITEM_TDL_ALM_BEFORE_10_MINS,
        MITEM_TDL_ALM_BEFORE_15_MINS,
        MITEM_TDL_ALM_BEFORE_30_MINS,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_APP_SUB,
        STR_ID_TDL_CATEGORY,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_ALM_OFF,
        MITEM_TDL_ALARM_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_OFF,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_ALM_ON,
        MITEM_TDL_ALARM_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_ON,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_ALM_BEFORE_5_MINS,
        MITEM_TDL_ALARM_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_ALARM_BEFORE_5_MINS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_ALM_BEFORE_10_MINS,
        MITEM_TDL_ALARM_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_ALARM_BEFORE_10_MINS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_ALM_BEFORE_15_MINS,
        MITEM_TDL_ALARM_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_ALARM_BEFORE_15_MINS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_ALM_BEFORE_30_MINS,
        MITEM_TDL_ALARM_TYPE,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_TODO_ALARM_BEFORE_30_MINS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_EDIT_OPTIONS,
        0,
        2,
        MITEM_TDL_EDIT_OPTIONS_SELECT,
        MITEM_TDL_EDIT_OPTIONS_SAVE,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_EDIT_OPTIONS_SELECT,
        MITEM_TDL_EDIT_OPTIONS,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_TDL_SELECT,
        0));

    ADD_APPLICATION_MENUITEM5((
        MITEM_TDL_EDIT_OPTIONS_SAVE,
        MITEM_TDL_EDIT_OPTIONS,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_SAVE,
        0));

/******************** Menu resource IDs - finish ********************/

/******************** Menu Hilite/Hint Handlers - begin ********************/
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(ORGANIZER_TODOLIST_MENU, mmi_tdl_highlight_menu);
/******************** Menu Hilite/Hint Handlers - finish ********************/
}
