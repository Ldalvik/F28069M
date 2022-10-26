#include "F28069_pins.h"
#include "includes.h"
#include <stdio.h>
#include "main.h"

// ----------------------------- >DEVICE SETUP< ----------------------------- //
//                                                                            //
// DeviceInit() -> Set clock source and PLL division                          //
// MemCopy() -> Copy memory to another address                                //
// InitFlash() -> Initialize Flash Control Registers for code flashing        //
// setup() -> Initial application setup (runs once)                           //
// loop() -> Initial application loop                                         //
// Ramfuncs(LoadStart, LoadEnd, RunStart) -> Copy functions to ram?           //
// main() -> DeviceInit() -> _FLASH -> setup() -> loop() (infinite)           //
//                                                                            //
void DeviceInit(Uint16 clock_source, Uint16 pllDiv);                          //
void MemCopy(Uint16 *SourceAddr, Uint16 *SourceEndAddr, Uint16 *DestAddr);    //
void InitFlash();                                                             //
void setup();                                                                 //
void loop();                                                                  //
//
extern Uint16 RamfuncsLoadStart, RamfuncsLoadEnd, RamfuncsRunStart;           //
                                                                              //
void main(void)                                                               //
{                                                                             //
    DeviceInit(PLL_SRC, PLL_DIV);                                             //
#ifdef _FLASH                                                                 //
    MemCopy(&RamfuncsLoadStart, &RamfuncsLoadEnd, &RamfuncsRunStart);         //
    InitFlash();                                                              //
#endif                                                                        //
    setup();                                                                  //
    for (;;)                                                                  //
    {                                                                         //
        loop();                                                               //
    }                                                                         //
}                                                                             //
// -------------------------------------------------------------------------- //

// ------------------------------ >MAIN CODE< ------------------------------- //
#define button1 75
#define button2 76

#define led1 78
#define led2 79

void setup()
{
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);

    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);

    pinMode(RED_LED, OUTPUT);
    pinMode(BLUE_LED, OUTPUT);
}

void loop()
{
    int button1_state = digitalRead(button1);
    int button2_state = digitalRead(button2);

    printf("button 1: %d, button 2: %d\n", button1_state, button2_state);

    if (button1_state)
    {
        togglePin(led1);
        togglePin (BLUE_LED);

    }

    if (button2_state)
    {
        togglePin(led2);
        togglePin (RED_LED);

    }
}
