# Servo Motor Control with Photoresistor

This Arduino project demonstrates how to control a servo motor based on the input from a photoresistor (light-dependent resistor, LDR). The servo motor's angle is adjusted according to the amount of light detected by the photoresistor.

# Components Needed

Arduino board (e.g., Arduino Uno).

Servo motor.

Photoresistor (LDR).

Resistor (appropriate value for the LDR, typically 10k ohms).

Jumper wires.

Breadboard (optional).

# Circuit Diagram

Connect the components as follows:

Photoresistor:

One leg to +5V (VCC).

One leg to analog pin A4 and a resistor connected to ground (GND).

The junction between the photoresistor and the resistor to analog pin A4.

Servo Motor:

Signal pin to digital pin 9.

VCC to +5V.

GND to ground.

![Screenshot 2024-06-29 181637](https://github.com/piyush-mohanty82/1_arduino_projects/assets/174017382/9d133120-f1cc-4aa7-9357-cf99a0300215)
