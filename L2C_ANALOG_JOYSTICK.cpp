#include <LiquidCrystal_I2C.h>

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
const int SW_pin = 2;
const int X_pin = 0;
const int Y_pin = 1;

void setup()
{
  lcd.init();                     
  lcd.backlight();

  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);

  lcd.setCursor(0, 0);
  lcd.print("X: ");
  lcd.setCursor(0, 1);
  lcd.print("Y: ");
}

void loop()
{
  lcd.setCursor(3, 0);
  lcd.print(analogRead(X_pin));
  lcd.print("   ");
  lcd.setCursor(3, 1);
  lcd.print(analogRead(Y_pin));
  lcd.print("   ");
  delay(500);
}
