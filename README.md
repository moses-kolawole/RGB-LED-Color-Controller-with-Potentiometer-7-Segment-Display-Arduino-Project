# RGB LED with Potentiometer & 7-Segment Display – Arduino Project

## Overview
This project controls an RGB LED using a potentiometer and displays the corresponding color value on two 7-segment displays. The potentiometer reading determines the LED color by switching between multiple color combinations, while the 7-segment displays show a numeric representation of the potentiometer position.

## Objective
- Learn how to read analog input values with `analogRead()`
- Control RGB LED colors using digital outputs
- Display numeric values on two 7-segment displays
- Understand real-time input-output interaction
- Gain experience with integrating sensors, LEDs, and displays

## Components Used
- Arduino Uno
- RGB LED (Common Cathode)
- 7-Segment Displays (where only two of the display was connected)
- 220Ω resistors
- Potentiometer
- Breadboard
- Jumper wires
- 9V Battery
- 9V Battery Clip to DC Barrel Jack

## Circuit Diagram
![Circuit Diagram](images/)

## How It Works
1. The potentiometer is connected to an analog input pin on the Arduino (`A0`).  
2. The Arduino reads the potentiometer value using `analogRead()` and maps it to a range of 0–100 (`color_switch`).  
3. The `color_switch` value determines the RGB LED color by turning ON/OFF the red, green, and blue pins according to specific ranges:  
   - 0–20: LED OFF  
   - 21–30: Red  
   - 31–40: Green  
   - 41–50: Blue  
   - 51–60: Green + Blue  
   - 61–70: Red + Green  
   - 71–80: Red + Blue  
   - 81–100: Red + Green + Blue  
4. Two 7-segment displays show the numeric value of the `color_switch` reading:  
   - `display1` shows the last digit  
   - `display2` shows the second last digit  
5. The program continuously updates the LED color and display as the potentiometer is adjusted in real-time.  
6. Serial output provides debugging info for the current `color_switch` value.

## Code
The Arduino sketch for this project is located in the [code/ directory](code/RGB_PO~1.INO)

## Demo Video
A demonstration video showing the working project is included in this repository.

📹 **Project Demonstration:**  
[Click here to watch/download the demo video](video/RGB_LED_video1.mp4)

*(If the video does not preview directly on GitHub, please download it using the link above.)*

## Reflection (What I Learned)
- How to integrate analog input, RGB LEDs, and 7-segment displays  
- Mapping potentiometer readings to LED colors and numeric displays  
- Real-time hardware control with multiple outputs  
- Improved understanding of complex Arduino logic using arrays and functions  

## Challenges Faced
- Correctly wiring RGB LED and multiple 7-segment display pins  
- Mapping potentiometer readings to numeric and color outputs  
- Preventing flickering and ensuring smooth transitions between colors  
- Coordinating timing for displays and LED updates  

## Possible Improvements
- Smooth LED color transitions using PWM instead of ON/OFF  
- Implement dynamic color patterns based on potentiometer speed  
- Add a push button to freeze or lock the current color and display  

## Project Status
Completed

