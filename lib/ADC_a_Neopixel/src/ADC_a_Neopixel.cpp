/* ADC_a_Neopixel library by Leonardo Morales
 */

#include "ADC_a_Neopixel.h"

/*---------------LIBRERIA DE NEOPIXEL-------------------------
-------------------------------------------------------------*/
// This #include statement was automatically added by the Particle IDE.
#include <neopixel.h>

#define PIXEL_PIN A1
#define PIXEL_COUNT 1
#define PIXEL_TYPE WS2812B

Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, PIXEL_TYPE);
//colors
uint32_t color2;

int analogValue2 = 0;
int valor = 0;

/**
 * Constructor.
 */
ADC_a_Neopixel::ADC_a_Neopixel()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void ADC_a_Neopixel::begin()
{
    // initialize hardware
    Serial.println("ADC_A_NEOPIXEL begin");

    SYSTEM_MODE(AUTOMATIC);

    strip2.begin();
    strip2.setBrightness(255);
    strip2.show();

    pinMode(A5, INPUT);
}

/**
 * Example method.
 */
void ADC_a_Neopixel::process()
{
    // do something useful
    Serial.println("ADC_A_NEOPIXEL process");
    
    analogValue2 = analogRead(A5);

    doit();
}

/**
* Example private method
*/
void ADC_a_Neopixel::doit()
{
    analogValue2 = analogRead(A5);

    Serial.println("called doit");
    
    if(analogValue2 > 0 && analogValue2 < 680){
        strip2.clear();

        do
        {
            analogValue2 = analogRead(A5);

            valor = map(analogValue2, 0, 680, 0, 255);
            valor = constrain(valor, 0, 255); 

            color2=strip2.Color(0,0,valor);
            strip2.setPixelColor(0,color2);
            strip2.show();
        } while (valor < 250);
        
    } else if(analogValue2 >=680  && analogValue2 < 1360){
        strip2.clear();
        
        do
        {
            analogValue2 = analogRead(A5);

            valor = map(analogValue2, 680, 1360, 0, 255);
            valor = constrain(valor, 0, 255); 

            color2=strip2.Color(0,valor,0);
            strip2.setPixelColor(0,color2);
            strip2.show();
        } while (valor < 250);

    } else if(analogValue2 >=1360  && analogValue2 < 2040){
        strip2.clear();
        
        do
        {
            analogValue2 = analogRead(A5);

            valor = map(analogValue2, 1360, 2040, 0, 255);
            valor = constrain(valor, 0, 255); 

            color2=strip2.Color(0,valor,valor);
            strip2.setPixelColor(0,color2);
            strip2.show();
        } while (valor < 250);

    } else if(analogValue2 >=2040  && analogValue2 < 2728){
        strip2.clear();
        
        do
        {
            analogValue2 = analogRead(A5);

            valor = map(analogValue2, 2040, 2728, 0, 255);
            valor = constrain(valor, 0, 255); 

            color2=strip2.Color(valor,0,0);
            strip2.setPixelColor(0,color2);
            strip2.show();
        } while (valor < 250);

    } else if(analogValue2 >=2728  && analogValue2 < 3416){
        strip2.clear();
        
        do
        {
            analogValue2 = analogRead(A5);

            valor = map(analogValue2, 2728, 3416, 0, 255);
            valor = constrain(valor, 0, 255); 

            color2=strip2.Color(valor,valor,0);
            strip2.setPixelColor(0,color2);
            strip2.show();
        } while (valor < 250);

    } else if(analogValue2 >=3416  && analogValue2 < 4014){
        strip2.clear();
        
        do
        {
            analogValue2 = analogRead(A5);

            valor = map(analogValue2, 3416, 4014, 0, 255);
            valor = constrain(valor, 0, 255); 

            color2=strip2.Color(valor,0,valor);
            strip2.setPixelColor(0,color2);
            strip2.show();
        } while (valor < 250);

    }else {
        strip2.clear();
    }
}
