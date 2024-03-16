// #include <Arduino.h>
// /*
//   LiquidCrystal Library - Hello World

//  Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
//  library works with all LCD displays that are compatible with the
//  Hitachi HD44780 driver. There are many of them out there, and you
//  can usually tell them by the 16-pin interface.

//  This sketch prints "Hello World!" to the LCD
//  and shows the time.

//   The circuit:
//  * LCD RS pin to digital pin 12
//  * LCD Enable pin to digital pin 11
//  * LCD D4 pin to digital pin 5
//  * LCD D5 pin to digital pin 4
//  * LCD D6 pin to digital pin 3
//  * LCD D7 pin to digital pin 2
//  * LCD R/W pin to ground
//  * LCD VSS pin to ground
//  * LCD VCC pin to 5V
//  * 10K resistor:
//  * ends to +5V and ground
//  * wiper to LCD VO pin (pin 3)

//  Library originally added 18 Apr 2008
//  by David A. Mellis
//  library modified 5 Jul 2009
//  by Limor Fried (http://www.ladyada.net)
//  example added 9 Jul 2009
//  by Tom Igoe
//  modified 22 Nov 2010
//  by Tom Igoe
//  modified 7 Nov 2016
//  by Arturo Guadalupi

//  This example code is in the public domain.

//  https://docs.arduino.cc/learn/electronics/lcd-displays

// */

// // include the library code:
// #include <LiquidCrystal.h>

// // initialize the library by associating any needed LCD interface pin
// // with the arduino pin number it is connected to
// const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
// LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// void setup() {
//   // set up the LCD's number of columns and rows:
//   lcd.begin(16, 2);
//   // Print a message to the LCD.
//   // lcd.print("hello, world!");
//   // delay(1000);
//   Serial.begin(9600);
// }

// void loop() {
//   // when characters arrive over the serial port...
//   if (Serial.available()) {
//     // wait a bit for the entire message to arrive
//     delay(100);
//     // clear the screen
//     lcd.clear();
//     // read all the available characters
//     while (Serial.available() > 0) {
//       // display each character to the LCD
//       lcd.write(Serial.read());
//     }
//   }
// }

// // void loop() {
// //   // set the cursor to column 0, line 1
// //   // (note: line 1 is the second row, since counting begins with 0):
// //   // lcd.setCursor(0, 0);
// //   // lcd.autoscroll();
// //   lcd.print("hello, world!");
// //   delay(100);
// //   // print the number of seconds since reset:
// //   // lcd.print(millis() / 1000);
// //   lcd.scrollDisplayLeft();
// // }


// // void loop() {

//   // Turn off the blinking cursor:

//   // lcd.noBlink();

//   // delay(3000);

//   // Turn on the blinking cursor:

//   // lcd.blink();

//   // delay(3000);
//   // for (int thisChar = 0; thisChar < 16; thisChar++) {

//   //   lcd.setCursor(thisChar +1 , 0);
//   //   lcd.print(thisChar);

//   //   delay(500);
//   //   lcd.clear();
//   // }
// // }



// // void loop() {

// //   // set the cursor to (0,0):

// //   lcd.setCursor(0, 0);

// //   // print from 0 to 9:

// //   for (int thisChar = 0; thisChar < 10; thisChar++) {

// //     lcd.print(thisChar);

// //     delay(500);

// //   }

// //   // set the cursor to (16,1):

// //   lcd.setCursor(16, 1);

// //   // set the display to automatically scroll:

// //   lcd.autoscroll();

// //   // print from 0 to 9:

// //   for (int thisChar = 0; thisChar < 10; thisChar++) {

// //     lcd.print(thisChar);

// //     delay(500);

// //   }

// //   // turn off automatic scrolling

// //   lcd.noAutoscroll();

// //   // clear screen for the next loop:

// //   lcd.clear();
// // }


// // void loop() {

// //   // Turn off the cursor:

// //   lcd.noCursor();

// //   delay(500);

// //   // Turn on the cursor:

// //   lcd.cursor();

// //   delay(500);
// // }

// // void loop() {
// //   // Turn off the display:
// //   lcd.noDisplay();
// //   delay(500);
// //   // Turn on the display:
// //   lcd.display();
// //   delay(500);
// // }

// // void loop() {
// //   // scroll 13 positions (string length) to the left
// //   // to move it offscreen left:
// //   for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
// //     // scroll one position left:
// //     lcd.scrollDisplayLeft();
// //     // wait a bit:
// //     delay(150);
// //   }

// //   // scroll 29 positions (string length + display length) to the right
// //   // to move it offscreen right:
// //   for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
// //     // scroll one position right:
// //     lcd.scrollDisplayRight();
// //     // wait a bit:
// //     delay(150);
// //   }

// //   // scroll 16 positions (display length + string length) to the left
// //   // to move it back to center:
// //   for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
// //     // scroll one position left:
// //     lcd.scrollDisplayLeft();
// //     // wait a bit:
// //     delay(150);
// //   }

// //   // delay at the end of the full loop:
// //   delay(1000);

// // }