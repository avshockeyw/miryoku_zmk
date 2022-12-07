// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

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
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
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
&kp TAB,    &kp Q,         &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,           &kp I,             &kp O,             &kp P,            &kp BSPC,       \
&kp LCTRL,  &kp A,         &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,           &kp K,             &kp L,             &kp SEMI,         &kp SQT,        \
&kp LSHFT,  &kp Z,         &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,           &kp COMMA,         &kp DOT,           &kp SLASH,        &u_to_U_BASE,   \
U_NP,       U_NP,          U_NP,              U_NP,              &kp ESC,           &kp RET,           &kp SPACE,         &kp BSPC,        &kp DEL,           U_NP,              U_NP,             U_NP 

#define MIRYOKU_LAYER_EXTRA \
&kp TAB,    &kp Q,         &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,           &kp I,             &kp O,             &kp P,            &kp BSPC,       \
&kp LCTRL,  &kp A,         &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,           &kp K,             &kp L,             &kp SEMI,         &kp SQT,        \
&kp LSHFT,  &kp Z,         &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,           &kp COMMA,         &kp DOT,           &kp SLASH,        &u_to_U_BASE,   \
U_NP,       U_NP,          U_NP,              U_NP,              &kp ESC,           &kp RET,           &kp SPACE,         &kp BSPC,        &kp DEL,           U_NP,              U_NP,             U_NP 

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
&kp TAB,    &kp Q,         &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,           &kp I,             &kp O,             &kp P,            &kp BSPC,       \
&kp LCTRL,  &kp A,         &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,           &kp K,             &kp L,             &kp SEMI,         &kp SQT,        \
&kp LSHFT,  &kp Z,         &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,           &kp COMMA,         &kp DOT,           &kp SLASH,        &u_to_U_BASE,   \
U_NP,       U_NP,          U_NP,              U_NP,              &kp ESC,           &kp RET,           &kp SPACE,         &kp BSPC,        &kp DEL,           U_NP,              U_NP,             U_NP 

#define MIRYOKU_LAYER_NUM \
&kp TAB,    &kp Q,         &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,           &kp I,             &kp O,             &kp P,            &kp BSPC,       \
&kp LCTRL,  &kp A,         &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,           &kp K,             &kp L,             &kp SEMI,         &kp SQT,        \
&kp LSHFT,  &kp Z,         &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,           &kp COMMA,         &kp DOT,           &kp SLASH,        &u_to_U_BASE,   \
U_NP,       U_NP,          U_NP,              U_NP,              &kp ESC,           &kp RET,           &kp SPACE,         &kp BSPC,        &kp DEL,           U_NP,              U_NP,             U_NP 

#define MIRYOKU_LAYER_SYM \
&kp TAB,    &kp Q,         &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,           &kp I,             &kp O,             &kp P,            &kp BSPC,       \
&kp LCTRL,  &kp A,         &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,           &kp K,             &kp L,             &kp SEMI,         &kp SQT,        \
&kp LSHFT,  &kp Z,         &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,           &kp COMMA,         &kp DOT,           &kp SLASH,        &u_to_U_BASE,   \
U_NP,       U_NP,          U_NP,              U_NP,              &kp ESC,           &kp RET,           &kp SPACE,         &kp BSPC,        &kp DEL,           U_NP,              U_NP,             U_NP 

#define MIRYOKU_LAYER_FUN \
&kp TAB,    &kp Q,         &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,           &kp I,             &kp O,             &kp P,            &kp BSPC,       \
&kp LCTRL,  &kp A,         &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,           &kp K,             &kp L,             &kp SEMI,         &kp SQT,        \
&kp LSHFT,  &kp Z,         &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,           &kp COMMA,         &kp DOT,           &kp SLASH,        &u_to_U_BASE,   \
U_NP,       U_NP,          U_NP,              U_NP,              &kp ESC,           &kp RET,           &kp SPACE,         &kp BSPC,        &kp DEL,           U_NP,              U_NP,             U_NP 
