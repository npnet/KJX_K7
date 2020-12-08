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
 *   mmi_rp_srv_phnset_onoff_def.h
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


#ifndef _MMI_RP_SRV_PHNSET_ONOFF_DEF_H
#define _MMI_RP_SRV_PHNSET_ONOFF_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MENU_SETTING_POWER_ON_DISPLAY = 41200 + 1, /* BASE_ID + 1 */
    MENU_SETTING_POWER_ON_SYSTEM,
    MENU_SETTING_POWER_ON_DOWNLOAD,
    MENU_SETTING_POWER_OFF_DISPLAY,
    MENU_SETTING_POWER_OFF_SYSTEM,
    MENU_SETTING_POWER_OFF_DOWNLOAD,
    MENU_ID_FMGR_FWD_POWER_ON,
    MENU_ID_FMGR_FWD_POWER_OFF,
    MMI_RP_SRV_PHNSET_ONOFF_MENU_MAX
}mmi_rp_srv_phnset_onoff_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_PHNSET_ON_OFF_SYSTEM = 41200 + 1, /* BASE_ID + 1 */
    STR_ID_PHNSET_ON_OFF_DOWNLOAD,
    STR_SETTING_POWER_ON_DISPLAY,
    STR_SETTING_POWER_OFF_DISPLAY,
    MMI_RP_SRV_PHNSET_ONOFF_STR_MAX
}mmi_rp_srv_phnset_onoff_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    SCR_ID_PHNSET_POWER_ON = 41200 + 1, /* BASE_ID + 1 */
    SCR_ID_PHNSET_POWER_ON_SYSTEM_LIST,
    SCR_ID_PHNSET_POWER_ON_SYSTEM_VIEW,
    SCR_ID_PHNSET_POWER_ON_SYSTEM_VIEW_2,
    SCR_ID_PHNSET_POWER_ON_USER_VIEW,
    SCR_ID_PHNSET_POWER_OFF,
    SCR_ID_PHNSET_POWER_OFF_SYSTEM_LIST,
    SCR_ID_PHNSET_POWER_OFF_SYSTEM_VIEW,
    SCR_ID_PHNSET_POWER_OFF_SYSTEM_VIEW_2,
    SCR_ID_PHNSET_POWER_OFF_USER_VIEW,
    SCR_ID_PHNSET_POWER_ON_OFF_LAST,
    GRP_ID_POWER_ON_OFF_MAIN,
    GRP_ID_POWER_ON_OFF_SYSTEM,
    GRP_ID_POWER_ON_OFF_PREVIEW,
    MMI_RP_SRV_PHNSET_ONOFF_SCR_MAX
}mmi_rp_srv_phnset_onoff_scr_enum;
/******************** Screen resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_SRV_PHNSET_ONOFF_VXML_LAYOUT_MAX
} mmi_rp_srv_phnset_onoff_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** MMI Cache IDs - Begin ********************/
typedef enum
{
    NVRAM_RESTORE_POWER_ON_DISPLAY = 41200 + 1, /* BASE_ID + 1 */     /*        SHORT */ 
    NVRAM_RESTORE_POWER_OFF_DISPLAY,                            /*        SHORT */ 
    NVRAM_CURRENT_POWER_ON_DISPLAY,                             /*        SHORT */ 
    NVRAM_CURRENT_POWER_OFF_DISPLAY,                            /*        SHORT */ 
    MMI_RP_SRV_PHNSET_ONOFF_MMI_CACHE_MAX
} mmi_rp_srv_phnset_onoff_mmi_cache_enum;
/******************** MMI Cache IDs - End ********************/


#endif /* _MMI_RP_SRV_PHNSET_ONOFF_DEF_H */
