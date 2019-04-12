// Example usage for ADC_a_RGB library by Leonardo Morales.

#include "ADC_a_RGB.h"

// Initialize objects from the lib
ADC_a_RGB aDC_a_RGB;

void setup() {
    // Call functions on initialized library objects that require hardware
    aDC_a_RGB.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    aDC_a_RGB.process();
}
