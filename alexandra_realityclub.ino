#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  

  lcd.setCursor(0, 0);
  lcd.print("And if I was a");
  delay(1800);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("fool for you");
  delay(3500);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("I'd wait");
  delay(1000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("500");
  delay(1300);

  lcd.setCursor(4, 1);
  lcd.print("million");
  delay(1300);

  lcd.setCursor(11, 0);
  lcd.print("hours");
  delay(2000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("on a park bench");
  delay(2000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("out on the moon");
  delay(3200);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(" <3 ");
  delay(1500);
}

void loop()
{
  delay(10);
}