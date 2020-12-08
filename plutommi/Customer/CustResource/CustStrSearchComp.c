#include "mmi_features.h"

#include "ResCompressConfig.h"
//---------------------------- THIRD ROM DATA START -------------------------------
#if defined(__MMI_RESOURCE_STR_THIRD_ROM__)
#include "CustDataRes.h"
#include "FontDCl.h"
#if (!defined (__MTK_TARGET__))
    #define __align(x)
#endif

const U16 mtk_gTrans_string_count = 3013;

const CUSTOM_STRMAP_SEARCH StrMapSearch[] = {
{1, 11, 3013}, 
{12, 66, 0}, 
{68, 72, 55}, 
{75, 90, 60}, 
{92, 94, 76}, 
{96, 101, 79}, 
{103, 119, 85}, 
{120, 120, 3024}, 
{121, 146, 102}, 
{147, 147, 3025}, 
{148, 231, 128}, 
{233, 276, 212}, 
{3302, 3308, 256}, 
{3685, 3687, 263}, 
{3689, 3689, 266}, 
{3694, 3694, 3026}, 
{3696, 3696, 3027}, 
{3698, 3698, 267}, 
{3706, 3706, 3028}, 
{3708, 3711, 268}, 
{3729, 3729, 272}, 
{3735, 3753, 273}, 
{3754, 3754, 3029}, 
{3759, 3778, 292}, 
{3820, 3824, 312}, 
{3826, 3826, 317}, 
{3828, 3831, 318}, 
{3833, 3833, 322}, 
{3836, 3836, 323}, 
{3839, 3839, 324}, 
{3844, 3844, 325}, 
{3847, 3847, 326}, 
{3850, 3850, 327}, 
{3858, 3858, 328}, 
{4083, 4083, 329}, 
{4103, 4105, 330}, 
{4112, 4112, 333}, 
{4427, 4427, 3030}, 
{4457, 4457, 334}, 
{4803, 4816, 335}, 
{4817, 4817, 3031}, 
{4818, 4820, 349}, 
{4821, 4822, 3032}, 
{4823, 4826, 352}, 
{4827, 4827, 3034}, 
{4828, 4846, 356}, 
{5362, 5367, 375}, 
{7607, 7607, 3035}, 
{7608, 7625, 381}, 
{7638, 7655, 399}, 
{7739, 7739, 3036}, 
{7742, 7742, 3037}, 
{7745, 7745, 3038}, 
{7748, 7748, 3039}, 
{7751, 7751, 3040}, 
{7754, 7754, 3041}, 
{7757, 7757, 3042}, 
{7760, 7760, 3043}, 
{7763, 7763, 3044}, 
{7766, 7766, 3045}, 
{7769, 7769, 3046}, 
{7772, 7772, 3047}, 
{7795, 7804, 417}, 
{7946, 7946, 3048}, 
{7949, 7949, 3049}, 
{7952, 7952, 3050}, 
{7955, 7955, 3051}, 
{7958, 7958, 3052}, 
{7961, 7961, 3053}, 
{7964, 7964, 3054}, 
{7967, 7967, 3055}, 
{8223, 8356, 427}, 
{9224, 9224, 561}, 
{9325, 9325, 562}, 
{9602, 9605, 563}, 
{9653, 9703, 567}, 
{9786, 9835, 618}, 
{10536, 10537, 668}, 
{10539, 10539, 670}, 
{10616, 10616, 671}, 
{10696, 10696, 672}, 
{10698, 10699, 673}, 
{10738, 10739, 3056}, 
{10740, 10751, 675}, 
{10752, 10752, 3058}, 
{11613, 11624, 687}, 
{11675, 11683, 699}, 
{11919, 11982, 3059}, 
{13462, 13539, 708}, 
{13540, 13544, 3123}, 
{13545, 13547, 786}, 
{13548, 13548, 3128}, 
{14313, 14326, 789}, 
{14414, 14416, 803}, 
{15147, 15148, 806}, 
{15589, 15607, 808}, 
{15640, 15655, 827}, 
{15656, 15657, 3129}, 
{15658, 15659, 843}, 
{16469, 16484, 845}, 
{25702, 25708, 3131}, 
{26131, 26139, 861}, 
{26285, 26291, 870}, 
{26365, 26819, 3138}, 
{28206, 28208, 877}, 
{28257, 28257, 880}, 
{28278, 28281, 881}, 
{28309, 28313, 885}, 
{28330, 28343, 890}, 
{28949, 28949, 3593}, 
{28960, 28960, 3594}, 
{30034, 30074, 904}, 
{31595, 31599, 945}, 
{32149, 32153, 950}, 
{32206, 32206, 3595}, 
{32458, 32458, 955}, 
{32763, 32763, 956}, 
{32794, 32794, 3596}, 
{32798, 32814, 957}, 
{32815, 32815, 3597}, 
{32816, 32871, 974}, 
{32999, 33031, 3598}, 
{33150, 33151, 1030}, 
{33152, 33152, 3631}, 
{33153, 33209, 1032}, 
{33451, 33453, 1089}, 
{33462, 33468, 3632}, 
{33469, 33491, 1092}, 
{34114, 34152, 1115}, 
{34336, 34337, 1154}, 
{34408, 34433, 1156}, 
{34580, 34580, 1182}, 
{34611, 34659, 1183}, 
{34660, 34661, 3639}, 
{34662, 34662, 1232}, 
{34663, 34666, 3641}, 
{34667, 34683, 1233}, 
{35212, 35221, 1250}, 
{35513, 35513, 3645}, 
{35555, 35570, 1260}, 
{35856, 35869, 1276}, 
{36574, 36574, 1290}, 
{37586, 37664, 1291}, 
{37665, 37665, 3646}, 
{37666, 37723, 1370}, 
{37724, 37743, 3647}, 
{37744, 37749, 1428}, 
{37787, 37857, 1434}, 
{37938, 37944, 1505}, 
{38112, 38149, 1512}, 
{38150, 38150, 3667}, 
{38151, 38202, 1550}, 
{38203, 38203, 3668}, 
{38204, 38250, 1602}, 
{38614, 38669, 1649}, 
{38815, 38845, 1705}, 
{39381, 39603, 1736}, 
{39782, 39848, 1959}, 
{39933, 39933, 2026}, 
{39934, 39934, 3669}, 
{39935, 39946, 2027}, 
{39947, 39949, 3670}, 
{39950, 39954, 2039}, 
{39955, 39955, 3673}, 
{39956, 39999, 2044}, 
{40265, 40306, 2088}, 
{40496, 40522, 2130}, 
{40700, 40700, 2157}, 
{40703, 40706, 2158}, 
{40999, 41007, 2162}, 
{41100, 41108, 2171}, 
{41201, 41204, 2180}, 
{41302, 41305, 2184}, 
{42228, 42299, 2188}, 
{42429, 42431, 2260}, 
{42440, 42464, 2263}, 
{42641, 42642, 2288}, 
{42863, 42863, 2290}, 
{42895, 42897, 2291}, 
{43313, 43316, 2294}, 
{43587, 43587, 2298}, 
{44055, 44094, 2299}, 
{44356, 44370, 2339}, 
{44407, 44407, 3674}, 
{44408, 44411, 2354}, 
{44412, 44412, 3675}, 
{44601, 44697, 2358}, 
{44902, 44962, 2455}, 
{45517, 45525, 2516}, 
{45568, 45571, 2525}, 
{45619, 45623, 2529}, 
{46124, 46162, 2534}, 
{46368, 46480, 2573}, 
{46481, 46481, 3676}, 
{46482, 46576, 2686}, 
{46577, 46577, 3677}, 
{46578, 46580, 2781}, 
{46581, 46592, 3678}, 
{46593, 46619, 2784}, 
{46869, 46878, 2811}, 
{46920, 46920, 2821}, 
{47923, 47959, 2822}, 
{48074, 48074, 2859}, 
{48175, 48193, 2860}, 
{48512, 48527, 2879}, 
{48813, 48841, 2895}, 
{48965, 48971, 2924}, 
{49049, 49060, 2931}, 
{49070, 49138, 2943}, 
{49289, 49289, 3012}, 
};



