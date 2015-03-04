#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
  lcd.begin(16,2);
}


void loop()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Hello.....");
  lcd.setCursor(0,1);
  lcd.print("16x2 LCD Demo");
  delay(1000);
}

