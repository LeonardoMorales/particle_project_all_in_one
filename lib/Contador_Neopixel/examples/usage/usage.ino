// Example usage for Contador_Neopixel library by Leonardo Morales.

#include "Contador_Neopixel.h"

// Initialize objects from the lib
Contador_Neopixel contador_Neopixel;

void setup() {
    // Call functions on initialized library objects that require hardware
    contador_Neopixel.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    contador_Neopixel.process();
}
