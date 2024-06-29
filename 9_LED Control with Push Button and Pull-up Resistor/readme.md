# LED Control with Push Button and Pull-up Resistor

This Arduino project demonstrates how to control an LED using a push button with an internal pull-up resistor. When the button is pressed, the LED turns off, and when the button is released, the LED turns on.

# Components Needed

Arduino board (e.g., Arduino Uno).

LED.

Push button.

Resistor (10k ohms, if not using the internal pull-up).

Jumper wires.

Breadboard (optional).

# Circuit Diagram.

Connect the components as follows:

LED:

Cathode (short leg) to ground.

Anode (long leg) to digital pin 8 through a current-limiting resistor (if necessary).

Push Button:

One leg to +5V (VCC).

The other leg to digital pin 12.

(Optional) A pull-down resistor (10k ohms) between the button pin and ground if not using the internal pull-up.

![Screenshot 2024-06-29 184850](https://github.com/piyush-mohanty82/1_arduino_projects/assets/174017382/ffbbccd7-feb3-4ae2-9e27-208f07e6b6e7)
