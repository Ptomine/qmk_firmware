#pragma once

#include "../tomahawk.h"

#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT( \
  L01, L02, L03, L04, L05, L06,                          R01, R02, R03, R04, R05, R06, R07, \
  L11, L12, L13, L14, L15, L16,                          R11, R12, R13, R14, R15, R16, R17, \
  L21, L22, L23, L24, L25, L26,                          R21, R22, R23, R24, R25, R26, R27, \
  L31, L32, L33, L34, L35, L36, L17, L27,      R20, R10, R31, R32, R33, R34, R35, R36, \
                 L44, L45, L46, L47, L37,      R30, R40, R41, R42, R43 \
) \
{ \
    { KC_NO, L01,   L02,   L03,   L04,   L05,   L06,   KC_NO }, \
    { KC_NO, L11,   L12,   L13,   L14,   L15,   L16,   L17   }, \
    { KC_NO, L21,   L22,   L23,   L24,   L25,   L26,   L27   }, \
    { KC_NO, L31,   L32,   L33,   L34,   L35,   L36,   L37   }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, L44,   L45,   L46,   L47   }, \
    { R07,   R06,   R05,   R04,   R03,   R02,   R01,   KC_NO }, \
    { R17,   R16,   R15,   R14,   R13,   R12,   R11,   R10   }, \
    { R27,   R26,   R25,   R24,   R23,   R22,   R21,   R20   }, \
    { KC_NO, R36,   R35,   R34,   R33,   R32,   R31,   R30   }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, R43,   R42,   R41,   R40   }  \
}
