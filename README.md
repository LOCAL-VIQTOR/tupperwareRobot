# Tupperware Robot (TWR) README
I am going to build a robot out of tupperware.

**History:** I have an Associate's in Applied Science (Mechatronics) and have worked for over a year as a Controls Software specialist in the industry on parcel-identifying (PID) equipment. During college, I became semi-obsessed with the idea of building devices, and found that one of the largest conceptual issues I had was deciding what qualities of a chassis would be beneficial. I, at the time, did not have the resources to think about how much a chassis for anything would cost, and then it hit me---tupperware. It's a chassis style that I have regular access to, even out of the trash if neessary. 

The idea never came to fruition, but I am still alive. The basics of tupperware robot changed as new goals an issues arose. Power issues were a main issue while trying to add more components. It was originally connected to an Arduino UNO R3 as well. I selected a different project, a soldering kit that allowed you to make your own variable power supply, but during the time of construction I was (and now, still am) out of replacement solder tips, and so my work was lackluster and my final product inefficacious. That project must be looked at in order to add more components to the unit in a way that feels "earned" as a lesson. I want to construct the entirety of the unit from base components except for the Arduino. The model has changed to an Arduino UNO Mini knock-off model, as listed below. 

---
**/blueprint.md:** transferred from old repository.
# Tupperware Robot / Tupperware Baby

***Collected Links:***
- [Liquid Crystal Displays (LCDs) with Arduino](https://docs.arduino.cc/learn/electronics/lcd-displays/)
- [ELEGOO Arduino UNO Project Basic Starter Kit Tutorial](https://www.elegoo.com/blogs/arduino-projects/elegoo-uno-project-super-starter-kit-tutorial?srsltid=AfmBOooeN6s4ChY8OTyOwaseaTfwobJxCiQTPvFdCtDBF2PZBLF6Qxoe)
- [Arduino NANO Documentation Page, Similar Model to LAVFIN Nano 3.0 Used](https://docs.arduino.cc/hardware/nano/)

## Q & A
*Question:* What [are] the ICSP pins for? (The 6 male pins on the obverse of the Nano) 

*Answer: "Mostly ICSP it is a AVRtiny programming header for the Arduino consisting of MOSI, MISO, SCK, RESET, VCC, GND. It is often refered to as an SPI (Serial Peripheral Interface) which could be considered an "expansion" of the output, but really, you are slaving the output device to the master of the SPI bus. So, Master Input and Output depends on the master :wink:"* [x](https://forum.arduino.cc/t/what-is-the-icsp-pins-for/124378)

# Project Planning

### The Liquid Crystal Display
In the college class, I remember setting up the included 16-pin, 16x2 LCD display with a Hitachi `HD44780` chip. This can be replaced with the LiquidCrystal library, `<LiquidCrystal.h>`. Apparently, you can usually tell when it is compatible by the 16-pin interface.

### LCD Wiring Diagram & Schematic
![LCD_Base_bb_Fritz](https://github.com/user-attachments/assets/fd123cfd-dff2-4471-91bf-f6b94a1a4fce)
![LCD_Base_bb_Schem](https://github.com/user-attachments/assets/83058592-33d7-4278-a770-ecdb53996bfc)


To wire your LCD screen to your board, connect the following pins:
- LCD RS pin to digital pin 12
- LCD Enable pin to digital pin 11
- LCD D4 pin to digital pin 5
- LCD D5 pin to digital pin 4
- LCD D6 pin to digital pin 3
- LCD D7 pin to digital pin 2
- LCD R/W pin to GND
- LCD VSS pin to GND
- LCD VCC pin to 5V
- LCD LED+ to 5V through a 220 ohm resistor
- LCD LED- to GND

Additionally, wire a 10k potentiometer to +5V and GND, with it's wiper (output) to LCD screens VO pin (pin3).
