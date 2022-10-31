#include "includes.h"
#include <stdio.h>

// Import Interrupt registers
extern volatile unsigned int IFR;
extern volatile unsigned int IER;

/* Attach an interrupt to the board. Will automatically assign an interrupt based on the open CpuTimers.
 *
 * clearInterval(id) must be used in the interrupt to acknowledge it.
 * The ID will need to be the order in which the interrupts are activated,
 * so make sure to keep track of its count with a variable.
 *
 * void (*i) -> the interrupt function
 * int TICKS_PER_MS -> Device clock speed
 */
void attachInterrupt(void (*i), int TICKS_PER_MS)
{
    if (CpuTimer0Regs.TCR.bit.TIE == 0)
    {
        EALLOW;
        SysCtrlRegs.PCLKCR3.bit.CPUTIMER0ENCLK = 1;
        EDIS;
        CpuTimer0Regs.PRD.all = (uint32_t) (SYSCLK_HZ / (1000 * TICKS_PER_MS));

        CpuTimer0Regs.TCR.bit.TIE = 1;
        PieCtrlRegs.PIEIER1.bit.INTx7 = 1; // CpuTimer0 only uses this?

        PieCtrlRegs.PIEACK.bit.ACK1 = PIEACK_GROUP1; // Only CpuTimer0 uses the PIE and needs to be acknowledged

        EALLOW;
        PieVectTable.TINT0 = (PINT) i;
        EDIS;
        IER |= M_INT1; // CpuTimer0 uses INT1-INT12

        printf("Timer0 Interrupt started\n");
    }
    else if (CpuTimer1Regs.TCR.bit.TIE == 0)
    {
        EALLOW;
        SysCtrlRegs.PCLKCR3.bit.CPUTIMER1ENCLK = 1;
        EDIS;
        CpuTimer1Regs.PRD.all = (uint32_t) (SYSCLK_HZ / (1000 * TICKS_PER_MS));

        CpuTimer1Regs.TCR.bit.TIE = 1;

        EALLOW;
        PieVectTable.TINT1 = (PINT) i;
        IER |= M_INT13; // CpuTimer1 uses INT13

        printf("Timer1 Interrupt started\n");
    }
    else if (CpuTimer2Regs.TCR.bit.TIE == 0)
    {
        EALLOW;
        SysCtrlRegs.PCLKCR3.bit.CPUTIMER2ENCLK = 1;
        EDIS;
        CpuTimer2Regs.PRD.all = (uint32_t) (SYSCLK_HZ / (1000 * TICKS_PER_MS));

        CpuTimer2Regs.TCR.bit.TIE = 1;

        EALLOW;
        PieVectTable.TINT2 = (PINT) i;
        EDIS;
        IER |= M_INT14; // CpuTimer2 uses INT14

        printf("Timer2 Interrupt started\n");
    }
    else
    {
        printf("All CpuTimers are being used\n");
    }
}

/* Clear an interrupt. Used in an interrupt being passed to attachInterrupt, the ID must match the order in
 * which the interrupts are activated.
 *
 * int id -> ID of the CpuTimer the interrupt uses.
 */
void clearInterrupt(int id)
{
    switch (id)
    {
    case 0:
    {
        PieCtrlRegs.PIEACK.bit.ACK1 = PIEACK_GROUP1; // Only CpuTimer0 uses the PIE and needs to be acknowledged
        CpuTimer0Regs.TCR.bit.TIF = 1;
        IER |= M_INT1;
    }
        break;
    case 1:
    {
        CpuTimer1Regs.TCR.bit.TIF = 1;
        IER |= M_INT13;
    }
        break;
    case 2:
    {
        CpuTimer2Regs.TCR.bit.TIF = 1;
        IER |= M_INT14;
    }
        break;
    default:
        printf("Unknown ID: %d", id);
    }
}
/*
 * Stop an interrupt. The CpuTimer corresponding the the ID will be disabled.
 *
 * int id -> ID of the CpuTimer the interrupt uses.
 */

void stopInterrupt(int id)
{
    //if (IER >> (M_INT1 - 1) == 1){ Works, but doesn't disable interrupt on a high enough level
    //IER ^= 1UL << M_INT1;
    switch (id)
    {
    case 0:
    {
        if (CpuTimer0Regs.TCR.bit.TIE)
        {
            CpuTimer0Regs.TCR.bit.TIE = 0;
            printf("Timer0 Interrupt stopped\n");
        }
        else
        {
            printf("No interrupt on Timer0\n");
        }
    }
        break;
    case 1:
    {
        if (CpuTimer1Regs.TCR.bit.TIE)
        {
            CpuTimer1Regs.TCR.bit.TIE = 0;
            printf("Timer1 Interrupt stopped\n");
        }
        else
        {
            printf("No interrupt on Timer1\n");
        }
    }
        break;
    case 2:
    {
        if (CpuTimer1Regs.TCR.bit.TIE)
        {
            CpuTimer1Regs.TCR.bit.TIE = 0;
            printf("Timer1 Interrupt stopped\n");
        }
        else
        {
            printf("No interrupt on Timer1\n");
        }
    }
        break;
    default:
        printf("Unknown ID: %d", id);
    }
}
