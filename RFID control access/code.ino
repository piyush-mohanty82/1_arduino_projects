#include <SPI.h>                // Include the SPI library
#include <MFRC522.h>            // Include the MFRC522 library

#define SS_PIN 10               // Define the Slave Select pin
#define RST_PIN 9               // Define the Reset pin
MFRC522 mfrc522(SS_PIN, RST_PIN); // Create an instance of the MFRC522 class

void setup() 
{
  pinMode(7,1);                 // Set pin 7 as an output pin
  pinMode(6,1);                 // Set pin 6 as an output pin
  Serial.begin(9600);           // Start serial communication at a baud rate of 9600
  SPI.begin();                  // Initialize the SPI bus
  mfrc522.PCD_Init();           // Initialize the MFRC522 reader
  Serial.println("Approximate your card to the reader..."); // Print a message to the serial monitor
  Serial.println();             // Print a blank line to the serial monitor
}

void loop() 
{
  // Look for new cards
  if (!mfrc522.PICC_IsNewCardPresent()) 
  {
    return;                     // If no new card is present, exit the loop
  }

  // Select one of the cards
  if (!mfrc522.PICC_ReadCardSerial()) 
  {
    return;                     // If card serial cannot be read, exit the loop
  }

  // Show UID on serial monitor
  Serial.print("UID tag :");    // Print "UID tag :" to the serial monitor
  String content= "";           // Initialize a string to store the UID
  byte letter;                  // Declare a byte variable to hold each byte of the UID

  for (byte i = 0; i < mfrc522.uid.size; i++) // Loop through the UID bytes
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "); // Print leading zero if needed
     Serial.print(mfrc522.uid.uidByte[i], HEX); // Print the UID byte in HEX format
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ")); // Concatenate leading zero to content string
     content.concat(String(mfrc522.uid.uidByte[i], HEX)); // Concatenate UID byte to content string
  }

  Serial.println();             // Print a new line to the serial monitor
  Serial.print("Message : ");   // Print "Message :" to the serial monitor
  content.toUpperCase();        // Convert the content string to upper case

  if (content.substring(1) == "43 5C 28 29") // Check if the UID matches the authorized UID
  {
    Serial.println("Authorized access"); // Print "Authorized access" to the serial monitor
    Serial.println();             // Print a blank line to the serial monitor

    digitalWrite(6,1);            // Set pin 6 to HIGH
    delay(200);                   // Wait for 200 milliseconds
    digitalWrite(6,0);            // Set pin 6 to LOW
    delay(200);                   // Wait for 200 milliseconds
    digitalWrite(6,1);            // Set pin 6 to HIGH
    delay(200);                   // Wait for 200 milliseconds
    digitalWrite(6,0);            // Set pin 6 to LOW
    delay(200);                   // Wait for 200 milliseconds
    digitalWrite(6,1);            // Set pin 6 to HIGH
    delay(200);                   // Wait for 200 milliseconds
    digitalWrite(6,0);            // Set pin 6 to LOW
    delay(1000);                  // Wait for 1000 milliseconds
  }
  else 
  {
    Serial.println("Access denied"); // Print "Access denied" to the serial monitor
    Serial.println();             // Print a blank line to the serial monitor
    //delay(3000);
    digitalWrite(7,1);
    delay(200);
    digitalWrite(7,0);
    delay(200);
    digitalWrite(7,1);
    delay(200);
    digitalWrite(7,0);
    delay(200);
    digitalWrite(7,1);
    delay(200);
    digitalWrite(7,0);
    delay(1000);
  }
 
 
} 
  
