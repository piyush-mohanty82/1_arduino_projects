# Light Sensor-Based LED Indicator

This Arduino project uses a light sensor to control the state of two LEDs (red and green). Depending on the ambient light level, either the red or green LED will be illuminated.

# Components Needed

Arduino board (e.g., Arduino Uno).

Light sensor (e.g., LDR).

Red LED.

Green LED.

Resistors (appropriate values for LEDs and light sensor).

Jumper wires.

Breadboard (optional).

# Circuit Diagram

Connect the components as follows:

Light Sensor (LDR):

One leg to +5V (VCC).

Other leg to analog pin A0 and to ground through a resistor (e.g., 10k ohms).

Red LED:

Anode (long leg) to digital pin 9 through a current-limiting resistor.

Cathode (short leg) to ground.

Green LED:

Anode (long leg) to digital pin 8 through a current-limiting resistor.

Cathode (short leg) to ground.

![Screenshot 2024-06-29 190930](https://github.com/piyush-mohanty82/1_arduino_projects/assets/174017382/060c5ec6-3b97-4310-b6cb-0fce734adc70)
