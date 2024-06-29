int led = 8;           // Define the digital pin connected to the LED
int button = 12;       // Define the digital pin connected to the button
int buttonread;        // Variable to store the button state
int dt = 100;          // Delay time in milliseconds

void setup() {
  Serial.begin(9600);      // Initialize serial communication at 9600 baud
  pinMode(led, OUTPUT);    // Set the LED pin as an output
  pinMode(button, INPUT);  // Set the button pin as an input
}

void loop() {
  buttonread = digitalRead(button);  // Read the state of the button
  Serial.println(buttonread);        // Print the button state to the serial monitor
  delay(dt);                         // Delay for a specified time

  if(buttonread == HIGH) {           // Check if the button is pressed
    digitalWrite(led, LOW);          // Turn the LED off
  } else {                           // If the button is not pressed
    digitalWrite(led, HIGH);         // Turn the LED on
  }
}
