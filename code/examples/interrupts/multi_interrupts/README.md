# Mutliple Interrupts 

This code contains multiple interrupts that can be activated with a single button.

3 LEDs are connected and set to OUTPUT. One button is connected and set to INPUT.

The state determines which interrupt will be enabled, and it increases with each button press.
On the first press, the state is zero so interrupt 0 is triggered, and LED1 should blink. It is then increased by 1.
The second press will trigger interrupt 1, since the state is now 1. LED2 should blink.

The same applies to LED3.

This could be achieved in one interrupt with 3 different variables that are reset individually, and a button/timer state to get the start-on-press functionality, but this is done for example sake.
