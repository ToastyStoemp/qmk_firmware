#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_60_all(
        KC_LEFT, KC_UP, KC_RGHT, KC_ENT,
        KC_DOWN
    ),

    [1] = LAYOUT_60_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS
    ),

    [2] = LAYOUT_60_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS
    ),

    [3] = LAYOUT_60_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS
    )
};
