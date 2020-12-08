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
 *   mmi_rp_app_sat_def.h
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


#ifndef _MMI_RP_APP_SAT_DEF_H
#define _MMI_RP_APP_SAT_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MENU_ID_SAT1_ENTRY = 42894 + 1, /* BASE_ID + 1 */
    MENU_ID_SAT_INPUT_DONE_OPT,
    MENU_ID_SAT_INPUT_OPTION,
    MMI_RP_APP_SAT_MENU_MAX
}mmi_rp_app_sat_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_SAT_SIM_REFRESH = 42894 + 1, /* BASE_ID + 1 */
    STR_ID_SAT_GET_INPUT_LENGTH_NOT_ENOUGH,
    STR_ID_SAT_LANGUAGE_CHANGED,
    MMI_RP_APP_SAT_STR_MAX
}mmi_rp_app_sat_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    GRP_ID_SAT_INPUT_OPT = 42894 + 1, /* BASE_ID + 1 */
    SCR_ID_SAT_CMD_SCREEN,
    MMI_RP_APP_SAT_SCR_MAX
}mmi_rp_app_sat_scr_enum;
/******************** Screen resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_APP_SAT_VXML_LAYOUT_MAX
} mmi_rp_app_sat_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** Image resource IDs - begin ********************/
typedef enum
{
    IMG_ID_SAT_SIM1_TITLE = 42894 + 1, /* BASE_ID + 1 */
    MMI_RP_APP_SAT_IMG_MAX
}mmi_rp_app_sat_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_APP_SAT_DEF_H */
