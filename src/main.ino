/**
 * @file main.ino
 * @brief Task 2 & 3: Proportional Feedback Control (P-Regulator)
 * 
 * Students need to implement the negative feedback mapping logic here.
 */

#include "include/control_gain.h"

// Simulated sensor and motor functions
float getCurrentPosition() {
  // In a real robot, this would read from an encoder or ultrasonic sensor
  return 0.0; // Placeholder
}

void motorDrive(float output) {
  // Constrain output to PWM limits
  int pwm = constrain((int)output, MIN_PWM, MAX_PWM);
  // analogWrite(MOTOR_PIN, pwm);
  Serial.print("Output PWM: ");
  Serial.println(pwm);
}

void setup() {
  Serial.begin(115200);
  Serial.println("P-Regulator System Initialized");
}

void loop() {
  float currentPos = getCurrentPosition();
  float targetPos = TARGET_POSITION;

  // --- TODO: Task 2 - Implement Proportional Feedback logic ---
  // 1. Calculate the error (Target - Current)
  // 2. Calculate the output using KP_GAIN
  // 3. Drive the motor with the calculated output
  
  float error = 0; // Replace this
  float output = 0; // Replace this
  
  // motorDrive(output);
  
  // --- End of TODO ---

  Serial.print("Pos: "); Serial.print(currentPos);
  Serial.print(" | Error: "); Serial.println(error);

  delay(50); // Control loop frequency
}
