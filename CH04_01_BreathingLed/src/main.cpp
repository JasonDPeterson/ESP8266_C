#include <Arduino.h>

void breath(int, int);

int PIN_LED = 4;

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  breath(PIN_LED, 6);
  delay(500);
  map(0, 0, 255, 0, 1023);
}

void breath(int PIN_LED, int delayMs) {
  for (int i = 0; i <= 255; i++) {
    analogWrite(PIN_LED, i);
    delay(delayMs);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(PIN_LED, i);
    delay(delayMs);
  }
}