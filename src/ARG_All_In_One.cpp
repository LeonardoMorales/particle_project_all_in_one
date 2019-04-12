#include "application.h"
#line 1 "e:/Proyectos/Programacion/Particle/ARG_All_In_One/src/ARG_All_In_One.ino"
/*
 * Project All_In_One
 * Description: Programa que ejecuta los códigos realizados durante el medio curso de la clase de Microcontroladores 
 * Author: Leonardo Morales Espinosa
 * Date: 08 de marzo de 2019
 */

/*---------------LIBRERIA DE ADAFRUIT_MCP23017-----------------
-------------------------------------------------------------*/
#include <Adafruit_MCP23017.h>

/*---------------LIBRERIA DE BITSET---------------------------
-------------------------------------------------------------*/
#include <bitset>

/*---------------LIBRERIA DE NEOPIXEL-------------------------
-------------------------------------------------------------*/
#include <neopixel.h>

/*-------------LIBRERIA DE CONTADOR_BINARIO--------------------
-------------------------------------------------------------*/
#include "Contador_Binario.h"

/*-------------LIBRERIA DE CONTADOR_BINARIO--------------------
-------------------------------------------------------------*/
#include <Auto_Increible.h>

/*---------------LIBRERIA DE CONTADOR_RGB----------------------
-------------------------------------------------------------*/
#include "Contador_RGB.h"

/*-------------LIBRERIA DE CONTADOR_NEOPIXEL--------------------
-------------------------------------------------------------*/
#include "Contador_Neopixel.h"

/*-------------LIBRERIA DE ADC_A_NEOPIXEL--------------------
-------------------------------------------------------------*/
#include <ADC_a_Neopixel.h>

/*-------------LIBRERIA DE ADC_A_NEOPIXEL2--------------------
-------------------------------------------------------------*/
#include <ADC_a_Neopixel2.h>

/*----------------LIBRERIA DE ADC_A_RGB-----------------------
-------------------------------------------------------------*/
#include <ADC_a_RGB.h>

/*-------------LIBRERIA DE ADC_A_SERIAL--------------------
-------------------------------------------------------------*/
#include "ADC_a_Serial.h"

/*---------------------VARIABLES GLOBALES----------------------
-------------------------------------------------------------*/
void setup();
void loop();
void clean(void);
int swHomework(String command);
#line 54 "e:/Proyectos/Programacion/Particle/ARG_All_In_One/src/ARG_All_In_One.ino"
uint8_t porta[8]= {0,1,2,3,4,5,6,7}; //entradas
uint8_t portb[8]= {8,9,10,11,12,13,14,15}; //salidas
int Dig_Out[8] = {D0,D1,D2,D3,D4,D5,D6,D7};

uint8_t Inputs = 0x00;

int Red = D7;
int Green = D6;
int Blue = D5;

int potenciometro = A5;

int success;

/*---------------INSTANCIAS-----------------------------------
-------------------------------------------------------------*/
Adafruit_MCP23017 mcp;

Contador_Binario contador_Binario(0);

Auto_Increible auto_Increible;

Contador_RGB contador_RGB;

Contador_Neopixel contador_Neopixel;

ADC_a_Neopixel adc_a_Neopixel;

ADC_a_Neopixel2 adc_a_Neopixel2;

ADC_a_RGB adc_a_RGB;

ADC_a_Serial adc_a_Serial;

/*--------------------FUNCIÓN SETUP----------------------------
-------------------------------------------------------------*/
void setup() {

    Serial.begin(9600);

    mcp.begin(0);
    clean();

    for(uint8_t i=0; i<=7; i++)
    {
        mcp.pinMode(porta[i], OUTPUT);
        mcp.pinMode(portb[i], INPUT);
    }

    contador_Binario.begin();

    auto_Increible.begin();

    contador_RGB.begin(Red, Green, Blue);

    contador_Neopixel.begin();

    adc_a_RGB.begin(Red, Green, Blue);
    
    adc_a_Neopixel.begin();
    
    adc_a_Neopixel2.begin();

    adc_a_Serial.begin();
}

/*--------------------FUNCIÓN LOOP----------------------------
-------------------------------------------------------------*/
void loop() {

    Inputs = mcp.readGPIO(1);
    
    switch(Inputs) {
        case 0x00:
            clean(); //OFF
            delay(250);
            break;
            
        case 0x01:
            clean();
            contador_Binario.process();  //CONTADOR_BINARIO
            delay(250);
            break;
            
        case 0x02:
            clean();
            auto_Increible.process(); //AUTO_INCREIBLE
            delay(250);
            break;
            
        case 0x03:
            clean();
            contador_RGB.process(Red, Green, Blue); //CONTADOR_RGB
            delay(250);
            break;
            
        case 0x04:
            clean();
            contador_Neopixel.process(); //CONTADOR_NEOPIXEL
            delay(250);
            break;
            
        case 0x05:
            clean();
            adc_a_RGB.process(Red, Green, Blue); //ADC_A_RGB
            delay(250);
            break;
            
        case 0x06:
            clean();
            adc_a_Neopixel2.process(); //ADC_A_NEOPIXEL2
            delay(250);
            break;
            
        case 0x07:
            clean();
            adc_a_Serial.process(); //ADC_A_SERIAL
            delay(250);
            break;
            
        case 0x08:
            clean();
            delay(250);
            break;
            
        default:
            clean();
            break;
    }

    //success = Particle.function("swHomework", swHomework);
}

/*--------------------FUNCIÓN CLEAN---------------------------
-------------------------------------------------------------*/
void clean(void){
    for(int i = 0; i <= 7; i++){
        pinMode(Dig_Out[i], OUTPUT);
        digitalWrite(Dig_Out[i], LOW);
    }
    
    for(int i = 0; i <= 7; i++){
        mcp.digitalWrite(porta[i], LOW);
    }
}

int swHomework(String command){
    if(command == "00"){
        clean();
        return 0;
    } else if(command == "01"){
        contador_Binario.process();  //CONTADOR_BINARIO
        return 1;
    } else if(command == "02"){
        auto_Increible.process();
        return 2;
    } else if(command == "03"){
        contador_RGB.process(Red, Green, Blue); //CONTADOR_RGB
        return 3;
    } else if(command == "04"){
        contador_Neopixel.process(); //CONTADOR_NEOPIXEL
        return 4;
    } else if(command == "05"){
        adc_a_RGB.process(Red, Green, Blue);
        return 5;
    } else if(command == "06"){
        adc_a_Neopixel2.process(); //ADC_A_NEOPIXEL2
        return 6;
    } else if(command == "07"){
        adc_a_Serial.process(); //ADC_A_SERIAL
        return 7;
    } else {
        clean();
        return -1;
    }
}