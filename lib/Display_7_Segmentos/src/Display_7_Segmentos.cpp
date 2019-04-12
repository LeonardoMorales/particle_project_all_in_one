/* Display_7_Segmentos library by Leonardo Morales
 */

#include "Display_7_Segmentos.h"
#include <Adafruit_MCP23017.h>

uint8_t portg[4] = {0, 1, 2, 3};
uint8_t porth[2] = {4, 5};

/**
 * Constructor.
 */
Display_7_Segmentos::Display_7_Segmentos()
{
}

void Display_7_Segmentos::begin()
{
    mcp3.begin(2);

    for (uint8_t i = 0; i <= 3; i++)
    {
        mcp3.pinMode(portg[i], OUTPUT);
    }

    for (uint8_t i = 0; i <= 1; i++)
    {
        mcp3.pinMode(porth[i], OUTPUT);
    }

    clean();
}

void Display_7_Segmentos::displayNumber(int numero)
{

    if (numero >= 10000)
    {
        numero = numero % 10000;
    }

    millares = numero / 1000;
    centenas = (numero % 1000) / 100;
    decenas = ((numero % 10000) % 100) / 10;
    unidades = (((numero % 1000) % 100) % 10);

    separarDigitos(millares, centenas, decenas, unidades);

}

void Display_7_Segmentos::clean()
{
    for (uint8_t i = 0; i <= 3; i++)
    {
        mcp3.digitalWrite(portg[i], LOW);
    }

    for (uint8_t i = 0; i <= 1; i++)
    {
        mcp3.digitalWrite(porth[i], LOW);
    }
}

void Display_7_Segmentos::separarDigitos(int millares, int centenas, int decenas, int unidades)
{

    escribirDigito(unidades + control[0]); // 0x04 + 0x00 = 0x04
    escribirDigito(decenas + control[1]);  // 0x03 + 0x10 = 0x13
    escribirDigito(centenas + control[2]); // 0x02 + 0x20 = 0x22
    escribirDigito(millares + control[3]); // 0x01 + 0x30 = 0x31

}

void Display_7_Segmentos::escribirDigito(int valor)
{

    mcp3.writeGPIOAB(valor);
}
