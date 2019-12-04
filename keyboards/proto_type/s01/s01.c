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

#include "s01.h"

//Define NUMLOCK LED pin
void keyboard_pre_init_user(void) {
  setPinOutput(C2);
}

//Make the NUMLOCK LED check if NUM is locked
bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(C2, led_state.num_lock);/* B7 */
    }
    return res;
}

void matrix_init_kb(void) {
	matrix_init_user();
}

void matrix_scan_kb(void) {
	matrix_scan_user();
}