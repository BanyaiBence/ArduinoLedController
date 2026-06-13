# Arduino Led Controller

## Overview

In this project, we will create an Arduino based LED controller.
The board will connect to a JoyStick (via analog pins), to a set of LEDs (SK6812) 
and an OLED display (SH1106).  
It will allow the user to control different lighting patterns, effects and colors using the joystick, while displaying the current settings on the OLED screen.

## Components
- Aduino Due
- Analog Joystick
- SK6812 LED Strip
- SH1106 OLED Display

## High-Level Requirements

- The user should be able to control the LED strip using the joystick.
- The OLED display should show the current settings, such as the selected pattern, color, and brightness.
- The system should support multiple lighting patterns and effects.

## Roadmap

1. Setting up the Arduino Due and connecting the components (joystick, LED strip, OLED display).
2. Implementing the LED control logic, including different patterns and effects.
3. Implementing the OLED display logic to show the current settings.
4. Testing and debugging the system to ensure it works as expected.

## Useful Links
- [U8G2 Menu code example](https://forum.arduino.cc/t/oled-menu-with-u8g2-lib/554555)
- [U8G2 Setup](https://github.com/olikraus/u8g2/wiki/setup_tutorial)