# TARGET_XMC4500_MIDI_USB
The board support package for ModusToolbox and the XMC4500 Midi project.
This BSP configures all peripherals I want to use in this project:
* one UART for debuggin
* three UARTs for the Midi channels
* one I2C bus for an LCD display
* the USB bus (with Segger emUSB device driver)
* the real time clock
* the watchdog timer
* four input pins for buttons
* two output pins for LEDs
* three input pins for a rotary switch
