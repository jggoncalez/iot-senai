#include <LiquidCrystal.h> // Adiciona a biblioteca "LiquidCrystal" ao projeto

LiquidCrystal lcd(12, 11, 10, 9, 8,7); // Pinagem do LCD

void setup()
{
  lcd.begin(16, 2); // Inicia o lcd de 16x2
}

void loop()
{
  lcd.clear();              // Limpa o display
  lcd.setCursor(2, 0);      // 2 = 2 colunas para a direita. 0 = Primeira linha
  lcd.print("FALA GALERA"); // Imprime um texto
  lcd.setCursor(2, 1);      // 2 = 2 colunas para a direita. 1 = Segunda linha
  lcd.print("FIUUU POW"); 
  delay(5000);              // 5 segundos de delay
}