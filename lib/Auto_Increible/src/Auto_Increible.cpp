/* Auto_Increible library by Leonardo Morales
 */

#include "Auto_Increible.h"

#include <Adafruit_MCP23017.h>

#include <bitset>

//Adafruit_MCP23017 mcp2;

uint8_t portc[8] = {0, 1, 2, 3, 4, 5, 6, 7};

int contadorAuto = 0;
bool ida = true;

/**
 * Constructor.
 */
Auto_Increible::Auto_Increible(){}

/**
 * Example method.
 */
void Auto_Increible::begin()
{
    // initialize hardware
    Serial.println("AUTO_INCREIBLE begin");

    //mcp.begin(0);

    for(uint8_t i=0; i<=7; i++)
    {
        mcp.pinMode(portc[i], OUTPUT);
    }
}

/**
 * Example method.
 */
void Auto_Increible::process()
{
    // do something useful
    Serial.println("AUTO_INCREIBLE process");

    switch (contadorAuto)
    {
        case 0: {
            mcp.digitalWrite(portc[0], HIGH);
            delay(100);
            ida = true;
            contadorAuto++;
            break;
        }
        case 1: {
            mcp.digitalWrite(portc[0], HIGH);
            mcp.digitalWrite(portc[1], HIGH);
            delay(100);
            if(ida){
                contadorAuto++;
            } else {
                contadorAuto--;
            }
            break;
        }
        case 2: {
            mcp.digitalWrite(portc[0], HIGH);
            mcp.digitalWrite(portc[1], HIGH);
            mcp.digitalWrite(portc[2], HIGH);
            delay(100);
            if(ida){
                contadorAuto++;
            } else {
                contadorAuto--;
            }
            break;
        }
        case 3: {
            //mcp.digitalWrite(portc[0], LOW);
            mcp.digitalWrite(portc[1], HIGH);
            mcp.digitalWrite(portc[2], HIGH);
            mcp.digitalWrite(portc[3], HIGH);
            delay(100);
            if(ida){
                contadorAuto++;
            } else {
                contadorAuto--;
            }
            break;
        }
        case 4: {
            //mcp.digitalWrite(portc[1], LOW);
            mcp.digitalWrite(portc[2], HIGH);
            mcp.digitalWrite(portc[3], HIGH);
            mcp.digitalWrite(portc[4], HIGH);
            delay(100);
            if(ida){
                contadorAuto++;
            } else {
                contadorAuto--;
            }
            break;
        }
        case 5: {
            //mcp.digitalWrite(portc[2], LOW);
            mcp.digitalWrite(portc[3], HIGH);
            mcp.digitalWrite(portc[4], HIGH);
            mcp.digitalWrite(portc[5], HIGH);
            delay(100);
            if(ida){
                contadorAuto++;
            } else {
                contadorAuto--;
            }
            break;
        }
        case 6: {
            //mcp.digitalWrite(portc[3], LOW);
            mcp.digitalWrite(portc[4], HIGH);
            mcp.digitalWrite(portc[5], HIGH);
            mcp.digitalWrite(portc[6], HIGH);
            delay(100);
            if(ida){
                contadorAuto++;
            } else {
                contadorAuto--;
            }
            break;
        }
        case 7: {
            //mcp.digitalWrite(portc[4], LOW);
            mcp.digitalWrite(portc[5], HIGH);
            mcp.digitalWrite(portc[6], HIGH);
            mcp.digitalWrite(portc[7], HIGH);
            delay(100);
            if(ida){
                contadorAuto++;
            } else {
                contadorAuto--;
            }
            break;
        }
        case 8: {
            //mcp.digitalWrite(portc[5], LOW);
            mcp.digitalWrite(portc[6], HIGH);
            mcp.digitalWrite(portc[7], HIGH);
            delay(100);
            if(ida){
                contadorAuto++;
            } else {
                contadorAuto--;
            }
            break;
        }
        case 9: {
            //mcp.digitalWrite(portc[6], LOW);
            mcp.digitalWrite(portc[7], HIGH);
            delay(100);
            contadorAuto--;
            ida = false;
            break;
        }
    }
}

/**
* Example private method
*/
void Auto_Increible::cleanAuto()
{
    Serial.println("called cleanAuto");

    for(int i = 0; i <= 7; i++){
        mcp.digitalWrite(portc[i], LOW);
    }
}
