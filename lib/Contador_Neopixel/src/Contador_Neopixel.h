#pragma once

/* Contador_Neopixel library by Leonardo Morales
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class Contador_Neopixel
{
public:
  /**
   * Constructor
   */
  Contador_Neopixel();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  int contadorNeopixel;
  /**
   * Example private method
   */
  void doit();
};
