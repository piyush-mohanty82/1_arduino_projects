int trigPin = 12;  // Define the pin connected to the trigger pin of the ultrasonic sensor
int echoPin = 11;  // Define the pin connected to the echo pin of the ultrasonic sensor
float pingTravelTime;  // Variable to store the travel time of the ping
float pingTravelDistance;  // Variable to store the total travel distance of the ping
float targetDistance;  // Variable to store the distance to the target
float velocity = 343;  // Speed of sound in air in meters per second
int dt = 100;  // Delay time in milliseconds between measurements

void setup() {
  pinMode(trigPin, OUTPUT);  // Set the trigger pin as an output
  pinMode(echoPin, INPUT);  // Set the echo pin as an input
  Serial.begin(9600);  // Initialize serial communication at a baud rate of 9600
}

void loop() {
  digitalWrite(trigPin, LOW);  // Ensure the trigger pin is low
  delayMicroseconds(10);  // Wait for 10 microseconds
  digitalWrite(trigPin, HIGH);  // Set the trigger pin high to send a ping
  delayMicroseconds(10);  // Wait for 10 microseconds to let the ping be sent
  digitalWrite(trigPin, LOW);  // Set the trigger pin low again
  
  pingTravelTime = pulseIn(echoPin, HIGH);  // Measure the time for the echo to return
  
  pingTravelDistance = 0.0343 * pingTravelTime;  // Calculate the total travel distance of the ping (2 * distance to target)
  targetDistance = 0.01715 * pingTravelTime;  // Calculate the distance to the target
  
  Serial.print(pingTravelTime);  // Print the ping travel time
  Serial.print(" ");
  Serial.print("2d = ");  // Print label for total travel distance
  Serial.print(pingTravelDistance);  // Print the total travel distance
  Serial.print(" ");
  Serial.print("d = ");  // Print label for target distance
  Serial.println(targetDistance);  // Print the target distance
  delay(dt);  // Wait for the specified delay time before the next measurement
}
