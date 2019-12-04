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

#ifndef S01_CONFIG_H
#define S01_CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0x352E
#define PRODUCT_ID      0xFC6B
#define DEVICE_VER      0x0001
#define MANUFACTURER    PROTO_TYPE
#define PRODUCT         SO1
#define DESCRIPTION     Numpad

#define MATRIX_ROWS 5
#define MATRIX_COLS 4
#undef MATRIX_ROW_PINS
#undef MATRIX_COL_PINS
#define MATRIX_ROW_PINS { B7, C6, C4, C7, C5 }			/* B6, C6, C4, C7, C5 */
#define MATRIX_COL_PINS { B0, B4, B5, B6 }				/* B0, B3, B4, B5 */
#define UNUSED_PINS { B1, B2, B3, D1, D3, D4, D5, D6 }	/* C2, B1, B2, D1, D3, D4, D5, D6 */

#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PIN D0
#define BACKLIGHT_LEVELS 5
#define BACKLIGHT_BREATHING
#define BACKLIGHT_ON_STATE 1

#define RGB_DI_PIN D2
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 4

#endif