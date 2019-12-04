/* Copyright 2019 Henning Marxen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef S01_H
#define S01_H

#include "quantum.h"

/* S01 matrix layout
 * ,---------------.
 * | 00| 01| 02| 03|
 * |---------------|
 * | 04| 05| 06| 07|
 * |---------------|
 * | 08| 09| 10| 11|
 * |---------------|
 * | 12| 13| 14| 15|
 * |---------------|
 * | 16| 17| 18| 19|
 * `---------------'
 * ,---------------.
 * |Num|  /|  *|  -|
 * |---------------|
 * |  7|  8|  9|  +|
 * |-----------|   |
 * |  4|  5|  6|   |
 * |---------------|
 * |  1|  2|  3|Ent|
 * |-----------|   |
 * |      0|  ,|   |
 * `---------------'
 * ,---------------.
 * |  1|  2|  3|  4|
 * |---------------|
 * |  5|  6|  7|  8|
 * |---------------|
 * |  9| 10| 11| 12|
 * |---------------|
 * | 13| 14| 15| 16|
 * |---------------|
 * | 17| 18| 19| 20|
 * `---------------' 
 */

// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define LAYOUT( \
    k00, k01, k02, k03, \
	k10, k11, k12, k13, \
	k20, k21, k22, k23, \
	k30, k31, k32, k33, \
	k40, k41, k42, k43  \
) \
{ \
    { k00, k01, k02, k03 }, \
	{ k10, k11, k12, k13 }, \
    { k20, k21, k22, k23 }, \
	{ k30, k31, k32, k33 }, \
    { k40, k41, k42, k43 }  \
}
#define KEYMAP LAYOUT

#define LAYOUT_numpad(  \
    k00, k01, k02, k03, \
	k10, k11, k12, k13, \
	k20, k21, k22,      \
	k30, k31, k32, k33, \
	k40,      k42       \
) \
{ \
    { k00, k01,   k02, k03   }, \
	{ k10, k11,   k12, k13   }, \
    { k20, k21,   k22, KC_NO }, \
	{ k30, k31,   k32, k33   }, \
    { k40, KC_NO, k42, KC_NO }  \
}

#define LAYOUT_macropad(\
    k00, k01, k02, k03, \
	k10, k11, k12, k13, \
	k20, k21, k22, k23, \
	k30, k31, k32, k33, \
	k40, k41, k42, k43  \
) \
{ \
    { k00, k01, k02, k03 }, \
	{ k10, k11, k12, k13 }, \
    { k20, k21, k22, k23 }, \
	{ k30, k31, k32, k33 }, \
    { k40, k41, k42, k43 }  \
}

#endif