/*
Copyright 2020 <contact@vwolf.be>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0x5453 // TS - ToastyStoemp
#define PRODUCT_ID   0x0051 // KeebiKeys75
#define DEVICE_VER   0x0001 // Version 1
#define MANUFACTURER    ToastyStoemp
#define PRODUCT         KeebiKeys75

/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 16

// Checked with Eagle Schematic
#define MATRIX_ROW_PINS { D6, D4, D5, D3, D1, D2, D0  }
#define MATRIX_COL_PINS { B4, B5, B6, C6, C7, F7, F6, F5, F4, F1, F0, B0, B1, B2, B3, E6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define DYNAMIC_KEYMAP_LAYER_COUNT 3

/* Define Perkey RGB */
#define RGB_DI_PIN B7
#define DRIVER_LED_TOTAL 82

#define RGBLIGHT_LIMIT_VAL 36
#define RGB_VAL_STEP 6

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#endif

/* disable action features */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
