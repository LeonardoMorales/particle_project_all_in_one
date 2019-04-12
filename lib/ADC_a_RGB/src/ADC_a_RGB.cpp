/* ADC_a_RGB library by Leonardo Morales
 */

#include "ADC_a_RGB.h"

int analogValue3 = 0;

/**
 * Constructor.
 */
ADC_a_RGB::ADC_a_RGB()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void ADC_a_RGB::begin(int r, int g, int b)
{
    // initialize hardware
    Serial.println("ADC_A_RGB begin");

    pinMode(r, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(b, OUTPUT);
}

/**
 * Example method.
 */
void ADC_a_RGB::process(int Red, int Green, int Blue)
{
    // do something useful
    Serial.println("ADC_A_RGB process");

    analogValue3 = analogRead(A5);

    if(analogValue3 > 0 && analogValue3 < 584){
        digitalWrite(Blue, HIGH);
        delay(1000);
        digitalWrite(Blue, LOW);
    } else if(analogValue3 >= 584 && analogValue3 < 1752){
        digitalWrite(Green, HIGH);
        delay(1000);
        digitalWrite(Green, LOW);
    } else if(analogValue3 >= 1752 && analogValue3 < 2336){
        digitalWrite(Blue, HIGH);
        digitalWrite(Green, HIGH);
        delay(1000);
        digitalWrite(Blue, LOW);
        digitalWrite(Green, LOW);
    } else if(analogValue3 >= 2336 && analogValue3 < 2920){
        digitalWrite(Red, HIGH);
        delay(1000);
        digitalWrite(Red, LOW);
    } else if(analogValue3 >= 2920 && analogValue3 < 3504){
        digitalWrite(Red, HIGH);
        digitalWrite(Blue, HIGH);
        delay(1000);
        digitalWrite(Red, LOW);
        digitalWrite(Blue, LOW);
    } else if(analogValue3 >= 3504 && analogValue3 < 4088){
        digitalWrite(Red, HIGH);
        digitalWrite(Green, HIGH);
        delay(1000);
        digitalWrite(Red, LOW);
        digitalWrite(Green, LOW);
    } else {
        digitalWrite(Red, HIGH);
        digitalWrite(Green, HIGH);
        digitalWrite(Blue, HIGH);
        delay(1000);
        digitalWrite(Red, LOW);
        digitalWrite(Green, LOW);
        digitalWrite(Blue, LOW);
    }
    
    //doit();
}

/**
* Example private method
*/
void ADC_a_RGB::doit()
{
    Serial.println("called doit");
}
