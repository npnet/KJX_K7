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
 * BTMMIObexSrc.c
 *
 * Project:
 * --------
 *   MMI
 *
 * Description:
 * ------------
 *   This file is for entering password for OBEX Authentication.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
#include "MMI_features.h"
#ifdef __MMI_BT_SUPPORT__ 

#include "ProfilesSrvGprot.h"  
#ifdef __MMI_USB_SUPPORT__
#include "USBDeviceGprot.h"
#include "USBSrvGProt.h"
#endif 
#include "Conversions.h"

#include "BTMMIScr.h"
#include "Filemgrcuigprot.h"

#include "Bluetooth_struct.h"
#include "BTMMIObexGprots.h"
#include "custom_events_notify.h"
#include "IdleGprot.h"

#ifdef __MMI_OPP_SUPPORT__
#include "BTMMIOPPGprots.h"
#endif
#ifdef __MMI_BIP_SUPPORT__
#include "BTMMIBIPGprot.h"
#endif

#ifdef __MMI_FTC_SUPPORT__
#include "BTMMIFtpGprots.h"
#endif
/* auto add by kw_check begin */
#include "MMIDataType.h"
#include "wgui_categories_list.h"
#include "mmi_frm_scenario_gprot.h"
#include "NotificationGprot.h"
#include "mmi_frm_events_gprot.h"
#include "mmi_rp_app_bluetooth_def.h"
#include "mmi_frm_history_gprot.h"
#include "CustDataRes.h"
#include "Unicodexdcl.h"
#include "GlobalResDef.h"
#include "kal_general_types.h"
#include "string.h"
#include "wgui_inputs.h"
#include "wgui_categories_inputs.h"
#include "ImeGprot.h"
#include "GlobalConstants.h"
#include "wgui_categories_util.h"
#include "mmi_frm_input_gprot.h"
#include "GpioSrvGprot.h"
#include "stack_config.h"
#include "stack_msgs.h"
#include "wgui_categories.h"
#include "mmi_rp_file_type_def.h"
#include "FileMgrGProt.h"
#include "mmi_res_range_def.h"
#include "kal_public_api.h"
#include "wgui_categories_popup.h"
//#include "TimerEvents.h"
#include "mmi_frm_timer_gprot.h"
#include "obconfig.h"

#if defined(__MMI_NCENTER_SUPPORT__)
#include "vsrv_ncenter.h"
#include "vsrv_ndeclaration.h"
#include "app_datetime.h"
#endif

/* auto add by kw_check end */
#if defined(__MMI_FTC_SUPPORT__) || defined(__MMI_BIP_SUPPORT__)
static U16 mmi_bt_recv_str_buf[32];
static U16 g_mmi_bt_recv_hdlr;
static void(*mmi_bt_recv_get_obj_info)(mmi_bt_recv_obj_info_struct *obj_info_p);
#endif  /* __MMI_FTC_SUPPORT__ || __MMI_BIP_SUPPORT__ */




/* OBEX Authentication */
#if defined (__MMI_FTS_SUPPORT__) || \
    defined(__MMI_FTC_SUPPORT__) || \
    defined(__MMI_OPP_SUPPORT__)

extern int mmi_charset_ucs2_to_utf8_length_in_bytes(const kal_uint8 *raw);
static mmi_ret mmi_bt_idle_end_key_proc(mmi_event_struct *evt);
S32 mmi_bt_set_setting_int(U32 item, void* value);


#define AUTHPWD_OK         1
#define AUTHPWD_REJECT  2

#define AUTHPWD_INPUTBUF_LEN  32
#define AUTHPWD_UIBUF_LEN        128
#define BTDEV_NAME_LEN               100

extern kal_bool DefAuthHandling;

struct bt_mmi_obex_auth_context_struct
{
    /* for auth password input */
    U8 authpwd_input_buf[AUTHPWD_INPUTBUF_LEN];

    /* for "input password" and remote BT device name */
    U8 authpwd_ui_buf[AUTHPWD_UIBUF_LEN];

    /* to record remote BT device name */
    U8 rem_BTdev_name[BTDEV_NAME_LEN];

    /* group id */
    U8 gid;
    /* to record the goep connection id */
    kal_uint8 goep_conn_id;

    /* endkey handler */
    FuncPtr endkey_down_hdlr;

};


/* extern functions: implemented in BTMMIScr.c */
extern MMI_BOOL mmi_bt_test_ucs2(U16 *buf, U16 char_num);
void mmi_bt_truncate_ucs2_string(U16 *buf, U16 char_num, U16 truncate_char_num);

