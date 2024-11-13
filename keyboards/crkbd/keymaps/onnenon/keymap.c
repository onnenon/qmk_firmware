/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H

enum combos {
    COMBO_ESC,
    COMBO_TAB,
    COMBO_BSPC,
};

enum layer_names { BASE, NUM, SYM, NAV, MOU, FN, MEDIA };

const uint16_t PROGMEM combo_ent[]  = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_tab[]  = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_bspc[] = {KC_E, KC_R, COMBO_END};

combo_t key_combos[] = {
    [COMBO_ESC]  = COMBO(combo_ent, KC_ENT),
    [COMBO_TAB]  = COMBO(combo_tab, KC_TAB),
    [COMBO_BSPC] = COMBO(combo_bspc, KC_BSPC),
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_split_3x5_3(
    KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,
    LGUI_T(KC_A),       LALT_T(KC_S),       LCTL_T(KC_D),       LSFT_T(KC_F),       KC_G,           KC_H,           LSFT_T(KC_J),   LCTL_T(KC_K),   LALT_T(KC_L),   LGUI_T(KC_QUOT),
    KC_Z,               KC_X,               KC_C,               KC_V,               KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,
                                            LT(MEDIA,KC_ESC),   LT(NAV,KC_SPC),     LT(MOU,KC_TAB), LT(SYM,KC_ENT), LT(NUM,KC_BSPC),LT(FN,KC_DEL)
),

[SYM] = LAYOUT_split_3x5_3(
    KC_LCBR,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RCBR,           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,
    KC_COLN,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_PLUS,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,
    KC_TILD,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,
                                          KC_LPRN,           KC_RPRN,           KC_UNDS,           U_NA,              U_NA,              U_NA
)
};
