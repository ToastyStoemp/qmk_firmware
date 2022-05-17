/*
Copyright 2018 Cole Markham

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        RGB_MOD,   KC_F,   KC_G,   KC_H,   KC_MINUS,
        KC_B,      KC_7,   KC_8,   KC_9,   
        KC_C,      KC_4,   KC_5,   KC_6,   KC_PLUS,
        KC_D,      KC_1,   KC_2,   KC_3,   
        KC_E,      KC_0,           KC_DOT, KC_ENT
    ),

    [1] = LAYOUT(
        RGB_MOD,   KC_F,   KC_G,   KC_H,   KC_MINUS,
        KC_B,      KC_7,   KC_8,   KC_9,   
        KC_C,      KC_4,   KC_5,   KC_6,   KC_PLUS,
        KC_D,      KC_1,   KC_2,   KC_3,   
        KC_E,      KC_0,           KC_DOT, KC_ENT
    )
};

bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) return false;
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
    return true;
}