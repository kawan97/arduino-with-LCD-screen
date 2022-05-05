#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20,4);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("hello world");
  lcd.setCursor(15, 0);
  lcd.print("1");
   lcd.setCursor(0,1);
  lcd.print("kawa");
}

void loop() {
  delay(5000);
   lcd.clear();
   lcd.print("slaw mn kawanm");


}
