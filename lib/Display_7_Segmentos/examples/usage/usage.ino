// Example usage for Display_7_Segmentos library by Leonardo Morales.

#include "Display_7_Segmentos.h"

// Initialize objects from the lib
Display_7_Segmentos display_7_Segmentos;

void setup() {
    // Call functions on initialized library objects that require hardware
    display_7_Segmentos.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    display_7_Segmentos.process();
}
