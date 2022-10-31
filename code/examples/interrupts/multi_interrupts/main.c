#include <f28069api/interrupts.h>
#include <f28069api/initializers.h>
#include <f28069api/api.h>
#include "includes.h"
#include "main.h"
#include <stdio.h>

#define TICKS_PER_MS 10

#define LED_BLINK_PERIOD (500 * TICKS_PER_MS)
#define NEVER_16 0xFFFF

volatile uint16_t Timer0 = 0, Timer1 = 0, Timer2 = 0;

static interrupt void Timer0Interrupt()
{
    clearInterrupt(0);
    if(Timer0 < (NEVER_16-1))
    {
        Timer0++;
    }
}

static interrupt void Timer1Interrupt()
{
    clearInterrupt(1);
    if(Timer1 < (NEVER_16-1))
    {
        Timer1++;
    }
}

static interrupt void Timer2Interrupt()
{
    clearInterrupt(2);
    if(Timer2 < (NEVER_16-1))
    {
        Timer2++;
    }
}

#define BTN1 75
#define BTN2 76

#define DEBUG_WIRE 38

#define LED1 78
#define LED2 79
#define LED3 40

void setup()
{
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);

    pinMode(RED_LED, OUTPUT);
    pinMode(BLUE_LED, OUTPUT);

    pinMode(BTN1, INPUT);
    pinMode(BTN2, INPUT);

    pinMode(DEBUG_WIRE, INPUT);

    InitInterrupts();
}

void loop()
{
    int b1 = digitalRead(BTN1);
    static int lastButtonState = 0, state = 0;

    if (b1 != lastButtonState)
    {
        if (b1)
        {
            if (state == 0)
            {
                attachInterrupt(&Timer0Interrupt, TICKS_PER_MS);
            }
            if (state == 1)
            {
                attachInterrupt(&Timer1Interrupt, TICKS_PER_MS);
            }
            if (state == 2)
            {
                attachInterrupt(&Timer2Interrupt, TICKS_PER_MS);
            }
            state++;
        }
        lastButtonState = b1;
    }
    
    if (Timer0 > LED_BLINK_PERIOD)
    {
        Timer0 = 0;
        togglePin(LED1);
    }
    if (Timer1 > LED_BLINK_PERIOD)
    {
        Timer1 = 0;
        togglePin(LED2);
    }

    if (Timer2 > LED_BLINK_PERIOD)
    {
        Timer2 = 0;
        togglePin(LED3);
    }
}

void main(void)
{
    DeviceSetup(setup, loop);
}
