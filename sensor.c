#include "sensor.h"
#include <stdlib.h>

float sensor_read_cm(void) {
    // Simulated input; replace with real MCU GPIO timing code
    return 15.0f + (rand() % 1000) / 100.0f;
}
