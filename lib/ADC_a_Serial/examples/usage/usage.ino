// Example usage for ADC_a_Serial library by Leonardo Morales.

#include "ADC_a_Serial.h"

// Initialize objects from the lib
ADC_a_Serial aDC_a_Serial;

void setup() {
    // Call functions on initialized library objects that require hardware
    aDC_a_Serial.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    aDC_a_Serial.process();
}
