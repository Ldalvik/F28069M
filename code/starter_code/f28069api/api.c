#include "includes.h"

/* Toggle GPIO pins */
void togglePin(int pin)
{
    EALLOW;
    switch (pin)
    {
    case 40:
        GpioDataRegs.GPATOGGLE.bit.GPIO0 = 1;
        break;
    case 39:
        GpioDataRegs.GPATOGGLE.bit.GPIO1 = 1;
        break;
    case 38:
        GpioDataRegs.GPATOGGLE.bit.GPIO2 = 1;
        break;
    case 37:
        GpioDataRegs.GPATOGGLE.bit.GPIO3 = 1;
        break;
    case 36:
        GpioDataRegs.GPATOGGLE.bit.GPIO4 = 1;
        break;
    case 35:
        GpioDataRegs.GPATOGGLE.bit.GPIO5 = 1;
        break;
    case 80:
        GpioDataRegs.GPATOGGLE.bit.GPIO6 = 1;
        break;
    case 79:
        GpioDataRegs.GPATOGGLE.bit.GPIO7 = 1;
        break;
    case 78:
        GpioDataRegs.GPATOGGLE.bit.GPIO8 = 1;
        break;
    case 77:
        GpioDataRegs.GPATOGGLE.bit.GPIO9 = 1;
        break;
    case 76:
        GpioDataRegs.GPATOGGLE.bit.GPIO10 = 1;
        break;
    case 75:
        GpioDataRegs.GPATOGGLE.bit.GPIO11 = 1;
        break;
    case 5:
        GpioDataRegs.GPATOGGLE.bit.GPIO12 = 1;
        break;
    case 34:
        GpioDataRegs.GPATOGGLE.bit.GPIO13 = 1;
        break;
    case 47:
        GpioDataRegs.GPATOGGLE.bit.GPIO14 = 1;
        break;

//    case -1:
//        GpioDataRegs.GPATOGGLE.bit.GPIO15 = 1;
//        break;

    case 15:
        GpioDataRegs.GPATOGGLE.bit.GPIO16 = 1;
        break;

    case 14:
        GpioDataRegs.GPATOGGLE.bit.GPIO17 = 1;
        break;

    case 7:
        GpioDataRegs.GPATOGGLE.bit.GPIO18 = 1;
        break;

    case 19:
        GpioDataRegs.GPATOGGLE.bit.GPIO19 = 1;
        break;

    case 45:
        GpioDataRegs.GPATOGGLE.bit.GPIO20 = 1;
        break;

    case 48:
        GpioDataRegs.GPATOGGLE.bit.GPIO21 = 1;
        break;

    case 8:
        GpioDataRegs.GPATOGGLE.bit.GPIO22 = 1;
        break;

    case 49:
        GpioDataRegs.GPATOGGLE.bit.GPIO23 = 1;
        break;

    case 55:
        GpioDataRegs.GPATOGGLE.bit.GPIO24 = 1;
        break;

    case 54:
        GpioDataRegs.GPATOGGLE.bit.GPIO25 = 1;
        break;

    case 58:
        GpioDataRegs.GPATOGGLE.bit.GPIO26 = 1;
        break;

    case 59:
        GpioDataRegs.GPATOGGLE.bit.GPIO27 = 1;
        break;

//    case -1:
//        GpioDataRegs.GPATOGGLE.bit.GPIO28 = 1;
//        break;

//    case -1:
//        GpioDataRegs.GPATOGGLE.bit.GPIO29 = 1;
//        break;

//    case -1:
//        GpioDataRegs.GPATOGGLE.bit.GPIO30 = 1;
//        break;

//    case -1:
//        GpioDataRegs.GPATOGGLE.bit.GPIO31 = 1;
//        break;
    case 10:
        GpioDataRegs.GPBTOGGLE.bit.GPIO32 = 1;
        break;
    case 9:
        GpioDataRegs.GPBTOGGLE.bit.GPIO33 = 1;
        break;
    case 81:
        GpioDataRegs.GPBTOGGLE.bit.GPIO34 = 1;
        break;
//    case -1:
//        GpioDataRegs.GPBTOGGLE.bit.GPIO35 = 1;
//        break;
//    case 10:
//        GpioDataRegs.GPBTOGGLE.bit.GPIO36 = 1;
//        break;
//    case 10:
//        GpioDataRegs.GPBTOGGLE.bit.GPIO37 = 1;
//        break;
//    case 10:
//        GpioDataRegs.GPBTOGGLE.bit.GPIO38 = 1;
//        break;
    case 82:
        GpioDataRegs.GPBTOGGLE.bit.GPIO39 = 1;
        break;
//    case 10:
//        GpioDataRegs.GPBTOGGLE.bit.GPIO40 = 1;
//        break;
//    case 10:
//        GpioDataRegs.GPBTOGGLE.bit.GPIO41 = 1;
//        break;
//    case 10:
//        GpioDataRegs.GPBTOGGLE.bit.GPIO42 = 1;
//        break;
//    case 10:
//        GpioDataRegs.GPBTOGGLE.bit.GPIO43 = 1;
//        break;
    case 18:
        GpioDataRegs.GPBTOGGLE.bit.GPIO44 = 1;
        break;
    case 13:
        GpioDataRegs.GPBTOGGLE.bit.GPIO50 = 1;
        break;
    case 12:
        GpioDataRegs.GPBTOGGLE.bit.GPIO51 = 1;
        break;
    case 53:
        GpioDataRegs.GPBTOGGLE.bit.GPIO52 = 1;
        break;
    case 52:
        GpioDataRegs.GPBTOGGLE.bit.GPIO53 = 1;
        break;
    case 50:
        GpioDataRegs.GPBTOGGLE.bit.GPIO54 = 1;
        break;
    case 11:
        GpioDataRegs.GPBTOGGLE.bit.GPIO55 = 1;
        break;
    case 51:
        GpioDataRegs.GPBTOGGLE.bit.GPIO56 = 1;
        break;
//    case 10:
//        GpioDataRegs.GPBTOGGLE.bit.GPIO57 = 1;
//        break;
//    case 10:
//        GpioDataRegs.GPBTOGGLE.bit.GPIO58 = 1;
//        break;
    }
    EDIS;
}

