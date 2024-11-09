#include <Arduino.h>

// This code is used to blink an external LED to the ES8266 chip via pin 4 and
// one of the three ground pins.  Note, there is a 220 Ohm resisor in the
// circuit.  Three jumper cables are used.

// The pin to control the external LED with.
int PIN_LED = 4;

// Set pin 4 to be an output pin.
void setup() {
  pinMode(PIN_LED, OUTPUT);
}

// Turn on pin 4 for 1 second, and then turn off pin 4 for 1 second.
void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(1000);
  digitalWrite(PIN_LED, LOW);
  delay(1000);
}

