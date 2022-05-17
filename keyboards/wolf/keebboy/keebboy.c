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
#include "keebboy.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { 
{
    { 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60 }, 	 //count:14
    { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 }, 	 //count:14
    { 0, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, NO_LED, 15 }, 	 //count:13
    { 46, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, NO_LED, 37, 38 }, 	 //count:13
    { 45, 44, 43, NO_LED, NO_LED, 42, NO_LED, NO_LED, NO_LED, NO_LED, 41, NO_LED, 40, 39 }, 	 //count:7
}, 
{
    // LED Index to Physical Position
    {7, 32}, {4, 16}, {26, 16}, {44, 16}, {61, 16}, {78, 16}, {96, 16}, {113, 16}, {131, 16}, {148, 16}, 
    {166, 16}, {183, 16}, {200, 16}, {218, 16}, {240, 16}, {233, 32}, {205, 32}, {187, 32}, {170, 32}, {153, 32}, 
    {135, 32}, {118, 32}, {100, 32}, {83, 32}, {65, 32}, {48, 32}, {31, 32}, {39, 48}, {57, 48}, {74, 48}, 
    {91, 48}, {109, 48}, {126, 48}, {144, 48}, {161, 48}, {179, 48}, {196, 48}, {220, 48}, {244, 48}, {240, 64}, 
    {218, 64}, {196, 64}, {122, 64}, {48, 64}, {26, 64}, {4, 64}, {11, 48}, {0, 0}, {17, 0}, {35, 0}, 
    {52, 0}, {70, 0}, {87, 0}, {105, 0}, {122, 0}, {139, 0}, {157, 0}, {174, 0}, {192, 0}, {209, 0}, {235, 0}
}, 
{
    // LED Index to Flag
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4, 4,
    4, 4, 4,       4,             4,    4, 4,

    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
} };
#endif