/* Write digital value to GPIO pin */
void digitalWrite(int pin, int state)
{
    EALLOW;
    switch (pin)
    {
    case 40:
        GpioDataRegs.GPASET.bit.GPIO0 = state;
        break;
    case 39:
        GpioDataRegs.GPASET.bit.GPIO1 = state;
        break;
    case 38:
        GpioDataRegs.GPASET.bit.GPIO2 = state;
        break;
    case 37:
        GpioDataRegs.GPASET.bit.GPIO3 = state;
        break;
    case 36:
        GpioDataRegs.GPASET.bit.GPIO4 = state;
        break;
    case 35:
        GpioDataRegs.GPASET.bit.GPIO5 = state;
        break;
    case 80:
        GpioDataRegs.GPASET.bit.GPIO6 = state;
        break;
    case 79:
        GpioDataRegs.GPASET.bit.GPIO7 = state;
        break;
    case 78:
        GpioDataRegs.GPASET.bit.GPIO8 = state;
        break;
    case 77:
        GpioDataRegs.GPASET.bit.GPIO9 = state;
        break;
    case 76:
        GpioDataRegs.GPASET.bit.GPIO10 = state;
        break;
    case 75:
        GpioDataRegs.GPASET.bit.GPIO11 = state;
        break;
    case 5:
        GpioDataRegs.GPASET.bit.GPIO12 = state;
        break;
    case 34:
        GpioDataRegs.GPASET.bit.GPIO13 = state;
        break;
    case 47:
        GpioDataRegs.GPASET.bit.GPIO14 = state;
        break;

        //    case -1:
        //        GpioDataRegs.GPASET.bit.GPIO15 = state;
        //        break;

    case 15:
        GpioDataRegs.GPASET.bit.GPIO16 = state;
        break;

    case 14:
        GpioDataRegs.GPASET.bit.GPIO17 = state;
        break;

    case 7:
        GpioDataRegs.GPASET.bit.GPIO18 = state;
        break;

    case 19:
        GpioDataRegs.GPASET.bit.GPIO19 = state;
        break;

    case 45:
        GpioDataRegs.GPASET.bit.GPIO20 = state;
        break;

    case 48:
        GpioDataRegs.GPASET.bit.GPIO21 = state;
        break;

    case 8:
        GpioDataRegs.GPASET.bit.GPIO22 = state;
        break;

    case 49:
        GpioDataRegs.GPASET.bit.GPIO23 = state;
        break;

    case 55:
        GpioDataRegs.GPASET.bit.GPIO24 = state;
        break;

    case 54:
        GpioDataRegs.GPASET.bit.GPIO25 = state;
        break;

    case 58:
        GpioDataRegs.GPASET.bit.GPIO26 = state;
        break;

    case 59:
        GpioDataRegs.GPASET.bit.GPIO27 = state;
        break;

        //    case -1:
        //        GpioDataRegs.GPASET.bit.GPIO28 = state;
        //        break;

        //    case -1:
        //        GpioDataRegs.GPASET.bit.GPIO29 = state;
        //        break;

        //    case -1:
        //        GpioDataRegs.GPASET.bit.GPIO30 = state;
        //        break;

        //    case -1:
        //        GpioDataRegs.GPASET.bit.GPIO31 = state;
        //        break;
    case 10:
        GpioDataRegs.GPBSET.bit.GPIO32 = state;
        break;
    case 9:
        GpioDataRegs.GPBSET.bit.GPIO33 = state;
        break;
    case 81:
        GpioDataRegs.GPBSET.bit.GPIO34 = state;
        break;
        //    case -1:
        //        GpioDataRegs.GPBSET.bit.GPIO35 = state;
        //        break;
        //    case 10:
        //        GpioDataRegs.GPBSET.bit.GPIO36 = state;
        //        break;
        //    case 10:
        //        GpioDataRegs.GPBSET.bit.GPIO37 = state;
        //        break;
        //    case 10:
        //        GpioDataRegs.GPBSET.bit.GPIO38 = state;
        //        break;
    case 82:
        GpioDataRegs.GPBSET.bit.GPIO39 = state;
        break;
        //    case 10:
        //        GpioDataRegs.GPBSET.bit.GPIO40 = state;
        //        break;
        //    case 10:
        //        GpioDataRegs.GPBSET.bit.GPIO41 = state;
        //        break;
        //    case 10:
        //        GpioDataRegs.GPBSET.bit.GPIO42 = state;
        //        break;
        //    case 10:
        //        GpioDataRegs.GPBSET.bit.GPIO43 = state;
        //        break;
    case 18:
        GpioDataRegs.GPBSET.bit.GPIO44 = state;
        break;
    case 13:
        GpioDataRegs.GPBSET.bit.GPIO50 = state;
        break;
    case 12:
        GpioDataRegs.GPBSET.bit.GPIO51 = state;
        break;
    case 53:
        GpioDataRegs.GPBSET.bit.GPIO52 = state;
        break;
    case 52:
        GpioDataRegs.GPBSET.bit.GPIO53 = state;
        break;
    case 50:
        GpioDataRegs.GPBSET.bit.GPIO54 = state;
        break;
    case 11:
        GpioDataRegs.GPBSET.bit.GPIO55 = state;
        break;
    case 51:
        GpioDataRegs.GPBSET.bit.GPIO56 = state;
        break;
//        case -1:
//            GpioDataRegs.GPBSET.bit.GPIO57 = state;
//            break;
//        case -1:
//            GpioDataRegs.GPBSET.bit.GPIO58 = state;
//            break;
    }
    EDIS;
}

