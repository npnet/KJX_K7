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
 *   mmi_rp_app_bootup_def.h
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


#ifndef _MMI_RP_APP_BOOTUP_DEF_H
#define _MMI_RP_APP_BOOTUP_DEF_H




/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_BOOTUP_NAND_NOT_SUPPORTED = 34113 + 1, /* BASE_ID + 1 */
    STR_ID_BOOTUP_USER_DRIVE_CORRUPTED,
    STR_ID_BOOTUP_SYSTEM_DRIVE_CORRUPTED,
    STR_ID_BOOTUP_NAND_VERSION_MISMATCH,
    STR_ID_BOOTUP_NAND_QUOTA_OVER_DISK,
    STR_ID_BOOTUP_NAND_QUOTA_USAGE_WARNING,
    STR_ID_BOOTUP_FLIGHT_MODE_ASK,
    STR_ID_BOOTUP_SOFTKEY_EMERGENCY,
    STR_ID_BOOTUP_INPUT_PHONE_PASSWORD,
    STR_ID_BOOTUP_WRONG_PHONE_PASSWORD,
    STR_ID_BOOTUP_EMERGENCY_CALL_ASK,
    STR_ID_BOOTUP_REMAINING_TRIALS_PROMPT,
    STR_ID_BOOTUP_INPUT_CHV1,
    STR_ID_BOOTUP_INPUT_UBCHV1,
    STR_ID_BOOTUP_NEW_CHV1,
    STR_ID_BOOTUP_WRONG_CHV1,
    STR_ID_BOOTUP_WRONG_UBCHV1,
    STR_ID_BOOTUP_CONFIRM_NEW_CHV1,
    STR_ID_BOOTUP_CHV1_NOT_MATCH,
    STR_ID_BOOTUP_INPUT_NP,
    STR_ID_BOOTUP_INPUT_NSP,
    STR_ID_BOOTUP_INPUT_SP,
    STR_ID_BOOTUP_INPUT_CP,
    STR_ID_BOOTUP_INPUT_SIMP,
    STR_ID_BOOTUP_INPUT_NSSP,
    STR_ID_BOOTUP_INPUT_SIMCP,
    STR_ID_BOOTUP_WRONG_NP,
    STR_ID_BOOTUP_WRONG_NSP,
    STR_ID_BOOTUP_WRONG_SP,
    STR_ID_BOOTUP_WRONG_CP,
    STR_ID_BOOTUP_WRONG_SIMP,
    STR_ID_BOOTUP_WRONG_NSSP,
    STR_ID_BOOTUP_WRONG_SIMCP,
    STR_ID_BOOTUP_SIM_ACCESS_ERROR,
    STR_ID_BOOTUP_SIM_CHV1_BLOCKED,
    STR_ID_BOOTUP_SIM_BLOCKED,
    STR_ID_BOOTUP_FORMATING,
    STR_ID_BOOTUP_WAIT_FOR_SIM,
    STR_ID_BOOTUP_SIM_CAME_OFF,
    MMI_RP_APP_BOOTUP_STR_MAX
}mmi_rp_app_bootup_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    GRP_ID_BOOTUP = 34113 + 1, /* BASE_ID + 1 */
    SCR_ID_BOOTUP_BASE,
    SCR_ID_BOOTUP_DISK_CHECK_FORMAT_QUERY,
    SCR_ID_BOOTUP_DISK_CHECK_FORMATTING,
    SCR_ID_BOOTUP_SIM_SELECTION,
    SCR_ID_BOOTUP_FLIGHT_MODE_QUERY,
    SCR_ID_BOOTUP_DETECT_FACTORY_MODE_END,
    SCR_ID_BOOTUP_ANIMATION,
    SCR_ID_BOOTUP_DUMMY_WAITING,
    SCR_ID_BOOTUP_REAL_WAITING,
    SCR_ID_BOOTUP_PHONE_LOCK,
    SCR_ID_BOOTUP_CHV1_OR_PER,
    SCR_ID_BOOTUP_UBCHV1,
    SCR_ID_BOOTUP_NEW_CHV1,
    SCR_ID_BOOTUP_CONFIRM_NEW_CHV1,
    SCR_ID_BOOTUP_PER_LOCK_WAITING,
    SCR_ID_BOOTUP_PEN_CALIBRATION_BASE,
    MMI_RP_APP_BOOTUP_SCR_MAX
}mmi_rp_app_bootup_scr_enum;
/******************** Screen resource IDs - finish ********************/


/******************** Timer resource IDs - begin ********************/
typedef enum
{
    BOOTUP_WAITING_EVENT_TIMER = 34113 + 1, /* BASE_ID + 1 */
    BOOTUP_ANIMATION_TIMER,
    BOOTUP_WAITING_SCREEN_TIMER,
    MMI_RP_APP_BOOTUP_TIMER_MAX
}mmi_rp_app_bootup_timer_enum;
/******************** Timer resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_APP_BOOTUP_VXML_LAYOUT_MAX
} mmi_rp_app_bootup_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** MMI Cache IDs - Begin ********************/
typedef enum
{
    NVRAM_POWER_ON_DISPLAY_SUCCESS = 34113 + 1, /* BASE_ID + 1 */     /*        SHORT */ 
    MMI_RP_APP_BOOTUP_MMI_CACHE_MAX
} mmi_rp_app_bootup_mmi_cache_enum;
/******************** MMI Cache IDs - End ********************/


#endif /* _MMI_RP_APP_BOOTUP_DEF_H */
