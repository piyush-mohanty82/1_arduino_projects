int lightpin = A0;        // Define the analog pin connected to the light sensor
int lightvalue;           // Variable to store the light sensor value
int dv = 250;             // Delay value (not used in the code)
int redpin = 9;           // Define the digital pin connected to the red LED
int greenpin = 8;         // Define the digital pin connected to the green LED
int delayValue = 250;     // Delay value (not used in the code)
int led = 9;              // Define the digital pin connected to the LED (not used in the code)

void setup() {
  pinMode(lightpin, INPUT);      // Set the light sensor pin as an input
  pinMode(redpin, OUTPUT);       // Set the red LED pin as an output
  pinMode(greenpin, OUTPUT);     // Set the green LED pin as an output
  Serial.begin(9600);            // Initialize serial communication at 9600 baud
}

void loop() {
  lightvalue = analogRead(lightpin);  // Read the value from the light sensor
  Serial.println(lightvalue);         // Print the light sensor value to the serial monitor

  // If the light sensor value is greater than 350
  if (lightvalue > 350) {
    digitalWrite(greenpin, HIGH);     // Turn on the green LED
    digitalWrite(redpin, LOW);        // Turn off the red LED
  } 
  // If the light sensor value is 350 or less
  else {
    digitalWrite(greenpin, LOW);      // Turn off the green LED
    digitalWrite(redpin, HIGH);       // Turn on the red LED
  }
}
