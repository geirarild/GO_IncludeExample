#ifndef GOImport
#define GOImport

#ifndef LED_BUILTIN
#define LED_BUILTIN 2
#endif

#include <Arduino.h>

const int ledPin =  LED_BUILTIN;    // the number of the LED pin
const long interval = 500;

extern bool upDateLED();

#endif