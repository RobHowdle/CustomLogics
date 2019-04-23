#include <LedControl.h> //  need the library
LedControl lc=LedControl(12,11,10);//

// This code was from the internet that was free to download and I tweaked it a bit to more resemble R2's Logic Lights. Currently only working with RED DOT MATRIX MAX7219 DISLPAYS however I will be updating to work with other displays such as RGB Displays.
 
// ARDUINO Pin 12 is connected to the MAX7219 Pin 3 labelled DIN - ORANGE -Front Logic
// ARDUINO Pin 11 is connected to the MAX7219 Pin 5 labelled CLK - GREEN - Front Logic
// ARDUINO Pin 10 is connected to the MAX7219 Pin 4 labelled as CS - YELLOW - Front Logic
// Second Logic MATRIX Uses The Output Pins On First Matrix.
// Rear Logic Lights Follows The Same Connections.
// 1 as we only have 1 MAX 7219 atatched

long randNumberX;
long randNumberY;

void setup(){

// the zero refers to the MAX7219 number
lc.shutdown(0,false);// turn off power saving
lc.setIntensity(0,1);// sets brightness (0~15 possible values)
lc.clearDisplay(0);// clear screen
Serial.begin(9600);
 
// if analog input pin 0 is unconnected, random analog
// noise will cause the call to randomSeed() to generate
randomSeed(analogRead(0));

}
 
void loop()
{
randNumberX = random(0,8); //Number of LED's on X Axis
randNumberY = random(0,8); //Number of LED's on Y Axis
lc.setLed(0,randNumberX,randNumberY,false); // turns on LED at col, row
delay(1); 
lc.setLed(0,randNumberX,randNumberY,true); // turns on LED at col, row
delay(1);

 randNumberX = random(0,8); //Number of LED's on X Axis
randNumberY = random(0,8); //Number of LED's on Y Axis
lc.setLed(0,randNumberX,randNumberY,false); // turns OFF LED at col, row
delay(1);
lc.setLed(0,randNumberX,randNumberY,false); // turns OFF LED at col, row
delay(1);
//LOWER THE DELAY NUMBER, THE QUICKER THE FLASH
}
