/* Contador_Binario library by Leonardo Morales
 */

#include "Contador_Binario.h"

// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_MCP23017.h>

/**
 * Constructor.
 */
Contador_Binario::Contador_Binario(int Contador)
{
    // be sure not to call anything that requires hardware be initialized here, put those in begin()
    Contador = contador;
}

/**
 * Example method.
 */
void Contador_Binario::begin()
{
    // initialize hardware
    Serial.println("CONTADOR_BINARIO begin");
}

/**
 * Example method.
 */
void Contador_Binario::process()
{
    // do something useful
    //Serial.println("CONTADOR_BINARIO process");

    //Serial.println("" + contador);
    contador++;
    mcp.writeGPIOAB(contador);
    delay(250);
    mcp.writeGPIOAB(0);

    //doit();
}

/**
* Example private method
*/
void Contador_Binario::doit()
{
    Serial.println("called doit");
}
