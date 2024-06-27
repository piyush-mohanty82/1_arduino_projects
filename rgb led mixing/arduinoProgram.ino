int redpin = 8;  // Define the pin connected to the red component of the RGB LED
int greenpin = 10;  // Define the pin connected to the green component of the RGB LED
int bluepin = 9;  // Define the pin connected to the blue component of the RGB LED
String mycolour;  // Variable to store the color input from the user
String msg = "What colour do you want?";  // Message prompt for the user

void setup() {
  Serial.begin(9600);  // Initialize serial communication at a baud rate of 9600
  pinMode(redpin, OUTPUT);  // Set the red pin as an output
  pinMode(greenpin, OUTPUT);  // Set the green pin as an output
  pinMode(bluepin, OUTPUT);  // Set the blue pin as an output
}

void loop() {
  Serial.println(msg);  // Print the message prompt to the serial monitor
  while (Serial.available() == 0) {
    // Wait for user input
  }
  mycolour = Serial.readString();  // Read the input from the serial monitor as a string
  if (mycolour == "red") {
    digitalWrite(redpin, HIGH);  // Turn on the red LED
    digitalWrite(greenpin, LOW);  // Turn off the green LED
    digitalWrite(bluepin, LOW);  // Turn off the blue LED
  }
  if (mycolour == "green") {
    digitalWrite(redpin, LOW);  // Turn off the red LED
    digitalWrite(greenpin, HIGH);  // Turn on the green LED
    digitalWrite(bluepin, LOW);  // Turn off the blue LED
  }
  if (mycolour == "blue") {
    digitalWrite(redpin, LOW);  // Turn off the red LED
    digitalWrite(greenpin, LOW);  // Turn off the green LED
    digitalWrite(bluepin, HIGH);  // Turn on the blue LED
  }
  if (mycolour == "off") {
    digitalWrite(redpin, LOW);  // Turn off the red LED
    digitalWrite(greenpin, LOW);  // Turn off the green LED
    digitalWrite(bluepin, LOW);  // Turn off the blue LED
  }
  if (mycolour == "aqua") {
    analogWrite(redpin, 0);  // Set the red LED to 0 (off)
    analogWrite(greenpin, 255);  // Set the green LED to full brightness
    analogWrite(bluepin, 150);  // Set the blue LED to a medium brightness
  }
  if (mycolour == "yellow") {
    analogWrite(redpin, 255);  // Set the red LED to full brightness
    analogWrite(greenpin, 255);  // Set the green LED to full brightness
    analogWrite(bluepin, 0);  // Set the blue LED to 0 (off)
  }
  if (mycolour == "pink") {
    analogWrite(redpin, 255);  // Set the red LED to full brightness
    analogWrite(greenpin, 0);  // Set the green LED to 0 (off)
    analogWrite(bluepin, 100);  // Set the blue LED to a low brightness
  }
}
