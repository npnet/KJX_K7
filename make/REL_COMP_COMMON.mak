#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2005
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
#


# Common release setting for modules
# Applied by all the Subsidiary/Customer release packages

REL_SRC_COMP_COMMON  =
REL_MTK_COMP_COMMON  =
REL_PAR_SRC_COMP_COMMON =

# Common source release modules

# OPTR_COMP defined in operator.mak
REL_SRC_COMP_COMMON += $(strip $(OPTR_COMP))

REL_SRC_COMP_COMMON += applib
REL_SRC_COMP_COMMON += applib_asn1
REL_SRC_COMP_COMMON += audio
REL_SRC_COMP_COMMON += bee
REL_SRC_COMP_COMMON += bmt
REL_SRC_COMP_COMMON += btdrv_common
REL_SRC_COMP_COMMON += camera
REL_SRC_COMP_COMMON += cct
REL_SRC_COMP_COMMON += cmmb
REL_SRC_COMP_COMMON += config
REL_SRC_COMP_COMMON += cstar
REL_SRC_COMP_COMMON += custom
REL_SRC_COMP_COMMON += dcd
REL_SRC_COMP_COMMON += decuma
REL_SRC_COMP_COMMON += drm
REL_SRC_COMP_COMMON += drmadp_bsci
REL_SRC_COMP_COMMON += drmadp_mtk
REL_SRC_COMP_COMMON += drmadp_ws
REL_SRC_COMP_COMMON += drv
REL_SRC_COMP_COMMON += drv_display
REL_SRC_COMP_COMMON += drv_idp
REL_SRC_COMP_COMMON += dt
REL_SRC_COMP_COMMON += email
REL_SRC_COMP_COMMON += emlst
REL_SRC_COMP_COMMON += ext_modem
REL_SRC_COMP_COMMON += fluency
REL_SRC_COMP_COMMON += fm_drv
REL_SRC_COMP_COMMON += fmr
REL_SRC_COMP_COMMON += fmt
REL_SRC_COMP_COMMON += fs
REL_SRC_COMP_COMMON += ft
REL_SRC_COMP_COMMON += ftc
REL_SRC_COMP_COMMON += game_engine
REL_SRC_COMP_COMMON += gdi
REL_SRC_COMP_COMMON += gdi_arm
REL_SRC_COMP_COMMON += gfx_drv
REL_SRC_COMP_COMMON += gps
REL_SRC_COMP_COMMON += guobi
REL_SRC_COMP_COMMON += guobihw
REL_SRC_COMP_COMMON += hanwang
REL_SRC_COMP_COMMON += hostap
REL_SRC_COMP_COMMON += ikivo_svg
REL_SRC_COMP_COMMON += imps
REL_SRC_COMP_COMMON += init
REL_SRC_COMP_COMMON += insignia_dm
REL_SRC_COMP_COMMON += intergrafx_hw
REL_SRC_COMP_COMMON += intergrafx_sw
REL_SRC_COMP_COMMON += ircomm
REL_SRC_COMP_COMMON += irda
REL_SRC_COMP_COMMON += j2me
REL_SRC_COMP_COMMON += komoxo
REL_SRC_COMP_COMMON += ktest
REL_SRC_COMP_COMMON += l1_ext
REL_SRC_COMP_COMMON += l4misc
REL_SRC_COMP_COMMON += lcmmiresource
REL_SRC_COMP_COMMON += lgoem
REL_SRC_COMP_COMMON += matv
REL_SRC_COMP_COMMON += mc
REL_SRC_COMP_COMMON += media
REL_SRC_COMP_COMMON += media_rtp
REL_SRC_COMP_COMMON += meut
REL_SRC_COMP_COMMON += mm_comm
REL_SRC_COMP_COMMON += mmi
REL_SRC_COMP_COMMON += mmi_core
REL_SRC_COMP_COMMON += mmi_framework
REL_SRC_COMP_COMMON += mmi_service
REL_SRC_COMP_COMMON += mmiresource
REL_SRC_COMP_COMMON += mnl
REL_SRC_COMP_COMMON += mobilevideo
REL_SRC_COMP_COMMON += mpl
REL_SRC_COMP_COMMON += mre_custom
REL_SRC_COMP_COMMON += mre_engine
REL_SRC_COMP_COMMON += mtd
REL_SRC_COMP_COMMON += mtv
REL_SRC_COMP_COMMON += nfc_custom
REL_SRC_COMP_COMMON += ntpd
REL_SRC_COMP_COMMON += nvram
REL_SRC_COMP_COMMON += obex
REL_SRC_COMP_COMMON += opera10adp
REL_SRC_COMP_COMMON += opera10opdev
REL_SRC_COMP_COMMON += opera11opdev
REL_SRC_COMP_COMMON += penpower
REL_SRC_COMP_COMMON += peripheral
REL_SRC_COMP_COMMON += postproc
REL_SRC_COMP_COMMON += provider
REL_SRC_COMP_COMMON += qqmovie
REL_SRC_COMP_COMMON += scalado
REL_SRC_COMP_COMMON += sdk_test
REL_SRC_COMP_COMMON += sim_driver
REL_SRC_COMP_COMMON += sss
REL_SRC_COMP_COMMON += swflash
REL_SRC_COMP_COMMON += system
REL_SRC_COMP_COMMON += tencentmcarev31adp
REL_SRC_COMP_COMMON += udx
REL_SRC_COMP_COMMON += ul1_ext
REL_SRC_COMP_COMMON += ul1_hs_ext
REL_SRC_COMP_COMMON += usb
REL_SRC_COMP_COMMON += usb_driver
REL_SRC_COMP_COMMON += vcard
REL_SRC_COMP_COMMON += vectorfont_etrump
REL_SRC_COMP_COMMON += vectorfont_freetype
REL_SRC_COMP_COMMON += vectorfont_komoxo
REL_SRC_COMP_COMMON += vectorfont_monotype
REL_SRC_COMP_COMMON += vectorfont_wtle
REL_SRC_COMP_COMMON += vendorapp
REL_SRC_COMP_COMMON += venusmmi
REL_SRC_COMP_COMMON += venus_rt
REL_SRC_COMP_COMMON += verno
REL_SRC_COMP_COMMON += video
REL_SRC_COMP_COMMON += video_codec
REL_SRC_COMP_COMMON += video_sec
REL_SRC_COMP_COMMON += vrt_adp
REL_SRC_COMP_COMMON += wapadp
REL_SRC_COMP_COMMON += winguo
REL_SRC_COMP_COMMON += wise
REL_SRC_COMP_COMMON += xmlp

