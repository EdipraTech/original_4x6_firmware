#include QMK_KEYBOARD_H

enum layers {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT( 
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, 
		KC_GRV, KC_A, KC_S, KC_D, KC_F, KC_G, 
		KC_LGUI, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SPC, KC_LBRC, 
		KC_LALT, KC_LSFT, KC_SPC, KC_LCTL
    )
};
