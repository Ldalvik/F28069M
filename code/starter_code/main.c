#include <f28069api/initializers.h>
#include <f28069api/api.h>
#include "includes.h"
#include "main.h"
#include <stdio.h>

void setup()
{    
    // Set on-board LEDs to OUTPUT
    pinMode(RED_LED, OUTPUT);
    pinMode(BLUE_LED, OUTPUT);
}

void loop()
{
    // Set LEDs to ON
    pinMode(RED_LED, HIGH);
    pinMode(BLUE_LED, HIGH);
}

void main(void)
{
    DeviceSetup(setup, loop);
}
