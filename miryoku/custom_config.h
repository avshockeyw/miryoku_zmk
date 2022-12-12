// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

//#define MIRYOKU_CLIPBOARD_MAC
#define MIRYOKU_CLIPBOARD_WIN

#define MIRYOKU_KLUDGE_DOUBLETAPBOOT
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

#define MIRYOKU_LAYOUTMAPPING_REVIUNG41( \
     K40, K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, K44, \
     K41, K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, K45, \
     K42, K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, K46, \
     N43, N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39, N47 \
 ) \
 K40  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  K44 \
 K41  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  K45 \
 K42  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  K46 \
                     K34  K33  K35  K37  K36
  #define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 36 37
  #define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40
     // based on orange keys:
     // primary thumbs: K33 K36
     // secondary thumbs: K34 K35
     // tertiary thumbs: K32 K37
#define MIRYOKU_KLUDGE_THUMBCOMBOS
#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_REVIUNG41

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Colemak-DH") \
MIRYOKU_X(EXTRA,  "QWERTY") \
MIRYOKU_X(TAP,    "Game") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_NAV    3
#define U_MOUSE  4
#define U_MEDIA  5
#define U_NUM    6
#define U_SYM    7
#define U_FUN    8

#define U_BUTTON U_MOUSE

#define MIRYOKU_LAYER_BASE \
&kp TAB,    &kp Q,         &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,           &kp U,             &kp Y,             &kp SQT,          &kp BSPC,       \
&kp LCTRL,  U_MT(LGUI, A), U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),  U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),    &kp SEMI        \
&kp LSHFT,  &kp Z,         &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,           &kp COMMA,         &kp DOT,           &kp SLASH,        &u_to_U_BASE,   \
U_NP,       U_NP,          U_NP,              U_NP,              U_LT(U_MOUSE,ESC), U_LT(U_NAV,RET),   &kp BSPC,          U_LT(U_NUM,SPACE),U_LT(U_SYM,DEL),  U_NP,              U_NP,             U_NP 

#define MIRYOKU_LAYER_EXTRA \
&kp TAB,    &kp Q,         &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,           &kp I,             &kp O,             &kp P,            &kp BSPC,       \
&kp LCTRL,  U_MT(LGUI,A),  U_MT(LALT,S),      U_MT(LCTRL,D),     U_MT(LSHFT,F),     &kp G,             &kp H,             U_MT(LSHFT,J),   U_MT(LCTRL,K),     U_MT(LALT,L),      U_MT(LGUI,SEMI),  &kp SQT,        \
&kp LSHFT,  &kp Z,         &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,           &kp COMMA,         &kp DOT,           &kp SLASH,        &u_to_U_BASE,   \
U_NP,       U_NP,          U_NP,              U_NP,              U_LT(U_MOUSE,ESC), U_LT(U_NAV,RET),   &kp BSPC,          U_LT(U_NUM,SPACE),U_LT(U_SYM,DEL),  U_NP,              U_NP,             U_NP 

#define MIRYOKU_LAYER_TAP \
&kp TAB,    &kp Q,         &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,           &kp I,             &kp O,             &kp P,            &kp BSPC,       \
&kp LCTRL,  &kp A,         &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,           &kp K,             &kp L,             &kp SEMI,         &kp SQT,        \
&kp LSHFT,  &kp Z,         &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,           &kp COMMA,         &kp DOT,           &kp SLASH,        &u_to_U_BASE,   \
U_NP,       U_NP,          U_NP,              U_NP,              &kp ESC,           &kp RET,           &kp SPACE,         &kp BSPC,        &kp DEL,           U_NP,              U_NP,             U_NP 

#define MIRYOKU_LAYER_NAV \
U_NA,       U_BOOT,        &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      &kp C_VOL_UP,      U_RDO,             U_PST,           U_CPY,             U_CUT,             U_UND,            U_NA,           \
U_NA,       &kp LGUI,      &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp C_VOL_DN,      &u_caps_word,      &kp LEFT,        &kp DOWN,          &kp UP,            &kp RIGHT,        U_NA,           \
U_NA,       U_NA,          &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       &kp C_MUTE,        &kp INS,           &kp HOME,        &kp PG_DN,         &kp PG_UP,         &kp END,          U_NA,           \
U_NP,       U_NP,          U_NP,              U_NP,              U_NA,              U_NA,              &kp BSPC,          &kp SPACE,       &kp DEL,           U_NP,              U_NP,             U_NP

