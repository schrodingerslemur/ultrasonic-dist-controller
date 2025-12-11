#include "uart.h"
#include <stdio.h>

void uart_init(void) {
    // Replace with MCU UART init code
}

void uart_send_float(const char *label, float v) {
    printf("[UART] %s=%.2f\n", label, v);
}
