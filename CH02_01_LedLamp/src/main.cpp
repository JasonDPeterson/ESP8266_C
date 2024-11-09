#include <Arduino.h>

#define PIN_LED 4
#define PIN_BUTTON 5

void reverseGPIO(int);

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON, INPUT);
}

void loop() {
  if(digitalRead(PIN_BUTTON) == LOW) {
    delay(200);
    if(digitalRead(PIN_BUTTON) == LOW) {
      reverseGPIO(PIN_LED);
    }
    while (digitalRead(PIN_BUTTON) == LOW);
    delay(20);
    while (digitalRead(PIN_BUTTON) == LOW);
  }
}

// put function definitions here:
void reverseGPIO(int pin) {
  digitalWrite(pin, !digitalRead(pin));
}