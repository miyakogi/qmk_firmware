/* Copyright 2022 James White <jamesmnw@gmail.com>
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
#include "keymap_japanese.h"

enum layers {
  _BASE,
  _NUM,
  _SYM,
  _FUN,
  _NAV,
  _MOUSE,
  _GAME,
  _GAME_NUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_BASE] = LAYOUT_split_3x5_3(  // Default (大西配列mod)
   //.-------------------------------------------------------------------------.                                        ,------------------------------------------------------------------------------.
              KC_Q,         KC_Y,         KC_U,       KC_COMM,           KC_DOT,                                                       KC_F,             KC_W,         KC_R,         KC_L,         KC_P,
   //|------------+-------------+-------------+--------------+-----------------|                                        |------------------+-----------------+-------------+-------------+-------------|
      LGUI_T(KC_E), LALT_T(KC_I), LCTL_T(KC_A),  LSFT_T(KC_O),          KC_MINS,                                                       KC_K,     RSFT_T(KC_T), RCTL_T(KC_N), RALT_T(KC_S), RGUI_T(KC_H),
   //|------------+-------------+-------------+--------------+-----------------|                                        |------------------+-----------------+-------------+-------------+-------------|
              KC_J,         KC_X,         KC_C,          KC_V,          KC_SLSH,                                                       KC_G,             KC_D,         KC_M,         KC_Z,         KC_B,
   //|------------+-------------+-------------+--------------+-----------------+-------------------|  |-----------------+------------------+-----------------+-------------+-------------+-------------|
                                                       KC_ESC,   LSFT_T(KC_SPC),   LT(_NAV, KC_TAB),    LT(_SYM, KC_ENT), LT(_NUM, KC_BSPC), LT(_FUN, KC_DEL)
                                            //`----------------------------------------------------'  `------------------------------------------------------'
 ),

 [_NUM] = LAYOUT_split_3x5_3(  // Number
  //,--------------------------------------------.                    ,--------------------------------------------.
      KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_SCLN,    KC_4,    KC_5,    KC_6,  KC_EQL,                      XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_GRV,    KC_1,    KC_2,    KC_3, KC_BSLS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                  KC_DOT,    KC_0, KC_QUOT,     KC_ENT, _______,  KC_ESC
                             //`--------------------------'  `--------------------------'
 ),

 [_SYM] = LAYOUT_split_3x5_3(  // Symbols
  //,--------------------------------------------.                    ,--------------------------------------------.
      KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_COLN,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                      XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LPRN, KC_RPRN, KC_DQUO,    _______, _______,  KC_ESC
                             //`--------------------------'  `--------------------------'
 ),

 [_FUN] = LAYOUT_split_3x5_3(  // Function
  //,----------------------------------------------.                    ,--------------------------------------------.
       KC_F12,   KC_F7,   KC_F8,     KC_F9, KC_PSCR,                         KC_R,    KC_E,    KC_I,    KC_S,    KC_U,
  //|--------+--------+--------+----------+--------|                    |--------+--------+--------+--------+--------|
       KC_F11,   KC_F4,   KC_F5,     KC_F6, KC_SCRL,                      XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
  //|--------+--------+--------+----------+--------|                    |--------+--------+--------+--------+--------|
       KC_F10,   KC_F1,   KC_F2,     KC_F3, KC_PAUS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_B,
  //|--------+--------+--------+----------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 TG(_GAME), _______,  KC_APP,     KC_ENT, _______, _______
                             //`----------------------------'  `--------------------------'
 ),

 [_NAV] = LAYOUT_split_3x5_3(  // Navigation
  //,--------------------------------------------.                    ,----------------------------------------------.
      C(KC_A), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+----------+--------+--------+--------|
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      XXXXXXX,   KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,
  //|--------+--------+--------+--------+--------|                    |--------+----------+--------+--------+--------|
      C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_Y),                       KC_INS,   KC_HOME, KC_PGDN, KC_PGUP,  KC_END,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+----------+--------+--------+--------|
                                 _______, _______,  KC_SPC,     KC_ENT, _______, TG(_GAME)
                             //`--------------------------'  `----------------------------'
 ),

 [_MOUSE] = LAYOUT_split_3x5_3(  // Mouse
  //,--------------------------------------------.                    ,--------------------------------------------.
      C(KC_A), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_Y),                      XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______,    KC_BTN2, KC_BTN1, KC_BTN3
                             //`--------------------------'  `--------------------------'
 ),

 [_GAME] = LAYOUT_split_3x5_3(  // Gaming
  //,--------------------------------------------.                         ,-------------------------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,                              KC_Y,         KC_U,         KC_I,         KC_O,            KC_P,
  //|--------+--------+--------+--------+--------|                         |--------+-------------+-------------+-------------+----------------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,                              KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN),
  //|--------+--------+--------+--------+--------|                         |--------+-------------+-------------+-------------+----------------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,                              KC_N,         KC_M,      KC_COMM,       KC_DOT,         KC_SLSH,
  //|--------+--------+--------+--------+--------+--------------|  |-------+--------+-------------+-------------+-------------+----------------|
                                  KC_ESC,  KC_SPC, MO(_GAME_NUM),    KC_ENT, KC_BSPC,    TG(_GAME)
                             //`--------------------------------'  `------------------------------'
 ),

 [_GAME_NUM] = LAYOUT_split_3x5_3(  // Gaming Number Layer
  //,--------------------------------------------.                    ,--------------------------------------------.
       KC_TAB,    KC_7,    KC_8,    KC_9,    KC_T,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_LCTL,    KC_4,    KC_5,    KC_6,    KC_G,                      XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      KC_LSFT,    KC_1,    KC_2,    KC_3,    KC_B,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 _______, _______, _______,     KC_ENT, KC_BSPC,  KC_ESC
                             //`--------------------------'  `--------------------------'
 ),
};

enum combos {
    HENKAN_COMBO,
    MUHENKAN_COMBO,
    ESC_COMBO,
    SEMICOLON_COMBO,
    COLON_COMBO,
};

const uint16_t PROGMEM henkan_combo[] = { RCTL_T(KC_N), RALT_T(KC_S), COMBO_END };
const uint16_t PROGMEM muhenkan_combo[] = { LCTL_T(KC_A), LALT_T(KC_I), COMBO_END };
const uint16_t PROGMEM esc_combo[] = { RSFT_T(KC_T), RCTL_T(KC_N), COMBO_END };
const uint16_t PROGMEM semicolon_combo[] = { LSFT_T(KC_O), LCTL_T(KC_A), COMBO_END };
const uint16_t PROGMEM colon_combo[] = { LALT_T(KC_I), LGUI_T(KC_E), COMBO_END };

combo_t key_combos[] = {
    [HENKAN_COMBO] = COMBO(henkan_combo, JP_HENK),
    [MUHENKAN_COMBO] = COMBO(muhenkan_combo, JP_MHEN),
    [ESC_COMBO] = COMBO(esc_combo, KC_ESC),
    [SEMICOLON_COMBO] = COMBO(semicolon_combo, KC_SCLN),
    [COLON_COMBO] = COMBO(colon_combo, KC_COLN),
};

bool get_combo_must_tap(uint16_t index, combo_t *combo) {
    return true;
}


#ifdef TAPPING_TERM_PER_KEY
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case LGUI_T(KC_E):
        case RGUI_T(KC_H):
            return TAPPING_TERM + 100;
        case LALT_T(KC_I):
        case RALT_T(KC_S):
            return TAPPING_TERM + 120;
        case LCTL_T(KC_A):
        case RCTL_T(KC_N):
            return TAPPING_TERM + 70;
        case LSFT_T(KC_O):
        case RSFT_T(KC_T):
            return TAPPING_TERM + 20;
        default:  // thumb keys
            return TAPPING_TERM;
    }
}
#endif

// RGB Layer
// see: https://note.com/yinouet1001/n/na3b132c060f3
layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = biton32(state);
    switch(layer) {
        case _BASE:
            // rgblight_sethsv(HSV_OFF);
            rgblight_sethsv(HSV_AZURE);
            break;
        case _GAME:
        case _GAME_NUM:
            rgblight_sethsv(HSV_PURPLE);
            break;
        default:
            rgblight_sethsv(HSV_CORAL);
            break;
    }

    return state;
}