#ifdef __CAT_SUPPORT__
struct StrResStruct{
CUSTOM_STRING strRes[75590];
CUSTOM_STRING_MAP_16 strMap_1[3013];
CUSTOM_STRING_MAP_16 strMap_2[3013];
CUSTOM_STRING strRes_Dup[1790];
CUSTOM_STRING strRes_Fixed[9928];
CUSTOM_STRING_MAP_16 strMap_Fixed[677];
};
__align(4) struct StrResStruct StrRes;
long mtk_gStrResSize = sizeof(StrRes);
const StringResList mtk_gStringList[] = {
{ (void *)StrRes.strRes ,2605, (void *)StrRes.strMap_1, 3014, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)2048, 75590, 75590, (U8*)77824, 6026, 6026 },
{ (void *)StrRes.strRes ,2403, (void *)StrRes.strMap_2, 3014, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)83968, 29392, 29392, (U8*)114688, 6026, 6026 },
{ (void *)StrRes.strRes_Dup ,137, (void *)NULL, 1, (CUSTOM_STRMAP_SEARCH *)NULL, 10052,0, (U8*)0, 1790, 1790, (U8*)NULL, 0, 0 },
{ (void *)StrRes.strRes_Fixed ,563, (void *)StrRes.strMap_Fixed, 677, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)120832, 9928, 9928, (U8*)131072, 1354, 1354 },
};
#else //__CAT_SUPPORT__
__align(4) U8 StrRuntimeBuf[81618];
__align(4) U8 DupStrRuntimeBuf[1790];
__align(4) U8 FixedStrRuntimeBuf[11282];
const StringResList mtk_gStringList[] = {
{ (void *)StrRuntimeBuf ,2605, (void *)(StrRuntimeBuf+75592), 3014, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)2048, 75590, 75590, (U8*)77824, 6026, 6026 },
{ (void *)StrRuntimeBuf ,2403, (void *)(StrRuntimeBuf+29392), 3014, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)83968, 29392, 29392, (U8*)114688, 6026, 6026 },
{ (void *)DupStrRuntimeBuf ,137, (void *)NULL, 1, (CUSTOM_STRMAP_SEARCH *)NULL, 10052,0, (U8*)0, 1790, 1790, (U8*)NULL, 0, 0 },
{ (void *)FixedStrRuntimeBuf ,563, (void *)(FixedStrRuntimeBuf+9928), 677, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)120832, 9928, 9928, (U8*)131072, 1354, 1354 },
};
#endif  //__CAT_SUPPORT__

