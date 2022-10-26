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
void setup()
{
    pinMode(RED_LED, OUTPUT);
    pinMode(BLUE_RED, OUTPUT);
}

void loop() // Toggle GPIO pins 34 and 39 (pins 80 and 81) off and on (onboard Blue and Red LEDs)
{
    togglePin (RED_LED);
    togglePin (BLUE_LED);
}
