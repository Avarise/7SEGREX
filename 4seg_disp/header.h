#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <wiringPi.h>

#define COL1 27
#define COL2 1
#define COL3 6
#define COL4 26
#define DOT 4



#define SEG_A 0
#define SEG_B 2
#define SEG_C 29
#define SEG_D 25
#define SEG_E 23
#define SEG_F 3

#define SEG_G 28
#define SEG_SP 24
#define SEG_CON 5

void wiring_setup(void)
{
wiringPiSetup();
pinMode(COL1, OUTPUT);
pinMode(COL2, OUTPUT);
pinMode(COL3, OUTPUT);
pinMode(COL4, OUTPUT);
pinMode(DOT, OUTPUT);
pinMode(SEG_A, OUTPUT);
pinMode(SEG_B, OUTPUT);
pinMode(SEG_C, OUTPUT);
pinMode(SEG_D, OUTPUT);
pinMode(SEG_E, OUTPUT);
pinMode(SEG_F, OUTPUT);
pinMode(SEG_G, OUTPUT);
pinMode(SEG_CON, OUTPUT);
pinMode(SEG_SP, OUTPUT);
}


void char4seg(char input, int column)
{
    if(column==0)
    {
        switch(input)
        {
        case 'm': //Mail LED
        digitalWrite(COL1, HIGH);
        digitalWrite(COL2, LOW);
        digitalWrite(COL3, LOW);
        digitalWrite(COL4, LOW);
        digitalWrite(SEG_SP, HIGH);
        digitalWrite(SEG_A, LOW);
		digitalWrite(SEG_B, LOW);
		digitalWrite(SEG_C, LOW);
		digitalWrite(SEG_D, LOW);
		digitalWrite(SEG_E, LOW);
		digitalWrite(SEG_F, LOW);
		digitalWrite(SEG_G, LOW);
		digitalWrite(SEG_CON, LOW);
		digitalWrite(DOT, LOW);
		break;
		case 'c': //wifi
		digitalWrite(COL1, LOW);
		digitalWrite(COL2, LOW);
		digitalWrite(COL3, LOW);
		digitalWrite(COL4, LOW);
		digitalWrite(SEG_CON, HIGH);
		digitalWrite(SEG_A, LOW);
		digitalWrite(SEG_B, LOW);
		digitalWrite(SEG_C, LOW);
		digitalWrite(SEG_D, LOW);
		digitalWrite(SEG_E, LOW);
		digitalWrite(SEG_F, LOW);
		digitalWrite(SEG_G, LOW);
		digitalWrite(DOT, LOW);
		break;
		case 'p': //power
		digitalWrite(COL1, LOW);
		digitalWrite(COL2, LOW);
		digitalWrite(COL3, HIGH);
		digitalWrite(COL4, LOW);
		digitalWrite(SEG_SP, HIGH);
		digitalWrite(SEG_A, LOW);
		digitalWrite(SEG_B, LOW);
		digitalWrite(SEG_C, LOW);
		digitalWrite(SEG_D, LOW);
		digitalWrite(SEG_E, LOW);
		digitalWrite(SEG_F, LOW);
		digitalWrite(SEG_G, LOW);
		digitalWrite(SEG_CON, LOW);
		digitalWrite(DOT, LOW);
		break;
		case 's': //sound
		digitalWrite(COL1, LOW);
		digitalWrite(COL2, LOW);
		digitalWrite(COL3, LOW);
		digitalWrite(COL4, HIGH);
		digitalWrite(SEG_SP, HIGH);
		digitalWrite(SEG_A, LOW);
		digitalWrite(SEG_B, LOW);
		digitalWrite(SEG_C, LOW);
		digitalWrite(SEG_D, LOW);
		digitalWrite(SEG_E, LOW);
		digitalWrite(SEG_F, LOW);
		digitalWrite(SEG_G, LOW);
		digitalWrite(SEG_CON, LOW);
		digitalWrite(DOT, LOW);
		break;
		case 'd': //dot
		digitalWrite(COL1, LOW);
		digitalWrite(COL2, LOW);
		digitalWrite(COL3, LOW);
		digitalWrite(COL4, LOW);
		digitalWrite(SEG_SP, LOW);
		digitalWrite(DOT, HIGH);
		digitalWrite(SEG_A, HIGH);
		digitalWrite(SEG_B, HIGH);
		digitalWrite(SEG_C, LOW);
		digitalWrite(SEG_D, LOW);
		digitalWrite(SEG_E, LOW);
		digitalWrite(SEG_F, LOW);
		digitalWrite(SEG_G, LOW);
		digitalWrite(SEG_CON, LOW);
		break;

        }
    }
    else
    {
    switch(input)
		{
			case '0':
            digitalWrite(SEG_A, HIGH);
			digitalWrite(SEG_B, HIGH);
			digitalWrite(SEG_C, HIGH);
			digitalWrite(SEG_D, HIGH);
			digitalWrite(SEG_E, HIGH);
			digitalWrite(SEG_F, HIGH);
			digitalWrite(SEG_G, LOW);
			digitalWrite(SEG_CON, LOW);
			digitalWrite(DOT, LOW);
			break;
			case '1':
			digitalWrite(SEG_A, LOW);
			digitalWrite(SEG_B, HIGH);
			digitalWrite(SEG_C, HIGH);
			digitalWrite(SEG_D, LOW);
			digitalWrite(SEG_E, LOW);
			digitalWrite(SEG_F, LOW);
			digitalWrite(SEG_G, LOW);
			digitalWrite(SEG_CON, LOW);
			digitalWrite(DOT, LOW);
			break;
			case '2':
			digitalWrite(SEG_A, HIGH);
			digitalWrite(SEG_B, HIGH);
			digitalWrite(SEG_C, LOW);
			digitalWrite(SEG_D, HIGH);
			digitalWrite(SEG_E, HIGH);
			digitalWrite(SEG_F, LOW);
			digitalWrite(SEG_G, HIGH);
			digitalWrite(SEG_CON, LOW);
			digitalWrite(DOT, LOW);
			break;
			case '3':
			digitalWrite(SEG_A, HIGH);
			digitalWrite(SEG_B, HIGH);
			digitalWrite(SEG_C, HIGH);
			digitalWrite(SEG_D, HIGH);
			digitalWrite(SEG_E, LOW);
			digitalWrite(SEG_F, LOW);
			digitalWrite(SEG_G, HIGH);
			digitalWrite(SEG_CON, LOW);
			digitalWrite(DOT, LOW);
			break;
			case '4':
			digitalWrite(SEG_A, LOW);
			digitalWrite(SEG_B, HIGH);
			digitalWrite(SEG_C, HIGH);
			digitalWrite(SEG_D, LOW);
			digitalWrite(SEG_E, LOW);
			digitalWrite(SEG_F, HIGH);
			digitalWrite(SEG_G, HIGH);
			digitalWrite(SEG_CON, LOW);
			digitalWrite(DOT, LOW);
			break;
			case '5':
			digitalWrite(SEG_A, HIGH);
			digitalWrite(SEG_B, LOW);
			digitalWrite(SEG_C, HIGH);
			digitalWrite(SEG_D, HIGH);
			digitalWrite(SEG_E, LOW);
			digitalWrite(SEG_F, HIGH);
			digitalWrite(SEG_G, HIGH);
			digitalWrite(SEG_CON, LOW);
			digitalWrite(DOT, LOW);
			break;
			case '6':
			digitalWrite(SEG_A, HIGH);
			digitalWrite(SEG_B, LOW);
			digitalWrite(SEG_C, HIGH);
			digitalWrite(SEG_D, HIGH);
			digitalWrite(SEG_E, HIGH);
			digitalWrite(SEG_F, HIGH);
			digitalWrite(SEG_G, HIGH);
			digitalWrite(SEG_CON, LOW);
			digitalWrite(DOT, LOW);
			break;
			case '7':
			digitalWrite(SEG_A, HIGH);
			digitalWrite(SEG_B, HIGH);
			digitalWrite(SEG_C, HIGH);
			digitalWrite(SEG_D, LOW);
			digitalWrite(SEG_E, LOW);
			digitalWrite(SEG_F, LOW);
			digitalWrite(SEG_G, LOW);
			digitalWrite(SEG_CON, LOW);
			digitalWrite(DOT, LOW);
			break;
			case '8':
			digitalWrite(SEG_A, HIGH);
			digitalWrite(SEG_B, HIGH);
			digitalWrite(SEG_C, HIGH);
			digitalWrite(SEG_D, HIGH);
			digitalWrite(SEG_E, HIGH);
			digitalWrite(SEG_F, HIGH);
			digitalWrite(SEG_G, HIGH);
			digitalWrite(SEG_CON, LOW);
			digitalWrite(DOT, LOW);
			break;
			case '9':
			digitalWrite(SEG_A, HIGH);
			digitalWrite(SEG_B, HIGH);
			digitalWrite(SEG_C, HIGH);
			digitalWrite(SEG_D, HIGH);
			digitalWrite(SEG_E, LOW);
			digitalWrite(SEG_F, HIGH);
			digitalWrite(SEG_G, HIGH);
			digitalWrite(SEG_CON, LOW);
			digitalWrite(DOT, LOW);
			break;
			default:
			break;
        }
        switch(column)
        {
            case 1:
            digitalWrite(COL1, HIGH);
            digitalWrite(COL2, LOW);
            digitalWrite(COL3, LOW);
            digitalWrite(COL4, LOW);
            break;
            case 2:
            digitalWrite(COL1, LOW);
            digitalWrite(COL2, HIGH);
            digitalWrite(COL3, LOW);
            digitalWrite(COL4, LOW);
            break;
            case 3:
            digitalWrite(COL1, LOW);
            digitalWrite(COL2, LOW);
            digitalWrite(COL3, HIGH);
            digitalWrite(COL4, LOW);
            break;
            case 4:
            digitalWrite(COL1, LOW);
            digitalWrite(COL2, LOW);
            digitalWrite(COL3, LOW);
            digitalWrite(COL4, HIGH);
            break;
            default:
            break;
        }
    }
}

#endif // HEADER_H_INCLUDED
