/* ADC_a_Serial library by Leonardo Morales
 */

#include "ADC_a_Serial.h"

int analogValue = 0;
//int potenciometro;

/**
 * Constructor.
 */
ADC_a_Serial::ADC_a_Serial(){
  // be sure not to call anything that requires hardware be initialized here, put those in begin()

}

/**
 * Example method.
 */
void ADC_a_Serial::begin()
{
    // initialize hardware
    Serial.println("ADC_A_SERIAL begin");

    pinMode(A5, INPUT);
}

/**
 * Example method.
 */
void ADC_a_Serial::process()
{
    // do something useful
    //Serial.println("ADC_A_SERIAL process");
    
    if(Serial.available()){
    {
      char ch = Serial.read();
      if(ch = '?'){
        analogValue = analogRead(A5);

        Serial.println(analogValue);
        Serial.println(analogValue, DEC);
        Serial.println(analogValue, HEX);
        Serial.println(analogValue, OCT);
        Serial.println(analogValue, BIN);
        
        delay(1000);
      }
    }
  }
    
    //doit();
}

/**
* Example private method
*/
void ADC_a_Serial::doit()
{
    Serial.println("called doit");
}