/* Read digital value of GPIO pin */
int digitalRead(int pin)
{
    int value;
    switch (pin)
    {
    case 40:
        value = GpioDataRegs.GPADAT.bit.GPIO0;
        break;
    case 39:
        value = GpioDataRegs.GPADAT.bit.GPIO1;
        break;
    case 38:
        value = GpioDataRegs.GPADAT.bit.GPIO2;
        break;
    case 37:
        value = GpioDataRegs.GPADAT.bit.GPIO3;
        break;
    case 36:
        value = GpioDataRegs.GPADAT.bit.GPIO4;
        break;
    case 35:
        value = GpioDataRegs.GPADAT.bit.GPIO5;
        break;
    case 80:
        value = GpioDataRegs.GPADAT.bit.GPIO6;
        break;
    case 79:
        value = GpioDataRegs.GPADAT.bit.GPIO7;
        break;
    case 78:
        value = GpioDataRegs.GPADAT.bit.GPIO8;
        break;
    case 77:
        value = GpioDataRegs.GPADAT.bit.GPIO9;
        break;
    case 76:
        value = GpioDataRegs.GPADAT.bit.GPIO10;
        break;
    case 75:
        value = GpioDataRegs.GPADAT.bit.GPIO11;
        break;
    case 5:
        value = GpioDataRegs.GPADAT.bit.GPIO12;
        break;
    case 34:
        value = GpioDataRegs.GPADAT.bit.GPIO13;
        break;
    case 47:
        value = GpioDataRegs.GPADAT.bit.GPIO14;
        break;

        //    case -1:
        //        value = GpioDataRegs.GPADAT.bit.GPIO15;
        //        break;

    case 15:
        value = GpioDataRegs.GPADAT.bit.GPIO16;
        break;

    case 14:
        value = GpioDataRegs.GPADAT.bit.GPIO17;
        break;

    case 7:
        value = GpioDataRegs.GPADAT.bit.GPIO18;
        break;

    case 19:
        value = GpioDataRegs.GPADAT.bit.GPIO19;
        break;

    case 45:
        value = GpioDataRegs.GPADAT.bit.GPIO20;
        break;

    case 48:
        value = GpioDataRegs.GPADAT.bit.GPIO21;
        break;

    case 8:
        value = GpioDataRegs.GPADAT.bit.GPIO22;
        break;

    case 49:
        value = GpioDataRegs.GPADAT.bit.GPIO23;
        break;

    case 55:
        value = GpioDataRegs.GPADAT.bit.GPIO24;
        break;

    case 54:
        value = GpioDataRegs.GPADAT.bit.GPIO25;
        break;

    case 58:
        value = GpioDataRegs.GPADAT.bit.GPIO26;
        break;

    case 59:
        value = GpioDataRegs.GPADAT.bit.GPIO27;
        break;

        //    case -1:
        //        value = GpioDataRegs.GPADAT.bit.GPIO28;
        //        break;

        //    case -1:
        //        value = GpioDataRegs.GPADAT.bit.GPIO29;
        //        break;

        //    case -1:
        //        value = GpioDataRegs.GPADAT.bit.GPIO30;
        //        break;

        //    case -1:
        //        value = GpioDataRegs.GPADAT.bit.GPIO31;
        //        break;
    case 10:
        value = GpioDataRegs.GPBDAT.bit.GPIO32;
        break;
    case 9:
        value = GpioDataRegs.GPBDAT.bit.GPIO33;
        break;
        //    case 10:
        //        value = GpioDataRegs.GPBDAT.bit.GPIO34;
        //        break;
        //    case -1:
        //        value = GpioDataRegs.GPBDAT.bit.GPIO35;
        //        break;
        //    case 10:
        //        value = GpioDataRegs.GPBDAT.bit.GPIO36;
        //        break;
        //    case 10:
        //        value = GpioDataRegs.GPBDAT.bit.GPIO37;
        //        break;
        //    case 10:
        //        value = GpioDataRegs.GPBDAT.bit.GPIO38;
        //        break;
    case 82:
        value = GpioDataRegs.GPBDAT.bit.GPIO39;
        break;
        //    case 10:
        //        value = GpioDataRegs.GPBDAT.bit.GPIO40;
        //        break;
        //    case 10:
        //        value = GpioDataRegs.GPBDAT.bit.GPIO41;
        //        break;
        //    case 10:
        //        value = GpioDataRegs.GPBDAT.bit.GPIO42;
        //        break;
        //    case 10:
        //        value = GpioDataRegs.GPBDAT.bit.GPIO43;
        //        break;
    case 18:
        value = GpioDataRegs.GPBDAT.bit.GPIO44;
        break;
    case 13:
        value = GpioDataRegs.GPBDAT.bit.GPIO50;
        break;
    case 12:
        value = GpioDataRegs.GPBDAT.bit.GPIO51;
        break;
    case 53:
        value = GpioDataRegs.GPBDAT.bit.GPIO52;
        break;
    case 52:
        value = GpioDataRegs.GPBDAT.bit.GPIO53;
        break;
    case 50:
        value = GpioDataRegs.GPBDAT.bit.GPIO54;
        break;
    case 11:
        value = GpioDataRegs.GPBDAT.bit.GPIO55;
        break;
    case 51:
        value = GpioDataRegs.GPBDAT.bit.GPIO56;
        break;
        //        case -1:
        //            GpioDataRegs.GPBSET.bit.GPIO57;
        //            break;
        //        case -1:
        //            GpioDataRegs.GPBSET.bit.GPIO58;
        //            break;
    }
    return value;
}

