/**
 * @file open_loop_drive.ino
 * @brief Task 1: Blind Open-Loop Experiment
 * 
 * Goal: Understand how environmental factors (friction, surface type) 
 * affect open-loop control accuracy.
 */

void setup() {
  Serial.begin(115200);
  Serial.println("Starting Open-Loop Test...");
  
  // Simulated motor pins
  pinMode(9, OUTPUT);
  
  // Test: Drive forward for 2 seconds at constant speed
  Serial.println("Driving for 2000ms...");
  analogWrite(9, 150); 
  delay(2000);
  
  // Stop
  analogWrite(9, 0);
  Serial.println("Test Complete. Please measure the distance traveled on different surfaces.");
}

void loop() {
  // Nothing to do here for open-loop test
}
