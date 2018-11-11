
#include QMK_KEYBOARD_H



// Readability keycodes
#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



  [0] = NN_LAYOUT(
    KC_ESCAPE,	 KC_U,    KC_I,    KC_O,    KC_J,    KC_K,      KC_L,  
    KC_TAB, 	 KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,   
    MO(3)	,	 KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_H,    
    KC_LSHIFT, 	 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,	    LT(1,KC_SPC),   
    KC_LCTRL, 	 KC_N, 	  KC_M,    KC_P,    KC_DOT,	 KC_BSPACE, LT(2,KC_ENTER)
  ),



  [1] = NN_LAYOUT(
    KC_TILDE,	 KC_EXCLAIM,    KC_AT,        KC_HASH,     KC_DOLLAR,     KC_PERCENT,     KC_PIPE,  
    _______, 	 KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_COLON,
    _______,	 _______,       KC_UNDERSCORE,KC_PLUS,     KC_LABK,       KC_RABK,        KC_DQUO, 
    KC_LSHIFT, 	 _______,       _______,      _______,     _______,       KC_QUES,        KC_SPC,  
    KC_LCTRL, 	 KC_LALT, 	    _______,      _______,     _______,	      _______,        _______
  ),



  [2] = NN_LAYOUT(
    KC_GRV,	     KC_1,    KC_2,        KC_3,     KC_4,     KC_5,     KC_BSLASH,
    _______, 	 KC_6,    KC_7,        KC_8,     KC_9,     KC_0,     KC_SCOLON, 
    _______,	 _______, KC_MINUS,    KC_EQUAL, KC_COMMA, KC_DOT,   KC_QUOTE, 
    KC_LSHIFT, 	 _______, _______,     _______,  _______,  KC_SLASH, KC_SPC,    
    KC_LCTRL, 	 _______, _______,     _______,  _______,  _______,  _______  
	),
  [3] = NN_LAYOUT(
    _______,	 _______,    _______,        _______,     _______,     _______,     _______,   
    _______, 	 _______,    _______,        _______,     KC_LBRC,     KC_RBRC,     _______,   
    _______,	 _______,    _______,        _______,     KC_LCBR,     KC_RCBR,     _______,  
    KC_LSHIFT, 	 _______,    _______,        _______,     _______,     _______,     KC_SPC, 
    KC_LCTRL, 	 _______,    _______,        _______,     _______,     _______,     _______  
  ),

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