/* Change GPIO pin mode (HIGH/LOW) */
void pinMode(int pin, int mode)
{
    EALLOW;
    switch (pin)
    {
    case 40:
        GpioCtrlRegs.GPADIR.bit.GPIO0 = mode;
        break;
    case 39:
        GpioCtrlRegs.GPADIR.bit.GPIO1 = mode;
        break;
    case 38:
        GpioCtrlRegs.GPADIR.bit.GPIO2 = mode;
        break;
    case 37:
        GpioCtrlRegs.GPADIR.bit.GPIO3 = mode;
        break;
    case 36:
        GpioCtrlRegs.GPADIR.bit.GPIO4 = mode;
        break;
    case 35:
        GpioCtrlRegs.GPADIR.bit.GPIO5 = mode;
        break;
    case 80:
        GpioCtrlRegs.GPADIR.bit.GPIO6 = mode;
        break;
    case 79:
        GpioCtrlRegs.GPADIR.bit.GPIO7 = mode;
        break;
    case 78:
        GpioCtrlRegs.GPADIR.bit.GPIO8 = mode;
        break;
    case 77:
        GpioCtrlRegs.GPADIR.bit.GPIO9 = mode;
        break;
    case 76:
        GpioCtrlRegs.GPADIR.bit.GPIO10 = mode;
        break;
    case 75:
        GpioCtrlRegs.GPADIR.bit.GPIO11 = mode;
        break;
    case 5:
        GpioCtrlRegs.GPADIR.bit.GPIO12 = mode;
        break;
    case 34:
        GpioCtrlRegs.GPADIR.bit.GPIO13 = mode;
        break;
    case 47:
        GpioCtrlRegs.GPADIR.bit.GPIO14 = mode;
        break;

        //    case -1:
        //        GpioCtrlRegs.GPADIR.bit.GPIO15 = mode;
        //        break;

    case 15:
        GpioCtrlRegs.GPADIR.bit.GPIO16 = mode;
        break;

    case 14:
        GpioCtrlRegs.GPADIR.bit.GPIO17 = mode;
        break;

    case 7:
        GpioCtrlRegs.GPADIR.bit.GPIO18 = mode;
        break;

    case 19:
        GpioCtrlRegs.GPADIR.bit.GPIO19 = mode;
        break;

    case 45:
        GpioCtrlRegs.GPADIR.bit.GPIO20 = mode;
        break;

    case 48:
        GpioCtrlRegs.GPADIR.bit.GPIO21 = mode;
        break;

    case 8:
        GpioCtrlRegs.GPADIR.bit.GPIO22 = mode;
        break;

    case 49:
        GpioCtrlRegs.GPADIR.bit.GPIO23 = mode;
        break;

    case 55:
        GpioCtrlRegs.GPADIR.bit.GPIO24 = mode;
        break;

    case 54:
        GpioCtrlRegs.GPADIR.bit.GPIO25 = mode;
        break;

    case 58:
        GpioCtrlRegs.GPADIR.bit.GPIO26 = mode;
        break;

    case 59:
        GpioCtrlRegs.GPADIR.bit.GPIO27 = mode;
        break;

        //    case -1:
        //        GpioCtrlRegs.GPADIR.bit.GPIO28 = mode;
        //        break;

        //    case -1:
        //        GpioCtrlRegs.GPADIR.bit.GPIO29 = mode;
        //        break;

        //    case -1:
        //        GpioCtrlRegs.GPADIR.bit.GPIO30 = mode;
        //        break;

        //    case -1:
        //        GpioCtrlRegs.GPADIR.bit.GPIO31 = mode;
        //        break;
    case 10:
        GpioCtrlRegs.GPBDIR.bit.GPIO32 = mode;
        break;
    case 9:
        GpioCtrlRegs.GPBDIR.bit.GPIO33 = mode;
        break;
    case 81:
        GpioCtrlRegs.GPBDIR.bit.GPIO34 = mode;
        break;
        //    case -1:
        //        GpioCtrlRegs.GPBDIR.bit.GPIO35 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBDIR.bit.GPIO36 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBDIR.bit.GPIO37 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBDIR.bit.GPIO38 = mode;
        //        break;
    case 82:
        GpioCtrlRegs.GPBDIR.bit.GPIO39 = mode;
        break;
        //    case 10:
        //        GpioCtrlRegs.GPBDIR.bit.GPIO40 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBDIR.bit.GPIO41 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBDIR.bit.GPIO42 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBDIR.bit.GPIO43 = mode;
        //        break;
    case 18:
        GpioCtrlRegs.GPBDIR.bit.GPIO44 = mode;
        break;
    case 13:
        GpioCtrlRegs.GPBDIR.bit.GPIO50 = mode;
        break;
    case 12:
        GpioCtrlRegs.GPBDIR.bit.GPIO51 = mode;
        break;
    case 53:
        GpioCtrlRegs.GPBDIR.bit.GPIO52 = mode;
        break;
    case 52:
        GpioCtrlRegs.GPBDIR.bit.GPIO53 = mode;
        break;
    case 50:
        GpioCtrlRegs.GPBDIR.bit.GPIO54 = mode;
        break;
    case 11:
        GpioCtrlRegs.GPBDIR.bit.GPIO55 = mode;
        break;
    case 51:
        GpioCtrlRegs.GPBDIR.bit.GPIO56 = mode;
        break;
        //        case -1:
        //            GpioDataRegs.GPBSET.bit.GPIO57 = state;
        //            break;
        //        case -1:
        //            GpioDataRegs.GPBSET.bit.GPIO58 = state;
        //            break;
    }
    EDIS;
}

/* Change GPIO MUX mode */
void setMux(int pin, int mode)
{
    EALLOW;
    switch (pin)
    {
    case 40:
        GpioCtrlRegs.GPAMUX1.bit.GPIO0 = mode;
        break;
    case 39:
        GpioCtrlRegs.GPAMUX1.bit.GPIO1 = mode;
        break;
    case 38:
        GpioCtrlRegs.GPAMUX1.bit.GPIO2 = mode;
        break;
    case 37:
        GpioCtrlRegs.GPAMUX1.bit.GPIO3 = mode;
        break;
    case 36:
        GpioCtrlRegs.GPAMUX1.bit.GPIO4 = mode;
        break;
    case 35:
        GpioCtrlRegs.GPAMUX1.bit.GPIO5 = mode;
        break;
    case 80:
        GpioCtrlRegs.GPAMUX1.bit.GPIO6 = mode;
        break;
    case 79:
        GpioCtrlRegs.GPAMUX1.bit.GPIO7 = mode;
        break;
    case 78:
        GpioCtrlRegs.GPAMUX1.bit.GPIO8 = mode;
        break;
    case 77:
        GpioCtrlRegs.GPAMUX1.bit.GPIO9 = mode;
        break;
    case 76:
        GpioCtrlRegs.GPAMUX1.bit.GPIO10 = mode;
        break;
    case 75:
        GpioCtrlRegs.GPAMUX1.bit.GPIO11 = mode;
        break;
    case 5:
        GpioCtrlRegs.GPAMUX1.bit.GPIO12 = mode;
        break;
    case 34:
        GpioCtrlRegs.GPAMUX1.bit.GPIO13 = mode;
        break;
    case 47:
        GpioCtrlRegs.GPAMUX1.bit.GPIO14 = mode;
        break;

        //    case -1:
        //        GpioCtrlRegs.GPAMUX1.bit.GPIO15 = mode;
        //        break;

    case 15:
        GpioCtrlRegs.GPAMUX2.bit.GPIO16 = mode;
        break;

    case 14:
        GpioCtrlRegs.GPAMUX2.bit.GPIO17 = mode;
        break;

    case 7:
        GpioCtrlRegs.GPAMUX2.bit.GPIO18 = mode;
        break;

    case 19:
        GpioCtrlRegs.GPAMUX2.bit.GPIO19 = mode;
        break;

    case 45:
        GpioCtrlRegs.GPAMUX2.bit.GPIO20 = mode;
        break;

    case 48:
        GpioCtrlRegs.GPAMUX2.bit.GPIO21 = mode;
        break;

    case 8:
        GpioCtrlRegs.GPAMUX2.bit.GPIO22 = mode;
        break;

    case 49:
        GpioCtrlRegs.GPAMUX2.bit.GPIO23 = mode;
        break;

    case 55:
        GpioCtrlRegs.GPAMUX2.bit.GPIO24 = mode;
        break;

    case 54:
        GpioCtrlRegs.GPAMUX2.bit.GPIO25 = mode;
        break;

    case 58:
        GpioCtrlRegs.GPAMUX2.bit.GPIO26 = mode;
        break;

    case 59:
        GpioCtrlRegs.GPAMUX2.bit.GPIO27 = mode;
        break;

        //    case -1:
        //        GpioCtrlRegs.GPAMUX1.bit.GPIO28 = mode;
        //        break;

        //    case -1:
        //        GpioCtrlRegs.GPAMUX1.bit.GPIO29 = mode;
        //        break;

        //    case -1:
        //        GpioCtrlRegs.GPAMUX1.bit.GPIO30 = mode;
        //        break;
        //    case -1:
        //        GpioCtrlRegs.GPAMUX1.bit.GPIO31 = mode;
        //        break;
    case 10:
        GpioCtrlRegs.GPBMUX1.bit.GPIO32 = mode;
        break;
    case 9:
        GpioCtrlRegs.GPBMUX1.bit.GPIO33 = mode;
        break;
    case 81:
        GpioCtrlRegs.GPBMUX1.bit.GPIO34 = mode;
        break;
        //    case -1:
        //        GpioCtrlRegs.GPBMUX1.bit.GPIO35 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBMUX1.bit.GPIO36 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBMUX1.bit.GPIO37 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBMUX1.bit.GPIO38 = mode;
        //        break;
    case 82:
        GpioCtrlRegs.GPBMUX1.bit.GPIO39 = mode;
        break;
        //    case 10:
        //        GpioCtrlRegs.GPBMUX1.bit.GPIO40 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBMUX1.bit.GPIO41 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBMUX1.bit.GPIO42 = mode;
        //        break;
        //    case 10:
        //        GpioCtrlRegs.GPBMUX1.bit.GPIO43 = mode;
        //        break;
    case 18:
        GpioCtrlRegs.GPBMUX1.bit.GPIO44 = mode;
        break;
    case 13:
        GpioCtrlRegs.GPBMUX2.bit.GPIO50 = mode;
        break;
    case 12:
        GpioCtrlRegs.GPBMUX2.bit.GPIO51 = mode;
        break;
    case 53:
        GpioCtrlRegs.GPBMUX2.bit.GPIO52 = mode;
        break;
    case 52:
        GpioCtrlRegs.GPBMUX2.bit.GPIO53 = mode;
        break;
    case 50:
        GpioCtrlRegs.GPBMUX2.bit.GPIO54 = mode;
        break;
    case 11:
        GpioCtrlRegs.GPBMUX2.bit.GPIO55 = mode;
        break;
    case 51:
        GpioCtrlRegs.GPBMUX2.bit.GPIO56 = mode;
        break;
        //        case -1:
        //            GpioDataRegs.GPBSET.bit.GPIO57 = state;
        //            break;
        //        case -1:
        //            GpioDataRegs.GPBSET.bit.GPIO58 = state;
        //            break;
    }
    EDIS;
}
