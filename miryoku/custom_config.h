// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_REVIUNG41)

  #define XXX &none

  #if defined MIRYOKU_LAYERS_FLIP

    #define MIRYOKU_LAYOUTMAPPING_REVIUNG41( \
     K40, K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, K44, \
     K41, K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, K45, \
     K42, K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, K46, \
     N43, N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39, N47 \
 ) \
 K40  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  K44\
 K41  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  K45 \
 K42  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K46 \
                     K32  K33  K34  K36  K35

    #define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40

  #else

    #define MIRYOKU_LAYOUTMAPPING_REVIUNG41( \
     K40, K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, K44, \
     K41, K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, K45, \
     K42, K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, K46, \
     N43, N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39, N47 \
 ) \
 K40  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  K44 \
 K41  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  K45 \
 K42  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K46 \
                     K34  K33  K37  K36  K35
  #define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 36 37
  #define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40

	// based on orange keys:
	// primary thumbs: K33 K36
	// secondary thumbs: K34 K35
	// tertiary thumbs: K32 K37


  #endif

  #define MIRYOKU_KLUDGE_THUMBCOMBOS
#endif

#define MIRYOKU_LAYER_BASE \
&kp TAB,	  &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,           &kp U,             &kp I,             &kp O,             &kp P,					&kp BSPC, \
&kp LCTRL,	U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,           U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),		&kp SQT,  \
&kp LSHFT,	U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,           &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),	U_LT(RET,RSHFT),\
U_NP,		    U_NP,			         U_NP,              U_NP, 	           U_LT(U_MOUSE, ESC),U_LT(U_NAV, RET),  &kp BSPC,		U_LT(U_NUM, SPACE),U_LT(U_SYMs, DEL),  U_NP,  			 U_NP,             		U_NP

#define MIRYOKU_ALTERNATIVES_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP
