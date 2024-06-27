int red = 2;  // Define the pin connected to the red LED
int green = 3;  // Define the pin connected to the green LED
int buzzer = 4;  // Define the pin connected to the buzzer
int gassensor = A1;  // Define the pin connected to the gas sensor (analog pin A1)

void setup() {
  Serial.begin(9600);  // Initialize serial communication at a baud rate of 9600
  pinMode(red, OUTPUT);  // Set the red LED pin as an output
  pinMode(green, OUTPUT);  // Set the green LED pin as an output
  pinMode(buzzer, OUTPUT);  // Set the buzzer pin as an output
}

void loop() {
  int val = analogRead(gassensor);  // Read the value from the gas sensor
  Serial.println(val);  // Print the gas sensor value to the serial monitor
  if (val > 400) {  // If the gas sensor value is greater than 400
    digitalWrite(red, HIGH);  // Turn on the red LED
    digitalWrite(green, LOW);  // Turn off the green LED
    digitalWrite(buzzer, HIGH);  // Turn on the buzzer
  } else {  // If the gas sensor value is 400 or less
    digitalWrite(red, LOW);  // Turn off the red LED
    digitalWrite(green, HIGH);  // Turn on the green LED
    digitalWrite(buzzer, LOW);  // Turn off the buzzer
  }
}
