#include QMK_KEYBOARD_H
/* There are logos like QMK, SoFle and customize theirs. Moving to separate file. */
#include "logo.c"
/* Encoder movement can be complex Moving to a separate file. */
#include "encoder.c"

// Layers: This is a complete list of 8 layers.
#define LAYER_STATE_8BIT
enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY, // Default layer
    _LOWER,
    _RAISE,
    _ADJUST,
    _COLEMAKDH,
    _COLEMAK,
    _GAMING,
    _EMPTY
};

#define LOWER   MO(_LOWER)
#define RAISE   MO(_RAISE)
#define ADJUST  MO(_ADJUST)

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Minimum key width: ` _______,`
 * If layour inherits, mark it as ^^ rather than the key.
 */

[_QWERTY] = LAYOUT( \
// ,-----------------------------------------------.                  ,-----------------------------------------------. 
// |  `    |   1   |   2   |   3   |   4   |   5   |                  |   6   |   7   |   8   |   9   |   0   |  `    |
    KC_GRV,  KC_1,   KC_2,  KC_3,   KC_4,   KC_5,                       KC_6,   KC_7,   KC_8,   KC_9,   KC_0,    KC_BSPC, \
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// | ESC   |   Q   |   W   |   E   |   R   |   T   |                  |   Y   |   U   |   I   |   O   |   P   | Bspc  |
    KC_ESC,  KC_Q,   KC_W,  KC_E,   KC_R,   KC_T,                       KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,    KC_BSLS, \
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// | Tab   |   A   |   S   |   D   |   F   |   G   |                  |   H   |   J   |   K   |   L   |   ;   |  '    |
    KC_TAB,  KC_A,   KC_S,  KC_D,   KC_F,   KC_G,                       KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT, \
// |-------+-------+-------+-------+-------+-------|-------.  ,-------|-------+-------+-------+-------+-------+-------|
// |LShift |   Z   |   X   |   C   |   V   |   B   | MUTE  |  |   ]   |   N   |   M   |   ,   |   .   |   /   | RShift|
    KC_LSFT, KC_Z,   KC_X,  KC_C,   KC_V,   KC_B,   KC_MUTE,   KC_RBRC, KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, \
// `-------'-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------'-------'
//                 | LGUI  | LAlt  | LCTR  | LOWER | Enter |  | Space | RAISE | RCTR  | RAlt  | RGUI  |
                    KC_LGUI,KC_LALT,KC_LCTRL, LOWER, KC_ENT,   KC_SPC , RAISE,KC_RCTRL,KC_RALT,KC_RGUI \
//                 `-------'-------'-------'-------'-------'  `-------'-------'-------'-------'-------'
),


[_LOWER] = LAYOUT( \
// ,-----------------------------------------------.                  ,-----------------------------------------------. 
// |       |  F1   |  F2   |  F3   |  F4   |  F5   |                  |  F6   |  F7   |  F8   |  F9   |  F10  |  F11  |
    _______, KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                    KC_F6 , KC_F7 , KC_F8 , KC_F9 , KC_F10, KC_F11,\
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// |  ^^   |   1   |   2   |   3   |   4   |   5   |                  |   6   |   7   |   8   |   9   |   0   |  F12  |
    _______, KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                    KC_6  , KC_7  , KC_8  , KC_9  , KC_0  , KC_F12, \
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// |  ^^   |   !   |   @   |   #   |   $   |   %   |                  |   ^   |   &   |   *   |   (   |   )   |   |   |
    _______,KC_EXLM, KC_AT ,KC_HASH, KC_DLR,KC_PERC,                   KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_PIPE, \
// |-------+-------+-------+-------+-------+-------|-------.  ,-------|-------+-------+-------+-------+-------+-------|
// |  ^^   |   =   |   -   |   +   |   {   |   }   |  ^^   |  |  ^^   |   [   |   ]   |   ;   |   :   |   \   | Shift |
    _______, KC_EQL,KC_MINS,KC_PLUS,KC_LCBR,KC_RCBR,_______,   _______,KC_LBRC,KC_RBRC,KC_SCLN,KC_COLN,KC_BSLS,_______, \
// `-------'-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------'-------'
//                 |  ^^   |  ^^   |  ^^   | ADJUST|  ^^   |  |  ^^   | ADJUST|  ^^   |  ^^   |  ^^   |
                    _______,_______,_______,_______,_______,   _______, ADJUST,_______,_______,_______\
//                 `-------'-------'-------'-------'-------'  `-------'-------'-------'-------'-------'
),


