#pragma once

/* Display_7_Segmentos library by Leonardo Morales
 */

// This will load the definition for common Particle variable types
#include "Particle.h"
#include <Adafruit_MCP23017.h>

class Display_7_Segmentos
{
public:

  Display_7_Segmentos();

  void begin();

  void displayNumber(int numero);

private:
  Adafruit_MCP23017 mcp3;

  int millares, centenas, decenas, unidades;

  int control[4] = {0x00, 0x10, 0x20, 0x30};

  void clean();
  void separarDigitos(int millares, int centenas, int decenas, int unidades);
  void escribirDigito(int valor);

};
