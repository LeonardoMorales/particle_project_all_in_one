#pragma once

/* ADC_a_RGB library by Leonardo Morales
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class ADC_a_RGB
{
public:
  int Red = D7;
  int Green = D6;
  int Blue = D5;
  /**
   * Constructor
   */
  ADC_a_RGB();

  /**
   * Example method
   */
  void begin(int r, int g, int b);

  /**
   * Example method
   */
  void process(int r, int g, int b);

private:
  /**
   * Example private method
   */
  void doit();
};
