#include <Servo.h> // Include the Servo library

int servopin = 9;       // Define the pin connected to the servo
int lightval;           // Variable to store the light sensor value
int lightpin = A4;      // Define the analog pin connected to the light sensor
int dt = 250;           // Delay time in milliseconds
float angle;            // Variable to store the calculated angle for the servo
Servo myservo;          // Create a Servo object

void setup() {
  Serial.begin(9600);       // Initialize serial communication at 9600 baud
  pinMode(lightpin, INPUT); // Set lightpin as input for the light sensor
  pinMode(servopin, OUTPUT); // Set servopin as output for the servo
  myservo.attach(servopin); // Attach the servo to the specified pin
}

void loop() {
  lightval = analogRead(lightpin); // Read the analog value from the light sensor
  Serial.println(lightval);        // Print the light sensor value to the serial monitor
  delay(dt);                       // Delay for a specified time

  // Calculate the servo angle based on the light sensor value
  angle = ((-180.0 / 673.0) * lightval) + ((180.0 * 679.0) / 673.0);
  myservo.write(angle);            // Set the servo to the calculated angle
}
