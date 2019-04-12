#pragma once

/* Contador_RGB library by Leonardo Morales
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class Contador_RGB
{
public:
  int Red = D7;
  int Green = D6;
  int Blue = D5;

  /**
   * Constructor
   */
  Contador_RGB();

  /**
   * Example method
   */
  void begin(int r, int g, int b);

  /**
   * Example method
   */
  void process(int r, int g, int b);

private:
  int contadorRGB;
  /**
   * Example private method
   */
  void doit();
};