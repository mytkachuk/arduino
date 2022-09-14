#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup()
{
  lcd.init();                     
  lcd.backlight();
  lcd.setCursor(2, 0);
  lcd.print("Hello World");
  
}

void loop()
{
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
}
