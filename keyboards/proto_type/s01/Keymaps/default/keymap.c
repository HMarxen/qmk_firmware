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

#include QMK_KEYBOARD_H

enum s01_layers {
  _NUMPAD,
  _BACKL,
};

enum s01_keycodes {
  DOUBLE = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Numpad
 * ,---------------------------------------------------------------------------.
 * | Num/FN           | /                | *                | -                |
 * |------------------+------------------+------------------+------------------|
 * | 7                | 8                | 9                | +                |
 * |------------------+------------------+------------------|- - - - - - - - - |
 * | 4                | 5                | 6                | +                |
 * |------------------+------------------+------------------+------------------|
 * | 1                | 2                | 3                | Enter            |
 * |------------------+------------------+------------------|- - - - - - - - - |
 * | 0                - 00               | .                | Enter            |
 * `---------------------------------------------------------------------------'
 */	
	
[_NUMPAD] = LAYOUT_macropad(
    LT(_BACKL,KC_NLCK),		KC_PSLS,	KC_PAST,	KC_PMNS,
    KC_P7,		KC_P8,		KC_P9,		KC_PPLS,
	KC_P4,		KC_P5,		KC_P6,		KC_PPLS,
    KC_P1,		KC_P2,		KC_P3,		KC_PENT,
    KC_P0,		DOUBLE,		KC_PDOT,	KC_PENT
),

/* Backlight
 * ,---------------------------------------------------------------------------.
 * |                  | Backspace        | Delete           | Backlight-       |
 * |------------------+------------------+------------------+------------------|
 * |                  | RGB Brightness-  | RGB Hue-         | Backlight+       |
 * |------------------+------------------+------------------|- - - - - - - - - |
 * |                  | RGB Brightness+  | RGB Hue+         | Backlight+       |
 * |------------------+------------------+------------------+------------------|
 * |                  | RGB Toggle       | RGB Modes        | Backlight Toggle |
 * |------------------+------------------+------------------|- - - - - - - - - |
 * | Calculator       -                  |                  | Backlight Toggle |
 * `---------------------------------------------------------------------------'
 */
[_BACKL] = LAYOUT_macropad(
    _______,	KC_BSPC,	KC_DEL,		BL_DEC,
    _______,	RGB_VAD,	RGB_HUD,	BL_INC,	
    _______,	RGB_VAI,	RGB_HUI,	BL_INC,
    _______,	RGB_TOG,	RGB_MOD,	BL_TOGG,
    KC_CALC,	_______,	_______,	BL_TOGG
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case DOUBLE:
      if (record->event.pressed) {
        SEND_STRING("00");
      }
      return false;
      break;
  }
  return true;
}