[_RAISE] = LAYOUT( \
// ,-----------------------------------------------.                  ,-----------------------------------------------. 
// |  ^^   |  ^^   |  ^^   |  ^^   |  ^^   |  ^^   |                  |  ^^   |  ^^   |  ^^   |  ^^   |  ^^   |  ^^   |
    _______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______, \
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// |  ^^   |  Ins  | Pscr  | Menu  |       |       |                  |       | PWrd  |  Up   | NWrd  | DLine | Bspc  |
    _______, KC_INS,KC_PSCR, KC_APP,XXXXXXX,XXXXXXX,                  KC_PGUP,KC_PRVWD,KC_UP,KC_NXTWD,KC_DLINE,KC_BSPC, \
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// |  ^^   |  LAt  | LCtl  | LShift|       | Caps  |                  |       | Left  | Down  | Rigth |  Del  | Bspc  |
    _______,KC_LALT,KC_LCTL,KC_LSFT,XXXXXXX,KC_CAPS,                   KC_PGDN,KC_LEFT,KC_DOWN,KC_RGHT, KC_DEL,KC_BSPC, \
// |-------+-------+-------+-------+-------+-------|-------.  ,-------|-------+-------+-------+-------+-------+-------|
// |  ^^   | Undo  |  Cut  | Copy  | Paste |       |  ^^   |  |  ^^   |       | LStr  |       | LEnd  |       |  ^^   |
    _______,KC_UNDO,KC_CUT,KC_COPY,KC_PASTE,XXXXXXX,_______,  _______,XXXXXXX,KC_LSTRT,XXXXXXX,KC_LEND,XXXXXXX,_______, \
// `-------'-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------'-------'
//                 |  ^^   |  ^^   |  ^^   | ADJUST|  ^^   |  |  ^^   | ADJUST|  ^^   |  ^^   |  ^^   |
                    _______,_______,_______, ADJUST,_______,   _______,_______,_______,_______,_______ \
//                 `-------'-------'-------'-------'-------'  `-------'-------'-------'-------'-------'
),


[_ADJUST] = LAYOUT( \
// ,-----------------------------------------------.                  ,-----------------------------------------------. 
// | RESET |       |       |       |       |       |                  |       |       |       |       |       |       |
     RESET ,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, \
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// |       |       |       |       |CG_TOGG|       |                  |       |       |       |       |       |       |
    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,CG_TOGG,XXXXXXX,                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, \
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// |RGB_TOG| Hue+  | Sat+  |Bright+|       |       |                  |       | VOLDO | MUTE  | VOLUP |       |       |
    RGB_TOG,RGB_HUI,RGB_SAI,RGB_VAI,XXXXXXX,XXXXXXX,                   XXXXXXX,KC_VOLD,KC_MUTE,KC_VOLU,XXXXXXX,XXXXXXX, \
// |-------+-------+-------+-------+-------+-------|-------.  ,-------|-------+-------+-------+-------+-------+-------|
// |RGB_MOD| Hue-  | Sat-  |Bright-|       |       |       |  |       |       | PREV  | PLAY  | NEXT  |       |       |
    RGB_MOD,RGB_HUD,RGB_SAD,RGB_VAD,XXXXXXX,XXXXXXX,XXXXXXX,   XXXXXXX,XXXXXXX,KC_MPRV,KC_MPLY,KC_MNXT,XXXXXXX,XXXXXXX, \
// `-------'-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------'-------'
//                 |  ^^   |  ^^   |  ^^   | ADJUST|  ^^   |  |  ^^   | ADJUST|  ^^   |  ^^   |  ^^   |
                    _______,_______,_______,_______,_______,   _______,_______,_______,_______,_______ \
//                 `-------'-------'-------'-------'-------'  `-------'-------'-------'-------'-------'
),

// Commenting this out will save you memory.
[_COLEMAKDH] = LAYOUT( \
// ,-----------------------------------------------.                  ,-----------------------------------------------. 
// |  `    |   1   |   2   |   3   |   4   |   5   |                  |   6   |   7   |   8   |   9   |   0   |   `   |
    KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                    KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC, \
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// | ESC   |   Q   |   W   |   F   |   P   |   B   |                  |   J   |   L   |   U   |   Y   |   ;   | Bspc  |
    KC_ESC , KC_Q  , KC_W  , KC_F  , KC_P  , KC_B  ,                    KC_J  , KC_L  , KC_U  , KC_Y  ,KC_SCLN,KC_BSPC,
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// | Tab   |   A   |   R   |   S   |   T   |   G   |                  |   M   |   N   |   E   |   I   |   O   |   '   |
    KC_TAB , KC_A  , KC_R  , KC_S  , KC_T  , KC_G  ,                    KC_M  , KC_N  , KC_E  , KC_I  , KC_O  ,KC_QUOT,
// |-------+-------+-------+-------+-------+-------|-------.  ,-------|-------+-------+-------+-------+-------+-------|
// |LShift |   Z   |   X   |   C   |   D   |   V   | MUTE  |  |   ]   |   K   |   H   |   ,   |   .   |   /   | RShift|
    KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_D  , KC_V  ,KC_MUTE,   KC_RBRC, KC_K  , KC_H  ,KC_COMM, KC_DOT,KC_SLSH,KC_RSFT,
// `-------'-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------'-------'
//                 | LGUI  | LAlt  | LCTR  | LOWER | Enter |  | Space | RAISE | RCTR  | RAlt  | RGUI  |
                    KC_LGUI,KC_LALT,KC_LCTRL,LOWER , KC_ENT,    KC_SPC, RAISE,KC_RCTRL,KC_RALT,KC_RGUI \
//                 `-------'-------'-------'-------'-------'  `-------'-------'-------'-------'-------'
)//,

