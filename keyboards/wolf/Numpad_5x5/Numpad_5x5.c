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

#include "Numpad_5x5.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { 
{
    { NO_LED, 0, 1, 2, 3     },
    { 4, 5, 6, 7, NO_LED     },
    { 8, 9, 10, 11, 12       },
    { 13, 14, 15, 16, NO_LED },
    { 17, 18, NO_LED, 19, 20 }
}, 
{
  // LED Index to Physical Position
  {61, 8}, {122, 8}, {183, 0}, {244, 0}, {0, 22}, {61, 22}, {122, 22}, {183, 22}, {0, 36}, {61, 36}, 
  {122, 36}, {183, 36}, {244, 29}, {0, 50}, {61, 50}, {122, 50}, {183, 50}, {0, 64}, {92, 64}, {183, 64}, 
  {244, 57}
}, 
{
  // LED Index to Flag
     4, 4, 4, 4,
  4, 4, 4, 4, 
  4, 4, 4, 4, 4,
  4, 4, 4, 4,
  4, 4, 4,    4,
} };