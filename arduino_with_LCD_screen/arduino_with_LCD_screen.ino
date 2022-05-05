#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16,2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("hello world");
  lcd.setCursor(15, 0);
  lcd.print("15656");
   lcd.setCursor(0,1);
  lcd.print("kawa");
}

void loop() {
//  delay(1000);
//   lcd.clear();
//   lcd.print("slaw mn kawanm");
//   delay(1000);

//  lcd.autoscroll();

  lcd.scrollDisplayLeft();
  delay(100);


//  lcd.cursor();
//  delay(500);
 lcd.noCursor();
//  delay(500);

//  lcd.blink();
//  delay(5000);
  lcd.noBlink();
//  delay(2000);


}