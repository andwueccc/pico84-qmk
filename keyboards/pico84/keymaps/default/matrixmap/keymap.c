// Matrix-mapping keymap: every row/column position sends its own unique key,
// so matrixmap.html can work out where each physical switch is wired.
// Not for everyday use - flash the default keymap once the map is known.
#include QMK_KEYBOARD_H

void keyboard_pre_init_user(void) {
    gpio_set_pin_output(GP25);
    gpio_write_pin_high(GP25);
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
        { KC_A,   KC_B,   KC_C,   KC_D,   KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,    KC_M,    KC_N,    KC_O,    KC_P    },
        { KC_Q,   KC_R,   KC_S,   KC_T,   KC_U,    KC_V,    KC_W,    KC_X,    KC_Y,    KC_Z,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6    },
        { KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_SCLN, KC_QUOT, KC_GRV,  KC_COMM, KC_DOT,  KC_SLSH, KC_SPC  },
        { KC_F13, KC_F14, KC_F15, KC_F16, KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  KC_INS,  KC_HOME, KC_PGUP, KC_DEL  },
        { KC_P0,  KC_P1,  KC_P2,  KC_P3,  KC_P4,   KC_P5,   KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_PDOT, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, KC_PENT },
        { KC_END, KC_PGDN, KC_UP, KC_DOWN, KC_LEFT, KC_RGHT, KC_BSPC, KC_ENT,  KC_TAB,  KC_ESC,  KC_LCTL, KC_LSFT, KC_RCTL, KC_RSFT, KC_PAUS, KC_NUBS },
    },
};