#endif //__MMI_RESOURCE_STR_THIRD_ROM__
//---------------------------- THIRD ROM DATA END -------------------------------
//------------------ NORMAL COMPRESSED ROM DATA START ---------------------------
#if !defined(__MMI_RESOURCE_STR_THIRD_ROM__)
#if defined(__MMI_RESOURCE_STR_LZMA_COMPRESS__)
#include "CustDataRes.h"
#include "FontDCl.h"
#if (!defined (__MTK_TARGET__))
    #define __align(x)
#endif

const U16 mtk_gTrans_string_count = 3013;

const CUSTOM_STRMAP_SEARCH StrMapSearch[] = {
{1, 11, 3013}, 
{12, 66, 0}, 
{68, 72, 55}, 
{75, 90, 60}, 
{92, 94, 76}, 
{96, 101, 79}, 
{103, 119, 85}, 
{120, 120, 3024}, 
{121, 146, 102}, 
{147, 147, 3025}, 
{148, 231, 128}, 
{233, 276, 212}, 
{3302, 3308, 256}, 
{3685, 3687, 263}, 
{3689, 3689, 266}, 
{3694, 3694, 3026}, 
{3696, 3696, 3027}, 
{3698, 3698, 267}, 
{3706, 3706, 3028}, 
{3708, 3711, 268}, 
{3729, 3729, 272}, 
{3735, 3753, 273}, 
{3754, 3754, 3029}, 
{3759, 3778, 292}, 
{3820, 3824, 312}, 
{3826, 3826, 317}, 
{3828, 3831, 318}, 
{3833, 3833, 322}, 
{3836, 3836, 323}, 
{3839, 3839, 324}, 
{3844, 3844, 325}, 
{3847, 3847, 326}, 
{3850, 3850, 327}, 
{3858, 3858, 328}, 
{4083, 4083, 329}, 
{4103, 4105, 330}, 
{4112, 4112, 333}, 
{4427, 4427, 3030}, 
{4457, 4457, 334}, 
{4803, 4816, 335}, 
{4817, 4817, 3031}, 
{4818, 4820, 349}, 
{4821, 4822, 3032}, 
{4823, 4826, 352}, 
{4827, 4827, 3034}, 
{4828, 4846, 356}, 
{5362, 5367, 375}, 
{7607, 7607, 3035}, 
{7608, 7625, 381}, 
{7638, 7655, 399}, 
{7739, 7739, 3036}, 
{7742, 7742, 3037}, 
{7745, 7745, 3038}, 
{7748, 7748, 3039}, 
{7751, 7751, 3040}, 
{7754, 7754, 3041}, 
{7757, 7757, 3042}, 
{7760, 7760, 3043}, 
{7763, 7763, 3044}, 
{7766, 7766, 3045}, 
{7769, 7769, 3046}, 
{7772, 7772, 3047}, 
{7795, 7804, 417}, 
{7946, 7946, 3048}, 
{7949, 7949, 3049}, 
{7952, 7952, 3050}, 
{7955, 7955, 3051}, 
{7958, 7958, 3052}, 
{7961, 7961, 3053}, 
{7964, 7964, 3054}, 
{7967, 7967, 3055}, 
{8223, 8356, 427}, 
{9224, 9224, 561}, 
{9325, 9325, 562}, 
{9602, 9605, 563}, 
{9653, 9703, 567}, 
{9786, 9835, 618}, 
{10536, 10537, 668}, 
{10539, 10539, 670}, 
{10616, 10616, 671}, 
{10696, 10696, 672}, 
{10698, 10699, 673}, 
{10738, 10739, 3056}, 
{10740, 10751, 675}, 
{10752, 10752, 3058}, 
{11613, 11624, 687}, 
{11675, 11683, 699}, 
{11919, 11982, 3059}, 
{13462, 13539, 708}, 
{13540, 13544, 3123}, 
{13545, 13547, 786}, 
{13548, 13548, 3128}, 
{14313, 14326, 789}, 
{14414, 14416, 803}, 
{15147, 15148, 806}, 
{15589, 15607, 808}, 
{15640, 15655, 827}, 
{15656, 15657, 3129}, 
{15658, 15659, 843}, 
{16469, 16484, 845}, 
{25702, 25708, 3131}, 
{26131, 26139, 861}, 
{26285, 26291, 870}, 
{26365, 26819, 3138}, 
{28206, 28208, 877}, 
{28257, 28257, 880}, 
{28278, 28281, 881}, 
{28309, 28313, 885}, 
{28330, 28343, 890}, 
{28949, 28949, 3593}, 
{28960, 28960, 3594}, 
{30034, 30074, 904}, 
{31595, 31599, 945}, 
{32149, 32153, 950}, 
{32206, 32206, 3595}, 
{32458, 32458, 955}, 
{32763, 32763, 956}, 
{32794, 32794, 3596}, 
{32798, 32814, 957}, 
{32815, 32815, 3597}, 
{32816, 32871, 974}, 
{32999, 33031, 3598}, 
{33150, 33151, 1030}, 
{33152, 33152, 3631}, 
{33153, 33209, 1032}, 
{33451, 33453, 1089}, 
{33462, 33468, 3632}, 
{33469, 33491, 1092}, 
{34114, 34152, 1115}, 
{34336, 34337, 1154}, 
{34408, 34433, 1156}, 
{34580, 34580, 1182}, 
{34611, 34659, 1183}, 
{34660, 34661, 3639}, 
{34662, 34662, 1232}, 
{34663, 34666, 3641}, 
{34667, 34683, 1233}, 
{35212, 35221, 1250}, 
{35513, 35513, 3645}, 
{35555, 35570, 1260}, 
{35856, 35869, 1276}, 
{36574, 36574, 1290}, 
{37586, 37664, 1291}, 
{37665, 37665, 3646}, 
{37666, 37723, 1370}, 
{37724, 37743, 3647}, 
{37744, 37749, 1428}, 
{37787, 37857, 1434}, 
{37938, 37944, 1505}, 
{38112, 38149, 1512}, 
{38150, 38150, 3667}, 
{38151, 38202, 1550}, 
{38203, 38203, 3668}, 
{38204, 38250, 1602}, 
{38614, 38669, 1649}, 
{38815, 38845, 1705}, 
{39381, 39603, 1736}, 
{39782, 39848, 1959}, 
{39933, 39933, 2026}, 
{39934, 39934, 3669}, 
{39935, 39946, 2027}, 
{39947, 39949, 3670}, 
{39950, 39954, 2039}, 
{39955, 39955, 3673}, 
{39956, 39999, 2044}, 
{40265, 40306, 2088}, 
{40496, 40522, 2130}, 
{40700, 40700, 2157}, 
{40703, 40706, 2158}, 
{40999, 41007, 2162}, 
{41100, 41108, 2171}, 
{41201, 41204, 2180}, 
{41302, 41305, 2184}, 
{42228, 42299, 2188}, 
{42429, 42431, 2260}, 
{42440, 42464, 2263}, 
{42641, 42642, 2288}, 
{42863, 42863, 2290}, 
{42895, 42897, 2291}, 
{43313, 43316, 2294}, 
{43587, 43587, 2298}, 
{44055, 44094, 2299}, 
{44356, 44370, 2339}, 
{44407, 44407, 3674}, 
{44408, 44411, 2354}, 
{44412, 44412, 3675}, 
{44601, 44697, 2358}, 
{44902, 44962, 2455}, 
{45517, 45525, 2516}, 
{45568, 45571, 2525}, 
{45619, 45623, 2529}, 
{46124, 46162, 2534}, 
{46368, 46480, 2573}, 
{46481, 46481, 3676}, 
{46482, 46576, 2686}, 
{46577, 46577, 3677}, 
{46578, 46580, 2781}, 
{46581, 46592, 3678}, 
{46593, 46619, 2784}, 
{46869, 46878, 2811}, 
{46920, 46920, 2821}, 
{47923, 47959, 2822}, 
{48074, 48074, 2859}, 
{48175, 48193, 2860}, 
{48512, 48527, 2879}, 
{48813, 48841, 2895}, 
{48965, 48971, 2924}, 
{49049, 49060, 2931}, 
{49070, 49138, 2943}, 
{49289, 49289, 3012}, 
};

