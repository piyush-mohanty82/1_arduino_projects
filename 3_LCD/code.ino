#include<LiquidCrystal.h>

int rs = 11,en = 12,d4 = 2,d5 = 3,d6 = 4, d7 = 5;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup(){
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("PIYUSH MOHANTY");
  lcd.setCursor(0,1);
  lcd.print("BRANCH:Electronics And Telecommunication");
  delay(1000);
  
}
void loop(){
  lcd.scrollDisplayLeft();
  delay(300);
  	
  	

}
  
