// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *
     *  ┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───  ┬
     *  │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P   │ 
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬─
     * │    A │ S │ D │ F │ G │ H │ J │ K │ L │ Ent│
     * ├── ──┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─
     * │ S │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │  
     * ├───┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴───┴┬──┴──┬
     * │Ctrl│GUI │Alt │FN │     │      │ Alt│ GUI│Menu│
     * └────┴────┴────┴───┴─────┴──────┴────┴────┴────┴
     */
    [0] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    
         KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,   KC_ENT,
        LSFT_T(KC_Z),    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,   KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),
         KC_LCTL, KC_LGUI, KC_LALT, MO(3),   LT(1, KC_BSPC),     LT(2, KC_SPC),      KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [1] = LAYOUT(
          KC_1,       KC_2,       KC_3,     KC_4,       KC_5,      KC_6,       KC_7,        KC_8,       KC_9,       KC_0,    
         KC_GRV, KC_MINUS,    KC_EQL,      KC_TRNS,    KC_TRNS,    KC_BSLS,    KC_LBRC,    KC_RBRC,    KC_SCLN,   KC_QUOT,
           KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_UP,    KC_TRNS,
           KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,                KC_TRNS,          KC_TRNS,           KC_LEFT, KC_DOWN, KC_RIGHT
     ),
    [2] = LAYOUT(
          S(KC_1),     S(KC_2),   S(KC_3),  S(KC_4),    S(KC_5),   S(KC_6),    S(KC_7),    S(KC_8),    S(KC_9),   S(KC_0),    
          S(KC_GRV), S(KC_MINUS),   S(KC_EQL),    KC_TRNS,    KC_TRNS,    KC_TRNS,  S(KC_LBRC), S(KC_RBRC),   S(KC_SCLN),   S(KC_QUOT),
           KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_PGUP,    KC_TRNS,
           KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,                KC_TRNS,          KC_TRNS,           KC_HOME, KC_PGDN, KC_END
     ),
    [3] = LAYOUT(
          KC_F1,     KC_F2,   KC_F3,  KC_F4,   KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,    
          KC_F11,   KC_F12,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS,
           KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,
           QK_BOOT, KC_TRNS, KC_TRNS,  KC_TRNS,                KC_TRNS,          KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS
     )
	
}; 



//combos
const uint16_t PROGMEM bksp_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM del_combo[] = {KC_9, KC_0, COMBO_END};


combo_t key_combos[] = {
    COMBO(bksp_combo, KC_BSPC),
    COMBO(esc_combo, KC_ESC),
    COMBO(tab_combo, KC_TAB),
    COMBO(del_combo, KC_DEL),

    
};
