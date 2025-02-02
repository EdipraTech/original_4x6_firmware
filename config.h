#ifndef CONFIG_H
#define CONFIG_H

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 8

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#endif