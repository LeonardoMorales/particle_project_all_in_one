// Example usage for Contador_RGB library by Leonardo Morales.

#include "Contador_RGB.h"

// Initialize objects from the lib
Contador_RGB contador_RGB;

void setup() {
    // Call functions on initialized library objects that require hardware
    contador_RGB.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    contador_RGB.process();
}
