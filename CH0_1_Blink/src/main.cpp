#include <Arduino.h>

int PIN_LED = 2;

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

// Turn on #2 light, wait 1.0 second, turn off #2 light, wait 1.0 second.
void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(1000);
  digitalWrite(PIN_LED, LOW);
  delay(1000);
}
