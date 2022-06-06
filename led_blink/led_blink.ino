/*
 * This example shows how to blink a LED
 * using the Led class from the Led library
 */
#include <Led.h>

// Use the built-in LED
#define LED_PIN 16

// Create a Led object
// This will set the pin to OUTPUT

Led led(LED_PIN);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  led.on();
  delay(100);
  led.off();
  delay(100);
}
