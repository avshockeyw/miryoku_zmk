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