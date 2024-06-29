#include <Servo.h>  // Include the Servo library

int servopin = 9;   // Define the digital pin connected to the servo
int servoPos = 150; // Variable to store the position of the servo
Servo myservo;      // Create a servo object

void setup() {
  Serial.begin(9600);       // Initialize serial communication at 9600 baud
  myservo.attach(servopin); // Attach the servo to the defined pin
}

void loop() {
  Serial.println("What angle for the servo?"); // Prompt the user to enter an angle
  while (Serial.available() == 0) {
    // Wait for user input
  }
  servoPos = Serial.parseInt(); // Read the angle value entered by the user
  myservo.write(servoPos);      // Move the servo to the specified angle
}
