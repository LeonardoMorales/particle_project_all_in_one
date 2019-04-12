#pragma once

/* Contador_Binario library by Leonardo Morales
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_MCP23017.h>

// This is your main class that users will import into their application
class Contador_Binario
{
public:
  Adafruit_MCP23017 mcp;
  int contador;

  /**
   * Constructor
   */
  Contador_Binario(int contador);

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
