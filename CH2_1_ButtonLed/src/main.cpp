#include <Arduino.h>

// Program that has a button turn on a LED by pressing the button now.  When
// the button is released, then the LED turns off.

// Defined pins 
#define PIN_LED 4
#define PIN_BUTTON 5

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON, INPUT);
}

void loop() {
  if (digitalRead(PIN_BUTTON) == LOW) {
    digitalWrite(PIN_LED, HIGH);
  } else {
    digitalWrite(PIN_LED, LOW);
  }
}

