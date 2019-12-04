MCU = atmega32u2

F_CPU = 16000000
ARCH = AVR8
F_USB = $(F_CPU)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
BOOTLOADER = atmel-dfu


AUDIO_ENABLE = no
BACKLIGHT_ENABLE = yes
BLUETOOTH_ENABLE = no 	# Enable Bluetooth with the Adafruit EZ-Key HID
BOOTMAGIC_ENABLE = no 	# Virtual DIP switch configuration(+1000)
COMMAND_ENABLE = no   	# Commands for debug and configuration
CONSOLE_ENABLE = no		# Console for debug(+400)
EXTRAKEY_ENABLE = yes 	# Audio control and System control(+450)
MIDI_ENABLE = no 		# MIDI controls
MOUSEKEY_ENABLE = no	# Mouse keys(+4700)
NKRO_ENABLE = yes		# USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
RGBLIGHT_ENABLE = yes   # Enable keyboard underlight functionality
UNICODE_ENABLE = no 	# Unicode
