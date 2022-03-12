#pragma once

#include "quantum.h"

#define XXX KC_NO 



/*K4C = key rt. to the F12 key*/

#define LAYOUT_smol_space(\
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K3C, K0D, K0E, K0F, K0G, K0H, K0I, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1D, K1E, K1F, K1G, K1H, K1I, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,      K2D, K2E, K2F, K2G, K2H, K2I, \
  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,           K3D, K3E, K3F, K3G, K3H, K3I, \
  K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B,           K4D, K4E, K4F, K4G, K4H,      \
  K50, K51, K52, K53,      K55,      K57, K58, K59, K5A, K5B,           K5D, K5E,      K5G, K5H       \
)  {\
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, K3I }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, XXX, K4D, K4E, K4F, K4G, K4H, XXX }, \
    { K50, K51, K52, K53, XXX, K55, XXX, K57, K58, K59, K5A, K5B, XXX, K5D, K5E, XXX, K5G, K5H, XXX }, \
}

