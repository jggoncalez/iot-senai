#include <Arduino.h>

void setup() {
    pinMode(13, OUTPUT); // VERMELHO 
    pinMode(12, OUTPUT); // AMARELO
    pinMode(8, OUTPUT); // VERDE
}

void loop() {
    digitalWrite(13, HIGH);
    delay(7000);
    digitalWrite(13, LOW);
    digitalWrite(8, HIGH);
    delay(6000);
    digitalWrite(8, LOW);
    digitalWrite(12, HIGH);
    delay(3000);
    digitalWrite(12, LOW);
}