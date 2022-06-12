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
#include "morpheus.h"

#ifdef RGB_MATRIX_ENABLE
    led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        { 47, NO_LED, 48,     49,     50, 51,     52,     53,     54,     55, 56,     57,     58,     59,     60,    61,      62 }, 	 //count:16
        { 46,     45, 44,     43,     42, 41,     40,     39,     38,     37, 36,     35,     34,     33,     32,    31,      30 }, 	 //count:16
        { 13,     14, 15,     16,     17, 18,     19,     20,     21,     22, 23,     24,     25,     26,     27,    28,      29 }, 	 //count:17
        { 12,     11, 10,      9,      8,  7,      6,      5,      4,      3,  2,      1, NO_LED,      0, NO_LED, NO_LED, NO_LED }, 	 //count:12
        { 73,     74, 75,     76,     77, 78,     79,     80,     81,     82, 83, NO_LED,     84, NO_LED, NO_LED,     85, NO_LED }, 	 //count:13
        { 72,     71, 70, NO_LED, NO_LED, 69, NO_LED, NO_LED, NO_LED, NO_LED, 68, NO_LED,     67,      66,    65,     64,     63 }, 	 //count:10
    }, {
        // LED Index to Physical Position
        {186, 40}, {163, 40}, {150, 40}, {136, 40}, {122, 40}, {108, 40}, {95, 40}, {81, 40}, {67, 40}, {54, 40}, 
        {40, 40}, {26, 40}, {0, 41}, {5, 27}, {23, 27}, {36, 27}, {50, 27}, {64, 27}, {78, 27}, {91, 27}, 
        {105, 27}, {119, 27}, {133, 27}, {146, 27}, {160, 27}, {174, 27}, {191, 27}, {211, 27}, {225, 27}, {239, 27}, 
        {239, 15}, {225, 15}, {211, 15}, {187, 17}, {167, 15}, {153, 15}, {139, 15}, {126, 15}, {112, 15}, {98, 15}, 
        {84, 15}, {71, 15}, {57, 15}, {43, 15}, {30, 15}, {16, 15}, {2, 15}, {2, 0}, {30, 0}, {43, 0}, 
        {57, 0}, {71, 0}, {91, 0}, {105, 0}, {119, 0}, {133, 0}, {153, 0}, {167, 0}, {181, 0}, {194, 0}, 
        {211, 0}, {225, 0}, {239, 0}, {239, 64}, {225, 64}, {211, 64}, {191, 64}, {174, 64}, {157, 64}, {98, 64}, 
        {40, 64}, {23, 64}, {5, 64}, {11, 52}, {33, 52}, {47, 52}, {60, 52}, {74, 52}, {88, 52}, {102, 52}, 
        {115, 52}, {129, 52}, {143, 52}, {157, 52}, {182, 52}, {225, 52}, {241, 34}, {241, 39}, {244, 39}, {244, 34}
    }, {
        // LED Index to Flag
        1,    4, 4, 4, 4, 1, 1, 1, 1, 4, 4, 4, 4,    1, 1, 1, 
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    1, 1, 1, 
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    1, 1, 1, 
        9, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,    
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,          1,
        1, 1, 1,       4,             1,    1, 1,    1, 1, 1,

        2, 2, 2, 2
    }
};
#endif
