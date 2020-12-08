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
 *
 * Project:
 * --------
 *	 Maui
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 11 23 2010 cm.huang
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * 
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include <idp_define.h>

#if ENABLE_UT

kal_uint32
unit_test_yuv420_80x96_h264[11521]=
{
  0xB2B2B2B2, 0xB2B2B2B2, 0xB2B2B2B2, 0xB2B2B2B2, 0xB2B2B2B2,
  0xB2B2B2B2, 0xB2B2B2B2, 0xB2B2B2B2, 0xB0B0B0B0, 0xB0B0B0B0,
  0xB0B0B0B0, 0xB0B0B0B0, 0xAEAEAEAE, 0xAEAEAEAE, 0xAEAEAEAE,
  0xAEAEAEAE, 0xBDC1B0AE, 0xBEC0B1AD, 0xBFBEB3AC, 0xBFBDB4AC,
  0xBFBFBFBF, 0xBFBFBFBF, 0xBFBFBFBF, 0xBFBFBFBF, 0xBEBEBEBE,
  0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE, 0xBCBCBCBC, 0xBCBCBCBC,
  0xBCBCBCBC, 0xBCBCBCBC, 0xBABABABA, 0xBABABABA, 0xBABABABA,
  0xBABABABA, 0xB8B8B8B8, 0xB8B8B8B8, 0xB8B8B8B8, 0xB8B8B8B8,
  0xB6B6B6B6, 0xB6B6B6B6, 0xB6B6B6B6, 0xB6B6B6B6, 0xB5B6B6B6,
  0xB5B6B6B6, 0xB5B6B6B6, 0xB5B6B6B6, 0xB4B4B5B5, 0xB4B4B5B5,
  0xB3B4B5B5, 0xB3B4B5B5, 0xB3B3B4B4, 0xB3B3B4B4, 0xB2B2B3B3,
  0xB2B2B3B3, 0xB0B1B2B2, 0xB0B1B2B2, 0xB0B0B1B1, 0xB0B0B1B1,
  0xAEAEAFAF, 0xAEAEAFAF, 0xAEAEAFAF, 0xAEAEAFAF, 0xB9B5AFAC,
  0xB8B1ACAE, 0xB1ACABAF, 0xACACADAD, 0xB4B5B7B8, 0xB5B6B7B7,
  0xB7B7B6B5, 0xB8B7B5B4, 0xB5B5B6B6, 0xB5B5B4B4, 0xBAB9B6B5,
  0xBEBDBAB8, 0xBDBAB6B4, 0xBFBEBBB8, 0xBEBFBFBE, 0xBDBEC0C1,
  0xAEB4B3B1, 0xB2B2B7B3, 0x9593B2B4, 0xA195B2AE, 0xB2B2B2B2,
  0xB1B1B1B1, 0x92929292, 0xA1A1A1A1, 0xB0B0B0B0, 0xAFAFAFAF,
  0x90909090, 0x9F9F9F9F, 0xAEAEAEAE, 0xADADADAD, 0x8E8E8E8E,
  0x9D9D9D9D, 0xC0C0B5AC, 0xBEC0BAAE, 0xA0A19C92, 0xB0AFAC9F,
  0xC0C0C0C0, 0xBEBEBEBE, 0xA0A0A0A0, 0xB0B0B0B0, 0xBFBFBFBF,
  0xBDBDBDBD, 0x9F9F9F9F, 0xAFAFAFAF, 0xBDBDBDBD, 0xBBBBBBBB,
  0x9D9D9D9D, 0xADADADAD, 0xBBBBBBBB, 0xB9B9B9B9, 0x9B9B9B9B,
  0xABABABAB, 0xB9B9B9B9, 0xB7B7B7B7, 0x99999999, 0xA9A9A9A9,
  0xB7B7B7B7, 0xB5B5B5B5, 0x97979797, 0xA7A7A7A7, 0xB6B6B7B7,
  0xB4B5B5B5, 0x98989797, 0xA6A7A7A7, 0xB3B3B4B5, 0xB2B3B4B4,
  0x99999999, 0xA4A5A6A6, 0xB1B1B2B2, 0xB0B0B1B1, 0x97979898,
  0xA2A2A3A3, 0xAFB0B1B1, 0xAFAFB0B0, 0x96969797, 0xA1A1A2A2,
  0xADADAEAE, 0xADADAEAE, 0x94949595, 0x9F9FA0A0, 0xAEAEAEAE,
  0xADADADAD, 0x8F8F8F8F, 0x9D9D9D9D, 0xB7B3B1AD, 0xB6AEADAD,
  0x948C8D8E, 0x9D9A9C99, 0xBFC1BFBC, 0xC2C1C2C0, 0xA29FA2A5,
  0xB1AFB3AE, 0xBCC1BFC0, 0xC0C0BCC0, 0x9EA2A0A1, 0xA4AFB1AE,
  0xA294B3B3, 0xA294B3B3, 0xA294B3B3, 0xA294B3B3, 0xA1A1A1A1,
  0xA1A1A1A1, 0xA1A1A1A1, 0xA1A1A1A1, 0x9F9F9F9F, 0x9F9F9F9F,
  0x9F9F9F9F, 0x9F9F9F9F, 0x9D9D9D9D, 0x9D9D9D9D, 0x9D9D9D9D,
  0x9D9D9D9D, 0xB3B2AEA1, 0xB2B1AFA2, 0xB0B0B0A4, 0xAFB0B0A5,
  0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xAEAFAFAF,
  0xADAEAFAF, 0xADADAEAF, 0xADADADAE, 0xADADADAD, 0xACACACAC,
  0xACACACAC, 0xACACACAC, 0xAAABABAB, 0xA9AAABAB, 0xA9A9AAAB,
  0xA9A9A9AA, 0xAAAAAAAA, 0xA9A9A9A9, 0xA9A9A9A9, 0xA9A9A9A9,
  0xA7A7A7A7, 0xA7A7A7A7, 0xA7A7A7A7, 0xA7A7A7A7, 0xA5A5A5A5,
  0xA5A5A5A5, 0xA5A5A5A5, 0xA5A5A5A5, 0xA4A4A5A5, 0xA4A4A5A5,
  0xA3A4A5A5, 0xA3A3A5A5, 0xA2A2A3A3, 0xA2A2A3A3, 0xA3A1A2A2,
  0xA5A1A2A1, 0xA1A1A2A2, 0xA1A1A2A2, 0xA1A1A1A1, 0xA1A1A1A1,
  0x9F9FA0A0, 0x9F9FA0A0, 0x9F9FA0A0, 0x9F9FA0A0, 0x9D9D9D9D,
  0x9D9D9D9D, 0x9D9D9D9D, 0x9D9D9D9D, 0x999C9D9B, 0x9F9C9B9D,
  0xA5A19C9C, 0xA6A59F99, 0xAFB0B4AE, 0xB0B0AEA8, 0xB0B0A9A4,
  0xB0AAA3A7, 0x9FAEB0B0, 0x9FAEB0B0, 0x9FAEB0B0, 0x9FAEB0B0,
  0xA294B3B3, 0xA294B3B3, 0xA294B3B3, 0xA294B3B3, 0xA1A1A1A1,
  0xA1A1A1A1, 0xA1A1A1A1, 0xA1A1A1A1, 0xA2A2A0A1, 0xA09FA1A0,
  0x86899FA2, 0x8586A0A2, 0x9F9E9FA0, 0x9A9DA0A1, 0x999E9F9A,
  0x9CA19C93, 0xB3B2B3A8, 0xAFB0B3AB, 0xAF9494A8, 0xB09495A2,
  0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xADADADAE,
  0xADADADAE, 0xADADADAE, 0xADADADAE, 0xACACACAC, 0xACACACAC,
  0xACACACAC, 0xACACACAC, 0xA9AAAAAA, 0xA99191AA, 0xA98D8DAA,
  0xA98E8EAA, 0xA7A7A7A7, 0xA78D8DA7, 0xA78D8DA7, 0xA7A7A7A7,
  0xA7A7A7A7, 0xA7A7A7A7, 0xA7A7A7A7, 0xA7A7A7A7, 0xA6A6A5A5,
  0xA4A4A5A5, 0xA5A5A5A5, 0xA5A5A5A5, 0xA3A4A5A5, 0xA6A5A4A4,
  0x808A8D86, 0x8C9DA4A5, 0xA4A0A1A2, 0xA2A2A3A5, 0x8C8C8782,
  0xA2A5998C, 0xA0A0A1A1, 0xA09F9F9F, 0xA09E9D9F, 0xA0A0A19F,
  0x9F9F9F9F, 0x9F9F9F9F, 0x9F9F9F9F, 0xA09F989F, 0x9F9C9B9C,
  0xA4817F9F, 0xA78884A1, 0xA78B87A1, 0xAAA9A6A4, 0xA9AAA9A8,
  0xA8A8A8A8, 0xA8A8A2A8, 0xA9A6A6A7, 0xA7A6A6A6, 0xA6A6A7A6,
  0xA6A6A7A7, 0xA1ADAEB0, 0x9EACABAA, 0x9CAAA9A7, 0x9BA9A8A6,
  0xA294B2B3, 0xA294B2B3, 0xA294B2B3, 0xA294B2B3, 0xA2A2A2A2,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0x9683A1A0, 0x9883A0A1,
  0x9E849FA2, 0xA0859FA3, 0x9A9E9982, 0x8D9E8783, 0x8E8B8088,
  0x97828191, 0xB19395A6, 0xAF9296AB, 0xAF9395B0, 0xB19593B0,
  0x94A0AEAE, 0xA391A1AD, 0xAC9397B0, 0x929393B0, 0xAEAA9793,
  0xAC9993A6, 0xAE9292AD, 0xAE909190, 0x8C97AAAC, 0x9C909DAF,
  0xA98F94AC, 0xAC8E92AC, 0xA7918A99, 0xA28D8EA5, 0xA58B90AF,
  0xAC8D8EAE, 0xAA8C8CAA, 0xAA8C8CAA, 0xAA8C8CAA, 0xAA8C8CAA,
  0x8992A3AB, 0xABA7A5A8, 0x8E98A7AB, 0x988992AA, 0xA2978A89,
  0xA5918C9C, 0xA090878F, 0xA38A8AA2, 0x86A2A4A4, 0x86A2A4A4,
  0x86A2A4A4, 0x87A2A4A5, 0xA2A2A286, 0xA2A2A286, 0xA2A2A286,
  0xA3A2A287, 0x8690A0A0, 0x978290A1, 0x9E8287A1, 0x838285A1,
  0xA3998A84, 0xA68E8199, 0xAA8F839E, 0xAA8F8C86, 0xA58C8BA3,
  0xA18D8CA5, 0x948C8DA7, 0x8E8B8FA9, 0xA79696A3, 0xA7A39190,
  0xA7A4A08D, 0xA7A59E8C, 0xA5A6A7A7, 0xA5A6A7A7, 0xA5A5A6A7,
  0xA5A5A6A7, 0x9AA7A6A5, 0x99A6A5A5, 0x98A5A5A5, 0x97A5A5A5,
  0xA294B2B3, 0xA294B2B3, 0xA294B2B3, 0xA294B2B3, 0xA2A2A2A2,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0x9F829B9F, 0x9D83A1A1,
  0x9F84A09F, 0x9E9FA0A0, 0xA881839C, 0xAF9C9CA0, 0xAF9E9D9E,
  0xB19F9D9D, 0xB09493B1, 0xB09494B1, 0xB09494B1, 0xB0ADACB1,
  0xAE9294B0, 0xA392A0B0, 0x96A1AFB2, 0xADADB0AF, 0xACADADB0,
  0xAA9BACAC, 0xABA09B91, 0xACADB0AE, 0xAA8E91B0, 0xA28F98AD,
  0x8F95AAAE, 0xA9ABACAF, 0xAB8E8FAD, 0xB08C87A5, 0xA68F8A9B,
  0xA8A5A6AA, 0xAA8686AA, 0xAA8C8CAA, 0xAA8C8CAA, 0xAAA6A6AA,
  0xA0878BA9, 0x9F8D92A9, 0x918F9CAB, 0xA7A6A6A8, 0xA48A8DA9,
  0xA98884A1, 0x9F8B8897, 0xA2A2A4A6, 0x87A2A4A4, 0x87A3A3A4,
  0x87A2A3A3, 0x9FA2A3A3, 0xA3A2A286, 0xA2A2A286, 0xA2A2A186,
  0xA3A3A19E, 0xA18286A2, 0x9D8592A1, 0x959C9FA1, 0xAFADABA5,
  0xA9AAABA7, 0xAA97A8AC, 0xAB9E958E, 0xABACADAE, 0x958A8FAA,
  0xA28C8DAA, 0xA78E8CAA, 0xA8A8A9AA, 0xA7A5918D, 0xA7928E9D,
  0xA0949EA6, 0xA5A7A9A9, 0xA4A5A6A6, 0xA4A4A4A4, 0xA4A4A5A5,
  0xA4A5A5A5, 0x97A5A4A4, 0x97A5A4A4, 0x97A5A4A4, 0x97A5A4A4,
  0xA294B2B3, 0xA294B2B3, 0xA294B2B3, 0xA294B2B3, 0xA2A2A2A2,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0x9E9FA0A0, 0x9E9FA0A0,
  0x9E9FA0A0, 0x9E9FA0A0, 0xB2A49E9E, 0xB1A49D9B, 0xAAA29F9C,
  0xA3A0A29F, 0xB0AFAFAF, 0xAFB0B1B1, 0xAFB1B2B1, 0xAFB1B1AC,
  0xAEAFB0B0, 0xAFB0B0B0, 0xB0B0B0AF, 0xB0B0AFAF, 0xAEADAFAF,
  0xAEADAEAF, 0xAEAEADAF, 0xADAEADAE, 0xAAAAACAE, 0xABABACAD,
  0xACACACAE, 0xADACABAE, 0xA6A7A9AA, 0xA7A9AAAA, 0xA9AAAAAB,
  0xAAAAABAC, 0xA8A8A8A8, 0xA8A8A8A8, 0xA8A8A8A8, 0xA8A8A8A8,
  0xA7A6A6A8, 0xA7A6A6A8, 0xA7A6A6A8, 0xA7A6A6A8, 0xA5A5A5A5,
  0xA5A5A5A5, 0xA5A5A5A5, 0xA5A5A5A5, 0xA3A2A4A3, 0xA2A2A4A3,
  0xA2A3A4A4, 0xA2A4A4A4, 0xA6A3A1A3, 0xADA3A2A2, 0xADACA3A4,
  0xADACADA5, 0xACACACA8, 0xABACAEAE, 0xABACADAD, 0xACACADAD,
  0xABABABAC, 0xAAABABAB, 0xAAABABAB, 0xAAABABAC, 0xA8A9AAA9,
  0xA8A9AAAA, 0xA8A9AAAA, 0xA9A9AAAA, 0xA8A8A9A9, 0xA7A8A9A9,
  0xA7A8A9A9, 0xA8A8A9A9, 0xA5A5A7A7, 0xA5A5A6A7, 0xA5A5A6A7,
  0xA6A6A7A8, 0x97A5A5A5, 0x97A5A5A5, 0x97A5A5A5, 0x97A6A6A6,
  0x9F93B2B2, 0xA595B3B3, 0xA196B5B4, 0x9794B5B4, 0xA2A2A2A2,
  0xA3A3A3A3, 0xA3A3A3A3, 0x94949494, 0xA2A2A2A2, 0xA3A3A3A3,
  0xA3A3A3A3, 0x94949494, 0xA0A0A0A0, 0xA1A1A1A1, 0xA1A1A1A1,
  0x92929292, 0xAEAFAEA0, 0xB0B0A29F, 0xAFA59FA0, 0x99909191,
  0xB0B0B0B0, 0xAFAFAFAF, 0xB0B0B0B0, 0xA0A0A0A0, 0xAEAEAEAE,
  0xADADADAD, 0xAEAEAEAE, 0x9E9E9E9E, 0xABABADAD, 0xAAAAACAC,
  0xABABADAD, 0x9B9B9D9D, 0xABABABAB, 0xAAAAAAAA, 0xABABABAB,
  0x9B9B9B9B, 0xA9A9A9A9, 0xA8A8A8A8, 0xA9A9A9A9, 0x99999999,
  0xA7A7A7A7, 0xA6A6A6A6, 0xA7A7A7A7, 0x97979797, 0xA6A7A7A7,
  0xA5A6A6A6, 0xA7A7A7A7, 0x99989897, 0xA8A6A5A5, 0xAEA8A6A6,
  0xB0AEA7A7, 0xA09F9E9C, 0xADADABA7, 0xAEAEAEAE, 0xAFAFAFB0,
  0x9F9F9F9F, 0xABABACAC, 0xACACADAD, 0xADADAEAE, 0x9D9D9E9E,
  0xA9AAAAAB, 0xAAABABAC, 0xABACACAD, 0x9B9C9C9D, 0xA8A8A9A9,
  0xA9A9AAAA, 0xAAAAABAB, 0x9A9A9B9B, 0xA7A7A8A8, 0xA8A8A9A9,
  0xA9A9AAAA, 0x99999A9A, 0xA6A6A6A7, 0xA5A6A7A8, 0xA5A6A8A9,
  0x97979899, 0x96A5A5A6, 0x98A6A5A5, 0x99A6A5A4, 0x909C9997,
  0xB4B4B5B4, 0xB4B4B5B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB3B3B4B4,
  0xB3B3B4B4, 0xB3B3B4B4, 0xB3B3B4B4, 0xB1B1B2B3, 0xB1B1B2B3,
  0xB1B1B2B3, 0xB1B1B2B3, 0xB0B0B0B1, 0xB0B0B0B1, 0xB0B0B0B1,
  0xB0B0B0B1, 0xB4B3B0B0, 0xB0B1B0B0, 0xB0B0B0B0, 0xB0B0B0B0,
  0xBCBCBCB7, 0xBEBBB9B3, 0xBBB7B4B1, 0xB9B4B0B0, 0xBDBCBCBB,
  0xBDBDBDBE, 0xBDBCBCBC, 0xBDBCBCBB, 0xBCBDBDBD, 0xBCBDBDBD,
  0xBCBDBDBD, 0xBCBDBDBD, 0xBABBBCBC, 0xBABBBCBC, 0xBABBBCBC,
  0xBABBBCBC, 0xB8B8B9BA, 0xB8B8B9BA, 0xB8B8B9BA, 0xB8B8B9BA,
  0xB8B7B7B8, 0xB6B6B7B8, 0xB8B8B7B8, 0xB9B9B7B7, 0xBAB8B8B8,
  0xBDBCBAB6, 0xBFBEBCB9, 0xC1C1BFBC, 0xC0BFBEBC, 0xC0C0C0BF,
  0xC0C0C0BF, 0xC0C0C0C0, 0xBFBFBFBF, 0xBEBEBFBF, 0xBEBEBFBF,
  0xBFBFBFBF, 0xBDBDBEBE, 0xBCBCBDBD, 0xBCBCBDBD, 0xBDBDBEBE,
  0xBCBCBCBD, 0xBBBBBBBC, 0xBBBBBBBC, 0xBCBCBCBD, 0xBABABBBB,
  0xB9B9BABA, 0xB9B9BABA, 0xBABABBBB, 0xB8B8B9B9, 0xB7B7B8B8,
  0xB7B7B8B8, 0xB8B8B9B9, 0xB7B7B7B7, 0xB6B6B6B6, 0xB6B6B6B7,
  0xB7B7B7B8, 0xB6B6B6B6, 0xB5B5B5B5, 0xB5B5B5B5, 0xB6B6B6B6,
  0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4,
  0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB2B2B3B3, 0xB2B2B3B3,
  0xB2B2B3B3, 0xB2B2B3B3, 0xB0B0B1B1, 0xB0B0B1B1, 0xB0B0B1B1,
  0xB0B0B1B1, 0xAFAFB0B0, 0xAFAFB0B0, 0xAFAFB0B0, 0xAFAFB0B0,
  0xB6B1AFAF, 0xB3B0AFAF, 0xB0AFAEAF, 0xAEAEAEAF, 0xBDBBBAB9,
  0xBCBBBAB4, 0xBCBBB5AE, 0xBCBBB2AC, 0xBBBCBCBD, 0xBCBCBCBC,
  0xBDBDBDBD, 0xBEBEBEBD, 0xBABABBBB, 0xBBBCBCBC, 0xBDBEBEBD,
  0xBFBFBFBF, 0xB8B9BABA, 0xBBBBBBBB, 0xBDBDBDBD, 0xC0BFBFBF,
  0xBCBBB9B8, 0xBDBCBBBB, 0xBDBCBCBD, 0xBDBDBDBF, 0xC0C0BFBE,
  0xC0C0BFBE, 0xBFBFBEBD, 0xBFBFBEBC, 0xBFBFC0C0, 0xC0C0C0C0,
  0xC0C0C0C0, 0xC1C0C0C0, 0xBEBEBFBE, 0xBEBEBFBF, 0xBEBEBFBF,
  0xBEBEBFC0, 0xBCBCBDBE, 0xBCBCBDBE, 0xBCBCBDBE, 0xBCBCBDBE,
  0xBBBBBBBC, 0xBBBBBBBC, 0xBBBBBBBC, 0xBABBBBBC, 0xB9BABBBB,
  0xB9B9BABA, 0xB9B9BABA, 0xB8B9BABA, 0xB8B8B9B9, 0xB8B8B8B8,
  0xB7B7B8B8, 0xB7B7B8B8, 0xB6B6B7B7, 0xB6B6B7B7, 0xB6B6B6B7,
  0xB6B6B6B7, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5,
  0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4,
  0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB1B2B3B3, 0xB1B1B3B3,
  0xB1B1B3B3, 0xB1B1B3B3, 0xB0B0B0B1, 0xB0B0B0B0, 0xB0B0B0B0,
  0xB0B0B0B0, 0xAFAFB0B0, 0xAFAFB0B0, 0xAFAFB0B0, 0xAFAFB0B0,
  0xADADAEAF, 0xADADAEAF, 0xADADAEAF, 0xADADAEAF, 0xBEBDAFAB,
  0xBEBEAFAC, 0xBFBFAEAC, 0xC0C1ADAD, 0xBFBFBEBE, 0xBFBFBFBF,
  0xBFBFBFBF, 0xC0C0C0C0, 0xC0C0C0BF, 0xC0C0C0BF, 0xC0C0C0BF,
  0xC0C0C0C0, 0xBFBFBFBF, 0xBFBFBFBF, 0xBFBFBFBF, 0xBFBFBFBF,
  0xBCBCBDBE, 0xBCBCBDBE, 0xBCBCBDBE, 0xBCBCBDBE, 0xBEBEBDBC,
  0xBCBCBCBC, 0xBABBBBBC, 0xBABABBBC, 0xC0C0C0BF, 0xBFBDBDBD,
  0xBCBBBBBB, 0xBAB9BABA, 0xBEBEBFC0, 0xBEBDBEBE, 0xBDBCBCBB,
  0xBEBCBBBA, 0xBCBCBDBD, 0xBCBCBDBD, 0xBCBCBDBD, 0xBCBCBDBD,
  0xBBBBBBBC, 0xBBBBBBBC, 0xBBBBBBBC, 0xBBBBBBBC, 0xB9B8B9B9,
  0xB9B9BABA, 0xB9B9BABA, 0xB9B9BABA, 0xB7B7B8B9, 0xB7B7B8B9,
  0xB7B7B8B9, 0xB7B7B8B9, 0xB6B6B6B7, 0xB6B6B6B7, 0xB6B6B6B7,
  0xB6B6B6B7, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5,
  0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4,
  0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB1B2B2B3, 0xB1B2B3B3,
  0xB2B2B3B3, 0xB2B2B3B3, 0xB0B0B1B1, 0xB0B0B1B1, 0xB0B0B1B1,
  0xB0B0B1B1, 0xAFAFB0B0, 0xAFAFB0B0, 0xAFAFB0B0, 0xAFAFB0B0,
  0xADADAEAF, 0xADADAEAF, 0xADADAEAF, 0xADADAEAF, 0xC0C1ADAD,
  0xC0C1ADAD, 0xC0C1ADAD, 0xC0C1ADAD, 0xC0C0C0C0, 0xC0C0C0C0,
  0xC0C0C0C0, 0xC0C0C0C0, 0xC0C0C0C0, 0xC0C0C0C0, 0xC0C0C0C0,
  0xC0C0C0C0, 0xBFBFBFBF, 0xBFBFBFBF, 0xBFBFBFBF, 0xBFBFBFBF,
  0xBCBCBDBE, 0xBCBCBDBE, 0xBCBCBDBE, 0xBCBCBDBE, 0xBABBBBBC,
  0xBABBBBBC, 0xBABBBBBC, 0xBABBBBBC, 0xB8B9B9B9, 0xB9B9BABA,
  0xB9B9BABA, 0xB9B9BABA, 0xBCBBBAB8, 0xBAB9B9B8, 0xB7B7B8B8,
  0xB7B7B8B8, 0xBCBCBCBC, 0xBBBABABA, 0xBAB8B7B7, 0xB8B7B6B7,
  0xBBBBBBBC, 0xBBBBBBBB, 0xBBBBBABA, 0xBBBBBABA, 0xB9B9BABA,
  0xB9B9BABA, 0xB9B9BABA, 0xB9B9BABA, 0xB7B7B8B9, 0xB7B7B8B9,
  0xB7B7B8B9, 0xB7B7B8B9, 0xB6B6B6B7, 0xB6B6B6B7, 0xB6B6B6B7,
  0xB6B6B6B7, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5,
  0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB3B3B4B5,
  0xB3B3B4B5, 0xB3B3B4B5, 0xB3B3B4B5, 0xB1B1B2B3, 0xB1B1B2B3,
  0xB1B1B2B3, 0xB1B1B2B3, 0xB0B0B0B1, 0xB0B0B0B1, 0xB0B0B0B1,
  0xB0B0B0B1, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF,
  0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xC4C2ADAB,
  0xC4C2ADAB, 0xC4C2ADAB, 0xC4C2ADAB, 0xC1C1C1C1, 0xC1C1C1C1,
  0xC1C1C1C1, 0xC1C1C1C1, 0xC0C0C0C0, 0xC0C0C0C0, 0xC0C0C0C0,
  0xC0C0C0C0, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE,
  0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBBBBBBBB,
  0xBBBBBBBB, 0xBBBBBBBB, 0xBBBBBBBB, 0xB9B9B9B9, 0xB9B9B9B9,
  0xB9B9B9B9, 0xB9B9B9B9, 0xB8B8B8B8, 0xB8B8B8B8, 0xB8B8B8B8,
  0xB8B8B8B8, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5,
  0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB8B8BABB,
  0xB9B8B7B6, 0xB6B6B4B3, 0xB2B3B4B5, 0xB8B8B8B8, 0xB8B8B8B8,
  0xB8B8B8B8, 0xB8B8B8B8, 0xB7B7B7B7, 0xB7B7B7B7, 0xB7B7B7B7,
  0xB7B7B7B7, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5,
  0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB3B3B4B5,
  0xB3B3B4B5, 0xB3B3B4B5, 0xB3B3B4B5, 0xB1B1B2B3, 0xB1B1B2B3,
  0xB1B1B2B3, 0xB1B1B2B3, 0xB0B0B0B1, 0xB0B0B0B1, 0xB0B0B0B1,
  0xB0B0B0B1, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF,
  0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xC4C2ADAB,
  0xC4C2ADAB, 0xC4C2ADAB, 0xC4C2ADAB, 0xC1C1C1C1, 0xC1C1C1C1,
  0xC1C1C1C1, 0xC1C1C1C1, 0xC0C0C0C0, 0xC0C0C0C0, 0xC0C0C0C0,
  0xC0C0C0C0, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE,
  0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBBBBBBBB,
  0xBBBBBBBB, 0xBBBBBBBB, 0xBBBBBBBB, 0xB9B9B9B9, 0xB9B9B9B9,
  0xB9B9B9B9, 0xB9B9B9B9, 0xB8B8B8B8, 0xB8B8B8B8, 0xB8B8B8B8,
  0xB8B8B8B8, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5,
  0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB1B2B3B4,
  0xB1B2B3B4, 0xB1B2B3B4, 0xB1B2B3B4, 0xB8B7B3B2, 0xB3B2B1B1,
  0xB1B1B1B1, 0xB1B1B1B1, 0xB6B6B7B7, 0xB7B7B6B5, 0xB6B5B3B1,
  0xB3B1B1B0, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5,
  0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB3B3B4B5,
  0xB3B3B4B5, 0xB3B3B4B5, 0xB3B3B4B5, 0xB1B1B2B3, 0xB1B1B2B3,
  0xB1B1B2B3, 0xB1B1B2B3, 0xB0B0B0B1, 0xB0B0B0B1, 0xB0B0B0B1,
  0xB0B0B0B1, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF,
  0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xC4C2ADAB,
  0xC4C2ADAB, 0xC4C2ADAB, 0xC4C2ADAB, 0xC1C1C1C1, 0xC1C1C1C1,
  0xC1C1C1C1, 0xC1C1C1C1, 0xC0C0C0C0, 0xC0C0C0C0, 0xC0C0C0C0,
  0xC0C0C0C0, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE,
  0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBBBBBBBB,
  0xBBBBBBBB, 0xBBBBBBBB, 0xBBBBBBBB, 0xB9B9B9B9, 0xB9B9B9B9,
  0xB9B9B9B9, 0xB9B9B9B9, 0xB8B8B8B8, 0xB8B8B8B8, 0xB8B8B8B8,
  0xB8B8B8B8, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5,
  0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB1B2B3B4,
  0xB1B2B3B4, 0xB1B2B3B4, 0xB1B2B3B4, 0xB0B0B2B2, 0xB0B0B2B2,
  0xB0B0B2B2, 0xB0B0B2B2, 0xAFAFB1B1, 0xAFAFB1B1, 0xAFAFB1B1,
  0xAFAFB1B1, 0xB3B2B1B0, 0xB0AFAEAE, 0xACADAEAE, 0xADAEB0B1,
  0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB3B3B4B5,
  0xB3B3B4B5, 0xB3B3B4B5, 0xB3B3B4B5, 0xB1B1B2B3, 0xB1B1B2B3,
  0xB1B1B2B3, 0xB1B1B2B3, 0xB0B0B0B1, 0xB0B0B0B1, 0xB0B0B0B1,
  0xB0B0B0B1, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF,
  0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xAFAFAFAF, 0xC4C2ADAB,
  0xC4C2ADAB, 0xC4C2ADAB, 0xC4C2ADAB, 0xC1C1C1C1, 0xC1C1C1C1,
  0xC1C1C1C1, 0xC1C1C1C1, 0xC0C0C0C0, 0xC0C0C0C0, 0xC0C0C0C0,
  0xC0C0C0C0, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE,
  0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBBBBBBBB,
  0xBBBBBBBB, 0xBBBBBBBB, 0xBBBBBBBB, 0xB9B9B9B9, 0xB9B9B9B9,
  0xB9B9B9B9, 0xB9B9B9B9, 0xB8B8B8B8, 0xB8B8B8B8, 0xB8B8B8B8,
  0xB8B8B8B8, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5,
  0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB1B2B3B4,
  0xB1B2B3B4, 0xB1B2B3B4, 0xB1B2B3B4, 0xB0B0B2B2, 0xB0B0B2B2,
  0xB0B0B2B2, 0xB0B0B2B2, 0xAFAFB1B1, 0xAFAFB1B1, 0xAFAFB1B1,
  0xAFAFB1B1, 0xADADAEB0, 0xADADADAE, 0xADADADAD, 0xADADADAD,
  0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB3B3B3B3,
  0xB3B3B3B3, 0xB3B3B3B3, 0xB3B3B3B3, 0xB2B2B2B2, 0xB2B2B2B2,
  0xB2B2B2B2, 0xB2B2B2B2, 0xB0B0B0B0, 0xB0B0B0B0, 0xB0B0B0B0,
  0xB0B0B0B0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0,
  0xAEAEAEAE, 0xAEAEAEAE, 0xAEAEAEAE, 0xAEAEAEAE, 0xC2C3ACAD,
  0xC2C3ACAD, 0xC2C3ACAD, 0xC2C3ACAD, 0xC1C1C1C1, 0xC1C1C1C1,
  0xC1C1C1C1, 0xC1C1C1C1, 0xC0C0C0C0, 0xC0C0C0C0, 0xC0C0C0C0,
  0xC0C0C0C0, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE,
  0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBBBBBBBB,
  0xBBBBBBBB, 0xBBBBBBBB, 0xBBBBBBBB, 0xB8B9B9BA, 0xB8B9B9BA,
  0xB8B9B9BA, 0xB8B9B9BA, 0xB7B7B7B8, 0xB7B7B7B8, 0xB7B7B7B8,
  0xB7B7B7B8, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6,
  0xB4B4B5B5, 0xB4B4B5B5, 0xB4B4B5B5, 0xB4B4B5B5, 0xB1B2B3B4,
  0xB1B2B3B4, 0xB1B2B3B4, 0xB1B2B3B4, 0xB0B0B2B2, 0xB0B0B2B2,
  0xB0B0B2B2, 0xB0B0B2B2, 0xAFAFB1B1, 0xAFAFB1B1, 0xAFAFB1B1,
  0xAFAFB1B1, 0xADADADAD, 0xADADADAD, 0xADADADAD, 0xADADADAD,
  0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB4B4B4B4,
  0xB4B4B4B4, 0xB4B4B4B4, 0xB4B4B4B4, 0xB2B2B2B2, 0xB2B2B2B2,
  0xB2B2B2B2, 0xB2B2B2B2, 0xB0B0B0B0, 0xB0B0B0B0, 0xB0B0B0B0,
  0xB0B0B0B0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0,
  0xAEAEAEAE, 0xAEAEAEAE, 0xAEAEAEAE, 0xAEAEAEAE, 0xC2C3ACAD,
  0xC2C3ACAD, 0xC2C3ACAD, 0xC2C3ACAD, 0xC1C1C1C1, 0xC1C1C1C1,
  0xC1C1C1C1, 0xC1C1C1C1, 0xC0C0C0C0, 0xC0C0C0C0, 0xC0C0C0C0,
  0xC0C0C0C0, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE,
  0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBBBBBBBB,
  0xBBBBBBBB, 0xBBBBBBBB, 0xBBBBBBBB, 0xB8B9B9BA, 0xB8B9B9BA,
  0xB8B9B9BA, 0xB8B9B9BA, 0xB7B7B7B8, 0xB7B7B7B8, 0xB7B7B7B8,
  0xB7B7B7B8, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6,
  0xB4B4B5B5, 0xB4B4B5B5, 0xB4B4B5B5, 0xB4B4B5B5, 0xB1B2B3B4,
  0xB1B2B3B4, 0xB1B2B3B4, 0xB1B2B3B4, 0xB0B0B2B2, 0xB0B0B2B2,
  0xB0B0B2B2, 0xB0B0B2B2, 0xAFAFB1B1, 0xAFAFB1B1, 0xAFAFB1B1,
  0xAFAFB1B1, 0xB5B3AFAD, 0xB4B3B1B0, 0xB4B5B7B8, 0xB3B5B9BB,
  0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB3B4B4B4,
  0xB3B4B4B4, 0xB2B3B4B4, 0xB2B3B4B4, 0xB2B2B2B2, 0xB2B2B2B2,
  0xB2B2B2B2, 0xB2B2B2B2, 0xB0B0B0B0, 0xB0B0B0B0, 0xB0B0B0B0,
  0xB0B0B0B0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0,
  0xAEAEAEAE, 0xAEAEAEAE, 0xAEAEAEAE, 0xAEAEAEAE, 0xC2C3ACAD,
  0xC2C3ACAD, 0xC2C3ACAD, 0xC2C3ACAD, 0xC1C1C1C1, 0xC1C1C1C1,
  0xC1C1C1C1, 0xC1C1C1C1, 0xC0C0C0C0, 0xC0C0C0C0, 0xC0C0C0C0,
  0xC0C0C0C0, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE,
  0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBBBBBBBB,
  0xBBBBBBBB, 0xBBBBBBBB, 0xBBBBBBBB, 0xB8B9B9BA, 0xB8B9B9BA,
  0xB8B9B9BA, 0xB8B9B9BA, 0xB7B7B7B8, 0xB7B7B7B8, 0xB7B7B7B8,
  0xB7B7B7B8, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6,
  0xB4B4B5B5, 0xB4B4B5B5, 0xB4B4B5B5, 0xB4B4B5B5, 0xB1B2B3B4,
  0xB1B2B3B4, 0xB1B2B3B4, 0xB1B2B3B4, 0xB3B1B0AE, 0xB4B3B1B0,
  0xB7B6B5B3, 0xB9B7B6B5, 0xB7B6B5B4, 0xB9B8B7B6, 0xB9B9B9B8,
  0xB9B9B9B9, 0xB5B5B5B5, 0xB7B7B7B7, 0xB7B7B7B7, 0xB7B7B7B7,
  0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB3B3B5B3,
  0xB1B4B5B2, 0x8F9CB3B3, 0xAA9791B0, 0xB3B3B2B4, 0xB1B2B3B4,
  0x9E8E8987, 0x96A7B1B2, 0xB0B0B0B1, 0xB1AFB0B0, 0xAFB1B0B0,
  0xAEAFAA8E, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0,
  0xAEAEAEAE, 0xAEAEAEAE, 0xAEAEAEAE, 0xAEAEAEAE, 0xC2C3AEAC,
  0xC1C2ADAD, 0x98BDA9AB, 0x97A4AEAC, 0xBFC4C0BE, 0xBEC0C0C0,
  0xC0C09595, 0xC0B5959A, 0xC3C1C0C2, 0x9DBDC1C7, 0x93BABDBD,
  0x98AFC5C3, 0xC0BAB8BD, 0x98BFBC91, 0x92B7BD96, 0x92ABBC98,
  0xBAC0C0BB, 0xBBBABA99, 0xBBBABB91, 0xBAC0C19E, 0xBBBBBBBB,
  0xBBBBBBBB, 0xBBBBBBBB, 0xBBBBBBBB, 0xB8B9B9BA, 0xB8B9B9BA,
  0xB8B9B9BA, 0xB8B9B9BA, 0xB7B7B7B8, 0xB7B7B7B8, 0xB7B7B7B8,
  0xB7B7B7B8, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6, 0xB5B5B6B6,
  0xB4B4B5B5, 0xB4B4B5B5, 0xB4B4B5B5, 0xB4B4B5B5, 0xB7B5B5B6,
  0xB9B7B5B5, 0xBAB9B7B5, 0xBCBAB9B7, 0xB9B9B7B6, 0xB9B9B9B7,
  0xB9B9B9B9, 0xB9B9B9B9, 0xB8B9B9B9, 0xB7B8B9B9, 0xB7B7B8B9,
  0xB7B7B7B8, 0xB8B8B8B8, 0xB7B7B7B7, 0xB7B7B7B7, 0xB7B7B7B7,
  0xB5B7B5B6, 0xA2B6B6B5, 0x92B7B5B7, 0x89B4B7B5, 0xB3B1A290,
  0x9BB2B396, 0x8699B4A9, 0x878BB3B3, 0xB2B4B2B2, 0xAF92878A,
  0x949BB1A4, 0xB3B1B3B2, 0xB0AF8D9E, 0xB09C93B0, 0xB18CA4AF,
  0xB086AFB0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0,
  0xACACACAC, 0xACACACAC, 0xACACACAC, 0xACACACAC, 0xA7939DAC,
  0xBA9785A9, 0xC2AE8391, 0xC2C08D83, 0xBFAE95AC, 0xBEA797B0,
  0xC09997B8, 0xBC9295C2, 0x91AAC0C1, 0x92A5C0C1, 0x929CC1C0,
  0x9397C1C0, 0x8FA9BEA5, 0x8FA1BDAE, 0x909BBCB4, 0x9093BBBD,
  0xBBBBBEA5, 0xADBBBDAD, 0x91B5BCB3, 0x9697B0BB, 0xB9BABABC,
  0x928D929B, 0xA9BBB49B, 0xB9BABAB9, 0xB6B6B6B1, 0xB0BDB69F,
  0xB7BA9B92, 0xB1B78D8F, 0xB7B3B4B8, 0x8E95ABBA, 0xAC9998AA,
  0xB8B19B8D, 0xBABBB8B9, 0x8C8A8C8A, 0x8C8EAFB1, 0x9492B8B7,
  0xBFBEB7B6, 0x92A3B6B0, 0x909CBCB3, 0x9293BFC0, 0xBAC1C3BF,
  0x9A989EA7, 0x9E958F91, 0xB8BCBAB4, 0xB8B9BBBC, 0x99AABCBE,
  0xA48D9CB9, 0xB69595AE, 0xBBB6B6B6, 0xA28E918B, 0x8B9CB5B7,
  0x91BEBEB9, 0xB7B7B5B9, 0xB7B7BAB2, 0xB5B7BE9C, 0xB6B2B188,
  0x89B5B3B5, 0x90B6B4B2, 0xA0B5B8B6, 0xB2B7B6B5, 0x8789B3B2,
  0x8798B5AA, 0x98B2B197, 0xB4B2A290, 0xB2B1B3B3, 0x959AB09F,
  0xAD958887, 0xB3B3B1B2, 0xB184AFB2, 0xB08BA6B3, 0xAF9C93B1,
  0xB0AF8BA2, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0,
  0x8CADABAF, 0x819AAFAE, 0x8684A5AE, 0x968297AE, 0xC3C2A285,
  0x98917E7B, 0xC1C3ABA8, 0xC4C5A8A8, 0xBA94A2C0, 0xB2969396,
  0xA597B1C3, 0x9F96B2C0, 0x9A92B7C1, 0xA091B2C1, 0xAC91A7C0,
  0xB291A2C0, 0x9791B5BE, 0x9D91AFBE, 0xA990A5BD, 0xAF909FBD,
  0x8F8F9BBC, 0xB88F90BE, 0xB29195BD, 0x988FA8BC, 0x8C8E8E8D,
  0xB9BABABA, 0xB9BABCBC, 0x9EB0BBB3, 0x99B3918D, 0x96BCB6B7,
  0x8DB6BCB2, 0x98B8B096, 0xB5BCAC8E, 0xBBB7B68D, 0xC1BAB68A,
  0xC0C1AC8E, 0x9D94AEB9, 0xA095B1C1, 0xA992A6B8, 0xAF8F97A7,
  0x9892B1BE, 0x9C91AEBD, 0xA490A8BC, 0xA890A6BC, 0xBABABCBD,
  0xBABABCBD, 0xBABABCBD, 0xBABABCBD, 0xB6B08A9B, 0xB2B89290,
  0xB6B6918E, 0xBDAB8E9D, 0x8EB2B4BC, 0x89ACB7B3, 0x8F98B3B6,
  0xA3929DB7, 0xBABBB88D, 0xB9B9B89B, 0xB8B4B8AE, 0xB8B1B8B3,
  0xB6B6B6B6, 0xB6B6B6B6, 0xB6B6B6B6, 0xB6B6B6B6, 0xAA9592B0,
  0x91A0B5B5, 0xB5B5B7B4, 0xB5B5B4B3, 0x96A7B1B2, 0x9E8E8987,
  0xB2B3B4B5, 0xB3B3B2B4, 0xB1B1AB8C, 0xB0AEB1B0, 0xB1B1B3B0,
  0xB1B2B2B2, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0,
  0xAC8986A6, 0xB2ACAAAF, 0xADADAEB0, 0xADACAFB3, 0xC1C1ADAB,
  0xC1C1ADAB, 0xC1C1ADAB, 0xC1C1ADAB, 0x9898BCC0, 0xBDC0C0C0,
  0xC0C4C0C1, 0xBDBDC3C1, 0xBA9496C0, 0xBFBFC0C3, 0xBEBFBFBE,
  0xC1BFBEC0, 0xB79295BD, 0xBBBCBEBF, 0xBCBFC0BD, 0xBEBEBDBD,
  0x99ACBEBC, 0xBABCBDBC, 0xBDBEBDBB, 0xBCBCBCBD, 0x97929093,
  0xBABABABA, 0xBBBBBBBB, 0xC1BCBABC, 0xB6B8B5AB, 0xC4BFBBC1,
  0xA0C0C1BF, 0xABC4BEC5, 0x9E8E98A4, 0xBFC2BFC3, 0xB5BFBAB4,
  0x96949796, 0xBC908FAA, 0xBFA28DAD, 0xBEB4949F, 0xBFC1BAA6,
  0xBC9595BC, 0xBFBFBFBF, 0xBEBEBEBE, 0xBFBBBBBF, 0xBABABCBD,
  0xBABABCBD, 0xBABABCBD, 0xBABABCBD, 0x8E96A8AF, 0xB5BCBCBC,
  0xB8B8B8B8, 0xBABABABA, 0xB5B09D8F, 0xBBBABABA, 0xB3B5BBBD,
  0xB9B9BABB, 0xB6B6B6B6, 0xB6B6B6B6, 0xB6B6B6B6, 0xB6B6B6B6,
  0xB6B6B6B6, 0xB6B6B6B6, 0xB6B6B6B6, 0xB6B6B6B6, 0xB5B5B5B5,
  0xB5B5B5B5, 0xB5B5B5B5, 0xB5B5B5B5, 0xB3B3B3B3, 0xB2B3B3B3,
  0xB2B3B3B3, 0xB2B2B3B3, 0xB1B1B2B2, 0xB1B1B1B2, 0xB1B1B1B1,
  0xB1B1B1B1, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0, 0xAEAEB0B0,
  0xAEAEAEAE, 0xAEAEAEAE, 0xAEAEAEAE, 0xAEAEAEAE, 0xC3BFAEA9,
  0xC1B0AFAC, 0xAFB1ADAC, 0xADA8AEAD, 0xBFC1C2C2, 0xC1C2C2C2,
  0xC2C2C2BD, 0xC2C2BDB3, 0xC0C0C0C0, 0xC0C0C0C0, 0xC0C0C0C0,
  0xC0C0C0C0, 0xBEBEBEBD, 0xBEBEBEBE, 0xBEBEBEBE, 0xBEBEBEBE,
  0xBBBBBDBF, 0xBABDBDBB, 0xC2BEBCBD, 0xC4C4C0BC, 0xC4C1BDBC,
  0xC4C4C3C1, 0xC3C4C5C4, 0xC5C4C3C3, 0xBCC1C2C3, 0xC1C2C3C3,
  0xC2C3C3C4, 0xC3C3C4C4, 0xC2C2C0BF, 0xC3C3C2C2, 0xC3C3C3C3,
  0xC3C3C3C3, 0xBAB9BFBB, 0xBBBABFC0, 0xBFBCBEC2, 0xC0BCBDC1,
  0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBDBDBDBD, 0xBABABCBD,
  0xBABABCBD, 0xBABABCBD, 0xBABABCBD, 0xBABABABA, 0xBABABABA,
  0xBABABABA, 0xBABABABA, 0xB9B9BABB, 0xB9B9BABB, 0xB9B9BABB,
  0xB9B9BABB, 0xB6B6B6B6, 0xB6B6B6B6, 0xB6B6B6B6, 0xB6B6B6B6,
  0x28282828, 0x28282828, 0x28282828, 0x28282828, 0x2B2B2B2B,
  0x2B2B2B2B, 0x2B2B2B2B, 0x2B2B2B2B, 0x21221F27, 0x21221F27,
  0x21221F27, 0x21221F27, 0x22222222, 0x22222222, 0x22222222,
  0x22222222, 0x24242424, 0x24242424, 0x24242424, 0x24242424,
  0x27272727, 0x27272727, 0x27272727, 0x27272727, 0x28282828,
  0x28282828, 0x28282828, 0x28282828, 0x28282828, 0x28282828,
  0x28282828, 0x28282828, 0x25262829, 0x2627292A, 0x28292B2C,
  0x292A2C2D, 0x25252525, 0x24242424, 0x22222222, 0x21212121,
  0x28282828, 0x28282828, 0x28282828, 0x28282828, 0x2B2B2B2B,
  0x2B2B2B2B, 0x2B2B2B2B, 0x2B2B2B2B, 0x22222222, 0x22222222,
  0x22222222, 0x22222222, 0x22222222, 0x22222222, 0x22222222,
  0x22222222, 0x24242424, 0x24242424, 0x24242424, 0x24242424,
  0x27272727, 0x27272727, 0x27272727, 0x27272727, 0x28282828,
  0x28282828, 0x28282828, 0x28282828, 0x28282828, 0x28282828,
  0x28282828, 0x27282829, 0x292A2C2D, 0x28292B2C, 0x2627292A,
  0x26262829, 0x1F202223, 0x20212324, 0x22232526, 0x23242526,
  0x29292929, 0x29292929, 0x29292929, 0x29292929, 0x29292929,
  0x29292929, 0x29292929, 0x29292929, 0x21212121, 0x21212121,
  0x21212121, 0x21212121, 0x23232323, 0x23232323, 0x23232323,
  0x23232323, 0x25252525, 0x25252525, 0x25252525, 0x25252525,
  0x26252525, 0x26252525, 0x26252525, 0x26252525, 0x29282827,
  0x29282827, 0x29282827, 0x26282827, 0x26272929, 0x2526292A,
  0x24242728, 0x24242525, 0x25262627, 0x25252525, 0x25252525,
  0x25252526, 0x24252525, 0x25252525, 0x25252525, 0x25252525,
  0x29292929, 0x29292929, 0x29292929, 0x29292929, 0x29292929,
  0x29292929, 0x29292929, 0x29292929, 0x20201F1F, 0x20202121,
  0x1F212425, 0x21232627, 0x23232323, 0x23232323, 0x23232323,
  0x23232324, 0x25252525, 0x25252525, 0x25252525, 0x25252525,
  0x26252525, 0x26252525, 0x25252525, 0x24252525, 0x25272827,
  0x23252726, 0x23222324, 0x23212224, 0x25242323, 0x24232323,
  0x24232323, 0x24232323, 0x26262625, 0x26262625, 0x26262625,
  0x26262625, 0x26262626, 0x26262626, 0x26262626, 0x26262626,
  0x28282828, 0x28282828, 0x28282828, 0x28282828, 0x28282828,
  0x28282828, 0x28282828, 0x28282828, 0x25272828, 0x27292929,
  0x27292929, 0x28292929, 0x24242425, 0x24242426, 0x24242426,
  0x24242228, 0x24242424, 0x23232323, 0x23232323, 0x23232323,
  0x23242424, 0x23232323, 0x23232323, 0x23232323, 0x22212223,
  0x22212122, 0x22212122, 0x22212122, 0x24232323, 0x24232323,
  0x24232323, 0x24232323, 0x26252525, 0x26252525, 0x26252525,
  0x26252525, 0x26262626, 0x26262626, 0x26262626, 0x26262626,
  0x28282828, 0x28282828, 0x28282828, 0x28282828, 0x28282828,
  0x28282828, 0x28282828, 0x28282828, 0x28292929, 0x29292929,
  0x29292929, 0x29292929, 0x2323212A, 0x22231F2C, 0x22231F2C,
  0x22231F2C, 0x22222222, 0x22222222, 0x22222222, 0x22222222,
  0x22222222, 0x22222222, 0x23222222, 0x23222222, 0x23222222,
  0x24232323, 0x25252524, 0x25252625, 0x24232323, 0x24232323,
  0x24232324, 0x24232325, 0x26252525, 0x26252525, 0x26252525,
  0x26252525, 0x26262626, 0x26262626, 0x26262626, 0x26262626,
  0x28282828, 0x28282828, 0x28282828, 0x28282828, 0x28282828,
  0x28282828, 0x28282828, 0x28282828, 0x2A2A2A2A, 0x2A2A2A2A,
  0x2A2A2A2A, 0x2A2A2A2A, 0x211C212B, 0x211C212B, 0x211C212B,
  0x211C212B, 0x21212121, 0x21212121, 0x21212121, 0x21212121,
  0x23232323, 0x23232323, 0x23232323, 0x23232323, 0x26262626,
  0x26262626, 0x26262626, 0x26262626, 0x26262626, 0x26262626,
  0x26262626, 0x26262626, 0x27272727, 0x27272727, 0x27272727,
  0x27272727, 0x27272727, 0x27272727, 0x27272727, 0x27272727,
  0x28282828, 0x28282828, 0x28282828, 0x28282828, 0x28282828,
  0x28282828, 0x28282828, 0x28282828, 0x2A2A2A2A, 0x2A2A2A2A,
  0x2A2A2A2A, 0x2A2A2A2A, 0x211C212B, 0x211C212B, 0x211C212B,
  0x211C212B, 0x21212121, 0x21212121, 0x21212121, 0x21212121,
  0x23232323, 0x23232323, 0x23232323, 0x23232323, 0x26262626,
  0x26262626, 0x26262626, 0x26262626, 0x26262626, 0x26262626,
  0x26262626, 0x26262626, 0x28282828, 0x28282828, 0x28282828,
  0x28282828, 0x28282828, 0x28282828, 0x28282828, 0x28282828,
  0x27272727, 0x27272727, 0x27272727, 0x27272727, 0x29292929,
  0x29292929, 0x29292929, 0x29292929, 0x2A2A2A2A, 0x2A2A2A2A,
  0x2A2A2A2A, 0x2A2A2A2A, 0x211C212B, 0x211C212B, 0x211C212B,
  0x211C212B, 0x22222121, 0x22222121, 0x22222121, 0x22222121,
  0x23232322, 0x23232322, 0x23232322, 0x23232322, 0x25252525,
  0x25252525, 0x25252525, 0x25252525, 0x27272727, 0x27272727,
  0x27272727, 0x27272727, 0x2A2A2A2A, 0x2A2A2A2A, 0x2A2A2A2A,
  0x2A2A2A2A, 0x2A2A2A2A, 0x2A2A2A2A, 0x2A2A2A2A, 0x2A2A2A2A,
  0x27272727, 0x27272727, 0x27272727, 0x27272727, 0x29292929,
  0x29292929, 0x29292929, 0x29292929, 0x2A2A2A2A, 0x2A2A2A2A,
  0x2A2A2A2A, 0x2A2A2A2A, 0x211C212B, 0x211C212B, 0x211C212B,
  0x211C212B, 0x22222121, 0x22222121, 0x22222121, 0x22222121,
  0x23232322, 0x23232322, 0x23232322, 0x23232322, 0x25252525,
  0x25252525, 0x25252525, 0x25252525, 0x27272727, 0x27272727,
  0x27272727, 0x27272727, 0x25252525, 0x25252525, 0x25252525,
  0x25252525, 0x26262626, 0x26262626, 0x26262626, 0x26262626,
  0x26262626, 0x26262626, 0x26262626, 0x26262626, 0x28282828,
  0x28282828, 0x28282828, 0x28282828, 0x2A2A2A2A, 0x2A2A2A2A,
  0x2A2A2A2A, 0x2A2A2A2A, 0x211C212B, 0x211C212B, 0x211C212B,
  0x211C212B, 0x22222121, 0x22222121, 0x22222121, 0x22222121,
  0x23232322, 0x23232322, 0x23232322, 0x23232322, 0x25252525,
  0x25252525, 0x25252525, 0x25252525, 0x25252525, 0x25252525,
  0x25252525, 0x25252525, 0x25252525, 0x25252525, 0x25252525,
  0x25252525, 0x26262626, 0x26262626, 0x26262626, 0x26262626,
  0x26262626, 0x26262626, 0x26262626, 0x26262626, 0x28282828,
  0x28282828, 0x28282828, 0x28282828, 0x2A2A2A2A, 0x2A2A2A2A,
  0x2A2A2A2A, 0x2A2A2A2A, 0x211C212B, 0x211C212B, 0x211C212B,
  0x211C212B, 0x22222121, 0x22222121, 0x22222121, 0x22222121,
  0x27262422, 0x25242322, 0x21222322, 0x1F202222, 0x20202020,
  0x21212121, 0x22222222, 0x22222222, 0x20202020, 0x21212121,
  0x22222222, 0x22222222, 0x25252525, 0x25252525, 0x25252525,
  0x25252525, 0x26262626, 0x26262626, 0x26262626, 0x26262626,
  0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0xA5A5A5A5,
  0xA5A5A5A5, 0xA5A5A5A5, 0xA5A5A5A5, 0x9B9C99A1, 0x9B9C99A1,
  0x9B9C99A1, 0x9B9C99A1, 0x9C9C9C9C, 0x9C9C9C9C, 0x9C9C9C9C,
  0x9C9C9C9C, 0x9E9E9E9E, 0x9E9E9E9E, 0x9E9E9E9E, 0x9E9E9E9E,
  0xA2A1A1A1, 0xA2A1A1A1, 0xA2A1A1A1, 0xA2A1A1A1, 0xA4A4A4A3,
  0xA4A4A4A3, 0xA4A4A4A3, 0xA4A4A4A3, 0xA4A4A4A4, 0xA4A4A4A4,
  0xA4A4A4A4, 0xA4A4A4A4, 0x9FA0A2A3, 0xA0A1A3A4, 0xA2A3A5A6,
  0xA3A4A6A7, 0x9E9E9E9E, 0x9D9D9D9D, 0x9B9B9B9B, 0x9A9A9A9A,
  0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0xA5A5A5A5,
  0xA5A5A5A5, 0xA5A5A5A5, 0xA5A5A5A5, 0x9C9C9C9C, 0x9C9C9C9C,
  0x9C9C9C9C, 0x9C9C9C9C, 0x9C9C9C9C, 0x9C9C9C9C, 0x9C9C9C9C,
  0x9C9C9C9C, 0x9E9E9E9E, 0x9E9E9E9E, 0x9E9E9E9E, 0x9E9E9E9E,
  0xA2A1A1A1, 0xA2A1A1A1, 0xA2A1A1A1, 0xA2A1A1A1, 0xA4A4A4A3,
  0xA4A4A4A3, 0xA4A4A4A3, 0xA4A4A4A3, 0xA4A4A4A4, 0xA4A4A4A4,
  0xA4A4A4A4, 0xA3A3A4A4, 0xA3A4A6A7, 0xA2A3A5A6, 0xA0A1A3A4,
  0xA0A0A2A3, 0x98999B9C, 0x999A9C9D, 0x9B9C9E9F, 0x9D9E9FA0,
  0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3,
  0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0x9B9B9B9B, 0x9B9B9B9B,
  0x9B9B9B9B, 0x9B9B9B9B, 0x9C9C9C9C, 0x9C9C9C9C, 0x9C9C9C9C,
  0x9C9C9C9C, 0xA0A0A0A0, 0xA0A0A0A0, 0xA0A0A0A0, 0xA0A0A0A0,
  0xA1A0A0A0, 0xA1A0A0A0, 0xA1A0A0A0, 0xA1A0A0A0, 0xA4A3A3A2,
  0xA4A2A2A2, 0xA3A2A2A2, 0xA1A3A3A2, 0xA2A3A4A4, 0xA0A1A4A4,
  0x9E9EA1A2, 0x9E9E9E9F, 0xA0A0A0A1, 0xA09F9FA0, 0xA09F9F9F,
  0xA09F9F9F, 0xA0A0A0A0, 0xA1A1A1A0, 0xA1A1A1A0, 0xA1A1A1A0,
  0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3,
  0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0x9B98979A, 0x9B98999C,
  0x9A999CA0, 0x9C9C9FA2, 0x9C9C9C9C, 0x9C9C9C9C, 0x9C9C9C9C,
  0x9C9C9C9D, 0xA0A0A0A0, 0xA0A0A0A0, 0xA0A0A0A0, 0x9F9F9F9F,
  0xA1A0A0A0, 0xA1A0A0A0, 0xA0A0A0A0, 0x9F9F9F9F, 0x9FA3A3A2,
  0x9D9FA3A2, 0x9C9B9E9F, 0x9C9B9C9D, 0x9E9D9D9E, 0x9D9D9D9C,
  0x9D9D9D9C, 0x9D9D9D9C, 0x9F9E9E9E, 0x9F9E9E9E, 0x9F9E9E9E,
  0x9F9E9E9E, 0xA1A1A1A0, 0xA1A1A1A0, 0xA1A1A1A0, 0xA1A1A1A0,
  0xA2A2A2A2, 0xA2A1A1A1, 0xA2A1A1A1, 0xA2A1A1A1, 0xA4A4A4A3,
  0xA4A4A4A3, 0xA4A4A4A3, 0xA4A4A4A3, 0xA0A2A3A4, 0xA2A5A5A5,
  0xA2A5A5A5, 0xA3A5A5A5, 0x9D9D9D9F, 0x9D9D9DA0, 0x9D9D9DA0,
  0x9D9D9CA2, 0x9E9E9E9E, 0x9D9D9D9D, 0x9D9D9D9D, 0x9C9C9C9C,
  0x9D9E9E9E, 0x9C9D9D9D, 0x9C9D9D9D, 0x9C9C9C9C, 0x9B9A9B9C,
  0x9B9A9A9B, 0x9B9A9A9B, 0x9B9A9A9B, 0x9D9D9D9C, 0x9D9D9D9C,
  0x9D9D9D9C, 0x9D9D9D9C, 0x9F9E9E9E, 0x9F9E9E9E, 0x9F9E9E9E,
  0x9F9E9E9E, 0xA1A1A0A0, 0xA1A1A0A0, 0xA1A1A0A0, 0xA1A1A0A0,
  0xA2A1A1A1, 0xA2A1A1A1, 0xA2A1A1A1, 0xA2A1A1A1, 0xA4A4A4A3,
  0xA4A4A4A3, 0xA4A4A4A3, 0xA4A4A4A3, 0xA4A5A5A5, 0xA5A5A5A5,
  0xA5A5A5A5, 0xA5A5A5A5, 0x9C9C9AA3, 0x9C9C99A5, 0x9C9C99A5,
  0x9C9C99A5, 0x9C9C9C9C, 0x9B9B9B9B, 0x9B9B9B9B, 0x9B9B9B9B,
  0x9C9C9C9C, 0x9B9B9B9B, 0x9C9B9B9B, 0x9C9B9B9B, 0x9C9B9B9B,
  0x9C9C9C9C, 0x9E9E9E9D, 0x9E9F9F9E, 0x9D9D9D9C, 0x9D9D9D9D,
  0x9D9D9D9D, 0x9D9D9D9E, 0x9F9E9E9E, 0x9F9E9E9E, 0x9F9E9E9E,
  0x9F9E9E9E, 0xA1A1A0A0, 0xA1A1A0A0, 0xA1A1A0A0, 0xA1A1A0A0,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0xA4A4A4A4, 0xA4A4A4A4,
  0xA4A4A4A4, 0xA4A4A4A4, 0x9B969BA5, 0x9B969BA5, 0x9B969BA5,
  0x9B969BA5, 0x9B9B9B9B, 0x9B9B9B9B, 0x9B9B9B9B, 0x9B9B9B9B,
  0x9D9D9D9D, 0x9D9D9D9D, 0x9D9D9D9D, 0x9D9D9D9D, 0x9F9F9F9F,
  0x9F9F9F9F, 0x9F9F9F9F, 0x9F9F9F9F, 0xA2A2A2A2, 0xA2A2A2A2,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA1A1A1A1, 0xA1A1A1A1, 0xA1A1A1A1,
  0xA1A1A1A1, 0xA1A1A1A1, 0xA1A1A1A1, 0xA1A1A1A1, 0xA1A1A1A1,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0xA4A4A4A4, 0xA4A4A4A4,
  0xA4A4A4A4, 0xA4A4A4A4, 0x9B969BA5, 0x9B969BA5, 0x9B969BA5,
  0x9B969BA5, 0x9B9B9B9B, 0x9B9B9B9B, 0x9B9B9B9B, 0x9B9B9B9B,
  0x9D9D9D9D, 0x9D9D9D9D, 0x9D9D9D9D, 0x9D9D9D9D, 0x9F9F9F9F,
  0x9F9F9F9F, 0x9F9F9F9F, 0x9F9F9F9F, 0xA2A2A2A2, 0xA2A2A2A2,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA4A4A4A4, 0xA4A4A4A4, 0xA4A4A4A4,
  0xA4A4A4A4, 0xA4A4A4A4, 0xA4A4A4A4, 0xA4A4A4A4, 0xA4A4A4A4,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0xA3A3A3A3,
  0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0xA6A6A6A6, 0xA6A6A6A6,
  0xA6A6A6A6, 0xA6A6A6A6, 0x9B969BA5, 0x9B969BA5, 0x9B969BA5,
  0x9B969BA5, 0x9C9C9B9B, 0x9C9C9B9B, 0x9C9C9B9B, 0x9C9C9B9B,
  0x9D9D9D9C, 0x9D9D9D9C, 0x9D9D9D9C, 0x9D9D9D9C, 0x9F9F9F9F,
  0x9F9F9F9F, 0x9F9F9F9F, 0x9F9F9F9F, 0xA2A2A2A2, 0xA2A2A2A2,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3,
  0xA3A3A3A3, 0xA4A4A4A4, 0xA4A4A4A4, 0xA4A4A4A4, 0xA4A4A4A4,
  0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0xA2A2A2A2, 0xA3A3A3A3,
  0xA3A3A3A3, 0xA3A3A3A3, 0xA3A3A3A3, 0xA6A6A6A6, 0xA6A6A6A6,
  0xA6A6A6A6, 0xA6A6A6A6, 0x9B969BA5, 0x9B969BA5, 0x9B969BA5,
  0x9B969BA5, 0x9C9C9B9B, 0x9C9C9B9B, 0x9C9C9B9B, 0x9C9C9B9B,
  0x9D9D9D9C, 0x9D9D9D9C, 0x9D9D9D9C, 0x9D9D9D9C, 0x9F9F9F9F,
  0x9F9F9F9F, 0x9F9F9F9F, 0x9F9F9F9F, 0xA2A2A2A2, 0xA2A2A2A2,
  0xA2A2A2A2, 0xA2A2A2A2, 0x9F9F9F9F, 0x9F9F9F9F, 0x9F9F9F9F,
  0x9F9F9F9F, 0xA0A0A0A0, 0xA0A0A0A0, 0xA0A0A0A0, 0xA0A0A0A0,
  0xA1A1A1A1, 0xA1A1A1A1, 0xA1A1A1A1, 0xA1A1A1A1, 0xA4A4A4A4,
  0xA4A4A4A4, 0xA4A4A4A4, 0xA4A4A4A4, 0xA6A6A6A6, 0xA6A6A6A6,
  0xA6A6A6A6, 0xA6A6A6A6, 0x9B969BA5, 0x9B969BA5, 0x9B969BA5,
  0x9B969BA5, 0x9B9B9A9A, 0x9B9B9A9A, 0x9B9B9A9A, 0x9B9B9A9A,
  0x9C9C9C9B, 0x9C9C9C9B, 0x9C9C9C9B, 0x9C9C9C9B, 0x9E9E9E9E,
  0x9E9E9E9E, 0x9E9E9E9E, 0x9E9E9E9E, 0x9E9E9E9E, 0x9E9E9E9E,
  0x9E9E9E9E, 0x9E9E9E9E, 0x9F9F9F9F, 0x9F9F9F9F, 0x9F9F9F9F,
  0x9F9F9F9F, 0xA0A0A0A0, 0xA0A0A0A0, 0xA0A0A0A0, 0xA0A0A0A0,
  0xA1A1A1A1, 0xA1A1A1A1, 0xA1A1A1A1, 0xA1A1A1A1, 0xA4A4A4A4,
  0xA4A4A4A4, 0xA4A4A4A4, 0xA4A4A4A4, 0xA6A6A6A6, 0xA6A6A6A6,
  0xA6A6A6A6, 0xA6A6A6A6, 0x9B969BA5, 0x9B969BA5, 0x9B969BA5,
  0x9B969BA5, 0x9B9B9A9A, 0x9B9B9A9A, 0x9B9B9A9A, 0x9B9B9A9A,
  0xA09F9D9B, 0x9E9E9D9B, 0x9B9B9C9C, 0x999A9C9C, 0x9E9E9E9E,
  0x9C9C9C9C, 0x99999999, 0x97979797, 0x9E9E9E9E, 0x9C9C9C9C,
  0x99999999, 0x97979797, 0x9F9F9F9F, 0x9F9F9F9F, 0x9F9F9F9F,
  0x9F9F9F9F, 0xA0A0A0A0, 0xA0A0A0A0, 0xA0A0A0A0, 0xA0A0A0A0,
  0x000000B2
};

#endif
