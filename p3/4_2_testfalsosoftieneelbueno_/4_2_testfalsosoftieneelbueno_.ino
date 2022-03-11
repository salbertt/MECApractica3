#include <LiquidCrystal.h>

float temperatura;
float lm35 = A15;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
 lcd.begin(16,2);
}

void loop() {
 temperatura = analogRead(lm35);
 temperatura = (temperatura * 5/ 1024) / 0.01;
 lcd.clear();
 lcd.home();
 lcd.print("Temperatura:");
 lcd.setCursor(0,1);
 lcd.print(temperatura);
 lcd.print(" grados C");
 delay(200);
}
