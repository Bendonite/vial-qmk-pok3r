#include QMK_KEYBOARD_H

void board_init(void) {
    gpio_set_pin_output(A9);
    gpio_write_pin(A9, 1); //we need to reset this pin's output for main flash
}