# fota
ifdef FOTA_ENABLE
  ifneq ($(strip $(FOTA_ENABLE)),NONE)
    REL_SRC_COMP_COMMON += fota
  endif
endif

# bootloader
NEED_BUILD_BOOTLOADER = FALSE
ifdef NAND_FLASH_BOOTING
  ifneq ($(strip $(NAND_FLASH_BOOTING)),NONE)
    NEED_BUILD_BOOTLOADER = TRUE
  endif
endif

ifdef USB_DOWNLOAD_IN_BL
  ifneq ($(strip $(USB_DOWNLOAD_IN_BL)),NONE)
    NEED_BUILD_BOOTLOADER = TRUE
  endif
endif

ifdef FOTA_ENABLE
  ifeq ($(strip $(FOTA_ENABLE)),FOTA_DM)
    NEED_BUILD_BOOTLOADER = TRUE
  endif
endif

ifdef EMMC_BOOTING
  ifneq ($(strip $(EMMC_BOOTING)),NONE)
    NEED_BUILD_BOOTLOADER = TRUE
  endif
endif

ifdef SECURE_SUPPORT
  ifeq ($(strip $(SECURE_SUPPORT)),TRUE)
    BOOTLOADER_SUPPORT_SECURE_NOR_PLATFORM = MT6253 MT6236% MT6252 MT6252H MT6921
    ifneq ($(filter $(strip $(BOOTLOADER_SUPPORT_SECURE_NOR_PLATFORM)),$(strip $(PLATFORM))),)
      NEED_BUILD_BOOTLOADER = TRUE
    endif
  endif
endif

