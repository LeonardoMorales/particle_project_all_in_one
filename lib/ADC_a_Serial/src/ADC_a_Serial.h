#pragma once

/* ADC_a_Serial library by Leonardo Morales
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class ADC_a_Serial
{
public:
  /**
   * Constructor
   */
  ADC_a_Serial();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  /**
   * Example private method
   */
  void doit();
};
