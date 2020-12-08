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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * WAPPushCntrlr.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains the various controller API's declaration and structure defination of Push message.
 *
 * Author:
 * -------
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __PUSH_MSG_CNTRLR_H__
#define __PUSH_MSG_CNTRLR_H__
//#include "MMI_include.h"
//#include "WAPPushUIProts.h"
    #include "MMIDataType.h"
    #include "WAPPushSrvTypes.h"
    #include "kal_general_types.h"
    #include "MMI_features.h"
#ifdef WAP_SUPPORT


extern void mmi_wap_push_set_cntrlr_DB_id (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_invoke_cntrlr (U16 screen_id);

/************************************ External API Declarations ****************************************/
extern srv_wap_push_result_enum mmi_wap_push_dynamic_list_create_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_dynamic_list_pre_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_dynamic_list_show_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_dynamic_list_post_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_dynamic_list_get_data_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_dynamic_list_check_data_func (U16 screen_id);

extern srv_wap_push_result_enum mmi_wap_push_async_dynamic_list_create_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_async_dynamic_list_pre_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_async_dynamic_list_show_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_async_dynamic_list_post_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_async_dynamic_list_get_data_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_async_dynamic_list_check_data_func (U16 screen_id);

extern srv_wap_push_result_enum mmi_wap_push_static_list_create_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_static_list_pre_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_static_list_show_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_static_list_post_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_static_list_get_data_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_static_list_check_data_func (U16 screen_id);

extern srv_wap_push_result_enum mmi_wap_push_inline_screen_create_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_inline_screen_pre_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_inline_screen_show_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_inline_screen_post_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_inline_screen_get_data_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_inline_screen_check_data_func (U16 screen_id);

extern srv_wap_push_result_enum mmi_wap_push_selection_screen_create_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_selection_screen_pre_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_selection_screen_show_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_selection_screen_post_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_selection_screen_get_data_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_selection_screen_check_data_func (U16 screen_id);

extern srv_wap_push_result_enum mmi_wap_push_message_screen_pre_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_message_screen_get_data_of_selected_msg_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_message_screen_check_data_of_selected_msg_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_message_screen_get_data_of_sia_dlg_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_message_screen_check_data_of_sia_dlg_func (U16 screen_id);

extern srv_wap_push_result_enum mmi_wap_push_notification_screen_create_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_notification_screen_pre_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_notification_screen_show_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_notification_screen_post_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_notification_screen_get_data_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_notification_screen_check_data_func (U16 screen_id);

extern srv_wap_push_result_enum mmi_wap_push_process_screen_create_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_process_screen_pre_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_process_screen_show_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_process_screen_post_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_process_screen_get_data_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_process_screen_check_data_func (U16 screen_id);

extern srv_wap_push_result_enum mmi_wap_push_dummy_screen_create_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_dummy_screen_pre_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_dummy_screen_show_func (U16 screen_id);
extern srv_wap_push_result_enum mmi_wap_push_dummy_screen_post_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_dummy_screen_get_data_func (U16 screen_id);
extern MMI_BOOL mmi_wap_push_dummy_screen_check_data_func (U16 screen_id);

typedef struct
{
	U16 scrn_id;
	srv_wap_push_result_enum (*create_func)(U16);
	srv_wap_push_result_enum (*pre_func)(U16);
	srv_wap_push_result_enum (*show_func)(U16);
	srv_wap_push_result_enum (*post_func)(U16);
	MMI_BOOL (*get_async_data_func)(U16);
	MMI_BOOL (*data_ready_check_func)(U16);
}mmi_wap_push_cntrlr_struct;

extern mmi_wap_push_cntrlr_struct g_push_cntrlrDB[];

#endif /* WAP_SUPPORT*/
#endif /* __PUSH_MSG_CNTRLR_H__ */
