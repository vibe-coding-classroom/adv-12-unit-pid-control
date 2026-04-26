#ifndef CONTROL_GAIN_H
#define CONTROL_GAIN_H

/**
 * @brief PID Control Gaint Configuration
 * 
 * Target position and Proportional gain (Kp) are defined here.
 * Students will need to adjust Kp during the tuning phase.
 */

// Target position in centimeters (or appropriate units)
const float TARGET_POSITION = 50.0;

// Proportional gain constant
// Challenge: Find the golden Kp that balances speed and stability.
const float KP_GAIN = 0.5;

// Motor PWM limits
const int MAX_PWM = 255;
const int MIN_PWM = 0;

#endif // CONTROL_GAIN_H
