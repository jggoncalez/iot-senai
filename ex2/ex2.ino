#include <LiquidCrystal.h> // Biblioteca para LCD sem I2C

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Pinagem do LCD
String prints[3] = {"Vermelho", "Amarelo", "Verde"};
int leds[3] = {6, 7, 8};

void setup() {
  lcd.begin(16, 2); // Inicializa LCD 16x2
  lcd.setCursor(0, 0);
  lcd.print("Ola, Mundo!");
  lcd.setCursor(0, 1);
  lcd.print("Oi jao!");
  delay(2000);

  for (int i = 0; i < 3; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(prints[i]);
    digitalWrite(leds[i], HIGH);
    delay(3000);
  }

  for (int i = 0; i < 3; i++) {
    digitalWrite(leds[i], LOW);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(prints[i]);
    delay(3000);
  }
}
