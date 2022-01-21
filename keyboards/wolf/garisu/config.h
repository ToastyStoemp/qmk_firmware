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
#define VENDOR_ID    0x5453 // TS - ToastyStoemp - Wolf
#define PRODUCT_ID   0x0002 // Garisu
#define DEVICE_VER   0x0001 // Version 1
#define MANUFACTURER    Wolf
#define PRODUCT         Garisu

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

// Checked with Eagle Schematic
#define MATRIX_ROW_PINS { F1, F7, F6, F4, F5  }
#define MATRIX_COL_PINS { E6, F0, C7, C6, B6, B5, B4, D7, D6, D4, D5, D3, D2, D1, D0, B7 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Define RGB Underglow */
#define RGB_DI_PIN B0
#define RGBLED_NUM 19
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_SLEEP


/* disable action features */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
