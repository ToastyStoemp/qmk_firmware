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
#include "keebikeys75.h"


led_config_t g_led_config  = { {
  // Key Matrix to LED Index
  {      0,      1,      2,      3,      4, NO_LED,      5,      6,      7,      8,      9,     10,     11,     12,     13,     14 },
  {     29,     28,     27,     26,     25,     24,     23,     22,     21,     20,     19,     18,     17, NO_LED,     16,     15 },
  {     30, NO_LED,     31,     32,     33,     34,     35,     36,     37,     38,     39,     40,     41,     42,     43,     44 },
  {     58, NO_LED,     57,     56,     55,     54,     53,     52,     51,     50,     49,     48,     47,     46, NO_LED,     45 },
  { NO_LED,     59,     60,     61,     62,     63,     64,     65,     66,     67,     68,     69, NO_LED,     70, NO_LED,     72 },
  {     81,     80, NO_LED,     79, NO_LED, NO_LED,     78, NO_LED, NO_LED, NO_LED,     77,     76, NO_LED, NO_LED,     71, NO_LED },
  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED,     75,     74,     73 }
}, {
  // LED Index to Physical Position
    {10, 7}, {27, 7}, {41, 7}, {56, 7}, {70, 7}, {90, 7}, {105, 7}, {120, 7}, {135, 7}, {153, 7}, {168, 7}, {182, 7}, {197, 7}, {215, 7}, {234, 7},
    {8, 19}, {22, 19}, {38, 19}, {52, 19}, {67, 19}, {82, 19}, {96, 19}, {112, 19}, {126, 19}, {142, 19}, {156, 19}, {171, 19}, {185, 19}, {208, 19}, {234, 19},
    {11, 29}, {28, 29}, {44, 29}, {57, 29}, {74, 29}, {88, 29}, {103, 29}, {118, 29}, {132, 29}, {147, 29}, {162, 29}, {177, 29}, {191, 29}, {211, 29}, {232, 29},
    {13, 39}, {32, 39}, {48, 39}, {63, 39}, {76, 39}, {92, 39}, {106, 39}, {122, 39}, {136, 39}, {152, 39}, {166, 39}, {180, 39}, {205, 39}, {233, 39},
    {18, 49}, {42, 49}, {56, 49}, {71, 49}, {86, 49}, {101, 49}, {115, 49}, {130, 49}, {145, 49}, {160, 49}, {175, 49}, {193, 49}, {234, 49},
    {10, 57}, {28, 57}, {47, 57}, {102, 57}, {158, 57}, {174, 57}, {215, 51}, 
    {200, 61}, {216, 61}, {230, 61}
}, {
  // LED Index to Flag
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 
    4, 4, 4
} };