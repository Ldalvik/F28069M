#include <f28069api/interrupts.h>
#include <f28069api/initializers.h>
#include <f28069api/api.h>
#include "includes.h"
#include "main.h"
#include <stdio.h>

#define TICKS_PER_MS 10

#define LED_BLINK_PERIOD (500 * TICKS_PER_MS)
#define NEVER_16 0xFFFF

volatile long Timer0 = 0;

interrupt void TimerInterrupt()
{
    clearInterrupt(0);
    if(Timer < (NEVER_16-1))
    {
        Timer++;
    }
}

void setup()
{
    pinMode(RED_LED, OUTPUT);
    pinMode(BLUE_LED, OUTPUT);
    digitalWrite(BLUE_LED, HIGH); // Set one of the LEDs to HIGH 

    // Initialize and start interrupt
    InitInterrupts();
    attachInterrupt(&TimerInterrupt, TICKS_PER_MS);
}

void loop()
{
    if (Timer0 > LED_BLINK_PERIOD)
    {
        Timer0 = 0;
        togglePin(LED1);
    }
}

void main(void)
{
    DeviceSetup(setup, loop);
}