extern const U8 StrMap_zip_1[];
extern const U8 StrRes_zip_1[];
extern const U8 StrMap_zip_2[];
extern const U8 StrRes_zip_2[];
extern const U8 StrRes_zip_Dup[];
extern const U8 StrMap_zip_fixed[];
extern const U8 StrRes_zip_fixed[];



#ifdef __CAT_SUPPORT__
struct StrResStruct{
CUSTOM_STRING strRes[75590];
CUSTOM_STRING_MAP_16 strMap_1[3013];
CUSTOM_STRING_MAP_16 strMap_2[3013];
CUSTOM_STRING strRes_Dup[1790];
CUSTOM_STRING strRes_Fixed[9928];
CUSTOM_STRING_MAP_16 strMap_Fixed[677];
};
__align(4) struct StrResStruct StrRes;
long mtk_gStrResSize = sizeof(StrRes);
const StringResList mtk_gStringList[] = {
{ (void *)StrRes.strRes ,2605, (void *)StrRes.strMap_1, 3014, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)StrRes_zip_1, 75590, 13516, (U8*)StrMap_zip_1, 6026, 4959 },
{ (void *)StrRes.strRes ,2403, (void *)StrRes.strMap_2, 3014, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)StrRes_zip_2, 29392, 11637, (U8*)StrMap_zip_2, 6026, 4251 },
{ (void *)StrRes.strRes_Dup ,137, (void *)NULL, 1, (CUSTOM_STRMAP_SEARCH *)NULL, 10052,0, (U8*)StrRes_zip_Dup, 1790, 626, (U8*)NULL, 0, 0 },
{ (void *)StrRes.strRes_Fixed ,563, (void *)StrRes.strMap_Fixed, 677, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)StrRes_zip_fixed, 9928, 2920, (U8*)StrMap_zip_fixed, 1354, 815 },
};
#else //__CAT_SUPPORT__
__align(4) U8 StrRuntimeBuf[81618];
__align(4) U8 DupStrRuntimeBuf[1790];
__align(4) U8 FixedStrRuntimeBuf[11282];
const StringResList mtk_gStringList[] = {
{ (void *)StrRuntimeBuf ,2605, (void *)(StrRuntimeBuf+75592), 3014, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)StrRes_zip_1, 75590, 13516, (U8*)StrMap_zip_1, 6026, 4959 },
{ (void *)StrRuntimeBuf ,2403, (void *)(StrRuntimeBuf+29392), 3014, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)StrRes_zip_2, 29392, 11637, (U8*)StrMap_zip_2, 6026, 4251 },
{ (void *)DupStrRuntimeBuf ,137, (void *)NULL, 1, (CUSTOM_STRMAP_SEARCH *)NULL, 10052,0, (U8*)StrRes_zip_Dup, 1790, 626, (U8*)NULL, 0, 0 },
{ (void *)FixedStrRuntimeBuf ,563, (void *)(FixedStrRuntimeBuf+9928), 677, (CUSTOM_STRMAP_SEARCH *)StrMapSearch, 210,1, (U8*)StrRes_zip_fixed, 9928, 2920, (U8*)StrMap_zip_fixed, 1354, 815 },
};
#endif  //__CAT_SUPPORT__

#endif // __MMI_RESOURCE_STR_LZMA_COMPRESS__

#endif //__MMI_RESOURCE_STR_THIRD_ROM__
//------------------ NORMAL COMPRESSED ROM DATA START ---------------------------
