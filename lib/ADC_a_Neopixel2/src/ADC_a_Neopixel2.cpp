/* ADC_a_Neopixel2 library by Leonardo Morales
 */

#include "ADC_a_Neopixel2.h"

#include <neopixel.h>

#define PIXEL_PIN A1
#define PIXEL_COUNT 1
#define PIXEL_TYPE WS2812B

Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, PIXEL_TYPE);
//color3s
uint32_t color3;

int analogValue4 = 0;

/**
 * Constructor.
 */
ADC_a_Neopixel2::ADC_a_Neopixel2()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void ADC_a_Neopixel2::begin()
{
    // initialize hardware
    Serial.println("ADC_A_NEOPIXEL2 begin");

    strip3.begin();
    strip3.setBrightness(255);
    strip3.show();
}

/**
 * Example method.
 */
void ADC_a_Neopixel2::process()
{
    // do something useful
    Serial.println("called process");

    analogValue4 = analogRead(A5);

    strip3.clear();

    if(analogValue4 > 0 && analogValue4 < 511){
        strip3.clear();
        color3=strip3.Color(0,0,255);
        strip3.setPixelColor(0,color3);
        strip3.show();
        delay(200);
    } else if(analogValue4 >= 511 && analogValue4 < 1022){
        strip3.clear();
        color3=strip3.Color(0,255,0);
        strip3.setPixelColor(0,color3);
        strip3.show();
        delay(200);
    } else if(analogValue4 >= 1022 && analogValue4 < 1533){
        strip3.clear();
        color3=strip3.Color(0,255,255);
        strip3.setPixelColor(0,color3);
        strip3.show();
        delay(200);
    } else if(analogValue4 >= 1533 && analogValue4 < 2044){
        strip3.clear();
        color3=strip3.Color(255,0,0);
        strip3.setPixelColor(0,color3);
        strip3.show();
        delay(200);
    } else if(analogValue4 >= 2044 && analogValue4 < 2555){
        strip3.clear();
        color3=strip3.Color(255,0,255);
        strip3.setPixelColor(0,color3);
        strip3.show();
        delay(200);
    } else if(analogValue4 >= 2555 && analogValue4 < 3066){
        strip3.clear();
        color3=strip3.Color(255,255,0);
        strip3.setPixelColor(0,color3);
        strip3.show();
        delay(200);
    } else if(analogValue4 >= 3066 && analogValue4 < 3577){
        strip3.clear();
        color3=strip3.Color(255,255,255);
        strip3.setPixelColor(0,color3);
        strip3.show();
        delay(200);
    } else {
        strip3.clear();
        color3=strip3.Color(0,0,0);
        strip3.setPixelColor(0,color3);
        strip3.show();
        delay(200);
    }
    
    //doit();
}

/**
* Example private method
*/
void ADC_a_Neopixel2::doit()
{
    Serial.println("called doit");
}