#define MIRYOKU_LAYER_MOUSE \
U_NA,       U_BOOT,        &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      &kp C_VOL_UP,      U_RDO,             U_PST,           U_CPY,             U_CUT,             U_UND,            U_NA,           \
U_NA,       &kp LGUI,      &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp C_VOL_DN,      U_NU,              U_MS_L,          U_MS_D,            U_MS_U,            U_MS_R,           U_NA,           \
U_NA,       U_NA,          &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     &kp C_MUTE,        U_NU,              U_WH_L,          U_WH_D,            U_WH_U,            U_WH_R,           U_NA,           \
U_NP,       U_NP,          U_NP,              U_NP,              U_NA,              U_NA,              U_BTN1,            U_BTN2,          U_BTN3,            U_NP,              U_NP,             U_NP

#define MIRYOKU_LAYER_MEDIA \
U_NA,       U_BOOT,        &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      &kp C_VOL_UP,      U_RGB_TOG,         U_RGB_EFF,       U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,        U_NA,           \
U_NA,       &kp LGUI,      &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp C_VOL_DN,      U_EP_TOG,          &kp C_PREV,      &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,       U_NA,           \
U_NA,       U_NA,          &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     &kp C_MUTE,        &u_out_tog,        &u_bt_sel_0,     &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,      U_NA,           \
U_NP,       U_NP,          U_NP,              U_NP,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,        &kp C_MUTE,        U_NP,              U_NP,             U_NP

#define MIRYOKU_LAYER_NUM \
U_NA,       &kp GRAVE,     U_NU,              &kp MINUS,         &kp EQL,           &kp BSLH,          &kp C_VOL_UP,      &u_to_U_BASE,    &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,           U_NA,           \
U_NA,       &kp NUM_6,     &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp NUM_0,         &kp C_VOL_DN,      &kp LSHFT,       &kp LCTRL,         &kp LALT,          &kp LGUI,         U_NA,           \
U_NA,       &kp NUM_1,     &kp NUM_2,         &kp NUM_3,         &kp NUM_4,         &kp NUM_5,         &kp C_MUTE,        &u_to_U_NUM,     &u_to_U_NAV,       &kp RALT,          U_NA,             U_NA,           \
U_NP,       U_NP,          U_NP,              U_NP,              &kp LBKT,          &kp RBKT,          &kp BSPC,          U_NA,            U_NA,              U_NP,              U_NP,             U_NP

#define MIRYOKU_LAYER_SYM \
U_NA,       &kp TILDE,     U_NU,              &kp UNDER,         &kp PLUS,          &kp PIPE,          &kp C_VOL_UP,      &u_to_U_BASE,    &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,           U_NA,           \
U_NA,       &kp CARET,     &kp AMPS,          &kp STAR,          &kp LPAR,          &kp RPAR,          &kp C_VOL_DN,      &kp LSHFT,       &kp LCTRL,         &kp LALT,          &kp LGUI,         U_NA,           \
U_NA,       &kp EXCL,      &kp AT,            &kp HASH,          &kp DOLLAR,        &kp PRCNT,         &kp C_MUTE,        &u_to_U_SYM,     &u_to_U_MOUSE,     &kp RALT,          U_NA,             U_NA,           \
U_NP,       U_NP,          U_NP,              U_NP,              &kp LBRC,          &kp RBRC,          &kp BSPC,          U_NA,            U_NA,              U_NP,              U_NP,             U_NP

#define MIRYOKU_LAYER_FUN \
U_NA,       &kp F11,       &kp F12,           &kp PSCRN,         &kp SLCK,          &kp PAUSE_BREAK,   &kp C_VOL_UP,      &u_to_U_BASE,    &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,           U_NA,           \
U_NA,       &kp F6,        &kp F7,            &kp F8,            &kp F9,            &kp F10,           &kp C_VOL_DN,      &kp LSHFT,       &kp LCTRL,         &kp LALT,          &kp LGUI,         U_NA,           \
U_NA,       &kp F1,        &kp F2,            &kp F3,            &kp F4,            &kp F5,            &kp C_MUTE,        &u_to_U_FUN,     &u_to_U_MEDIA,     &kp RALT,          U_NA,             U_NA,           \
U_NP,       U_NP,          U_NP,              U_NP,              &kp ESC,           &kp RET,           &kp BSPC,          U_NA,            U_NA,              U_NP,              U_NP,             U_NP 
