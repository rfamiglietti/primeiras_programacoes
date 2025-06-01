#include <LiquidCrystal.h>

const int 
A = 12, 
B = 11, 
C = 5, 
D = 4, 
F = 3, 
G = 2;

LiquidCrystal lcd(A, B, C, D, F, G);

void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}