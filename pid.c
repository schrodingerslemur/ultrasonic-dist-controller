#include "pid.h"

void pid_init(pid_t *p, float kp, float ki, float kd) {
    p->kp = kp;
    p->ki = ki;
    p->kd = kd;
    p->integral = 0.0f;
    p->prev_error = 0.0f;
}

float pid_step(pid_t *p, float target, float measured) {
    float e = target - measured;
    p->integral += e;
    float d = e - p->prev_error;
    p->prev_error = e;
    return p->kp*e + p->ki*p->integral + p->kd*d;
}
