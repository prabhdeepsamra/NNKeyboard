
#ifndef NNK_H
#define NNK_H

#include "quantum.h"
#define ___ KC_NO

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array



#define NoNut_LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, \
    K10, K11, K12, K13, K14, K15, K16, \
    K20, K21, K22, K23, K24, K25, K26, \
    K30, K31, K32, K33, K34, K35, K36, \
    K40, K41, K42, K43, K44, K45, K46 \
) \
{ \
    { K00, K01, K02, K03, K04, K05, K06}, \
    { K10, K11, K12, K13, K14, K15, K16}, \
    { K20, K21, K22, K23, K24, K25, K26}, \
    { K30, K31, K32, K33, K34, K35, K36}, \
    { K40, K41, K42, K43, K44, K45, K46} \
}



#endif
