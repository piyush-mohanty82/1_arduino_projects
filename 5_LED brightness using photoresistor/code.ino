int lightpin = A0;    // Analog input pin for light sensor
int value;            // Variable to store raw sensor value
int value2;           // Variable to store mapped sensor value
int delayValue = 250; // Delay value in milliseconds
int led = 9;          // Digital pin connected to LED

void setup() {
  pinMode(lightpin, INPUT);  // Set lightpin as input for light sensor
  pinMode(led, OUTPUT);      // Set led pin as output for LED
  Serial.begin(9600);        // Initialize serial communication at 9600 baud
}

void loop() {
  value = analogRead(lightpin);      // Read the analog value from lightpin
  value2 = map(value, 0, 1023, 0, 255); // Map the analog value to 0-255 range for PWM
  analogWrite(led, value2);          // Output PWM value to control LED brightness
  Serial.println(value2);            // Print mapped value to serial monitor
}