BOOTLOADER_SUPPORT_NOR_PLATFORM = MT6235% MT6236% MT6238 MT6239 MT6225 MT6253 MT6921 MT6250 MT6260
ifneq ($(filter $(strip $(BOOTLOADER_SUPPORT_NOR_PLATFORM)),$(strip $(PLATFORM))),)
  NEED_BUILD_BOOTLOADER = TRUE
endif

ifneq ($(strip $(CARD_DOWNLOAD)),NONE)
  NEED_BUILD_BOOTLOADER = TRUE
endif

BOOTLOADER_MUST_PLATFORM = MT6268T MT6268H MT6268A MT6276 MT6256 MT6251 MT6255 MT6922
ifneq ($(filter $(strip $(BOOTLOADER_MUST_PLATFORM)),$(strip $(PLATFORM))),)
  NEED_BUILD_BOOTLOADER = TRUE
endif

ifeq ($(strip $(NEED_BUILD_BOOTLOADER)),TRUE)
  REL_SRC_COMP_COMMON += bootloader bootloader_ext
endif

# Common library release modules

REL_MTK_COMP_COMMON += 3g324m
REL_MTK_COMP_COMMON += 3g324m_tvt
REL_MTK_COMP_COMMON += as_semaphore_utility
REL_MTK_COMP_COMMON += asn1_re
REL_MTK_COMP_COMMON += ata
REL_MTK_COMP_COMMON += bsci
REL_MTK_COMP_COMMON += btstack
REL_MTK_COMP_COMMON += btstack_btmtk_mt6612
REL_MTK_COMP_COMMON += btstack_btmtk_mt6622
REL_MTK_COMP_COMMON += btstack_btmtk_mt6626
REL_MTK_COMP_COMMON += camera_sec
REL_MTK_COMP_COMMON += che
REL_MTK_COMP_COMMON += cipher
REL_MTK_COMP_COMMON += dp_engine
REL_MTK_COMP_COMMON += drv_sec
REL_MTK_COMP_COMMON += drv_tp
REL_MTK_COMP_COMMON += dsp_ram
REL_MTK_COMP_COMMON += dummyps
REL_MTK_COMP_COMMON += dummyups
REL_MTK_COMP_COMMON += fdm
REL_MTK_COMP_COMMON += fsm
REL_MTK_COMP_COMMON += gfx_core16
REL_MTK_COMP_COMMON += gfx_core32
REL_MTK_COMP_COMMON += l1_g2
REL_MTK_COMP_COMMON += l1_classb_g2
REL_MTK_COMP_COMMON += l1_classb_umts
REL_MTK_COMP_COMMON += l1d_lp1
REL_MTK_COMP_COMMON += l1d_lp2
REL_MTK_COMP_COMMON += l1d_lp3
REL_MTK_COMP_COMMON += l1d_lp5
REL_MTK_COMP_COMMON += l1d_lp6
REL_MTK_COMP_COMMON += l1d_lp7
REL_MTK_COMP_COMMON += l1d_lp8
REL_MTK_COMP_COMMON += lcl
REL_MTK_COMP_COMMON += ll1
REL_MTK_COMP_COMMON += m3d
REL_MTK_COMP_COMMON += m3g
REL_MTK_COMP_COMMON += matv_sec
REL_MTK_COMP_COMMON += mcsv
REL_MTK_COMP_COMMON += mt5921
REL_MTK_COMP_COMMON += mt5921_wapi
REL_MTK_COMP_COMMON += mt5931_wapi
REL_MTK_COMP_COMMON += mt6306
REL_MTK_COMP_COMMON += nfc
REL_MTK_COMP_COMMON += nfc_reader
REL_MTK_COMP_COMMON += nfc_app
REL_MTK_COMP_COMMON += nucleus
REL_MTK_COMP_COMMON += nucleus_critical_data
REL_MTK_COMP_COMMON += nucleus_ctrl_code
REL_MTK_COMP_COMMON += nucleus_debug
REL_MTK_COMP_COMMON += nucleus_int
REL_MTK_COMP_COMMON += nucleus_v2
REL_MTK_COMP_COMMON += nucleus_v2_critical_data
REL_MTK_COMP_COMMON += nucleus_v2_ctrl_code
REL_MTK_COMP_COMMON += nucleus_v2_debug
REL_MTK_COMP_COMMON += nucleus_v2_int
REL_MTK_COMP_COMMON += nvram_sec
REL_MTK_COMP_COMMON += opengles
REL_MTK_COMP_COMMON += opera10int
REL_MTK_COMP_COMMON += postproc_sec
REL_MTK_COMP_COMMON += provider_sec
REL_MTK_COMP_COMMON += rfc2507
REL_MTK_COMP_COMMON += rr2
REL_MTK_COMP_COMMON += rsva
REL_MTK_COMP_COMMON += scsi
REL_MTK_COMP_COMMON += sleep_drv
REL_MTK_COMP_COMMON += ssf
REL_MTK_COMP_COMMON += sst
REL_MTK_COMP_COMMON += sst_ma
REL_MTK_COMP_COMMON += sst_sec
REL_MTK_COMP_COMMON += supc_wapi
REL_MTK_COMP_COMMON += sys_sec
REL_MTK_COMP_COMMON += threadx
REL_MTK_COMP_COMMON += threadx_ctrl_code
REL_MTK_COMP_COMMON += threadx_ctrl_data
REL_MTK_COMP_COMMON += threadx_debug
REL_MTK_COMP_COMMON += tl1
REL_MTK_COMP_COMMON += ttl
REL_MTK_COMP_COMMON += uas
REL_MTK_COMP_COMMON += ul1
REL_MTK_COMP_COMMON += ul1_hs
REL_MTK_COMP_COMMON += ulcs
REL_MTK_COMP_COMMON += ups
REL_MTK_COMP_COMMON += video_codec_sec
REL_MTK_COMP_COMMON += wmt
REL_MTK_COMP_COMMON += wndrv
REL_MTK_COMP_COMMON += oriverno

