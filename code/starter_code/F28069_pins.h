/*
 * F2086x_pins.h
 *
 *  Created on: Oct 25, 2022
 *      Author: julian
 */

#ifndef F28069_PINS_H_
#define F28069_PINS_H_

typedef enum
{
    LOW = 0, HIGH = 1, INPUT = 0, OUTPUT = 1
} defaults;

void togglePin(int pin);
void digitalWrite(int pin, int state);
int digitalRead(int pin);
void pinMode(int pin, int mode);

static const int SCK  = 7;
static const int MOSI = 15;
static const int MISO = 14;

static const int SDA = 10;
static const int SCL = 9;

static const int RX = 3;
static const int TX = 4;

static const int BLUE_LED = 82; //GPIO39
static const int GREEN_LED = 82; //Redeclare so that examples that use this still work
static const int RED_LED = 81; //GPIO34


static const int AA0 = 27;  //A0 0x8000
static const int AA1 = 29;  //A1 0x8001
static const int AA2 = 25;  //A2 0x8002
static const int AA3 = 67;  //A3 0x8003
static const int AA4 = 69;  //A4 0x8004
static const int AA5 = 65;  //A5 0x8005
static const int AA6 = 2;   //A6 0x8006
static const int AA7 = 23;  //A7 0x8007
static const int AB0 = 28;  //B0 0x8008
static const int AB1 = 24;  //B1 0x8009
static const int AB2 = 26;  //B2 0x800A
static const int AB3 = 68;  //B3 0x800B
static const int AB4 = 64;  //B4 0x800C
static const int AB5 = 66;  //B5 0x800D
static const int AB6 = 6;   //B6 0x800E
static const int AB7 = 63;  //B7 0x800F


static const int RX_A = 3; //J1.3
static const int TX_A = 4; //J1.4
static const int SCK_A = 7; //J1.7
static const int MOSI_A = 15; //J2.15
static const int MISO_A = 14; //J2.14
static const int SCL_A = 9; //J1.9
static const int SDA_A = 10; //J1.10

static const int RX_B = 43; //J5.3
static const int TX_B = 44; //J5.4
static const int SCK_B = 47; //J5.7
static const int MOSI_B = 55; //J6.15
static const int MISO_B = 54; //J6.14

#endif /* F28069_PINS_H_ */