#if OBEX_AUTHENTICATION
/* function prototype */
static MMI_BOOL mmi_bt_entry_authpwd_input(mmi_scenario_id scen_id, void *arg);
static void mmi_bt_entry_authpwd_input_scr(void);
static mmi_ret mmi_bt_entry_authpwd_proc(mmi_event_struct *evt);
static void mmi_bt_authpwd_validation_func(U8 *text, U8 *cursor, S32 length);
static void mmi_bt_send_authpwd(void);
static void mmi_bt_authpwd_input_goback(void);
static mmi_ret mmi_bt_authpwd_input_endkey(mmi_event_struct *evt);
static mmi_ret mmi_bt_authpwd_input_scr_del_callback(mmi_event_struct *evt);
static struct bt_mmi_obex_auth_context_struct btmmi_obexauth_cntx;
#endif

#if OBEX_AUTHENTICATION
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_obex_auth_ind_hdlr
 * DESCRIPTION
 *  This function is to handle GOEP_AUTH_IND msg.
 * PARAMETERS
 *  auth_ind        AUTH_IND msg infomation     
 * RETURNS
 *  void
 *****************************************************************************/
extern void mmi_bt_obex_auth_ind_hdlr(goep_auth_ind_struct *auth_ind)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 utf8_char_cnt;
    U8 ucs2_str_len;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    btmmi_obexauth_cntx.goep_conn_id = auth_ind->goep_conn_id;

 
    //convert remote BT device name to UCS2
    /* get byte count for convert utf8 string to UCS2 string */
    /* get character count of utf8 string */
    /* +1 is for UCS2 NULL terminate */
    /* *ENCODING_LENGTH is for byte count of one UCS2 character */
    utf8_char_cnt = (U8) ((mmi_chset_utf8_strlen((kal_uint8*) auth_ind->dev_name) + 1) * ENCODING_LENGTH);

    //check utf8_char_cnt and BTDEV_NAME_LEN
    if (BTDEV_NAME_LEN > utf8_char_cnt)
    {
        ucs2_str_len = (U8) mmi_chset_utf8_to_ucs2_string(
                            (kal_uint8*)btmmi_obexauth_cntx.rem_BTdev_name, 
                            utf8_char_cnt, 
                            (kal_uint8*)auth_ind->dev_name);
    }
    else
    {
        ucs2_str_len = (U8) mmi_chset_utf8_to_ucs2_string(
						(kal_uint8*)btmmi_obexauth_cntx.rem_BTdev_name, 
						BTDEV_NAME_LEN, 
						(kal_uint8*)auth_ind->dev_name);

        /* allow (MMI_BT_BD_NAME_LEN/3) chinese characters or (MMI_BT_BD_NAME_LEN/3)*2 english characters  */
        /* so for UCS2 encoding, need MMI_BT_SCR_BD_NAME_LEN bytes */
        
        /* shall check if there is any two_byte character mixed in one_bye UCS2 string */
        /* if yes, then truncate the string to meet above rules((MMI_BT_BD_NAME_LEN/3) chinese characters or (MMI_BT_BD_NAME_LEN/3)*2 english characters)*/ 
        if(mmi_bt_test_ucs2((U16*)btmmi_obexauth_cntx.rem_BTdev_name, (U16)(ucs2_str_len/ENCODING_LENGTH)) )
        { 
            mmi_bt_truncate_ucs2_string((U16*)btmmi_obexauth_cntx.rem_BTdev_name, 
                                        (U16)(ucs2_str_len/ENCODING_LENGTH),
                                        (U16)((GOEP_MAX_DEV_NAME-2)/3)
                                       );           
        }        
    }

    mmi_frm_nmgr_notify_by_app(
            MMI_SCENARIO_ID_BT_ACCESS_REQ,
            MMI_EVENT_INFO,
            mmi_bt_entry_authpwd_input,
            NULL);

}


