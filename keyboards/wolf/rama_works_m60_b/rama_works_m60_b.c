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
#include "rama_works_m60_b.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { 
{
    { 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 61 },
    { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 },
    { 0, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 60, 15 },
    { 46, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, NO_LED, 37, 38 },
    { NO_LED, 45, 44, 43, NO_LED, NO_LED, 42, NO_LED, NO_LED, 41, NO_LED, 40, 39, NO_LED }
}, 
{
    // LED Index to Physical Position
    {7, 32}, {4, 16}, {26, 16}, {44, 16}, {61, 16}, {78, 16}, {96, 16}, {113, 16}, {131, 16}, {148, 16}, 
    {166, 16}, {183, 16}, {200, 16}, {218, 16}, {240, 16}, {233, 32}, {205, 32}, {187, 32}, {170, 32}, {153, 32}, 
    {135, 32}, {118, 32}, {100, 32}, {83, 32}, {65, 32}, {48, 32}, {31, 32}, {39, 48}, {57, 48}, {74, 48}, 
    {91, 48}, {109, 48}, {126, 48}, {144, 48}, {161, 48}, {179, 48}, {196, 48}, {220, 48}, {244, 48}, {218, 64}, 
    {196, 64}, {174, 60}, {122, 64}, {70, 60}, {48, 64}, {26, 64}, {11, 48}, {0, 0}, {17, 0}, {35, 0}, 
    {52, 0}, {70, 0}, {87, 0}, {105, 0}, {122, 0}, {139, 0}, {157, 0}, {174, 0}, {192, 0}, {209, 0}, 
    {227, 0}, {244, 0}
}, 
{
    // LED Index to Flag
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4,
       4, 4, 4,       4,       4,    4, 4
} };
#endif

#if defined(VIA_ENABLE) && defined(VIA_CUSTOM_LIGHTING_ENABLE)

// VIA supports only 4 discrete values for effect speed; map these to some
// useful speed values for RGB Matrix.
enum speed_values {
    RGBLIGHT_SPEED_0 = UINT8_MAX / 16, // not 0 to avoid really slow effects
    RGBLIGHT_SPEED_1 = UINT8_MAX / 4,
    RGBLIGHT_SPEED_2 = UINT8_MAX / 2,     // matches the default value
    RGBLIGHT_SPEED_3 = UINT8_MAX / 4 * 3, // UINT8_MAX is really fast
};

static uint8_t speed_from_rgblight(uint8_t rgblight_speed) {
    switch (rgblight_speed) {
        case 0:
            return RGBLIGHT_SPEED_0;
        case 1:
            return RGBLIGHT_SPEED_1;
        case 2:
        default:
            return RGBLIGHT_SPEED_2;
        case 3:
            return RGBLIGHT_SPEED_3;
    }
}

static uint8_t speed_to_rgblight(uint8_t rgb_matrix_speed) {
    if (rgb_matrix_speed < ((RGBLIGHT_SPEED_0 + RGBLIGHT_SPEED_1) / 2)) {
        return 0;
    } else if (rgb_matrix_speed < ((RGBLIGHT_SPEED_1 + RGBLIGHT_SPEED_2) / 2)) {
        return 1;
    } else if (rgb_matrix_speed < ((RGBLIGHT_SPEED_2 + RGBLIGHT_SPEED_3) / 2)) {
        return 2;
    } else {
        return 3;
    }
}

void raw_hid_receive_kb(uint8_t *data, uint8_t length) {
    switch (data[0]) {
        case id_lighting_get_value:
            if (data[1] == id_qmk_rgblight_effect_speed) {
                data[2] = speed_to_rgblight(rgb_matrix_get_speed());
            }
            break;
        case id_lighting_set_value:
            if (data[1] == id_qmk_rgblight_effect_speed) {
                rgb_matrix_set_speed_noeeprom(speed_from_rgblight(data[2]));
            }
            break;
    }
}

#endif // defined(VIA_ENABLE) && defined(VIA_CUSTOM_LIGHTING_ENABLE)