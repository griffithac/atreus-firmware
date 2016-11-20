int layer0[44] = {
    KEY_Q, KEY_W, KEY_E, KEY_R, KEY_T, KEY_0, KEY_Y, KEY_U, KEY_I, KEY_O, KEY_P, 
    KEY_A, KEY_S, KEY_D, KEY_F, KEY_G, KEY_0, KEY_H, KEY_J, KEY_K, KEY_L, KEY_SEMICOLON, 
    KEY_Z, KEY_X, KEY_C, KEY_V, KEY_B, KEYBOARD_LEFT_ALT, KEY_N, KEY_M, KEY_COMMA, KEY_PERIOD, KEY_SLASH, 
    KEY_ESC, KEY_TAB, KEYBOARD_LEFT_GUI, KEYBOARD_LEFT_SHIFT, KEY_BACKSPACE, KEYBOARD_LEFT_CTRL, KEY_SPACE, PRE_FUNCTION(1), KEY_MINUS, KEY_QUOTE, KEY_ENTER };

int layer1[44] = {
    SHIFT(KEY_1), SHIFT(KEY_2), SHIFT(KEY_LEFT_BRACE), SHIFT(KEY_RIGHT_BRACE), SHIFT(KEY_BACKSLASH), KEY_0, KEY_PAGE_UP, KEY_7, KEY_8, KEY_9, 
    SHIFT(KEY_8), SHIFT(KEY_3), SHIFT(KEY_4), SHIFT(KEY_9), SHIFT(KEY_0), KEY_TILDE, KEY_0, KEY_PAGE_DOWN, KEY_4, KEY_5, KEY_6, SHIFT(KEY_EQUAL), 
    SHIFT(KEY_5), SHIFT(KEY_6), KEY_LEFT_BRACE, KEY_RIGHT_BRACE, SHIFT(KEY_TILDE), KEYBOARD_LEFT_ALT, SHIFT(KEY_7), KEY_1, KEY_2, KEY_3, KEY_BACKSLASH, 
    FUNCTION(2), SHIFT(KEY_INSERT), KEYBOARD_LEFT_GUI, KEYBOARD_LEFT_SHIFT, KEY_BACKSPACE, KEYBOARD_LEFT_CTRL, KEY_SPACE, PRE_FUNCTION(1), KEY_PERIOD, KEY_0, KEY_EQUAL };

#include "layer2.h"

int *layers[] = {layer0, layer1, layer2};

#include "layout_common.h"
