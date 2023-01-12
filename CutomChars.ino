#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

byte Heart[8] = {
0b00000, 
0b01010,
0b11111,
0b11111,
0b01110,
0b00100,
0b00000,
0b00000,
};

byte Lock[8] = {
0b01110,
0b10001,
0b10001,
0b11111,
0b11011,
0b11011,
0b11111,
0b00000,
};

byte Alien[8] = {
0b11111,
0b10101,
0b11111,
0b11111,
0b01110,
0b01010,
0b11011,
0b00000,
};

void setup(){
lcd.init();
lcd.backlight();

lcd.createChar(0, Heart);
lcd.createChar(1, Lock);
lcd.createChar(2, Lock);

lcd.clear();
lcd.print("Custom Characters");
}

void loop(){

lcd.setCursor(0,1);
lcd.write(0);

lcd.setCursor(2,1);
lcd.write(1);

lcd.setCursor(4,1);
lcd.write(2);
}
