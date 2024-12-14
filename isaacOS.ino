// The LiquidCrystal library allows you to control LCD displays that
// are compatible with the Hitachi HD44780 driver. There are many of
// them out there and you can usually tell them by the 16-pin
// interface. - https://docs.arduino.cc/learn/electronics/lcd-displays/

#include <LiquidCrystal.h>

const int rs = 12,  // LCD RS pin to digital pin 12
          en = 11,  // LCD Enable pin to digital pin 11
          d4 = 5,   // LCD D4 pin to digital pin 5
          d5 = 4,   // LCD D5 pin to digital pin 4
          d6 = 3    // LCD D6 pin to digital pin 3
          d7 = 2    // LCD D7 pin to digital pin 2
                    //LCD R/W pin to GND
                    //LCD VSS pin to GND
                    //LCD VCC pin to 5V
                    //LCD LED+ to 5V through a 220 ohm resistor
                    //LCD LED- to GND

//Additionally, wire a 10k potentiometer to +5V and GND, with 
//it's wiper (output) to LCD screens VO pin (pin3).

LiquidCrystal lcd(rs, en, d4, d6, d6, d7)

void setup() {
  // put your setup code here, to run once:
  // set up the LCD's number of columns nad rows:
  lcd.begin(16,2);
  // Print a message to the LCD
  lcd.print("hello, world!");
}

void loop() {
  // put your main code here, to run repeatedly:
  // set the cursor to the column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setcursor(0,1);
  // print the number of seconds since reset:
  lcd.print(millis(), / 1000);
}
