# Define source file lists to SRC_LIST

SRC_LIST +=ggt\src\GGT_GPS.c \
           ggt\src\GGT_host.c \
           ggt\src\GGT_http.c \
           ggt\src\GGT_lib.c \
           ggt\src\GGT_sms.c \
           ggt\src\GGT_soc.c \
           ggt\src\crc-itu-t.c \
           ggt\src\GGT_utility.c \
           ggt\src\GGT_pro.c \
           ggt\src\GGT_hsw_lbs.c \
           ggt\src\GGT_wrt_lbs.c \
           ggt\src\GGT_wrt_lbs_gps.c \
           ggt\src\city_write_uart.c

# Define include path lists to INC_DIR
INC_DIR = applib\inet\engine\include \
          applib\mem\include \
          applib\misc\include \
          drv\include \
          fmt\include \
          fs\fat\include \
          interface\hwdrv \
          ps\interfaces\local_inc \
          ps\tftp\include \
          plutommi\customer\customerinc \
          plutommi\customer\customize \
          plutommi\customer\custresource \
          plutommi\mmi\asyncevents\asynceventsinc \
          plutommi\mmi\inc \
          plutommi\Framework\Interface \
          plutommi\mmi\inc\imgid \
          plutommi\mmi\inc\menuid \
          plutommi\mmi\inc\stringid \
          plutommi\mmi\fontdata \
          plutommi\Framework\CommonFiles\commoninc \
          plutommi\Framework\EventHandling\eventsinc \
          plutommi\Framework\filesystem\filesysteminc \
          plutommi\Framework\History\historyinc \
          plutommi\Framework\MemManager\memmanagerinc \
          plutommi\Framework\NVRAMManager\nvrammanagerinc \
          plutommi\Framework\osl\oslinc \
          plutommi\Framework\Tasks\tasksinc \
          plutommi\Framework\ThemeManager\thememanagerinc \
          plutommi\Framework\GUI\gui_inc \
          plutommi\Framework\GUI\oem_inc \
          plutommi\mmi\miscframework\miscframeworkinc \
          plutommi\Framework\InputMethod\Inc \
          plutommi\Framework\GDI\gdiinc \
          plutommi\mtkapp\mdi\mdiinc \
          plutommi\mtkapp\mtkappinc \
          vendor\inputmethod\cstar\adaptation\include \
          vendor\inputmethod\t9\adaptation\include \
          vendor\inputmethod\zi\adaptation\include \
          3g324m\interface\inc \
          btstacka\inc \
          camera\include \
          custom\mercury\mercury_master\inc \
          custom\mercury\mercury_slave\inc \
          dm\task\inc \
          dm\wrapper\inc \
          dp_engine\m3d\include \
          dp_engine\opengl \
          dp_engine\opengl\include \
          dp_engine\opengl\include\gles \
          dp_engine\opengl\main \
          drm\include \
          gps\inc \
          irda\inc \
          j2me\interface \
          j2me\jal\include \
          j2me\jal\include \
          j2me\vm\ijet\adaptation\include \
          m3g\include \
          media\image\include \
          media\rtp\inc \
          media\stream\include\ \
          media\mtv\src \
          media\mtv\include \
          t9\include \
          usb\include \
          verno \
          wapadp\include \
          xmlp\include \
          vcard\include \
          plutommi\CUI\Inc \
          plutommi\CUI\InlineCui \
          plutommi\mmi\athandler\athandlerinc \
          plutommi\mmi\audio\audioinc \
          plutommi\Framework\BIDI\bidiinc \
          plutommi\mmi\browserapp\browser\browserinc \
          plutommi\mmi\browserapp\profile\profileinc \
          plutommi\mmi\browserapp\provisioning\provisioninginc \
          plutommi\mmi\browserapp\pushinbox\pushinboxinc \
          plutommi\MMI\CertificateManager\CertificateManagerMMIInc \
          plutommi\Framework\CommonScreens\commonscreensinc \
          plutommi\mmi\connect\connectinc \
          plutommi\MMI\ConnectManagement\ConnectManagementInc \
          plutommi\mmi\cphs\cphsinc \
          plutommi\mmi\customerservice\customerserviceinc \
          plutommi\mmi\dataaccount\dataaccountinc \
          plutommi\mmi\datetime\datetimeinc \
          plutommi\Framework\DebugLevels\debuglevelinc \
          plutommi\mmi\dictionary\dictinc \
          plutommi\mmi\ebookreader\ebookinc \
          plutommi\mmi\emailapp\emailappinc \
          plutommi\mmi\ems\emsinc \
          plutommi\mmi\extra\extrainc \
          plutommi\mmi\funandgames\funandgamesinc \
          plutommi\mmi\gpio\gpioinc \
          plutommi\mmi\gsmcallapplication\commonfiles\commoninc \
          plutommi\mmi\gsmcallapplication\incomingcallmanagement\incominginc \
          plutommi\mmi\gsmcallapplication\outgoingcallmanagement\outgoinginc \
          plutommi\mmi\idlescreen\idlescreeninc \
          plutommi\mmi\idlescreen\idlescreeninc\demoappinc \
          plutommi\MMI\Idle\IdleInc \
          plutommi\MMI\Dialer\DialerInc \
          plutommi\MMI\ScrLocker\ScrLockerInc \
          plutommi\MMI\ScrSaver\ScrSaverInc \
          plutommi\mmi\imps\impsinc \
          plutommi\Framework\IndicLanguages\indiclanguagesinc \
          plutommi\Framework\Languages\thai\thaiinc \
          plutommi\mmi\mainmenu\mainmenuinc \
          plutommi\mmi\messages \
          plutommi\mmi\messages\messagesinc \
          plutommi\mmi\mobileservice\mobileserviceinc \
          plutommi\mmi\nitzhandler\nitzinc \
          plutommi\mmi\organizer\organizerinc \
          plutommi\mmi\Organizer\IndianCalendar\IndianCalendarInc \
          plutommi\mmi\Organizer\Reminder \
          plutommi\mmi\phonebook\phonebookinc \
          plutommi\mmi\phonebook\core \
          plutommi\mmi\poc\pocinc \
          plutommi\mmi\poweron\poweroninc \
          plutommi\mmi\profiles\profilesinc \
          plutommi\mmi\resource\inc \
          plutommi\mmi\sat\satinc \
          plutommi\mmi\setting\settinginc \
          plutommi\mmi\SecuritySetting\SecSetInc \
          plutommi\mmi\smartmessage\smartmessageinc \
          plutommi\mmi\ssc\sscinc \
          plutommi\mmi\ucm\ucminc \
          plutommi\mmi\ctm\ctminc \
          plutommi\service\Inc \
          plutommi\service\UmSrv \
          plutommi\mmi\unifiedmessage\unifiedmessageinc \
          plutommi\Service\UcSrv \
          plutommi\mmi\unifiedcomposer\unifiedcomposerinc \
          venusmmi\app\CubeApp \
          plutommi\mmi\CubeApp\CubeAppInc \
          plutommi\mmi\unifiedmms\mmsapp\mmsappinc \
          plutommi\Service\UmmsSrv \
          plutommi\mmi\unifiedmms\mmsbgsr\mmsbgsrinc \
          plutommi\mmi\unifiedmms\mmsjsr\mmsjsrinc \
          plutommi\mmi\videocall\videocallinc \
          plutommi\mmi\voip\voipinc \
          plutommi\mmi\Organizer\HijriCalendar\HijriCalendarInc \
          plutommi\mtkapp\abrepeater\abrepeaterinc \
          plutommi\MtkApp\AGPSLog\AGPSLogInc \
          plutommi\mtkapp\audioplayer\audioplayerinc \
          plutommi\mtkapp\MediaPlayer\MediaPlayerInc \
          plutommi\mtkapp\avatar\avatarinc \
          plutommi\mtkapp\barcodereader\barcodereaderinc \
          plutommi\mtkapp\bgsound\bgsoundinc \
          plutommi\mtkapp\camera\camerainc \
          plutommi\mtkapp\camcorder\camcorderinc \
          plutommi\mtkapp\centralconfigagent\centralconfigagentinc \
          plutommi\mtkapp\connectivity\connectivityinc \
          plutommi\mtkapp\connectivity\connectivityinc\btbchs \
          plutommi\mtkapp\connectivity\connectivityinc\btcommon \
          plutommi\mtkapp\connectivity\connectivityinc\bthandphone \
          plutommi\mtkapp\connectivity\connectivityinc\btmtk \
          plutommi\Framework\CSBrowser\csbrowserinc \
          plutommi\mtkapp\DCD\DCDInc \
          plutommi\mtkapp\devicemanagement\devicemanagementinc \
          plutommi\mtkapp\dlagent\dlagentinc \
          plutommi\mtkapp\dmuiapp\dmuiappinc \
          plutommi\mtkapp\EngineerMode\EngineerModeApp\EngineerModeAppInc \
          plutommi\mtkapp\EngineerMode\EngineerModeEngine\EngineerModeEngineInc \
          plutommi\mtkapp\FactoryMode\FactoryModeInc \
          plutommi\mtkapp\filemgr\filemgrinc \
          plutommi\mtkapp\fmradio\fmradioinc \
          plutommi\mtkapp\fmschedulerec\fmschedulerecinc \
          plutommi\mtkapp\GPS\GPSInc \
          plutommi\mtkapp\javaagency\javaagencyinc \
          plutommi\mtkapp\mmiapi\include \
          plutommi\mtkapp\mobiletvplayer\mobiletvplayerinc \
          plutommi\mtkapp\myfavorite\myfavoriteinc \
          plutommi\mtkapp\photoeditor\photoeditorinc \
          plutommi\mtkapp\pictbridge\pictbridgeinc \
          plutommi\mtkapp\rightsmgr\rightsmgrinc \
          plutommi\MtkApp\SoftwareTracer\SoftwareTracerInc \
          plutommi\mtkapp\soundrecorder\soundrecorderinc \
          plutommi\mtkapp\sndrec\sndrecinc \
          plutommi\mtkapp\answermachine\answermachineinc \
          plutommi\mtkapp\svg\svginc \
          plutommi\mtkapp\swflash\swflashinc \
          plutommi\mtkapp\syncml\syncmlinc \
          plutommi\mtkapp\video\videoinc \
          plutommi\mtkapp\videoeditor\videoeditorinc \
          plutommi\mtkapp\vobjects\vobjectinc \
          plutommi\mtkapp\vrsd\vrsdinc \
          plutommi\mtkapp\vrsi\vrsiinc \
          plutommi\mtkapp\searchweb\searchwebinc \
          plutommi\vendorapp\devapp\devappinc \
          vendor\dcd\adaptation \
          vendor\dcd\adaptation\inc \
          vendor\dcd\adaptation\inc\SDK\ \
          vendor\dcd\adaptation\inc\SDK\Components\DCDAgentComponent\Interface \
          vendor\dcd\adaptation\inc\Source\BrowserApplication \
          vendor\dcd\adaptation\inc\SDK\Porting\Interface \
          vendor\dcd\adaptation\inc\SDK\Components\EFCInterface\Common \
          vendor\dcd\adaptation\inc\Source\Application \
          vendor\dcd\adaptation\inc\SDK\Porting \
          vendor\dict\gv\adaptation\inc \
          vendor\dict\motech\adaptation\inc \
          vendor\dict\trilogy\adaptation\inc \
          vendor\game_engine\brogent\adaptation \
          vendor\game_engine\brogent\game \
          vendor\game_engine\intergrafx\adaptation \
          vendor\game_engine\intergrafx\game \
          vendor\gis\mapbar\mmi\inc \
          vendor\gis\sunavi\mmi\inc \
          vendor\gis\migo\mmi\inc \
          vendor\langlearn\app\inc \
          vendor\mercury_master\inc \
          vendor\mercury_master\inc\master_sdk_inc \
          vendor\mercury_master\inc\adapter_inc \
          vendor\mercury_gemini\ADL\inc \
          vendor\mercury_gemini\ADU\inc \
          vendor\mercury_gemini\common\inc \
          vendor\mercury_gemini\PFALL\inc \
          vendor\mercury_gemini\PFALU\inc \
          vendor\swflash\neomtel\adaptation\inc \
          vendor\wap\obigo_q05a\adaptation\integration\owl\include \
          vendor\wap\obigo_q05a\adaptation\modules\bam\include \
          vendor\wap\obigo_Q03C\v1_official\modules\bra\config \
          vendor\wap\obigo_Q03C\v1_official\modules\bra\refsrc \
          vendor\wap\obigo_Q03C\v1_official\modules\bra\source \
          vendor\wap\obigo_Q03C\v1_official\modules\mea\intgr \
          vendor\wap\obigo_Q03C\v1_official\msf\msf_lib\config \
          vendor\wap\obigo_Q03C\v1_official\msf\msf_lib\export \
          vendor\wap\obigo_Q03C\v1_official\msf\msf_lib\intgr \
          vendor\wap\obigo_Q03C\adaptation\modules\mma\include \
          vendor\wap\obigo_Q03C\adaptation\msf_ui\include \
          modis\filesystem\filesysteminc \
          drv\graphics\g2d\inc \
          plutommi\mmi\SIMProvAgent\SIMProvAgentInc \
          plutommi\mmi\UDX\UDXInc \
          vendor\qqim\adaptation\inc \
          plutommi\Service\ProvBoxSrv \
          plutommi\mmi\ProvisioningInbox\ProvBoxUI\ProvBoxUIInc \
          init\include \
          ps\l4\include \
          venusmmi\vrt\interface \
          venusmmi\framework \
          venusmmi\framework\interface \
          venusmmi\visual \
          venusmmi\visual\interface \
          venusmmi\pluto_adapter \
          venusmmi\pluto_adapter\interface \
          venusmmi\pluto_adapter\interface\res \
          venusmmi\test \
          venusmmi\app \
          venusmmi\app\interface \
          venusmmi\framework\ui_core\mvc \
          venusmmi\service\data \
          plutommi\mtkapp\VREAPP\VREAPPInc \
          plutommi\CUI\ToneSelectorCui \
          plutommi\Framework\LangModule\LangModuleInc \
          plutommi\MMI\Bootup\BootupInc \
          plutommi\MMI\NwInfo\NwInfoInc \
          plutommi\MMI\SimCtrl\SimCtrlInc \
          plutommi\MMI\Shutdown\ShutdownInc \
          plutommi\mmi\q03c_mms_V01_agent\q03c_mms_V01_agentinc \
          plutommi\Service\MediaCacheSrv \
          plutommi\Service\inc \
          plutommi\MtkApp\WgtMgrApp\WgtMgrAppInc \
          plutommi\MMI\CallSetting\CallSettingInc \
          plutommi\MMI\SupplementaryService\SsInc \
          vendor\opera\browser\adaptation\inc \
          plutommi\Service\NetSetSrv \
          plutommi\Service\ModeSwitchSrv \
          plutommi\Service\ProfilesSrv \
          plutommi\MMI\ShellApp\ShellAppInc \
          venusmmi\app\ShellApp\base \
          venusmmi\app\ShellApp\panel \
          venusmmi\pluto_adapter\ShellApp\base \
          venusmmi\pluto_adapter\ShellApp\panel \
          plutommi\mmi\CallLog\CallLogInc \
          venusmmi\pluto_adapter\ShellApp\panel\HomeScreen \
          venusmmi\pluto_adapter\ShellApp\panel\MsgViewer \
          venusmmi\app\ShellApp\panel\HomeScreen \
          venusmmi\pluto_adapter\HomeScreen \
          operator\ORANGE\common\venusmmi\pluto_adapter\interface\res \
          operator\ORANGE\common\venusmmi\pluto_adapter\HomeScreen \
          operator\ORANGE\common\venusmmi\app\HomeScreen \
          plutommi\mmi\SimSpace\SimSpaceInc \
          plutommi\CUI\SimSelCui \
          plutommi\mtkapp\MobileTVPlayer\MtvSMSInc \
          plutommi\Service\BrowserSrv \
          plutommi\Service\WapPushSrv \
					plutommi\mmi\zmol\interface \
					plutommi\mmi\zmol\include \
					plutommi\Service\SmsSrv \
					plutommi\mmi\zmol\zmphoneaddr\interface \
					tools\MinGW\include \
					GGT\inc

# Define the specified compile options to COMP_DEFS
COMP_DEFS = MMI_ON_HARDWARE_P  \
            __EMS__ \
            SIM_APP_TOOLKIT \
            TETRIS_GAME_APP \
            CM_APPLICATION_ENABLE \
            MESSAGES_APPLICATION \
            __UCS2_ENCODING \
            CELLBROADCAST_APP \
            __CB__ \
            VM_SUPPORT \
            SHORTCUTS_APP \
            T9LANG_English \
            T9LANG_Chinese \
            T9LANG_Spanish \
            T9LANG_French \
            T9LANG_German \
            T9LANG_Italian \
            EMS_LITTLE_ENDIAN \
            EMS_MEM_MANAGEMENT \
            T9ALPHABETIC \
            T9CHINESE \
            MMS_VIRTUAL_FILE_SUPPORT \
            COMPILER_SUPPORTS_LONG=1 \
            __MTK__ \
            __MTK_PLUGIN_API_IMPORT__

# Define the source file search paths to SRC_PATH
SRC_PATH += ggt\src
