# Potentiometer-Controlled LED Brightness
This Arduino project allows you to control the brightness of an LED using a potentiometer. The potentiometer's analog output is read by the Arduino, mapped to a PWM value, and then used to adjust the brightness of an LED connected to a digital pin.

# Components Needed

Arduino board (e.g., Arduino Uno).

Potentiometer.

LED.

Resistor (if necessary for the LED).

Jumper wires.

Breadboard (optional).

# Circuit Diagram

Connect the components as follows:

Potentiometer:

One leg to +5V (VCC).

One leg to ground (GND).

The middle leg (analog output) to Arduino analog pin A0

LED:

Cathode (short leg) to ground through a current-limiting resistor (if necessary).

Anode (long leg) to Arduino digital pin 9.

![Screenshot 2024-06-29 181842](https://github.com/piyush-mohanty82/1_arduino_projects/assets/174017382/c4e22731-6618-4f57-928d-41a77c39df74)