/* Commenting this out will save you memory.
[_COLEMAK] = LAYOUT( \
// ,-----------------------------------------------.                  ,-----------------------------------------------. 
// |  `    |   1   |   2   |   3   |   4   |   5   |                  |   6   |   7   |   8   |   9   |   0   |   `   |
    KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                    KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC, \
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// | ESC   |   Q   |   W   |   F   |   P   |   G   |                  |   J   |   L   |   U   |   Y   |   ;   | Bspc  |
    KC_ESC , KC_Q  , KC_W  , KC_F  , KC_P  , KC_G  ,                    KC_J  , KC_L  , KC_U  , KC_Y  ,KC_SCLN,KC_BSPC,
// |-------+-------+-------+-------+-------+-------|                  |-------+-------+-------+-------+-------+-------|
// | Tab   |   A   |   R   |   S   |   T   |   D   |                  |   H   |   N   |   E   |   I   |   O   |   '   |
    KC_TAB , KC_A  , KC_R  , KC_S  , KC_T  , KC_D  ,                    KC_H  , KC_N  , KC_E  , KC_I  , KC_O  ,KC_QUOT,
// |-------+-------+-------+-------+-------+-------|-------.  ,-------|-------+-------+-------+-------+-------+-------|
// |LShift |   Z   |   X   |   C   |   V   |   B   | MUTE  |  |   ]   |   K   |   M   |   ,   |   .   |   /   | RShift|
    KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,KC_MUTE,   KC_RBRC, KC_K  , KC_M  ,KC_COMM, KC_DOT,KC_SLSH,KC_RSFT,
// `-------'-------+-------+-------+-------+-------+-------|  |-------+-------+-------+-------+-------+-------'-------'
//                 | LGUI  | LAlt  | LCTR  | LOWER | Enter |  | Space | RAISE | RCTR  | RAlt  | RGUI  |
                    KC_LGUI,KC_LALT,KC_LCTRL,LOWER , KC_ENT,    KC_SPC, RAISE,KC_RCTRL,KC_RALT,KC_RGUI \
//                 `-------'-------'-------'-------'-------'  `-------'-------'-------'-------'-------'
)
*/

};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    } else {
        // If you wish to display status on both, change this to 270.
        return OLED_ROTATION_180;
    }
}

static void print_narrow_mode(void) {
   oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);
    if (keymap_config.swap_lctl_lgui) {
        oled_write_ln_P(PSTR("MAC"), false);
    } else {
        oled_write_ln_P(PSTR("WIN"), false);
    }
}

static void print_layer_narrow(void) {
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        // Define you extra layers here.
        case _QWERTY:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adj\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
}

static void print_state_narrow(void) {
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

static void print_status_narrow(void) {
    // Center for 3 items
    oled_write_P(PSTR("\n\n"), false);
    // Print current mode
    print_narrow_mode();
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    print_layer_narrow();
    oled_write_P(PSTR("\n\n"), false);
    // Print states
    print_state_narrow();
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        // If you wish to display status on both, change this to the print function.
        render_logo();
    }
    return false;  
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case KC_PRVWD:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_LEFT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                }
            }
            break;
        case KC_NXTWD:
             if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    register_mods(mod_config(MOD_LALT));
                    register_code(KC_RIGHT);
                } else {
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LALT));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                }
            }
            break;
        case KC_LSTRT:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                     //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_LEFT);
                } else {
                    register_code(KC_HOME);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_LEFT);
                } else {
                    unregister_code(KC_HOME);
                }
            }
            break;
        case KC_LEND:
            if (record->event.pressed) {
                if (keymap_config.swap_lctl_lgui) {
                    //CMD-arrow on Mac, but we have CTL and GUI swapped
                    register_mods(mod_config(MOD_LCTL));
                    register_code(KC_RIGHT);
                } else {
                    register_code(KC_END);
                }
            } else {
                if (keymap_config.swap_lctl_lgui) {
                    unregister_mods(mod_config(MOD_LCTL));
                    unregister_code(KC_RIGHT);
                } else {
                    unregister_code(KC_END);
                }
            }
            break;
        case KC_DLINE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_BSPC);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_BSPC);
            }
            break;
        case KC_COPY:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_C);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_C);
            }
            return false;
        case KC_PASTE:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_V);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_V);
            }
            return false;
        case KC_CUT:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_X);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_X);
            }
            return false;
            break;
        case KC_UNDO:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LCTL));
                register_code(KC_Z);
            } else {
                unregister_mods(mod_config(MOD_LCTL));
                unregister_code(KC_Z);
            }
            return false;
    }
    return true;
}
