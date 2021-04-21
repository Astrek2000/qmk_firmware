# MCU name
MCU = STM32F103

# Bootloader selection
#   Teensy         halfkay
#   Pro Micro      caterina
#   Atmel DFU      atmel-dfu
#   LUFA DFU       lufa-dfu
#   QMK DFU        qmk-dfu
#   ATmega32A      bootloadHID
#   ATmega328P     USBasp
#   STM32 series   stm32duino
BOOTLOADER = stm32duino

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = lite      # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes        # Mouse keys
EXTRAKEY_ENABLE = yes        # Audio control and System control
CONSOLE_ENABLE = no          # Console for debug
COMMAND_ENABLE = no          # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no        # Breathing sleep LED during USB suspend
# If NKRO doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes            # USB Nkey Rollover
BACKLIGHT_ENABLE = yes       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes
RGBLIGHT_DRIVER = WS2812C    #Specify the neopixel LED type 
MIDI_ENABLE = no             # MIDI support
UNICODE_ENABLE = yes         # Unicode
BLUETOOTH_ENABLE = no        # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no            # Audio output on port C6
#Lets you replace the default matrix scanning routine with your own code
CUSTOM_MATRIX = no            
#SRC += matrix.c (for custom scan matrix)
