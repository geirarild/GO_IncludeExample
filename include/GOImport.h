#ifndef GOImport
#define GOImport

#ifndef LED_BUILTIN
#define LED_BUILTIN 2
#endif

#include <Arduino.h>

const int ledPin =  LED_BUILTIN;    // the number of the LED pin
const long interval = 1000;

extern bool upDateLED();

#endif