#include <f28069api/interrupts.h>
#include <f28069api/initializers.h>
#include <f28069api/api.h>
#include "includes.h"
#include "main.h"
#include <stdio.h>

#define TICKS_PER_MS 10 // How many ticks a cycle

#define LED_BLINK_PERIOD (250 * TICKS_PER_MS) 
#define NEVER_16 0xFFFF

// Timers for LED blinking
volatile uint16_t LedTimer = 0;

static interrupt void TimerInterrupt()
{
    clearInterrupt(0);
    if(LedTimer < (NEVER_16-1))
    {
        LedTimer++;
    }
}

#define button 76

void setup()
{
		// Set button as input
		pinMode(button, INPUT);
		// Set onboard red/blue LEDs as output
    pinMode(RED_LED, OUTPUT);
    pinMode(BLUE_LED, OUTPUT);
    digitalWrite(BLUE_LED, HIGH); // Set blue LED initial state to on

    InitInterrupts(); // Initialize registers for interrupts
}

void loop()
{
		static int lastButtonState = 0;

    if (LedTimer > LED_BLINK_PERIOD) // Toggle every 250ms
    {
        LedTimer = 0; // Reset timer
        togglePin(RED_LED);
        togglePin(BLUE_LED);
    }

    if (button != lastButtonState)
    {
        if (button)
        {
            if (CpuTimer1Regs.TCR.bit.TIE == 0) // Check if CpuTimer is unused. Disable it if enabled.
            {
                attachInterrupt(&TimerInterrupt, TICKS_PER_MS);
            }
            else
            {
                stopInterrupt(0);
            }
        }
        lastButtonState = button
    }
}

void main(void)
{
    DeviceSetup(setup, loop);
}
