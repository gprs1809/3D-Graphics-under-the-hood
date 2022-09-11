#include "camera.h"

camera_t camera = { .position = {.x = 0.0, .y = 0.0, .z = 0.0},
                   .direction = {.x = 0.0, .y = 0.0, .z = 1.0},
                   .forward_velocity = {0,0,0}, 
                   .yaw_y=0.0,
                   .yaw_x=0.0
};

