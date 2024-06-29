int myVolt = A0;       // Analog input pin for potentiometer
int readValue;         // Variable to store the raw potentiometer value
float v2;              // Variable to store the converted voltage value (not used in this version)
int led = 9;           // Digital pin connected to the LED

void setup() {
  pinMode(myVolt, INPUT);  // Set myVolt as input for the potentiometer
  pinMode(led, OUTPUT);    // Set led pin as output for the LED
  //Serial.begin(9600);    // Initialize serial communication (commented out)
}

void loop() {
  readValue = analogRead(myVolt);   // Read the analog value from the potentiometer
  //v2 = (5.0 / 1023.0) * readValue; // Convert raw value to voltage (commented out)
  //Serial.println(v2);              // Print the voltage value to the serial monitor (commented out)
  
  int ledBrightness = map(readValue, 0, 1023, 0, 255); // Map the raw value to a PWM value
  analogWrite(led, ledBrightness);  // Output the PWM value to control LED brightness
  delay(10);                        // Small delay to avoid flickering
}
