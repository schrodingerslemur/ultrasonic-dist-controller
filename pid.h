#pragma once
typedef struct {
    float kp, ki, kd;
    float integral;
    float prev_error;
} pid_t;

void pid_init(pid_t *p, float kp, float ki, float kd);
float pid_step(pid_t *p, float target, float measured);