# Java related modules

REL_SRC_COMP_COMMON += jal
REL_SRC_COMP_COMMON += j2me_hi
REL_SRC_COMP_COMMON += j2me_11
REL_SRC_COMP_COMMON += j2me_11_KDWP
REL_SRC_COMP_COMMON += ijet_adp
REL_SRC_COMP_COMMON += jblendia
REL_SRC_COMP_COMMON += jblendia_mvm
REL_SRC_COMP_COMMON += jbed
REL_SRC_COMP_COMMON += nemo_adp
REL_SRC_COMP_COMMON += j2me_nemo
REL_SRC_COMP_COMMON += j2me_nemo_cldc
REL_SRC_COMP_COMMON += j2me_nemo_cldc_slim
REL_SRC_COMP_COMMON += j2me_nemo_fdlibm
REL_SRC_COMP_COMMON += jdummy

REL_MTK_COMP_COMMON += jal_sec

# MMI related modules

# NEPTUNE_MMI

ifeq ($(strip $(call Upper,$(LEVEL))),LEVEL2_SRC)
  REL_SRC_COMP_COMMON += lcmmi
  REL_SRC_COMP_COMMON += lcmtkapp
else
  REL_MTK_COMP_COMMON += lcmmi
  REL_MTK_COMP_COMMON += lcmtkapp
endif

# PLUTO_MMI

ifeq ($(strip $(call Upper,$(LEVEL))),LEVEL2_SRC)
  REL_SRC_COMP_COMMON += conn_app
  REL_SRC_COMP_COMMON += inet_app
  REL_SRC_COMP_COMMON += media_app
  REL_SRC_COMP_COMMON += mmi_app
  REL_SRC_COMP_COMMON += mmi_framework
  REL_SRC_COMP_COMMON += mmi_service
  REL_SRC_COMP_COMMON += gdi
else
  REL_MTK_COMP_COMMON += conn_app
  REL_MTK_COMP_COMMON += inet_app
  REL_MTK_COMP_COMMON += media_app
  REL_MTK_COMP_COMMON += mmi_app
  REL_MTK_COMP_COMMON += mmi_framework
  REL_MTK_COMP_COMMON += mmi_service
  REL_MTK_COMP_COMMON += gdi
endif

# VENES_MMI

REL_SRC_COMP_COMMON += cosmos_app
REL_SRC_COMP_COMMON += cosmos_media_app
REL_SRC_COMP_COMMON += cosmos_inet_app
REL_SRC_COMP_COMMON += cosmos_conn_app