/*****************************************************************************
 * FUNCTION
 *  fill_uibuffer
 * DESCRIPTION
 *      fill ui buffer with specified format
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void fill_uibuffer(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 lbracket_str[] = { '(', 0x00, 0x00, 0x00};
    U8 rbracket_str[] = { ')', 0x00, 0x00, 0x00};
    U8 colon_str[] = { ':', 0x00, 0x00, 0x00};

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_ucs2cpy((S8*) btmmi_obexauth_cntx.authpwd_ui_buf, (const S8*)GetString(STR_OBEX_INPUT_AUTHPWD));

    mmi_ucs2cat((S8*) btmmi_obexauth_cntx.authpwd_ui_buf, (const S8*)lbracket_str);

    mmi_ucs2cat((S8*) btmmi_obexauth_cntx.authpwd_ui_buf, (const S8*)btmmi_obexauth_cntx.rem_BTdev_name);

    mmi_ucs2cat((S8*) btmmi_obexauth_cntx.authpwd_ui_buf, (const S8*)rbracket_str);
    mmi_ucs2cat((S8*) btmmi_obexauth_cntx.authpwd_ui_buf, (const S8*)colon_str);

}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_entry_authpwd_input
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static MMI_BOOL mmi_bt_entry_authpwd_input(mmi_scenario_id scen_id, void *arg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    btmmi_obexauth_cntx.gid = mmi_frm_group_create(
                                        GRP_ID_ROOT, 
                                        GRP_ID_AUTO_GEN, 
                                        mmi_bt_entry_authpwd_proc, 
                                        NULL);

    mmi_frm_group_enter(btmmi_obexauth_cntx.gid, MMI_FRM_NODE_SMART_CLOSE_FLAG);
    mmi_bt_entry_authpwd_input_scr();

    return MMI_TRUE;
    
}


/*****************************************************************************
 * FUNCTION
 * mmi_opps_detail_confirm_proc
 * DESCRIPTION
 *  This function is to reject the connect when confirm screen is deleted
 * PARAMETERS
 *  p       [?]     [?]     [?]
 *  a(?)        [IN/OUT]        First variable, used as returns(?)(?)
 *  b(?)        [IN]            Second variable(?)(?)
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_bt_entry_authpwd_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (evt->evt_id)
    {
        case EVT_ID_GROUP_DEINIT:
            btmmi_obexauth_cntx.gid = 0;
            break;
            
        default:
            break;
          
    }

    return MMI_RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_entry_authpwd_input
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_entry_authpwd_input_scr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 *guiBuffer;  /* Buffer holding history data */
    U8 *inputBuffer;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(mmi_frm_scrn_enter(
                    btmmi_obexauth_cntx.gid, 
                    SCR_OBEX_INPUT_AUTHPWD, 
                    NULL, 
                    mmi_bt_entry_authpwd_input_scr, 
                    MMI_FRM_FULL_SCRN))
    {
        mmi_frm_start_scenario(MMI_SCENARIO_ID_BT_ACCESS_REQ);

    guiBuffer = GetCurrGuiBuffer(SCR_OBEX_INPUT_AUTHPWD);
    inputBuffer = GetCurrInputBuffer(SCR_OBEX_INPUT_AUTHPWD);

    if (inputBuffer == NULL)
    {
        memset(btmmi_obexauth_cntx.authpwd_input_buf, 0, sizeof(U8) * AUTHPWD_INPUTBUF_LEN);
        memset(btmmi_obexauth_cntx.authpwd_ui_buf, 0, sizeof(U8) * AUTHPWD_UIBUF_LEN);

        fill_uibuffer();

            mmi_frm_scrn_set_key_proc(btmmi_obexauth_cntx.gid, SCR_OBEX_INPUT_AUTHPWD, mmi_bt_authpwd_input_endkey);

    }
    else
    {
        mmi_ucs2cpy((S8*) btmmi_obexauth_cntx.authpwd_input_buf, (S8*) inputBuffer);
    }

    RegisterInputBoxValidationFunction(mmi_bt_authpwd_validation_func);

    /* show category */
    ShowCategory111Screen_ext(
        STR_GLOBAL_OK,
        IMG_GLOBAL_OK,
        STR_GLOBAL_BACK,
        IMG_GLOBAL_BACK,
        (U8*) btmmi_obexauth_cntx.authpwd_ui_buf,
        IMM_INPUT_TYPE_NUMERIC_PASSWORD,
        (U8*) btmmi_obexauth_cntx.authpwd_input_buf,
        MMI_BT_MAX_PASSKEY_LENGHT,
        NULL,
        0,
        guiBuffer);

    /* set left & right softkey func */
    SetLeftSoftkeyFunction(mmi_bt_send_authpwd, KEY_EVENT_UP);
    ChangeCenterSoftkey(0,IMG_GLOBAL_COMMON_CSK);
    SetCenterSoftkeyFunction(mmi_bt_send_authpwd, KEY_EVENT_UP);
    SetCategory111RightSoftkeyFunction(mmi_bt_authpwd_input_goback, KEY_EVENT_UP);

    if (mmi_ucs2strlen((S8*) (btmmi_obexauth_cntx.authpwd_input_buf)) < 1)
    {
        ChangeLeftSoftkey(0, 0);
    }

    /* KEY_END handler */
    SetKeyHandler(mmi_bt_authpwd_input_endkey, KEY_END, KEY_EVENT_DOWN);
    ClearKeyHandler(KEY_END, KEY_EVENT_UP);

    /* set screen delete callback */
        mmi_frm_scrn_set_leave_proc(
                            btmmi_obexauth_cntx.gid,
                            SCR_OBEX_INPUT_AUTHPWD,
                            (mmi_proc_func) mmi_bt_authpwd_input_scr_del_callback);

    srv_backlight_turn_on(SRV_BACKLIGHT_SHORT_TIME);
    srv_prof_play_tone(SRV_PROF_TONE_GENERAL_TONE, NULL);

    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_authpwd_validation_func
 * DESCRIPTION
 *  This function is to validate input
 * PARAMETERS
 *  text                
 *  cursor               
 *  length      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_authpwd_validation_func(U8 *text, U8 *cursor, S32 length)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if ((length) < 1)
    {
        ChangeLeftSoftkey(0, 0);
    }
    else
    {
        EnableLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    }
}


