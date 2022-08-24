#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_5(
        KC_LEFT, KC_UP, KC_RGHT, KC_ENT,
        KC_DOWN
    ),

    [1] = LAYOUT_5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS
    ),

    [2] = LAYOUT_5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS
    ),

    [3] = LAYOUT_5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS
    )
};
