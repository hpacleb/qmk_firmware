/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN,
  HP_LAYOUT
};

enum {
    QMKBEST = SAFE_RANGE,
    CUSTOM_RGB1,
    CUSTOM_RGB2,
    CUSTOM_RGB3,
    CUSTOM_RGB4,
    CUSTOM_RGB5,
    CUSTOM_RGB6,
    CUSTOM_RGB7,
    CUSTOM_RGB8,
    CUSTOM_RGB9,
    CUSTOM_RGB0
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case QMKBEST:
        if (record->event.pressed) {
            SEND_STRING("QMK is the best thing ever!");
        }
        return false;
    case CUSTOM_RGB1:
        if (record->event.pressed) {
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_mode(RGB_MATRIX_CUSTOM_my_cool_effect);
        }
        return false;
    case CUSTOM_RGB2:
        if (record->event.pressed) {
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_mode(RGB_MATRIX_JELLYBEAN_RAINDROPS);
        }
        return false;
    case CUSTOM_RGB3:
        if (record->event.pressed) {
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_mode(RGB_MATRIX_TYPING_HEATMAP);
        }
        return false;
    case CUSTOM_RGB4:
        if (record->event.pressed) {
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_mode(RGB_MATRIX_PIXEL_RAIN);
        }
        return false;
    case CUSTOM_RGB5:
        if (record->event.pressed) {
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_mode(RGB_MATRIX_DIGITAL_RAIN);
        }
        return false;
    case CUSTOM_RGB6:
        if (record->event.pressed) {
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_mode(RGB_MATRIX_SOLID_REACTIVE_SIMPLE);
        }
        return false;
    case CUSTOM_RGB7:
        if (record->event.pressed) {
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_mode(RGB_MATRIX_HUE_PENDULUM);
        }
        return false;
    case CUSTOM_RGB8:
        if (record->event.pressed) {
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_mode(RGB_MATRIX_PIXEL_FLOW);
        }
        return false;
    case CUSTOM_RGB9:
        if (record->event.pressed) {
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_mode(RGB_MATRIX_PIXEL_FRACTAL);
        }
        return false;
    case CUSTOM_RGB0:
        if (record->event.pressed) {
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_mode(RGB_MATRIX_SOLID_SPLASH);
        }
        return false;

    }
    return true;
};

void rgb_matrix_indicators_user(void) {
    switch (get_highest_layer(layer_state)) {
        case WIN_FN:
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_set_color(33, RGB_TURQUOISE);
            rgb_matrix_set_color(34, RGB_TURQUOISE);
            rgb_matrix_set_color(38, RGB_TURQUOISE);
            rgb_matrix_set_color(50, RGB_TURQUOISE);
            rgb_matrix_set_color(51, RGB_TURQUOISE);
            rgb_matrix_set_color(55, RGB_TURQUOISE);
            rgb_matrix_set_color(1, RGB_TURQUOISE);
            rgb_matrix_set_color(2, RGB_TURQUOISE);
            rgb_matrix_set_color(3, RGB_TURQUOISE);
            rgb_matrix_set_color(4, RGB_TURQUOISE);
            rgb_matrix_set_color(5, RGB_TURQUOISE);
            rgb_matrix_set_color(6, RGB_TURQUOISE);
            rgb_matrix_set_color(7, RGB_TURQUOISE);
            rgb_matrix_set_color(8, RGB_TURQUOISE);
            rgb_matrix_set_color(9, RGB_TURQUOISE);
            rgb_matrix_set_color(10, RGB_TURQUOISE);
            rgb_matrix_set_color(11, RGB_TURQUOISE);
            rgb_matrix_set_color(12, RGB_TURQUOISE);
            rgb_matrix_set_color(0, RGB_TURQUOISE);
            rgb_matrix_set_color(0, RGB_TURQUOISE);
            break;
        case HP_LAYOUT:
            rgb_matrix_set_color_all(RGB_BLACK);
            rgb_matrix_set_color(17, RGB_GREEN);
            rgb_matrix_set_color(18, RGB_GREEN);
            rgb_matrix_set_color(19, RGB_GREEN);
            rgb_matrix_set_color(20, RGB_GREEN);
            rgb_matrix_set_color(21, RGB_GREEN);
            rgb_matrix_set_color(22, RGB_GREEN);
            rgb_matrix_set_color(23, RGB_GREEN);
            rgb_matrix_set_color(24, RGB_GREEN);
            rgb_matrix_set_color(25, RGB_GREEN);
            rgb_matrix_set_color(26, RGB_GREEN);
            rgb_matrix_set_color(34, RGB_GREEN);
            rgb_matrix_set_color(51, RGB_GREEN);
            break;
        default:
            break;
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAC_BASE] = LAYOUT_ansi_87( 
     KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LNPD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,           KC_SNAP,   KC_SIRI,  RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, KC_INS,    KC_HOME,  KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS, KC_DEL,    KC_END,   KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,    
     KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, KC_ROPTN, MO(MAC_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[MAC_FN] = LAYOUT_ansi_87( 
     KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     QMKBEST,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,           
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,   
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[WIN_BASE] = LAYOUT_ansi_87( 
     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             KC_PSCR,   KC_CTANA, RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,    KC_HOME,  KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,    KC_END,   KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,              
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,             KC_UP,    
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RGUI, MO(WIN_FN), OSL(HP_LAYOUT),  KC_LEFT,  KC_DOWN,  KC_RGHT),

[WIN_FN] = LAYOUT_ansi_87( 
     KC_TRNS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,            KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     QMKBEST,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,           
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,   
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),
    
[HP_LAYOUT] = LAYOUT_ansi_87( 
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  CUSTOM_RGB1,  CUSTOM_RGB2,  CUSTOM_RGB3,  CUSTOM_RGB4,  CUSTOM_RGB5,  CUSTOM_RGB6,  CUSTOM_RGB7,  CUSTOM_RGB8,  CUSTOM_RGB9,  CUSTOM_RGB0,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  RGB_MOD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  RGB_RMOD, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,           
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,   
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS)  
};
