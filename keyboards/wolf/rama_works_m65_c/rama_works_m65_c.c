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
#include "rama_works_m65_c.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { 
{
    { 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 67, 68 },
    { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 },
    { 0, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 66, 17, 16 },
    { 52, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, NO_LED, 39, 40, 41 },
    { 51, 50, 49, 48, NO_LED, NO_LED, 47, NO_LED, NO_LED, 46, 45, NO_LED, 44, 43, 42 }
}, 
{
    // LED Index to Physical Position
    {6, 32}, {4, 16}, {24, 16}, {41, 16}, {57, 16}, {73, 16}, {89, 16}, {106, 16}, {122, 16}, {138, 16}, 
    {155, 16}, {171, 16}, {187, 16}, {203, 16}, {224, 16}, {244, 16}, {244, 32}, {218, 32}, {191, 32}, {175, 32}, 
    {159, 32}, {142, 32}, {126, 32}, {110, 32}, {94, 32}, {77, 32}, {61, 32}, {45, 32}, {28, 32}, {37, 48}, 
    {53, 48}, {69, 48}, {85, 48}, {102, 48}, {118, 48}, {134, 48}, {150, 48}, {167, 48}, {183, 48}, {205, 48}, 
    {228, 48}, {244, 48}, {244, 64}, {228, 64}, {211, 64}, {183, 64}, {163, 60}, {114, 64}, {65, 60}, {45, 64}, 
    {24, 64}, {4, 64}, {10, 48}, {0, 0}, {16, 0}, {33, 0}, {49, 0}, {65, 0}, {81, 0}, {98, 0}, 
    {114, 0}, {130, 0}, {146, 0}, {163, 0}, {179, 0}, {195, 0}, {211, 0}, {228, 0}, {244, 0}
}, 
{
    // LED Index to Flag
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4, 4,
    4, 4, 4, 4,       4,       4, 4,    4, 4, 4
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