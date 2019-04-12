// Example usage for Auto_Increible library by Leonardo Morales.

#include "Auto_Increible.h"

// Initialize objects from the lib
Auto_Increible auto_Increible;

void setup() {
    Serial.begin(9600);
    // Call functions on initialized library objects that require hardware
    auto_Increible.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    auto_Increible.process();
}
