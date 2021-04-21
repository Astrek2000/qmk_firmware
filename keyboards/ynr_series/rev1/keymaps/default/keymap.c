#include QMK_KEYBOARD_H

enum layer_names {
	Base,           //base layer
	B_func,       //func layer for base layer
};

void matrix_init_user(void) {
    set_unicode_input_mode(UC_WINC); // Windows = UC_WINC; MacOS = UC_OSX; Linux = UC_LNX
    
    /* #define STAR 0x2605 // ★  <repeat for all characters>
     * add UC(defination) in key layout below. */


const uint16_t PROGMEM	keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* Keymap Base: (Base Layer) Default Layer
   * ┌-------------------------------------------------------------------------------------┐
   * |Esc|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del|Ins|PgUp|PrtSc|blnk|blnk|blnk|            KC_DEL/FWD DEL is assigned 
   * |-------------------------------------------------------------------------------------|            to the F12 col as its 4th key.
   * | ` | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | Bcksp |PgDn|Numlk| / | *  |  -  |
   * |-------------------------------------------------------------------------------------|
   * | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] |  \  |Home|Kpd7 |Kpd8|Kpd9|Kpd |
   * |--------------------------------------------------------------------------------| +  |
   * | Caps  | A | S | D | F | G | H | J | K | L | ; | ' | Enter |Brk |Kpd4 |Kpd5|Kpd6|    |
   * |-------------------------------------------------------------------------------------|
   * | Shift  | Z | X | C | V | B | N | M | , | . | / | Shift |↑ |End |Kpd1 |Kpd2|Kpd3| Kp |
   * |--------------------------------------------------------------------------------|Entr|
   * |Ctrl|Win | Alt |  blnk  |Space|  blnk  |Alt|Fn |Ctrl| ← |↓ | →  |   Kpd0   | .  |    |
   * └-------------------------------------------------------------------------------------┘
   */
   [Base] = LAYOUT_smol_space(
   	
   	KC_ESC,   KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,       KC_F10,   KC_F11,   KC_F12,   KC_INS,    KC_UP,    KC_PSCR,  KC_NO,    KC_NO,    TO(),   \
   	KC_GRV,   KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,        KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,   KC_PGDN,  KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS, \ 
    KC_TAB,   KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,        KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,   KC_HOME,  KC_P7,    KC_P8,    KC_P9,    KC_PPLS, \
    KC_CAPS,  KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,        KC_SCLN,  KC_QUOT,  KC_DEL,   KC_ENT,    KC_BRK,   KC_P4,    KC_P5,    KC_P6,    KC_PENT, \ 
    KC_LSFT,  KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,      KC_SLSH,  KC_RSFT,            KC_UP,     KC_END,   KC_P1,    KC_P2,    KC_P3,  \
    KC_LCTL,  KC_LGUI,  KC_LALT, KC_NO,            KC_SPC,           KC_NO,   KC_RALT, MO(B_func),  KC_RCTL,  KC_LEFT,            KC_DOWN.   KC_RGHT,  KC_P0,              KC_PDOT, \
   	
   	),
   [B_func] = LAYOUT_smol_space(
   	
   	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_MOD, RGB_RMOD, RESET,\
   	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,\
   	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUI, RGB_HUD,  _______,\
   	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_SAI, RGB_SAD,  _______,\
   	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_VAI, RGB_VAD,  _______,\
   	_______, _______, _______, BL_INC,           _______,          BL_DEC,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,\
  
  ),
}