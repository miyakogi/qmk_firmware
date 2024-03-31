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


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(  // Default (大西配列mod)
  //,--------------------------------------------------------------------------------.                                 ,--------------------------------------------------------------------------------.
       KC_TAB,         KC_Q,         KC_Y,         KC_U,       KC_COMM,        KC_DOT,                                            KC_F,          KC_W,         KC_R,         KC_L,         KC_P, KC_MINS,
  //|--------+-------------+-------------+-------------+--------------+--------------|                                 |--------------+--------------+-------------+-------------+-------------+--------|
         KC_Q, LGUI_T(KC_E), LALT_T(KC_I), LCTL_T(KC_A),  LSFT_T(KC_O),       KC_MINS,                                            KC_K,  RSFT_T(KC_T), RCTL_T(KC_N), RALT_T(KC_S), RGUI_T(KC_H),    KC_P,
  //|--------+-------------+-------------+-------------+--------------+--------------|                                 |--------------+--------------+-------------+-------------+-------------+--------|
      KC_LSFT,         KC_J,         KC_X,         KC_C,          KC_V,       KC_SLSH,                                            KC_G,          KC_D,         KC_M,         KC_Z,         KC_B, KC_BSPC,
  //|--------+-------------+-------------+-------------+--------------+--------------+--------------|  |---------------+--------------+--------------+-------------+-------------+-------------+--------|
                                                                KC_ESC, LT(4, KC_SPC), LT(5, KC_TAB),    LT(2, KC_ENT), LT(1, KC_BSPC),  LT(3, KC_DEL)
                                                     //`--------------------------------------------'  `----------------------------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(  // Num 1 (left hand)
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_SCLN,    KC_4,    KC_5,    KC_6,  KC_EQL,                      XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,  KC_GRV,    KC_1,    KC_2,    KC_3, KC_BSLS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_DOT,    KC_0, KC_QUOT,     KC_ENT, _______,  KC_ESC
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(  // Symbols (with shift)
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_COLN,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                      XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LPRN, KC_RPRN, KC_DQUO,    _______, _______,  KC_ESC
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(  // Function
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      RGB_HUI,  KC_F12,   KC_F7,   KC_F8,   KC_F9, KC_PSCR,                         KC_R,    KC_E,    KC_I,    KC_S,    KC_U,    KC_B,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_VAI,  KC_F11,   KC_F4,   KC_F5,   KC_F6, KC_SCRL,                      XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_SAI,  KC_F10,   KC_F1,   KC_F2,   KC_F3, KC_PAUS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            TG(6), _______,  KC_APP,     KC_ENT, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3(  // Nav (vim-like keymap) + Button
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, C(KC_A), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_Y),                       KC_INS, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  KC_SPC,     KC_ENT, _______,   TG(6)
                                      //`--------------------------'  `--------------------------'
  ),

    [5] = LAYOUT_split_3x6_3(  // Mouse (vim-like keymap) + Button
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_Y),                      XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    KC_BTN2, KC_BTN1, KC_BTN3
                                      //`--------------------------'  `--------------------------'
  ),

    [6] = LAYOUT_split_3x6_3(  // Gaming
  //,-----------------------------------------------------.                    ,----------------------------------------------------------------------------.
      XXXXXXX,  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,                         KC_Y,         KC_U,         KC_I,         KC_O,         KC_SCLN, KC_MINS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+-------------+-------------+-------------+----------------+--------|
      XXXXXXX, KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,                         KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+-------------+-------------+-------------+----------------+--------|
      XXXXXXX, KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,                         KC_N,         KC_M,      KC_COMM,       KC_DOT,         KC_SLSH, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+-------------+-------------+-------------+----------------+--------|
                                           KC_ESC,   MO(7),  KC_SPC,     KC_ENT, KC_BSPC,        TG(6)
                                      //`--------------------------'  `-------------------------------'

  ),

    [7] = LAYOUT_split_3x6_3(  // Gaming Number Layer
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,  KC_TAB,    KC_7,    KC_8,    KC_9,    KC_T,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LCTL,    KC_4,    KC_5,    KC_6,    KC_G,                      XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LSFT,    KC_1,    KC_2,    KC_3,    KC_B,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,     KC_ENT, KC_BSPC,  KC_ESC
                                      //`--------------------------'  `--------------------------'

  )
};


#ifdef TAPPING_TERM_PER_KEY
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case LGUI_T(KC_A):
        case RGUI_T(KC_SCLN):
            return TAPPING_TERM + 20;
        case LALT_T(KC_S):
        case RALT_T(KC_L):
            return TAPPING_TERM + 50;
        case LCTL_T(KC_D):
        case RCTL_T(KC_K):
            return TAPPING_TERM;
        case LSFT_T(KC_F):
        case RSFT_T(KC_J):
            return TAPPING_TERM - 30;
        default:
            return TAPPING_TERM;
    }
}
#endif


// RGB Layer
// see: https://note.com/yinouet1001/n/na3b132c060f3
layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = biton32(state);
    switch(layer) {
        case 0:
            // rgblight_sethsv(HSV_OFF);
            rgblight_sethsv(HSV_GOLDENROD);
            break;
        case 6:
        case 7:
            rgblight_sethsv(HSV_PURPLE);
            break;
        default:
            rgblight_sethsv(HSV_AZURE);
            break;
    }

    return state;
}