/*****************************************************************************
 * FUNCTION
 *  send_auth_res_msg
 * DESCRIPTION
 *   send auth_res msg to BT task
 * PARAMETERS
 *  rsp     [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static void send_auth_res_msg(U8 rsp)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    //ilm_struct *ilm_send;
    goep_auth_res_struct *goep_auth_res;
    U8 utf8_str_len;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    goep_auth_res = (goep_auth_res_struct*)construct_local_para(sizeof(goep_auth_res_struct), TD_CTRL);

    goep_auth_res->goep_conn_id = btmmi_obexauth_cntx.goep_conn_id;

    if (rsp == AUTHPWD_OK)
    {
        utf8_str_len = mmi_charset_ucs2_to_utf8_length_in_bytes((const kal_uint8*)btmmi_obexauth_cntx.authpwd_input_buf);

        utf8_str_len = mmi_chset_ucs2_to_utf8_string(
                        (kal_uint8*)goep_auth_res->passwd,
                        GOEP_MAX_PASSWD_SIZE,
                        (kal_uint8*)btmmi_obexauth_cntx.authpwd_input_buf);

        /* utf8_str_len counts the '\0' */
        goep_auth_res->passwd_len = utf8_str_len - 1;
    }
    else
    {
        memset(goep_auth_res->passwd, 0, GOEP_MAX_PASSWD_SIZE);
        goep_auth_res->passwd_len = 0;
    }

    memset(goep_auth_res->userid, 0, GOEP_MAX_USERID_SIZE);
    goep_auth_res->userid_len = 0;

    msg_send5(MOD_MMI, MOD_BT, BT_APP_SAP, MSG_ID_GOEP_AUTH_RES, 
        (local_para_struct *)goep_auth_res);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_send_authpwd
 * DESCRIPTION
 *  This function is to send authpwd request
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_send_authpwd(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    send_auth_res_msg(AUTHPWD_OK);
    DefAuthHandling = KAL_FALSE;
    mmi_frm_scrn_set_leave_proc(
                        btmmi_obexauth_cntx.gid,
                        SCR_OBEX_INPUT_AUTHPWD,
                        NULL);
    mmi_frm_end_scenario(MMI_SCENARIO_ID_BT_ACCESS_REQ);
    mmi_frm_group_close(btmmi_obexauth_cntx.gid);

}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_authpwd_input_scr_del_callback
 * DESCRIPTION
 *  This function is the screen delete callback
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_bt_authpwd_input_scr_del_callback(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    switch (evt->evt_id)
    {
        case EVT_ID_SCRN_DEINIT:
    send_auth_res_msg(AUTHPWD_REJECT);
            mmi_frm_end_scenario(MMI_SCENARIO_ID_BT_ACCESS_REQ);
            break;

        default:
            break;
    }

    return MMI_RET_OK;

}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_authpwd_input_goback
 * DESCRIPTION
 *  This function is
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_authpwd_input_goback(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* send auth_res msg to BT task */
    send_auth_res_msg(AUTHPWD_REJECT);

    mmi_frm_scrn_close_active_id();

    DefAuthHandling = KAL_FALSE;
    mmi_frm_scrn_set_leave_proc(
                            btmmi_obexauth_cntx.gid,
                            SCR_OBEX_INPUT_AUTHPWD,
                            NULL);
    mmi_frm_end_scenario(MMI_SCENARIO_ID_BT_ACCESS_REQ);
    mmi_frm_group_close(btmmi_obexauth_cntx.gid);

}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_authpwd_input_endkey
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_bt_authpwd_input_endkey(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_frm_key_evt_struct *key_evt = (mmi_frm_key_evt_struct*)evt;
    if (evt->evt_id == EVT_ID_PRE_KEY)
    {
        if (key_evt->key_code == KEY_END && key_evt->key_type == KEY_EVENT_DOWN)
        {
            send_auth_res_msg(AUTHPWD_REJECT);
            return MMI_RET_OK;
        }
    }
    return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_obex_disconnect_ind_hdlr
 * DESCRIPTION
 *    process disconnect indication msg
 * PARAMETERS
 *  disconnect_ind           
 * RETURNS
 *  void
 *****************************************************************************/
extern void mmi_bt_obex_disconnect_ind_hdlr(goep_disconnect_ind_struct *disconnect_ind)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 currScreenID;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!DefAuthHandling)
        return;

    currScreenID = GetActiveScreenId();

    if (currScreenID == SCR_OBEX_INPUT_AUTHPWD)
    {
        GoBackHistory();
    }
    else
    {
        DeleteScreenIfPresent(SCR_OBEX_INPUT_AUTHPWD);
    }
}
#endif

