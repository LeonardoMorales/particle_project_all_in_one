// Example usage for ADC_a_Neopixel2 library by Leonardo Morales.

#include "ADC_a_Neopixel2.h"

// Initialize objects from the lib
ADC_a_Neopixel2 aDC_a_Neopixel2;

void setup() {
    // Call functions on initialized library objects that require hardware
    aDC_a_Neopixel2.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    aDC_a_Neopixel2.process();
}
