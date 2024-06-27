# Light Sensor Control of LED Brightness

This Arduino sketch demonstrates how to control the brightness of an LED using a light-dependent resistor (LDR) or similar light sensor. The sensor's analog output is read by the Arduino, mapped to a PWM (Pulse Width Modulation) value, and then used to adjust the brightness of an LED connected to a digital pin.

#Components Needed

Arduino board (e.g., Arduino Uno).

photoresistor.

LED.

Resistor (if necessary for the LED).

Jumper wires.

# Circuit Diagram

Connect the components as follows:

photoresistor:

One leg to +5V (VCC).

One leg to ground (GND).

The middle leg (analog output) to Arduino analog pin A0.

LED:

Cathode (short leg) to ground through a current-limiting resistor (if necessary).

Anode (long leg) to Arduino digital pin 9.


![Screenshot 2024-06-27 184509](https://github.com/piyush-mohanty82/1_arduino_projects/assets/174017382/4d3e1964-7475-4286-a4c1-8371641cc832)
