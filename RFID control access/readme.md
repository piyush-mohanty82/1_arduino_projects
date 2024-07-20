# RFID Access Control System

This project is an RFID-based access control system using an Arduino and an MFRC522 RFID reader. The system reads the UID of RFID cards and checks if they are authorized to grant access. If an authorized card is detected, the system will trigger a series of actions to indicate successful authorization. If an unauthorized card is detected, the system will indicate access denial.

# Components Used
Arduino Uno

MFRC522 RFID Reader

RFID Cards/Tags

LEDs

Resistors

Breadboard and Jumper Wires

# Setup

Wiring:

Connect the MFRC522 module to the Arduino as follows:

1.SDA to pin 10

2.SCK to pin 13

3.MOSI to pin 11

4.MISO to pin 12

5.RST to pin 9

6.GND to GND

7.3.3V to 3.3V

8.Connect LEDs to pins 6 and 7 with appropriate resistors.

Libraries:

Install the SPI library if not already installed.

Install the MFRC522 library if not already installed.

![Screenshot 2024-07-20 141807](https://github.com/user-attachments/assets/dea3442e-ec02-476c-a6ba-644ca00e826c)
