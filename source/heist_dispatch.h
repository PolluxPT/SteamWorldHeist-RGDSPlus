/* Generated from this exact Heist executable; SHA256 is checked by launcher. */
static const unsigned int original_utility[547] = {
 [1] = 0x086da400u, /* SDL_Log */
 [2] = 0x086da430u, /* SDL_LogVerbose */
 [3] = 0x086da460u, /* SDL_LogDebug */
 [4] = 0x086da490u, /* SDL_LogInfo */
 [5] = 0x086da4c0u, /* SDL_LogWarn */
 [6] = 0x086da4f0u, /* SDL_LogError */
 [7] = 0x086da520u, /* SDL_LogCritical */
 [8] = 0x086da550u, /* SDL_LogMessage */
 [9] = 0x086baf30u, /* SDL_sscanf */
 [10] = 0x086baf70u, /* SDL_snprintf */
 [22] = 0x086da680u, /* SDL_AtomicTryLock */
 [23] = 0x086da6a0u, /* SDL_AtomicLock */
 [24] = 0x086da6d0u, /* SDL_AtomicUnlock */
 [25] = 0x086da5d0u, /* SDL_AtomicCAS */
 [26] = 0x086da610u, /* SDL_AtomicSet */
 [27] = 0x086da640u, /* SDL_AtomicGet */
 [28] = 0x086da630u, /* SDL_AtomicAdd */
 [29] = 0x086da5f0u, /* SDL_AtomicCASPtr */
 [30] = 0x086da620u, /* SDL_AtomicSetPtr */
 [31] = 0x086da660u, /* SDL_AtomicGetPtr */
 [62] = 0x08702cf0u, /* SDL_HasRDTSC */
 [63] = 0x08703110u, /* SDL_HasAltiVec */
 [64] = 0x08703530u, /* SDL_HasMMX */
 [65] = 0x08703960u, /* SDL_Has3DNow */
 [66] = 0x08703d90u, /* SDL_HasSSE */
 [67] = 0x087041c0u, /* SDL_HasSSE2 */
 [68] = 0x087045f0u, /* SDL_HasSSE3 */
 [69] = 0x08704a20u, /* SDL_HasSSE41 */
 [70] = 0x08704e50u, /* SDL_HasSSE42 */
 [194] = 0x086da1b0u, /* SDL_LogSetAllPriority */
 [195] = 0x086da1e0u, /* SDL_LogSetPriority */
 [196] = 0x086da240u, /* SDL_LogGetPriority */
 [197] = 0x086da290u, /* SDL_LogResetPriorities */
 [198] = 0x086da2f0u, /* SDL_LogMessageV */
 [199] = 0x086da580u, /* SDL_LogGetOutputFunction */
 [200] = 0x086da5b0u, /* SDL_LogSetOutputFunction */
 [237] = 0x086be5f0u, /* SDL_PixelFormatEnumToMasks */
 [238] = 0x086be8a0u, /* SDL_MasksToPixelFormatEnum */
 [249] = 0x086c0380u, /* SDL_CalculateGammaRamp */
 [250] = 0x086d9060u, /* SDL_GetPlatform */
 [252] = 0x086c0700u, /* SDL_HasIntersection */
 [253] = 0x086c07b0u, /* SDL_IntersectRect */
 [254] = 0x086c08b0u, /* SDL_UnionRect */
 [255] = 0x086c09d0u, /* SDL_EnclosePoints */
 [256] = 0x086c0c80u, /* SDL_IntersectRectAndLine */
 [333] = 0x086ba200u, /* SDL_malloc */
 [334] = 0x086ba210u, /* SDL_calloc */
 [335] = 0x086ba220u, /* SDL_realloc */
 [336] = 0x086ba230u, /* SDL_free */
 [337] = 0x086b9f90u, /* SDL_getenv */
 [338] = 0x086b9f20u, /* SDL_setenv */
 [339] = 0x086ba240u, /* SDL_qsort */
 [340] = 0x086ba430u, /* SDL_abs */
 [341] = 0x086ba440u, /* SDL_isdigit */
 [342] = 0x086ba460u, /* SDL_isspace */
 [343] = 0x086ba480u, /* SDL_toupper */
 [344] = 0x086ba4b0u, /* SDL_tolower */
 [345] = 0x086ba4e0u, /* SDL_memset */
 [346] = 0x086ba4f0u, /* SDL_memcpy */
 [347] = 0x086ba500u, /* SDL_memmove */
 [348] = 0x086ba510u, /* SDL_memcmp */
 [349] = 0x086ba530u, /* SDL_wcslen */
 [350] = 0x086ba550u, /* SDL_wcslcpy */
 [351] = 0x086ba5b0u, /* SDL_wcslcat */
 [352] = 0x086ba520u, /* SDL_strlen */
 [353] = 0x086ba660u, /* SDL_strlcpy */
 [354] = 0x086ba6b0u, /* SDL_utf8strlcpy */
 [355] = 0x086ba760u, /* SDL_strlcat */
 [356] = 0x086ba7d0u, /* SDL_strdup */
 [357] = 0x086ba7e0u, /* SDL_strrev */
 [358] = 0x086ba830u, /* SDL_strupr */
 [359] = 0x086ba870u, /* SDL_strlwr */
 [360] = 0x086ba8b0u, /* SDL_strchr */
 [361] = 0x086ba8c0u, /* SDL_strrchr */
 [362] = 0x086ba8d0u, /* SDL_strstr */
 [363] = 0x086ba8e0u, /* SDL_itoa */
 [364] = 0x086ba9e0u, /* SDL_uitoa */
 [365] = 0x086baa50u, /* SDL_ltoa */
 [366] = 0x086bab50u, /* SDL_ultoa */
 [367] = 0x086babc0u, /* SDL_lltoa */
 [368] = 0x086bad80u, /* SDL_ulltoa */
 [369] = 0x086bae50u, /* SDL_atoi */
 [370] = 0x086bae80u, /* SDL_atof */
 [371] = 0x086baea0u, /* SDL_strtol */
 [372] = 0x086baeb0u, /* SDL_strtoul */
 [373] = 0x086baec0u, /* SDL_strtoll */
 [374] = 0x086baed0u, /* SDL_strtoull */
 [375] = 0x086baee0u, /* SDL_strtod */
 [376] = 0x086baef0u, /* SDL_strcmp */
 [377] = 0x086baf00u, /* SDL_strncmp */
 [378] = 0x086baf10u, /* SDL_strcasecmp */
 [379] = 0x086baf20u, /* SDL_strncasecmp */
 [380] = 0x086bafc0u, /* SDL_vsnprintf */
 [381] = 0x086ba270u, /* SDL_acos */
 [382] = 0x086ba280u, /* SDL_asin */
 [383] = 0x086ba250u, /* SDL_atan */
 [384] = 0x086ba260u, /* SDL_atan2 */
 [385] = 0x086ba290u, /* SDL_ceil */
 [386] = 0x086ba2d0u, /* SDL_copysign */
 [387] = 0x086ba2f0u, /* SDL_cos */
 [388] = 0x086ba300u, /* SDL_cosf */
 [389] = 0x086ba310u, /* SDL_fabs */
 [390] = 0x086ba320u, /* SDL_floor */
 [391] = 0x086ba360u, /* SDL_log */
 [392] = 0x086ba370u, /* SDL_pow */
 [393] = 0x086ba380u, /* SDL_scalbn */
 [394] = 0x086ba390u, /* SDL_sin */
 [395] = 0x086ba3a0u, /* SDL_sinf */
 [396] = 0x086ba3b0u, /* SDL_sqrt */
 [400] = 0x086ba040u, /* SDL_iconv_string */
 [450] = 0x086d9030u, /* SDL_GetVersion */
 [451] = 0x086d9040u, /* SDL_GetRevision */
 [452] = 0x086d9050u, /* SDL_GetRevisionNumber */
 [524] = 0x086baf60u, /* SDL_vsscanf */
 [527] = 0x08705280u, /* SDL_HasAVX */
 [532] = 0x086ba3e0u, /* SDL_sqrtf */
 [533] = 0x086ba410u, /* SDL_tan */
 [534] = 0x086ba420u, /* SDL_tanf */
 [538] = 0x087056b0u, /* SDL_HasAVX2 */
};
static const unsigned char required[547] = {
 [13] = 1, /* SDL_Init */
 [72] = 1, /* SDL_GetError */
 [73] = 1, /* SDL_ClearError */
 [81] = 1, /* SDL_PollEvent */
 [94] = 1, /* SDL_GameControllerAddMapping */
 [97] = 1, /* SDL_IsGameController */
 [99] = 1, /* SDL_GameControllerOpen */
 [102] = 1, /* SDL_GameControllerGetJoystick */
 [108] = 1, /* SDL_GameControllerGetAxis */
 [112] = 1, /* SDL_GameControllerGetButton */
 [113] = 1, /* SDL_GameControllerClose */
 [126] = 1, /* SDL_HapticOpenFromJoystick */
 [127] = 1, /* SDL_HapticClose */
 [145] = 1, /* SDL_HapticRumbleInit */
 [146] = 1, /* SDL_HapticRumblePlay */
 [156] = 1, /* SDL_JoystickOpen */
 [157] = 1, /* SDL_JoystickName */
 [160] = 1, /* SDL_JoystickGetGUIDString */
 [163] = 1, /* SDL_JoystickInstanceID */
 [174] = 1, /* SDL_JoystickClose */
 [176] = 1, /* SDL_GetKeyboardState */
 [179] = 1, /* SDL_GetKeyFromScancode */
 [183] = 1, /* SDL_GetKeyName */
 [203] = 1, /* SDL_ShowSimpleMessageBox */
 [205] = 1, /* SDL_GetMouseState */
 [211] = 1, /* SDL_CreateColorCursor */
 [213] = 1, /* SDL_SetCursor */
 [216] = 1, /* SDL_FreeCursor */
 [217] = 1, /* SDL_ShowCursor */
 [310] = 1, /* SDL_RWFromFile */
 [402] = 1, /* SDL_CreateRGBSurfaceFrom */
 [403] = 1, /* SDL_FreeSurface */
 [407] = 1, /* SDL_LoadBMP_RW */
 [440] = 1, /* SDL_GetTicks */
 [441] = 1, /* SDL_GetPerformanceCounter */
 [442] = 1, /* SDL_GetPerformanceFrequency */
 [458] = 1, /* SDL_GetNumVideoDisplays */
 [460] = 1, /* SDL_GetDisplayBounds */
 [466] = 1, /* SDL_GetWindowDisplayIndex */
 [470] = 1, /* SDL_CreateWindow */
 [474] = 1, /* SDL_GetWindowFlags */
 [477] = 1, /* SDL_SetWindowIcon */
 [480] = 1, /* SDL_SetWindowPosition */
 [481] = 1, /* SDL_GetWindowPosition */
 [482] = 1, /* SDL_SetWindowSize */
 [483] = 1, /* SDL_GetWindowSize */
 [484] = 1, /* SDL_SetWindowMinimumSize */
 [495] = 1, /* SDL_SetWindowFullscreen */
 [499] = 1, /* SDL_SetWindowGrab */
 [505] = 1, /* SDL_DestroyWindow */
 [507] = 1, /* SDL_EnableScreenSaver */
 [508] = 1, /* SDL_DisableScreenSaver */
 [513] = 1, /* SDL_GL_SetAttribute */
 [515] = 1, /* SDL_GL_CreateContext */
 [520] = 1, /* SDL_GL_SetSwapInterval */
 [521] = 1, /* SDL_GL_GetSwapInterval */
 [522] = 1, /* SDL_GL_SwapWindow */
 [523] = 1, /* SDL_GL_DeleteContext */
};
static void unavailable(unsigned int i) { fprintf(stderr,"HEIST_BRIDGE: unsupported SDL call %s\n",names[i]); _exit(78); }
static void missing_0(void) { unavailable(0); }
static void missing_1(void) { unavailable(1); }
static void missing_2(void) { unavailable(2); }
static void missing_3(void) { unavailable(3); }
static void missing_4(void) { unavailable(4); }
static void missing_5(void) { unavailable(5); }
static void missing_6(void) { unavailable(6); }
static void missing_7(void) { unavailable(7); }
static void missing_8(void) { unavailable(8); }
static void missing_9(void) { unavailable(9); }
static void missing_10(void) { unavailable(10); }
static void missing_11(void) { unavailable(11); }
static void missing_12(void) { unavailable(12); }
static void missing_13(void) { unavailable(13); }
static void missing_14(void) { unavailable(14); }
static void missing_15(void) { unavailable(15); }
static void missing_16(void) { unavailable(16); }
static void missing_17(void) { unavailable(17); }
static void missing_18(void) { unavailable(18); }
static void missing_19(void) { unavailable(19); }
static void missing_20(void) { unavailable(20); }
static void missing_21(void) { unavailable(21); }
static void missing_22(void) { unavailable(22); }
static void missing_23(void) { unavailable(23); }
static void missing_24(void) { unavailable(24); }
static void missing_25(void) { unavailable(25); }
static void missing_26(void) { unavailable(26); }
static void missing_27(void) { unavailable(27); }
static void missing_28(void) { unavailable(28); }
static void missing_29(void) { unavailable(29); }
static void missing_30(void) { unavailable(30); }
static void missing_31(void) { unavailable(31); }
static void missing_32(void) { unavailable(32); }
static void missing_33(void) { unavailable(33); }
static void missing_34(void) { unavailable(34); }
static void missing_35(void) { unavailable(35); }
static void missing_36(void) { unavailable(36); }
static void missing_37(void) { unavailable(37); }
static void missing_38(void) { unavailable(38); }
static void missing_39(void) { unavailable(39); }
static void missing_40(void) { unavailable(40); }
static void missing_41(void) { unavailable(41); }
static void missing_42(void) { unavailable(42); }
static void missing_43(void) { unavailable(43); }
static void missing_44(void) { unavailable(44); }
static void missing_45(void) { unavailable(45); }
static void missing_46(void) { unavailable(46); }
static void missing_47(void) { unavailable(47); }
static void missing_48(void) { unavailable(48); }
static void missing_49(void) { unavailable(49); }
static void missing_50(void) { unavailable(50); }
static void missing_51(void) { unavailable(51); }
static void missing_52(void) { unavailable(52); }
static void missing_53(void) { unavailable(53); }
static void missing_54(void) { unavailable(54); }
static void missing_55(void) { unavailable(55); }
static void missing_56(void) { unavailable(56); }
static void missing_57(void) { unavailable(57); }
static void missing_58(void) { unavailable(58); }
static void missing_59(void) { unavailable(59); }
static void missing_60(void) { unavailable(60); }
static void missing_61(void) { unavailable(61); }
static void missing_62(void) { unavailable(62); }
static void missing_63(void) { unavailable(63); }
static void missing_64(void) { unavailable(64); }
static void missing_65(void) { unavailable(65); }
static void missing_66(void) { unavailable(66); }
static void missing_67(void) { unavailable(67); }
static void missing_68(void) { unavailable(68); }
static void missing_69(void) { unavailable(69); }
static void missing_70(void) { unavailable(70); }
static void missing_71(void) { unavailable(71); }
static void missing_72(void) { unavailable(72); }
static void missing_73(void) { unavailable(73); }
static void missing_74(void) { unavailable(74); }
static void missing_75(void) { unavailable(75); }
static void missing_76(void) { unavailable(76); }
static void missing_77(void) { unavailable(77); }
static void missing_78(void) { unavailable(78); }
static void missing_79(void) { unavailable(79); }
static void missing_80(void) { unavailable(80); }
static void missing_81(void) { unavailable(81); }
static void missing_82(void) { unavailable(82); }
static void missing_83(void) { unavailable(83); }
static void missing_84(void) { unavailable(84); }
static void missing_85(void) { unavailable(85); }
static void missing_86(void) { unavailable(86); }
static void missing_87(void) { unavailable(87); }
static void missing_88(void) { unavailable(88); }
static void missing_89(void) { unavailable(89); }
static void missing_90(void) { unavailable(90); }
static void missing_91(void) { unavailable(91); }
static void missing_92(void) { unavailable(92); }
static void missing_93(void) { unavailable(93); }
static void missing_94(void) { unavailable(94); }
static void missing_95(void) { unavailable(95); }
static void missing_96(void) { unavailable(96); }
static void missing_97(void) { unavailable(97); }
static void missing_98(void) { unavailable(98); }
static void missing_99(void) { unavailable(99); }
static void missing_100(void) { unavailable(100); }
static void missing_101(void) { unavailable(101); }
static void missing_102(void) { unavailable(102); }
static void missing_103(void) { unavailable(103); }
static void missing_104(void) { unavailable(104); }
static void missing_105(void) { unavailable(105); }
static void missing_106(void) { unavailable(106); }
static void missing_107(void) { unavailable(107); }
static void missing_108(void) { unavailable(108); }
static void missing_109(void) { unavailable(109); }
static void missing_110(void) { unavailable(110); }
static void missing_111(void) { unavailable(111); }
static void missing_112(void) { unavailable(112); }
static void missing_113(void) { unavailable(113); }
static void missing_114(void) { unavailable(114); }
static void missing_115(void) { unavailable(115); }
static void missing_116(void) { unavailable(116); }
static void missing_117(void) { unavailable(117); }
static void missing_118(void) { unavailable(118); }
static void missing_119(void) { unavailable(119); }
static void missing_120(void) { unavailable(120); }
static void missing_121(void) { unavailable(121); }
static void missing_122(void) { unavailable(122); }
static void missing_123(void) { unavailable(123); }
static void missing_124(void) { unavailable(124); }
static void missing_125(void) { unavailable(125); }
static void missing_126(void) { unavailable(126); }
static void missing_127(void) { unavailable(127); }
static void missing_128(void) { unavailable(128); }
static void missing_129(void) { unavailable(129); }
static void missing_130(void) { unavailable(130); }
static void missing_131(void) { unavailable(131); }
static void missing_132(void) { unavailable(132); }
static void missing_133(void) { unavailable(133); }
static void missing_134(void) { unavailable(134); }
static void missing_135(void) { unavailable(135); }
static void missing_136(void) { unavailable(136); }
static void missing_137(void) { unavailable(137); }
static void missing_138(void) { unavailable(138); }
static void missing_139(void) { unavailable(139); }
static void missing_140(void) { unavailable(140); }
static void missing_141(void) { unavailable(141); }
static void missing_142(void) { unavailable(142); }
static void missing_143(void) { unavailable(143); }
static void missing_144(void) { unavailable(144); }
static void missing_145(void) { unavailable(145); }
static void missing_146(void) { unavailable(146); }
static void missing_147(void) { unavailable(147); }
static void missing_148(void) { unavailable(148); }
static void missing_149(void) { unavailable(149); }
static void missing_150(void) { unavailable(150); }
static void missing_151(void) { unavailable(151); }
static void missing_152(void) { unavailable(152); }
static void missing_153(void) { unavailable(153); }
static void missing_154(void) { unavailable(154); }
static void missing_155(void) { unavailable(155); }
static void missing_156(void) { unavailable(156); }
static void missing_157(void) { unavailable(157); }
static void missing_158(void) { unavailable(158); }
static void missing_159(void) { unavailable(159); }
static void missing_160(void) { unavailable(160); }
static void missing_161(void) { unavailable(161); }
static void missing_162(void) { unavailable(162); }
static void missing_163(void) { unavailable(163); }
static void missing_164(void) { unavailable(164); }
static void missing_165(void) { unavailable(165); }
static void missing_166(void) { unavailable(166); }
static void missing_167(void) { unavailable(167); }
static void missing_168(void) { unavailable(168); }
static void missing_169(void) { unavailable(169); }
static void missing_170(void) { unavailable(170); }
static void missing_171(void) { unavailable(171); }
static void missing_172(void) { unavailable(172); }
static void missing_173(void) { unavailable(173); }
static void missing_174(void) { unavailable(174); }
static void missing_175(void) { unavailable(175); }
static void missing_176(void) { unavailable(176); }
static void missing_177(void) { unavailable(177); }
static void missing_178(void) { unavailable(178); }
static void missing_179(void) { unavailable(179); }
static void missing_180(void) { unavailable(180); }
static void missing_181(void) { unavailable(181); }
static void missing_182(void) { unavailable(182); }
static void missing_183(void) { unavailable(183); }
static void missing_184(void) { unavailable(184); }
static void missing_185(void) { unavailable(185); }
static void missing_186(void) { unavailable(186); }
static void missing_187(void) { unavailable(187); }
static void missing_188(void) { unavailable(188); }
static void missing_189(void) { unavailable(189); }
static void missing_190(void) { unavailable(190); }
static void missing_191(void) { unavailable(191); }
static void missing_192(void) { unavailable(192); }
static void missing_193(void) { unavailable(193); }
static void missing_194(void) { unavailable(194); }
static void missing_195(void) { unavailable(195); }
static void missing_196(void) { unavailable(196); }
static void missing_197(void) { unavailable(197); }
static void missing_198(void) { unavailable(198); }
static void missing_199(void) { unavailable(199); }
static void missing_200(void) { unavailable(200); }
static void missing_201(void) { unavailable(201); }
static void missing_202(void) { unavailable(202); }
static void missing_203(void) { unavailable(203); }
static void missing_204(void) { unavailable(204); }
static void missing_205(void) { unavailable(205); }
static void missing_206(void) { unavailable(206); }
static void missing_207(void) { unavailable(207); }
static void missing_208(void) { unavailable(208); }
static void missing_209(void) { unavailable(209); }
static void missing_210(void) { unavailable(210); }
static void missing_211(void) { unavailable(211); }
static void missing_212(void) { unavailable(212); }
static void missing_213(void) { unavailable(213); }
static void missing_214(void) { unavailable(214); }
static void missing_215(void) { unavailable(215); }
static void missing_216(void) { unavailable(216); }
static void missing_217(void) { unavailable(217); }
static void missing_218(void) { unavailable(218); }
static void missing_219(void) { unavailable(219); }
static void missing_220(void) { unavailable(220); }
static void missing_221(void) { unavailable(221); }
static void missing_222(void) { unavailable(222); }
static void missing_223(void) { unavailable(223); }
static void missing_224(void) { unavailable(224); }
static void missing_225(void) { unavailable(225); }
static void missing_226(void) { unavailable(226); }
static void missing_227(void) { unavailable(227); }
static void missing_228(void) { unavailable(228); }
static void missing_229(void) { unavailable(229); }
static void missing_230(void) { unavailable(230); }
static void missing_231(void) { unavailable(231); }
static void missing_232(void) { unavailable(232); }
static void missing_233(void) { unavailable(233); }
static void missing_234(void) { unavailable(234); }
static void missing_235(void) { unavailable(235); }
static void missing_236(void) { unavailable(236); }
static void missing_237(void) { unavailable(237); }
static void missing_238(void) { unavailable(238); }
static void missing_239(void) { unavailable(239); }
static void missing_240(void) { unavailable(240); }
static void missing_241(void) { unavailable(241); }
static void missing_242(void) { unavailable(242); }
static void missing_243(void) { unavailable(243); }
static void missing_244(void) { unavailable(244); }
static void missing_245(void) { unavailable(245); }
static void missing_246(void) { unavailable(246); }
static void missing_247(void) { unavailable(247); }
static void missing_248(void) { unavailable(248); }
static void missing_249(void) { unavailable(249); }
static void missing_250(void) { unavailable(250); }
static void missing_251(void) { unavailable(251); }
static void missing_252(void) { unavailable(252); }
static void missing_253(void) { unavailable(253); }
static void missing_254(void) { unavailable(254); }
static void missing_255(void) { unavailable(255); }
static void missing_256(void) { unavailable(256); }
static void missing_257(void) { unavailable(257); }
static void missing_258(void) { unavailable(258); }
static void missing_259(void) { unavailable(259); }
static void missing_260(void) { unavailable(260); }
static void missing_261(void) { unavailable(261); }
static void missing_262(void) { unavailable(262); }
static void missing_263(void) { unavailable(263); }
static void missing_264(void) { unavailable(264); }
static void missing_265(void) { unavailable(265); }
static void missing_266(void) { unavailable(266); }
static void missing_267(void) { unavailable(267); }
static void missing_268(void) { unavailable(268); }
static void missing_269(void) { unavailable(269); }
static void missing_270(void) { unavailable(270); }
static void missing_271(void) { unavailable(271); }
static void missing_272(void) { unavailable(272); }
static void missing_273(void) { unavailable(273); }
static void missing_274(void) { unavailable(274); }
static void missing_275(void) { unavailable(275); }
static void missing_276(void) { unavailable(276); }
static void missing_277(void) { unavailable(277); }
static void missing_278(void) { unavailable(278); }
static void missing_279(void) { unavailable(279); }
static void missing_280(void) { unavailable(280); }
static void missing_281(void) { unavailable(281); }
static void missing_282(void) { unavailable(282); }
static void missing_283(void) { unavailable(283); }
static void missing_284(void) { unavailable(284); }
static void missing_285(void) { unavailable(285); }
static void missing_286(void) { unavailable(286); }
static void missing_287(void) { unavailable(287); }
static void missing_288(void) { unavailable(288); }
static void missing_289(void) { unavailable(289); }
static void missing_290(void) { unavailable(290); }
static void missing_291(void) { unavailable(291); }
static void missing_292(void) { unavailable(292); }
static void missing_293(void) { unavailable(293); }
static void missing_294(void) { unavailable(294); }
static void missing_295(void) { unavailable(295); }
static void missing_296(void) { unavailable(296); }
static void missing_297(void) { unavailable(297); }
static void missing_298(void) { unavailable(298); }
static void missing_299(void) { unavailable(299); }
static void missing_300(void) { unavailable(300); }
static void missing_301(void) { unavailable(301); }
static void missing_302(void) { unavailable(302); }
static void missing_303(void) { unavailable(303); }
static void missing_304(void) { unavailable(304); }
static void missing_305(void) { unavailable(305); }
static void missing_306(void) { unavailable(306); }
static void missing_307(void) { unavailable(307); }
static void missing_308(void) { unavailable(308); }
static void missing_309(void) { unavailable(309); }
static void missing_310(void) { unavailable(310); }
static void missing_311(void) { unavailable(311); }
static void missing_312(void) { unavailable(312); }
static void missing_313(void) { unavailable(313); }
static void missing_314(void) { unavailable(314); }
static void missing_315(void) { unavailable(315); }
static void missing_316(void) { unavailable(316); }
static void missing_317(void) { unavailable(317); }
static void missing_318(void) { unavailable(318); }
static void missing_319(void) { unavailable(319); }
static void missing_320(void) { unavailable(320); }
static void missing_321(void) { unavailable(321); }
static void missing_322(void) { unavailable(322); }
static void missing_323(void) { unavailable(323); }
static void missing_324(void) { unavailable(324); }
static void missing_325(void) { unavailable(325); }
static void missing_326(void) { unavailable(326); }
static void missing_327(void) { unavailable(327); }
static void missing_328(void) { unavailable(328); }
static void missing_329(void) { unavailable(329); }
static void missing_330(void) { unavailable(330); }
static void missing_331(void) { unavailable(331); }
static void missing_332(void) { unavailable(332); }
static void missing_333(void) { unavailable(333); }
static void missing_334(void) { unavailable(334); }
static void missing_335(void) { unavailable(335); }
static void missing_336(void) { unavailable(336); }
static void missing_337(void) { unavailable(337); }
static void missing_338(void) { unavailable(338); }
static void missing_339(void) { unavailable(339); }
static void missing_340(void) { unavailable(340); }
static void missing_341(void) { unavailable(341); }
static void missing_342(void) { unavailable(342); }
static void missing_343(void) { unavailable(343); }
static void missing_344(void) { unavailable(344); }
static void missing_345(void) { unavailable(345); }
static void missing_346(void) { unavailable(346); }
static void missing_347(void) { unavailable(347); }
static void missing_348(void) { unavailable(348); }
static void missing_349(void) { unavailable(349); }
static void missing_350(void) { unavailable(350); }
static void missing_351(void) { unavailable(351); }
static void missing_352(void) { unavailable(352); }
static void missing_353(void) { unavailable(353); }
static void missing_354(void) { unavailable(354); }
static void missing_355(void) { unavailable(355); }
static void missing_356(void) { unavailable(356); }
static void missing_357(void) { unavailable(357); }
static void missing_358(void) { unavailable(358); }
static void missing_359(void) { unavailable(359); }
static void missing_360(void) { unavailable(360); }
static void missing_361(void) { unavailable(361); }
static void missing_362(void) { unavailable(362); }
static void missing_363(void) { unavailable(363); }
static void missing_364(void) { unavailable(364); }
static void missing_365(void) { unavailable(365); }
static void missing_366(void) { unavailable(366); }
static void missing_367(void) { unavailable(367); }
static void missing_368(void) { unavailable(368); }
static void missing_369(void) { unavailable(369); }
static void missing_370(void) { unavailable(370); }
static void missing_371(void) { unavailable(371); }
static void missing_372(void) { unavailable(372); }
static void missing_373(void) { unavailable(373); }
static void missing_374(void) { unavailable(374); }
static void missing_375(void) { unavailable(375); }
static void missing_376(void) { unavailable(376); }
static void missing_377(void) { unavailable(377); }
static void missing_378(void) { unavailable(378); }
static void missing_379(void) { unavailable(379); }
static void missing_380(void) { unavailable(380); }
static void missing_381(void) { unavailable(381); }
static void missing_382(void) { unavailable(382); }
static void missing_383(void) { unavailable(383); }
static void missing_384(void) { unavailable(384); }
static void missing_385(void) { unavailable(385); }
static void missing_386(void) { unavailable(386); }
static void missing_387(void) { unavailable(387); }
static void missing_388(void) { unavailable(388); }
static void missing_389(void) { unavailable(389); }
static void missing_390(void) { unavailable(390); }
static void missing_391(void) { unavailable(391); }
static void missing_392(void) { unavailable(392); }
static void missing_393(void) { unavailable(393); }
static void missing_394(void) { unavailable(394); }
static void missing_395(void) { unavailable(395); }
static void missing_396(void) { unavailable(396); }
static void missing_397(void) { unavailable(397); }
static void missing_398(void) { unavailable(398); }
static void missing_399(void) { unavailable(399); }
static void missing_400(void) { unavailable(400); }
static void missing_401(void) { unavailable(401); }
static void missing_402(void) { unavailable(402); }
static void missing_403(void) { unavailable(403); }
static void missing_404(void) { unavailable(404); }
static void missing_405(void) { unavailable(405); }
static void missing_406(void) { unavailable(406); }
static void missing_407(void) { unavailable(407); }
static void missing_408(void) { unavailable(408); }
static void missing_409(void) { unavailable(409); }
static void missing_410(void) { unavailable(410); }
static void missing_411(void) { unavailable(411); }
static void missing_412(void) { unavailable(412); }
static void missing_413(void) { unavailable(413); }
static void missing_414(void) { unavailable(414); }
static void missing_415(void) { unavailable(415); }
static void missing_416(void) { unavailable(416); }
static void missing_417(void) { unavailable(417); }
static void missing_418(void) { unavailable(418); }
static void missing_419(void) { unavailable(419); }
static void missing_420(void) { unavailable(420); }
static void missing_421(void) { unavailable(421); }
static void missing_422(void) { unavailable(422); }
static void missing_423(void) { unavailable(423); }
static void missing_424(void) { unavailable(424); }
static void missing_425(void) { unavailable(425); }
static void missing_426(void) { unavailable(426); }
static void missing_427(void) { unavailable(427); }
static void missing_428(void) { unavailable(428); }
static void missing_429(void) { unavailable(429); }
static void missing_430(void) { unavailable(430); }
static void missing_431(void) { unavailable(431); }
static void missing_432(void) { unavailable(432); }
static void missing_433(void) { unavailable(433); }
static void missing_434(void) { unavailable(434); }
static void missing_435(void) { unavailable(435); }
static void missing_436(void) { unavailable(436); }
static void missing_437(void) { unavailable(437); }
static void missing_438(void) { unavailable(438); }
static void missing_439(void) { unavailable(439); }
static void missing_440(void) { unavailable(440); }
static void missing_441(void) { unavailable(441); }
static void missing_442(void) { unavailable(442); }
static void missing_443(void) { unavailable(443); }
static void missing_444(void) { unavailable(444); }
static void missing_445(void) { unavailable(445); }
static void missing_446(void) { unavailable(446); }
static void missing_447(void) { unavailable(447); }
static void missing_448(void) { unavailable(448); }
static void missing_449(void) { unavailable(449); }
static void missing_450(void) { unavailable(450); }
static void missing_451(void) { unavailable(451); }
static void missing_452(void) { unavailable(452); }
static void missing_453(void) { unavailable(453); }
static void missing_454(void) { unavailable(454); }
static void missing_455(void) { unavailable(455); }
static void missing_456(void) { unavailable(456); }
static void missing_457(void) { unavailable(457); }
static void missing_458(void) { unavailable(458); }
static void missing_459(void) { unavailable(459); }
static void missing_460(void) { unavailable(460); }
static void missing_461(void) { unavailable(461); }
static void missing_462(void) { unavailable(462); }
static void missing_463(void) { unavailable(463); }
static void missing_464(void) { unavailable(464); }
static void missing_465(void) { unavailable(465); }
static void missing_466(void) { unavailable(466); }
static void missing_467(void) { unavailable(467); }
static void missing_468(void) { unavailable(468); }
static void missing_469(void) { unavailable(469); }
static void missing_470(void) { unavailable(470); }
static void missing_471(void) { unavailable(471); }
static void missing_472(void) { unavailable(472); }
static void missing_473(void) { unavailable(473); }
static void missing_474(void) { unavailable(474); }
static void missing_475(void) { unavailable(475); }
static void missing_476(void) { unavailable(476); }
static void missing_477(void) { unavailable(477); }
static void missing_478(void) { unavailable(478); }
static void missing_479(void) { unavailable(479); }
static void missing_480(void) { unavailable(480); }
static void missing_481(void) { unavailable(481); }
static void missing_482(void) { unavailable(482); }
static void missing_483(void) { unavailable(483); }
static void missing_484(void) { unavailable(484); }
static void missing_485(void) { unavailable(485); }
static void missing_486(void) { unavailable(486); }
static void missing_487(void) { unavailable(487); }
static void missing_488(void) { unavailable(488); }
static void missing_489(void) { unavailable(489); }
static void missing_490(void) { unavailable(490); }
static void missing_491(void) { unavailable(491); }
static void missing_492(void) { unavailable(492); }
static void missing_493(void) { unavailable(493); }
static void missing_494(void) { unavailable(494); }
static void missing_495(void) { unavailable(495); }
static void missing_496(void) { unavailable(496); }
static void missing_497(void) { unavailable(497); }
static void missing_498(void) { unavailable(498); }
static void missing_499(void) { unavailable(499); }
static void missing_500(void) { unavailable(500); }
static void missing_501(void) { unavailable(501); }
static void missing_502(void) { unavailable(502); }
static void missing_503(void) { unavailable(503); }
static void missing_504(void) { unavailable(504); }
static void missing_505(void) { unavailable(505); }
static void missing_506(void) { unavailable(506); }
static void missing_507(void) { unavailable(507); }
static void missing_508(void) { unavailable(508); }
static void missing_509(void) { unavailable(509); }
static void missing_510(void) { unavailable(510); }
static void missing_511(void) { unavailable(511); }
static void missing_512(void) { unavailable(512); }
static void missing_513(void) { unavailable(513); }
static void missing_514(void) { unavailable(514); }
static void missing_515(void) { unavailable(515); }
static void missing_516(void) { unavailable(516); }
static void missing_517(void) { unavailable(517); }
static void missing_518(void) { unavailable(518); }
static void missing_519(void) { unavailable(519); }
static void missing_520(void) { unavailable(520); }
static void missing_521(void) { unavailable(521); }
static void missing_522(void) { unavailable(522); }
static void missing_523(void) { unavailable(523); }
static void missing_524(void) { unavailable(524); }
static void missing_525(void) { unavailable(525); }
static void missing_526(void) { unavailable(526); }
static void missing_527(void) { unavailable(527); }
static void missing_528(void) { unavailable(528); }
static void missing_529(void) { unavailable(529); }
static void missing_530(void) { unavailable(530); }
static void missing_531(void) { unavailable(531); }
static void missing_532(void) { unavailable(532); }
static void missing_533(void) { unavailable(533); }
static void missing_534(void) { unavailable(534); }
static void missing_535(void) { unavailable(535); }
static void missing_536(void) { unavailable(536); }
static void missing_537(void) { unavailable(537); }
static void missing_538(void) { unavailable(538); }
static void missing_539(void) { unavailable(539); }
static void missing_540(void) { unavailable(540); }
static void missing_541(void) { unavailable(541); }
static void missing_542(void) { unavailable(542); }
static void missing_543(void) { unavailable(543); }
static void missing_544(void) { unavailable(544); }
static void missing_545(void) { unavailable(545); }
static void missing_546(void) { unavailable(546); }
static void (*const missing[547])(void) = {
missing_0,
missing_1,
missing_2,
missing_3,
missing_4,
missing_5,
missing_6,
missing_7,
missing_8,
missing_9,
missing_10,
missing_11,
missing_12,
missing_13,
missing_14,
missing_15,
missing_16,
missing_17,
missing_18,
missing_19,
missing_20,
missing_21,
missing_22,
missing_23,
missing_24,
missing_25,
missing_26,
missing_27,
missing_28,
missing_29,
missing_30,
missing_31,
missing_32,
missing_33,
missing_34,
missing_35,
missing_36,
missing_37,
missing_38,
missing_39,
missing_40,
missing_41,
missing_42,
missing_43,
missing_44,
missing_45,
missing_46,
missing_47,
missing_48,
missing_49,
missing_50,
missing_51,
missing_52,
missing_53,
missing_54,
missing_55,
missing_56,
missing_57,
missing_58,
missing_59,
missing_60,
missing_61,
missing_62,
missing_63,
missing_64,
missing_65,
missing_66,
missing_67,
missing_68,
missing_69,
missing_70,
missing_71,
missing_72,
missing_73,
missing_74,
missing_75,
missing_76,
missing_77,
missing_78,
missing_79,
missing_80,
missing_81,
missing_82,
missing_83,
missing_84,
missing_85,
missing_86,
missing_87,
missing_88,
missing_89,
missing_90,
missing_91,
missing_92,
missing_93,
missing_94,
missing_95,
missing_96,
missing_97,
missing_98,
missing_99,
missing_100,
missing_101,
missing_102,
missing_103,
missing_104,
missing_105,
missing_106,
missing_107,
missing_108,
missing_109,
missing_110,
missing_111,
missing_112,
missing_113,
missing_114,
missing_115,
missing_116,
missing_117,
missing_118,
missing_119,
missing_120,
missing_121,
missing_122,
missing_123,
missing_124,
missing_125,
missing_126,
missing_127,
missing_128,
missing_129,
missing_130,
missing_131,
missing_132,
missing_133,
missing_134,
missing_135,
missing_136,
missing_137,
missing_138,
missing_139,
missing_140,
missing_141,
missing_142,
missing_143,
missing_144,
missing_145,
missing_146,
missing_147,
missing_148,
missing_149,
missing_150,
missing_151,
missing_152,
missing_153,
missing_154,
missing_155,
missing_156,
missing_157,
missing_158,
missing_159,
missing_160,
missing_161,
missing_162,
missing_163,
missing_164,
missing_165,
missing_166,
missing_167,
missing_168,
missing_169,
missing_170,
missing_171,
missing_172,
missing_173,
missing_174,
missing_175,
missing_176,
missing_177,
missing_178,
missing_179,
missing_180,
missing_181,
missing_182,
missing_183,
missing_184,
missing_185,
missing_186,
missing_187,
missing_188,
missing_189,
missing_190,
missing_191,
missing_192,
missing_193,
missing_194,
missing_195,
missing_196,
missing_197,
missing_198,
missing_199,
missing_200,
missing_201,
missing_202,
missing_203,
missing_204,
missing_205,
missing_206,
missing_207,
missing_208,
missing_209,
missing_210,
missing_211,
missing_212,
missing_213,
missing_214,
missing_215,
missing_216,
missing_217,
missing_218,
missing_219,
missing_220,
missing_221,
missing_222,
missing_223,
missing_224,
missing_225,
missing_226,
missing_227,
missing_228,
missing_229,
missing_230,
missing_231,
missing_232,
missing_233,
missing_234,
missing_235,
missing_236,
missing_237,
missing_238,
missing_239,
missing_240,
missing_241,
missing_242,
missing_243,
missing_244,
missing_245,
missing_246,
missing_247,
missing_248,
missing_249,
missing_250,
missing_251,
missing_252,
missing_253,
missing_254,
missing_255,
missing_256,
missing_257,
missing_258,
missing_259,
missing_260,
missing_261,
missing_262,
missing_263,
missing_264,
missing_265,
missing_266,
missing_267,
missing_268,
missing_269,
missing_270,
missing_271,
missing_272,
missing_273,
missing_274,
missing_275,
missing_276,
missing_277,
missing_278,
missing_279,
missing_280,
missing_281,
missing_282,
missing_283,
missing_284,
missing_285,
missing_286,
missing_287,
missing_288,
missing_289,
missing_290,
missing_291,
missing_292,
missing_293,
missing_294,
missing_295,
missing_296,
missing_297,
missing_298,
missing_299,
missing_300,
missing_301,
missing_302,
missing_303,
missing_304,
missing_305,
missing_306,
missing_307,
missing_308,
missing_309,
missing_310,
missing_311,
missing_312,
missing_313,
missing_314,
missing_315,
missing_316,
missing_317,
missing_318,
missing_319,
missing_320,
missing_321,
missing_322,
missing_323,
missing_324,
missing_325,
missing_326,
missing_327,
missing_328,
missing_329,
missing_330,
missing_331,
missing_332,
missing_333,
missing_334,
missing_335,
missing_336,
missing_337,
missing_338,
missing_339,
missing_340,
missing_341,
missing_342,
missing_343,
missing_344,
missing_345,
missing_346,
missing_347,
missing_348,
missing_349,
missing_350,
missing_351,
missing_352,
missing_353,
missing_354,
missing_355,
missing_356,
missing_357,
missing_358,
missing_359,
missing_360,
missing_361,
missing_362,
missing_363,
missing_364,
missing_365,
missing_366,
missing_367,
missing_368,
missing_369,
missing_370,
missing_371,
missing_372,
missing_373,
missing_374,
missing_375,
missing_376,
missing_377,
missing_378,
missing_379,
missing_380,
missing_381,
missing_382,
missing_383,
missing_384,
missing_385,
missing_386,
missing_387,
missing_388,
missing_389,
missing_390,
missing_391,
missing_392,
missing_393,
missing_394,
missing_395,
missing_396,
missing_397,
missing_398,
missing_399,
missing_400,
missing_401,
missing_402,
missing_403,
missing_404,
missing_405,
missing_406,
missing_407,
missing_408,
missing_409,
missing_410,
missing_411,
missing_412,
missing_413,
missing_414,
missing_415,
missing_416,
missing_417,
missing_418,
missing_419,
missing_420,
missing_421,
missing_422,
missing_423,
missing_424,
missing_425,
missing_426,
missing_427,
missing_428,
missing_429,
missing_430,
missing_431,
missing_432,
missing_433,
missing_434,
missing_435,
missing_436,
missing_437,
missing_438,
missing_439,
missing_440,
missing_441,
missing_442,
missing_443,
missing_444,
missing_445,
missing_446,
missing_447,
missing_448,
missing_449,
missing_450,
missing_451,
missing_452,
missing_453,
missing_454,
missing_455,
missing_456,
missing_457,
missing_458,
missing_459,
missing_460,
missing_461,
missing_462,
missing_463,
missing_464,
missing_465,
missing_466,
missing_467,
missing_468,
missing_469,
missing_470,
missing_471,
missing_472,
missing_473,
missing_474,
missing_475,
missing_476,
missing_477,
missing_478,
missing_479,
missing_480,
missing_481,
missing_482,
missing_483,
missing_484,
missing_485,
missing_486,
missing_487,
missing_488,
missing_489,
missing_490,
missing_491,
missing_492,
missing_493,
missing_494,
missing_495,
missing_496,
missing_497,
missing_498,
missing_499,
missing_500,
missing_501,
missing_502,
missing_503,
missing_504,
missing_505,
missing_506,
missing_507,
missing_508,
missing_509,
missing_510,
missing_511,
missing_512,
missing_513,
missing_514,
missing_515,
missing_516,
missing_517,
missing_518,
missing_519,
missing_520,
missing_521,
missing_522,
missing_523,
missing_524,
missing_525,
missing_526,
missing_527,
missing_528,
missing_529,
missing_530,
missing_531,
missing_532,
missing_533,
missing_534,
missing_535,
missing_536,
missing_537,
missing_538,
missing_539,
missing_540,
missing_541,
missing_542,
missing_543,
missing_544,
missing_545,
missing_546,
};
