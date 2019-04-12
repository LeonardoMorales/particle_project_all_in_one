/* Contador_RGB library by Leonardo Morales
 */

#include "Contador_RGB.h"

int contadorRGB = 0;

/**
 * Constructor.
 */
Contador_RGB::Contador_RGB()
{
    // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void Contador_RGB::begin(int r, int g, int b)
{
    // initialize hardware
    Serial.println("CONTADOR_RGB begin");

    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(b, OUTPUT);
}

/**
 * Example method.
 */
void Contador_RGB::process(int Red, int Green, int Blue)
{
    // do something useful
    Serial.println("CONTADOR_RGB process");

    switch(contadorRGB){
        case 0: {
            digitalWrite(Blue, HIGH);
            delay(1000);
            digitalWrite(Blue, LOW);
            contadorRGB++;
            break;
        }

        case 1: {
            digitalWrite(Green, HIGH);
            delay(1000);
            digitalWrite(Green, LOW);
            contadorRGB++;
            break;
        }

        case 2: {
            digitalWrite(Blue, HIGH);
            digitalWrite(Green, HIGH);
            delay(1000);
            digitalWrite(Blue, LOW);
            digitalWrite(Green, LOW);
            contadorRGB++;
            break;
        }

        case 3: {
            digitalWrite(Red, HIGH);
            delay(1000);
            digitalWrite(Red, LOW);
            contadorRGB++;
            break;
        }

        case 4: {
            digitalWrite(Red, HIGH);
            digitalWrite(Blue, HIGH);
            delay(1000);
            digitalWrite(Red, LOW);
            digitalWrite(Blue, LOW);
            contadorRGB++;
            break;
        }

        case 5: {
            digitalWrite(Red, HIGH);
            digitalWrite(Green, HIGH);
            delay(1000);
            digitalWrite(Red, LOW);
            digitalWrite(Green, LOW);
            contadorRGB++;
            break;
        }

        case 6: {
            digitalWrite(Red, HIGH);
            digitalWrite(Green, HIGH);
            digitalWrite(Blue, HIGH);
            delay(1000);
            digitalWrite(Red, LOW);
            digitalWrite(Green, LOW);
            digitalWrite(Blue, LOW);
            contadorRGB++;
            break;
        }
    }

    if(contadorRGB == 7){
        doit();
    }
}

/**
* Example private method
*/
void Contador_RGB::doit()
{
    Serial.println("called doit");
    contadorRGB = 0;
}
