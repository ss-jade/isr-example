This an example projecto use the hardware interrupt routines in the ESP32 with Arduino IDE. Informatin is taken from [^1].

# Introduction

The ESP32 provides up to 32 interrupt slots for each core. Each interrupt has a certain priority level and can be classified into two types.

Hardware interrupts – These occur in response to an external event. For example, a GPIO interrupt (when a key is pressed) or a touch interrupt (when touch is detected).

Software Interrupt – These occur in response to a software instruction. For example, a simple timer interrupt or a watchdog timer interrupt (when the timer times out).

# GPIO Interrupts

In ESP32 we can define an interrupt service routine function that will be called when the GPIO pin changes its logic level.

All GPIO pins in an ESP32 board can be configured to act as interrupt request inputs.

# Attaching an interrupt to a GPIO

In the Arduino IDE, we use a function called `attachInterrupt()` to set an interrupt on a pin by pin basis. The syntax looks like below.
```
attachInterrupt(GPIOPin, ISR, Mode);
```

This function accepts three arguments:

GPIOPin – sets the GPIO pin as the interrupt pin, which tells ESP32 which pin to monitor.

ISR – is the name of the function that will be called each time the interrupt occurs.

Mode – defines when the interrupt should be triggered. Five constants are predefined as valid values: LOW, HIGH, CHANGE, FALLING, RISING.




[^1]: https://lastminuteengineers.com/handling-esp32-gpio-interrupts-tutorial/

