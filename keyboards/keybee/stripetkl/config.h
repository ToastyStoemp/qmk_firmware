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
#define VENDOR_ID    0x6265 // KeyBee
#define PRODUCT_ID   0x0002 // StripeTKL
#define DEVICE_VER   0x0001 // Version 1
#define MANUFACTURER    KeyBee
#define PRODUCT         StripeTKL

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 10

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *         ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*/

// Checked with Eagle Schematic
#define MATRIX_ROW_PINS { B2, B1, C7, D2, C4, D3, B5, B6, B4, D4, D7, D6 }
#define MATRIX_COL_PINS { B0, E6, F0, F1, F4, F5, F6, F7, D5, B7 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN B3
// The number of LEDs connected
#define RGBLED_NUM 3
#define RGBLIGHT_ANIMATIONS

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
