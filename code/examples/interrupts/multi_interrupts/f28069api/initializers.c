#include "includes.h"

extern volatile unsigned int IFR;
extern volatile unsigned int IER;

void PieCntlInit(void);
void PieVectTableInit(void);

void InitInterrupts()
{
    EDIS;
    DINT;
    IER = 0x0000;
    IFR = 0x0000;

    PieCntlInit();
    PieVectTableInit();
    EINT;
    ERTM;
    //PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}


void DeviceInit(Uint16 clock_source, Uint16 pllDiv);
void MemCopy(Uint16 *SourceAddr, Uint16 *SourceEndAddr, Uint16 *DestAddr);
void InitFlash();\
extern Uint16 RamfuncsLoadStart, RamfuncsLoadEnd, RamfuncsRunStart;
void DeviceSetup(void setup(void), void loop(void))
{
    DeviceInit(PLL_SRC, PLL_DIV);
#ifdef _FLASH
    MemCopy(&RamfuncsLoadStart, &RamfuncsLoadEnd, &RamfuncsRunStart);
    InitFlash();
#endif
    setup();
    for (;;)
    {
        loop();
    }
}
