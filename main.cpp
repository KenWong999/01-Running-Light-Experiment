#include <Arduino.h>

int ledPins[] = {2, 4, 5, 18};
int ledCount = 4;
int delayTime = 300;

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
}

void loop() {
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
  }

  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], LOW);
    delay(delayTime);
  }
}