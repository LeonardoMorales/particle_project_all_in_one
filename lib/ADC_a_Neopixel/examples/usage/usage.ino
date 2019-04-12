// Example usage for ADC_a_Neopixel library by Leonardo Morales.

#include "ADC_a_Neopixel.h"

// Initialize objects from the lib
ADC_a_Neopixel aDC_a_Neopixel;

void setup() {
    // Call functions on initialized library objects that require hardware
    aDC_a_Neopixel.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    aDC_a_Neopixel.process();
}
