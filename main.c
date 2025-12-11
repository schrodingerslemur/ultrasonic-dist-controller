#include "sensor.h"
#include "pid.h"
#include "motor.h"
#include "uart.h"
#include <stdio.h>

int main(void) {
    uart_init();
    pid_t pid;
    pid_init(&pid, 1.2f, 0.5f, 0.1f);

    float target = 20.0f; // cm

    while (1) {
        float dist = sensor_read_cm();
        float ctrl = pid_step(&pid, target, dist);
        motor_set(ctrl);

        uart_send_float("distance", dist);
        uart_send_float("control", ctrl);
    }
}
