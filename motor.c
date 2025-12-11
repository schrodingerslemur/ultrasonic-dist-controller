#include "motor.h"
#include <stdio.h>

void motor_set(float value) {
    if (value > 100) value = 100;
    if (value < -100) value = -100;
    // Replace with real PWM write
    printf("[MOTOR] command=%.2f\n", value);
}
