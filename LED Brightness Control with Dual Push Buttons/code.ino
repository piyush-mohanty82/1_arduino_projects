int buttonPin1 = 12;  // Define the digital pin connected to the first button
int buttonPin2 = 11;  // Define the digital pin connected to the second button
int buttonValue1;     // Variable to store the state of the first button
int buttonValue2;     // Variable to store the state of the second button
int dt = 500;         // Delay time in milliseconds
int ledbright = 0;    // Variable to store the brightness level of the LED
int ledpin = 3;       // Define the digital pin connected to the LED

void setup() {
  pinMode(buttonPin1, INPUT);  // Set the first button pin as an input
  pinMode(buttonPin2, INPUT);  // Set the second button pin as an input
  pinMode(ledpin, OUTPUT);     // Set the LED pin as an output
  Serial.begin(9600);          // Initialize serial communication at 9600 baud
}

void loop() {
  buttonValue1 = digitalRead(buttonPin1);  // Read the state of the first button
  buttonValue2 = digitalRead(buttonPin2);  // Read the state of the second button

  // Print the button states to the serial monitor
  Serial.print("button 1 = ");
  Serial.print(buttonValue1);
  Serial.print(", ");
  Serial.print("button 2 = ");
  Serial.println(buttonValue2);
  
  delay(dt);  // Delay for a specified time
  
  // Increase LED brightness if the first button is pressed
  if (buttonValue1 == LOW) {
    ledbright = ledbright + 5;
  }
  
  // Decrease LED brightness if the second button is pressed
  if (buttonValue2 == LOW) {
    ledbright = ledbright - 5;
  }
  
  // Constrain the brightness level to be between 0 and 255
  if (ledbright > 255) {
    ledbright = 255;
  }
  if (ledbright < 0) {
    ledbright = 0;
  }
  
  // Set the LED brightness
  analogWrite(ledpin, ledbright);
}