#endif


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_common_init
 * DESCRIPTION
 *  This function is to do init job for common feature
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_common_init(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8  drv;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    drv = SRV_FMGR_CARD_DRV;
//#ifdef __MMI_BT_PROF_SETTING__
#ifndef _MMI_BT_ULTRA_SLIM_
    mmi_bt_init_setting();
//#endif
    mmi_bt_receive_init();
#else
    {
		    mmi_bt_set_setting_int(BTFF_ITEM_RECV_DRV, &drv);
    }
#endif 
}


#if defined(__MMI_OPP_SUPPORT__) || defined(__MMI_BIP_SUPPORT__)
static void mmi_bt_notify_scr_browse(void);
#ifndef __MMI_BT_RECV_FDR_SWITCH__
//static void mmi_bt_notify_scr_browse_cb(void *filename, int isShort);
static S8 * mmi_btcomn_get_fldr_path(void);
#endif
static void mmi_bt_notify_scr_goback_func(void);
static void mmi_btcomn_reset_recv_cnt(void);
static U16 * mmi_bt_make_idle_notify_string(void);


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_get_recv_files_cnt
 * DESCRIPTION
 *  This function is to judge whether IDLE notify screen need to be shown
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
U16 mmi_bt_get_recv_files_cnt(void)
{
    U16 recv_file_cnt = 0;

#ifdef __MMI_OPP_SUPPORT__    
    recv_file_cnt = mmi_opp_get_recv_files_cnt();
#endif

#ifdef __MMI_BIP_SUPPORT__    
    recv_file_cnt += mmi_bt_bip_get_recv_images_cnt();
#endif

    return recv_file_cnt;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_recv_files_exist
 * DESCRIPTION
 *  This function is to judge whether IDLE notify screen need to be shown
 * PARAMETERS
 *  void
 * RETURNS
 *  U8
 *****************************************************************************/
U8 mmi_bt_recv_files_exist(void)
{
    if (mmi_bt_get_recv_files_cnt() > 0)
    {
        return 1;
    }

    return 0;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_entry_idle_notify_scr
 * DESCRIPTION
 *  This function is to display notify screen in idle screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_entry_idle_notify_scr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_frm_scrn_enter(mmi_idle_get_group_id(), SCR_OPP_NOTY_FILE_RECV, NULL,
            (FuncPtr)mmi_frm_scrn_enter, MMI_FRM_FG_ONLY_SCRN);

#ifdef __MMI_BT_RECV_FDR_SWITCH__
        ShowCategory154Screen(
            0,
            0,
            0,
            0,
            STR_GLOBAL_BACK,
            0,
            (U8 *)mmi_bt_make_idle_notify_string(),
            NULL,
            NULL,
            NULL);
#else
        ShowCategory154Screen(
            0,
            0,
            STR_OPP_NOTY_RECV_FILE_BROWSE,
            0,
            STR_GLOBAL_BACK,
            0,
            (U8 *)mmi_bt_make_idle_notify_string(),
            NULL,
            NULL,
            NULL);
//#endif

//#ifndef __MMI_BT_RECV_FDR_SWITCH__
        SetLeftSoftkeyFunction(mmi_bt_notify_scr_browse, KEY_EVENT_UP);
//        ChangeCenterSoftkey(0,IMG_GLOBAL_COMMON_CSK);
        SetCenterSoftkeyFunction(mmi_bt_notify_scr_browse, KEY_EVENT_UP);
#endif
        SetRightSoftkeyFunction(mmi_bt_notify_scr_goback_func, KEY_EVENT_UP);
        mmi_frm_scrn_set_key_proc(mmi_idle_get_group_id(), SCR_OPP_NOTY_FILE_RECV, mmi_bt_idle_end_key_proc);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_idle_end_key_proc
 * DESCRIPTION
 *  
 * PARAMETERS
 *  evt     [IN]
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
static mmi_ret mmi_bt_idle_end_key_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_frm_key_evt_struct *key_evt = (mmi_frm_key_evt_struct *)evt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if ((key_evt->key_code == KEY_END) && (key_evt->key_type == KEY_EVENT_DOWN))
    {
        if (key_evt->evt_id == EVT_ID_PRE_KEY)
        {
            mmi_btcomn_reset_recv_cnt();  
        }
    }
    return MMI_RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_notify_scr_browse
 * DESCRIPTION
 *  This function is to browse the received folder
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_notify_scr_browse(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    FMGR_FILTER filter;
    S8 *path = NULL;
    U16 title_str_id, title_icon_id;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    FMGR_FILTER_INIT(&filter);
    FMGR_FILTER_SET_ALL(&filter);

    path = mmi_btcomn_get_fldr_path();

#ifdef __USB_IN_NORMAL_MODE__
    if (srv_usb_is_in_mass_storage_mode())
    {
        /* in mass storage mode */
        if (srv_usb_check_path_exported((WCHAR*)path))
        {
            /* phone drive is exported, cant use this app */
            mmi_usb_app_unavailable_popup(0);   /* pass 0 will show default string */
            return;
        }
    }
#endif /* __USB_IN_NORMAL_MODE__ */

    {
        mmi_fmgr_browse_setting_struct setting;
        mmi_fmgr_browse_init_setting(&setting);
        mmi_fmgr_get_app_title_info(APP_EXTDEVICE, &title_str_id, &title_icon_id, NULL);
        cui_folder_browser_launch(
            GRP_ID_ROOT,
            (WCHAR*)path,
            &filter,
            CUI_FOLDER_BROWSER_OPT_USE_CSK_OFF,
            0, 
            0);
    }

    mmi_btcomn_reset_recv_cnt();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_notify_scr_goback_func
 * DESCRIPTION
 *  This function is to go back history
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_notify_scr_goback_func(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_btcomn_reset_recv_cnt();
    mmi_frm_scrn_close_active_id();
}


#ifndef __MMI_BT_RECV_FDR_SWITCH__
static S8 * mmi_btcomn_get_fldr_path(void)
{
    S8 * path = NULL;
    
#if defined(__MMI_OPP_SUPPORT__) && defined(__MMI_BIP_SUPPORT__)
    U16 cnt = mmi_opp_get_recv_files_cnt();
    if (cnt == 0)
    {
        path = mmi_bt_bip_get_server_received_folder();
    }
    else
    {
        U8 bip_cnt;
        bip_cnt = mmi_bt_bip_get_recv_images_cnt();
        if (bip_cnt == 0)
        {
            path = mmi_opp_get_path();
        }
        else
        {
            /* Temp solution we use OPP received path */
            path = mmi_opp_get_path();
        }
    }
#elif defined(__MMI_OPP_SUPPORT__)
    path = mmi_opp_get_path();
#elif defined(__MMI_BIP_SUPPORT__)
    path = mmi_bt_bip_get_server_received_folder();
#endif

    return path;
}
#endif

static void mmi_btcomn_reset_recv_cnt(void)
{
#ifdef __MMI_OPP_SUPPORT__    
    mmi_opp_set_recv_files_cnt(0);
#endif
    
#ifdef __MMI_BIP_SUPPORT__    
    mmi_bt_bip_set_recv_images_cnt(0);
#endif
}

static U16 * mmi_bt_make_idle_notify_string(void)
{
    static U16 ntf_str[32];
    U16 cnt[8], num = 0;

    num = mmi_bt_get_recv_files_cnt();

    mmi_ucs2cpy((S8 *)ntf_str, GetString(STR_OPP_NOTY_RECV_FILE_HED));
    kal_wsprintf(cnt, " %d ", num);
    mmi_ucs2cat((S8 *)ntf_str, (S8 *)cnt);
    if (num == 1)
    {
        mmi_ucs2cat((S8 *)ntf_str, GetString(STR_OPP_NOTY_RECV_FILE_TIL));
    }
    else
    {
        mmi_ucs2cat((S8 *)ntf_str, GetString(STR_OPP_NOTY_RECV_MULTI_FILE_TIL));
    }

    return ntf_str;
}
#endif  // defined(__MMI_OPP_SUPPORT__) || defined(__MMI_BIP_SUPPORT__)


#if defined(__MMI_OPP_SUPPORT__) && defined(__MMI_NCENTER_SUPPORT__)
static void mmi_bt_ncenter_intent_callback(vsrv_notification_handle nhandle,
                                           vsrv_nintent intent,
                                           void* userData,
                                           U32 userDataSize)
{
	mmi_image_src_struct imag;
	vsrv_ngroup_handle ncenter_gid;

        FMGR_FILTER filter;
        mmi_fmgr_browse_setting_struct setting;
        U16 title_str_id, title_icon_id;
        MMI_BOOL res;
	S8 *path ;
	
    switch(intent.type){
		
		case VSRV_NINTENT_TYPE_TAP:
		case VSRV_NINTENT_TYPE_LAUNCH:
        //mmi_bt_notify_scr_browse();
        
        path = mmi_btcomn_get_fldr_path();
        FMGR_FILTER_INIT(&filter);
        FMGR_FILTER_SET_ALL(&filter);

        mmi_fmgr_browse_init_setting(&setting);
        mmi_fmgr_get_app_title_info(APP_EXTDEVICE, &title_str_id, &title_icon_id, NULL);
        res = cui_folder_browser_launch(
            GRP_ID_ROOT,
            (WCHAR*)path,
            &filter,
            CUI_FOLDER_BROWSER_OPT_USE_CSK_OFF,
            0,
            0);
        if (res)
        {
            if (nhandle)
            {
                vsrv_ncenter_close_notification(nhandle);
            }

            mmi_btcomn_reset_recv_cnt();
        }
	break;
	
	case VSRV_NINTENT_TYPE_LANGUAGE_CHANGED:
		 ncenter_gid = vsrv_ncenter_query_ngroup(APP_OPP);
         vsrv_ncenter_set_ngroup_title_str(ncenter_gid, (WCHAR*)GetString(STR_GLOBAL_BLUETOOTH));
		 if(NULL == ncenter_gid)
		 	ncenter_gid = vsrv_ncenter_create_ngroup(VSRV_NGROUP_TYPE_SINGLE_TITLE, APP_OPP);

   		 imag.type = MMI_IMAGE_SRC_TYPE_RES_ID;
   		 imag.data.res_id = IMG_BT_MENU_TITLE;
   		 vsrv_ncenter_set_notification_icon(nhandle, imag);
   		 vsrv_ncenter_set_notification_maintext_str(nhandle, (WCHAR*)mmi_bt_make_idle_notify_string());
		 vsrv_ncenter_notify_notification(nhandle);
		break;
		
	case VSRV_NINTENT_TYPE_CLEAR:
	case VSRV_NINTENT_TYPE_CLOSE:
		break;
		
	default :
		break;
    }
}


void mmi_bt_ncenter_notify_notification(void)
{
    vsrv_ngroup_handle ncenter_gid;
    vsrv_notification_handle ncenter_nid;
    mmi_image_src_struct imag;
    applib_time_struct timestamp;

    ncenter_gid = vsrv_ncenter_create_ngroup(VSRV_NGROUP_TYPE_SINGLE_TITLE, APP_OPP);
    ncenter_nid = vsrv_ncenter_create_notification(VSRV_NOTIFICATION_TYPE_EVENT, ncenter_gid, 0);

    vsrv_ncenter_set_ngroup_title_str(ncenter_gid, (WCHAR*)GetString(STR_GLOBAL_BLUETOOTH));

    imag.type = MMI_IMAGE_SRC_TYPE_RES_ID;
    imag.data.res_id = IMG_BT_MENU_TITLE;
    vsrv_ncenter_set_notification_icon(ncenter_nid, imag);

    vsrv_ncenter_set_notification_maintext_str(ncenter_nid, (WCHAR*)mmi_bt_make_idle_notify_string());

    vsrv_ncenter_set_notification_intent_callback(ncenter_nid, mmi_bt_ncenter_intent_callback, NULL, 0);

    vsrv_ncenter_set_notification_autoclose(
        ncenter_nid,
        MMI_FALSE,
        (VSRV_NOTIFICATION_FLAG_AUTO_CLOSE_AFTER_LAUNCH |
         VSRV_NOTIFICATION_FLAG_AUTO_CLOSE_AFTER_TERMINATE));
    GetDateTime(&timestamp);
    vsrv_ncenter_set_notification_timestamp(ncenter_nid, &timestamp);

    vsrv_ncenter_notify_notification(ncenter_nid);
}
#endif  // defined(__MMI_OPP_SUPPORT__) && defined(__MMI_NCENTER_SUPPORT__)


#if defined(__MMI_FTC_SUPPORT__) || defined(__MMI_BIP_SUPPORT__)
/****************************************************************************** 
 * FUNCTION
 *  mmi_bt_recv_convert_unit
 * DESCRIPTION
 *  convert to appropriate unit accoding to the Byte value
 * PARAMETERS
 *  size    [IN]    Byte value
 *  tmp_buf    [IN]    Array to reserve the result
 *  
 * RETURN VALUE LIST
 *  void
 ******************************************************************************/
static void mmi_bt_recv_convert_unit(U32 size, U16 *tmp_buf)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(size >= 1024 * 1024 * 1024)
    {
        size /= (1024 * 1024 );
        kal_wsprintf((WCHAR*)tmp_buf,
                     "%d.%dG",
                     (U16)(size / 1024),
                     (U16)((size % 1024) / 103));
    }
    else if (size >= 1024 * 1024)
    {
        size /= 1024;
        kal_wsprintf((WCHAR*) tmp_buf,
                     "%d.%dM",
                     (U16)(size / 1024),
                     (U16)((size % 1024) / 103));
    }
    else if (size >= 1024)
    {
        kal_wsprintf((WCHAR*) tmp_buf,
                     "%d.%dK",
                     (U16)(size / 1024),
                     (U16)((size % 1024) / 103));
    }
    else    /* less than 1024 */
    {
        kal_wsprintf((WCHAR*)tmp_buf, "%dB", size);
    }
}


/****************************************************************************** 
 * FUNCTION
 *  mmi_bt_recv_update_str
 * DESCRIPTION
 *  
 * PARAMETERS
 *  obj_p    [IN]    object pointer
 *  
 * RETURN VALUE LIST
 *  void
 ******************************************************************************/
static void mmi_bt_recv_update_str(const mmi_bt_recv_obj_info_struct *obj_p)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 tmp_buf[8];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_bt_recv_str_buf[0] = 0;
    if (obj_p->total_obj_num > 1)
    {
        kal_wsprintf((WCHAR*)mmi_bt_recv_str_buf, "%d/%d\n(",obj_p->cur_obj_num, obj_p->total_obj_num);
    }
        
    mmi_bt_recv_convert_unit(obj_p->recv_obj_size, (U16*)tmp_buf);
    mmi_wcscat((U16*)mmi_bt_recv_str_buf, (U16*)tmp_buf);
        
    if (obj_p->total_obj_size != RECV_UNKNOWN_SIZE)
    {
        mmi_bt_recv_convert_unit(obj_p->total_obj_size, (U16*)tmp_buf);
        mmi_wcscat((U16*)mmi_bt_recv_str_buf, (U16*)L"/");
        mmi_wcscat((U16*)mmi_bt_recv_str_buf, (U16*)tmp_buf);
    }
    else
    {
        mmi_wcscat((U16*)mmi_bt_recv_str_buf, (U16*)L"/--");
    }

    if (obj_p->total_obj_num > 1)
    {
        mmi_wcscat((U16*)mmi_bt_recv_str_buf, (U16*)L")");
    }
}


/****************************************************************************** 
 * FUNCTION
 *  UpdateRecvingScreen_Int
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURN VALUE LIST
 *  void
 ******************************************************************************/
static void UpdateRecvingScreen_Int(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_bt_recv_obj_info_struct obj_info;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (mmi_frm_scrn_get_active_id() == g_mmi_bt_recv_hdlr)
    {
        mmi_bt_recv_get_obj_info(&obj_info);
        mmi_bt_recv_update_str(&obj_info);
        cat66_update_progress_string();
        StartTimer(BT_PROG_UPDATE_TIMER, RECV_PROG_UPD_DUR, UpdateRecvingScreen_Int);
    }
    else
    {
        g_mmi_bt_recv_hdlr = 0xffff;
        mmi_bt_recv_get_obj_info = NULL;
    }
}


/****************************************************************************** 
 * FUNCTION
 *  UpdateRecvingScreen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  scrn_id    [IN]
 * RETURNS
 *  void
 ******************************************************************************/
void UpdateRecvingScreen(U16 scrn_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (scrn_id == g_mmi_bt_recv_hdlr)
    {
        UpdateRecvingScreen_Int();
    }
    else
    {
        g_mmi_bt_recv_hdlr = 0xffff;
        mmi_bt_recv_get_obj_info = NULL;
        StopTimer(BT_PROG_UPDATE_TIMER);
    }
}


/****************************************************************************** 
 * FUNCTION
 *  ShowRecvingScreen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  scrn_id    [IN]    the screen id that calls ShowRecvingScreen
 *  mmi_bt_recv_get_obj_info    [IN]    function handler to get the received object infomation
 *  
 * RETURN VALUE LIST
 *  void
 ******************************************************************************/
void ShowRecvingScreen(U16 scrn_id,
                       void(*get_obj_info)(mmi_bt_recv_obj_info_struct *obj_info_p))
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 img_id;
    mmi_bt_recv_obj_info_struct obj_info;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_mmi_bt_recv_hdlr = scrn_id;
    mmi_bt_recv_get_obj_info = get_obj_info;

    get_obj_info(&obj_info);
    mmi_bt_recv_update_str(&obj_info);
    img_id = mmi_get_event_based_image(MMI_EVENT_PROGRESS);
    ShowCategory66Screen(STR_GLOBAL_RECEIVING,
                         GetRootTitleIcon(MENU_CONN_BT_MAIN),
                         0,
                         0,
                         STR_GLOBAL_CANCEL,
                         0,
                         (U8*)mmi_bt_recv_str_buf,
                         img_id,
                         NULL);

    StartTimer(BT_PROG_UPDATE_TIMER, RECV_PROG_UPD_DUR, UpdateRecvingScreen_Int);
}
#endif  /* __MMI_FTC_SUPPORT__ || __MMI_BIP_SUPPORT__ */

#endif /* __MMI_BT_SUPPORT__ */ 


