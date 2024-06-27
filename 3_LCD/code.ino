#include <LiquidCrystal.h>  // Include the LiquidCrystal library

// Define the pin connections to the LCD
int rs = 11;   // Register select pin
int en = 12;   // Enable pin
int d4 = 2;    // Data pin 4
int d5 = 3;    // Data pin 5
int d6 = 4;    // Data pin 6
int d7 = 5;    // Data pin 7

// Create a LiquidCrystal object named 'lcd'
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);  // Initialize the LCD with 16 columns and 2 rows
  lcd.setCursor(0, 0);  // Set the cursor to the top-left corner (0, 0)
  lcd.print("PIYUSH MOHANTY");  // Print text on the first line
  lcd.setCursor(0, 1);  // Set the cursor to the second line (0, 1)
  lcd.print("BRANCH:Electronics And Telecommunication");  // Print text on the second line
  delay(1000);  // Delay for 1 second
}

void loop() {
  lcd.scrollDisplayLeft();  // Scroll the display to the left
  delay(300);  // Delay for 300 milliseconds
}
