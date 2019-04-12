#pragma once

/* Auto_Increible library by Leonardo Morales
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

#include <Adafruit_MCP23017.h>

// This is your main class that users will import into their application
class Auto_Increible
{
public:
  Adafruit_MCP23017 mcp;
  
  /**
   * Constructor
   */
  Auto_Increible();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  /*uint8_t AutoPortA[8]= {0,1,2,3,4,5,6,7}; //entradas
  int AutoDigOut[8] = {D0,D1,D2,D3,D4,D5,D6,D7};

  int del = 0x00000FFF;
  int var1 = 0x00000001;
  int var2 = 0x00000002;*/

  int contadorAuto;
  /**
   * Example private method
   */
  void cleanAuto();
};
