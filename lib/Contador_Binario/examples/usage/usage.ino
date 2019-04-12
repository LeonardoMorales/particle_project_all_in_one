// Example usage for Contador_Binario library by Leonardo Morales.

#include "Contador_Binario.h"

// Initialize objects from the lib
Contador_Binario contador_Binario;

void setup() {
    // Call functions on initialized library objects that require hardware
    contador_Binario.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    contador_Binario.process();
}
