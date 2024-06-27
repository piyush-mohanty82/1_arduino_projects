#include <LiquidCrystal.h>  // Include the LiquidCrystal library

// Define pin connections to the LCD
int rs = 11;   // Register select pin
int en = 12;   // Enable pin
int d4 = 2;    // Data pin 4
int d5 = 3;    // Data pin 5
int d6 = 4;    // Data pin 6
int d7 = 5;    // Data pin 7

// Create a LiquidCrystal object named 'lcd'
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

float firstnum;  // Variable to store the first number entered via serial input
float secondnum; // Variable to store the second number entered via serial input
float answer;    // Variable to store the calculated answer
String n;        // String variable to temporarily store serial input (not used effectively)
String op;       // String variable to store the arithmetic operation (+, -, *, /)

void setup() {
  Serial.begin(9600);  // Initialize serial communication at a baud rate of 9600
  lcd.begin(16, 2);    // Initialize the LCD with 16 columns and 2 rows
}

void loop() {
  // Prompt and input for the first number
  lcd.setCursor(0, 0);  // Set cursor to the first line, first column
  lcd.print("firstnum = ");  // Display prompt on LCD
  while (Serial.available() == 0) {}  // Wait until serial data is available
  firstnum = Serial.parseFloat();  // Read the first number from serial input
  lcd.print(firstnum);  // Display the first number on LCD

  // Prompt and input for the second number
  while (Serial.available() == 0) {}  // Wait until serial data is available
  n = Serial.readString();  // Read and discard the next input (ineffective use)
  lcd.clear();  // Clear the LCD screen

  lcd.print("secondnum = ");  // Display prompt for second number
  while (Serial.available() == 0) {}  // Wait until serial data is available
  secondnum = Serial.parseFloat();  // Read the second number from serial input
  lcd.print(secondnum);  // Display the second number on LCD

  // Prompt and input for the arithmetic operation
  while (Serial.available() == 0) {}  // Wait until serial data is available
  n = Serial.readString();  // Read and discard the next input (ineffective use)
  lcd.clear();  // Clear the LCD screen

  lcd.setCursor(0, 0);  // Set cursor to the first line, first column
  lcd.print("op(+-*/) = ");  // Display prompt for arithmetic operation
  while (Serial.available() == 0) {}  // Wait until serial data is available
  op = Serial.readString();  // Read the arithmetic operation (+, -, *, /) from serial input
  lcd.print(op);  // Display the arithmetic operation on LCD

  // Perform calculation based on the arithmetic operation
  if (op == "+") {
    answer = firstnum + secondnum;
  } else if (op == "-") {
    answer = firstnum - secondnum;
  } else if (op == "*") {
    answer = firstnum * secondnum;
  } else if (op == "/") {
    answer = firstnum / secondnum;
  }

  lcd.clear();  // Clear the LCD screen
  delay(500);  // Delay for 500 milliseconds

  // Display the calculation result
  lcd.setCursor(0, 0);  // Set cursor to the first line, first column
  lcd.print(firstnum);  // Display the first number
  lcd.print(op);  // Display the arithmetic operation
  lcd.print(secondnum);  // Display the second number
  lcd.print("=");  // Display the equals sign
  lcd.print(answer);  // Display the calculated answer

  delay(2000);  // Delay for 2000 milliseconds (2 seconds)

  while (Serial.available() == 0) {}  // Wait until serial data is available
  n = Serial.readString();  // Read and discard the next input (ineffective use)
  lcd.clear();  // Clear the LCD screen
}
