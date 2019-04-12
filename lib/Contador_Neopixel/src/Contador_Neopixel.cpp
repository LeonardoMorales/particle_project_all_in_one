/* Contador_Neopixel library by Leonardo Morales
 */

#include "Contador_Neopixel.h"

/*---------------LIBRERIA DE NEOPIXEL-------------------------
-------------------------------------------------------------*/
// This #include statement was automatically added by the Particle IDE.
#include <neopixel.h>

#define PIXEL_PIN A1
#define PIXEL_COUNT 1
#define PIXEL_TYPE WS2812B

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, PIXEL_TYPE);
//colors
uint32_t color;

int contadorNeopixel = 0;

/**
 * Constructor.
 */
Contador_Neopixel::Contador_Neopixel()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void Contador_Neopixel::begin()
{
    // initialize hardware
    Serial.println("CONTADOR_NEOPIXEL begin");

    SYSTEM_MODE(AUTOMATIC);

    strip.begin();
    strip.setBrightness(255);
    strip.show();
}

/**
 * Example method.
 */
void Contador_Neopixel::process()
{
    // do something useful
    Serial.println("CONTADOR_NEOPIXEL process");

    switch (contadorNeopixel)
    {
        case 0: {
            strip.setBrightness(255);
            strip.clear();
            color=strip.Color(0,0,255);
            strip.setPixelColor(0,color);
            strip.show();
            delay(1000);
            contadorNeopixel++;
            break;
        }

        case 1: {
            strip.setBrightness(255);
            strip.clear();
            color=strip.Color(0,255,0);
            strip.setPixelColor(0,color);
            strip.show();
            delay(1000);
            contadorNeopixel++;
            break;
        }

        case 2: {
            strip.setBrightness(255);
            strip.clear();
            color=strip.Color(0,255,255);
            strip.setPixelColor(0,color);
            strip.show();
            delay(1000);
            contadorNeopixel++;
            break;
        }

        case 3: {
            strip.setBrightness(255);
            strip.clear();
            color=strip.Color(255,0,0);
            strip.setPixelColor(0,color);
            strip.show();
            delay(1000);
            contadorNeopixel++;
            break;
        }

        case 4: {
            strip.setBrightness(255);
            strip.clear();
            color=strip.Color(255,0,255);
            strip.setPixelColor(0,color);
            strip.show();
            delay(1000);
            contadorNeopixel++;
            break;
        }

        case 5: {
            strip.setBrightness(255);
            strip.clear();
            color=strip.Color(255,255,0);
            strip.setPixelColor(0,color);
            strip.show();
            delay(1000);
            contadorNeopixel++;
            break;
        }

        case 6: {
            strip.setBrightness(255);
            strip.clear();
            color=strip.Color(255,255,255);
            strip.setPixelColor(0,color);
            strip.show();
            delay(1000);
            contadorNeopixel++;
            break;
        }
    
    }

    doit();

    if(contadorNeopixel == 7){
        contadorNeopixel = 0;
    }
    
    //doit();
}

/**
* Example private method
*/
void Contador_Neopixel::doit()
{
    Serial.println("called doit");
    strip.clear();
    color = strip.Color(0,0,0);
    strip.setPixelColor(0,color);
    strip.show();
}
