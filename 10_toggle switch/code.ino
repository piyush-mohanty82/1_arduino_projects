int buttonNew;       // Variable to store the current state of the button
int buttonOld = 1;   // Variable to store the previous state of the button, initialized to 1 (not pressed)
int ledState = 0;    // Variable to store the current state of the LED, 0 = off, 1 = on
int led = 8;         // Define the digital pin connected to the LED
int button = 12;     // Define the digital pin connected to the button

void setup() {
  Serial.begin(9600);    // Initialize serial communication at 9600 baud
  pinMode(led, OUTPUT);  // Set the LED pin as an output
  pinMode(button, INPUT);// Set the button pin as an input
}

void loop() {
  buttonNew = digitalRead(button);  // Read the current state of the button
  Serial.println(buttonNew);        // Print the button state to the serial monitor

  if (buttonNew == 1 && buttonOld == 0) { // Check if the button has been pressed (rising edge detection)
    if (ledState == 0) {      // If the LED is off
      digitalWrite(led, HIGH); // Turn the LED on
      ledState = 1;            // Update the LED state
    } else {                   // If the LED is on
      digitalWrite(led, LOW);  // Turn the LED off
      ledState = 0;            // Update the LED state
    }
  }

  buttonOld = buttonNew; // Update the old button state with the current state
}
