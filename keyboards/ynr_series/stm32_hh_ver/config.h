#pragma once

#include "config_common.h"

// USB device descriptor parameter
#define VENDOR_ID    0xABCD      //vid 
#define PRODUCT_ID   0x6969      //pid    
#define DEVICE_VER   0x0001    	 //Revision or Device Version
#define MANUFACTURER   Prozekt   //It is what it says it is.
#define PRODUCT        YNR_Board // Seriously?

//key matrix
#define MATRIX_ROWS 6
#define MATRIX_COLS 19

#define MATRIX_ROW_PINS  {B3, B5, B6, B7, B8, B9}      //Mention the pins you used of the MCU for rows
#define MATRIX_COL_PINS  {B11, B10, B1, B0, A7, A6, A5, A4, A3, A2, A1, A0, C15, C14, C13, A11, A12, A15, B4}      //Mention the pins you used of the MCU for cols
//#define MATRIX_IO_DELAY {}      //Delay unit = microseconds; delay between changing matrix pin state and reading values
#define UNUSED_PINS {A10, A9, A8, B14, B13, B12}            //If you have unsed pins of the MCU
//#define MATRIX_HAS_GHOST        //Whoa... key Ghosting in this day and age?
#define DIODE_DIRECTION COL2ROW   //Diode direction. Check where the black mark/any mark of a diode is facing
//#define DIRECT_PINS { { rows }, { cols } }    //A matrix where 1 switch is assigned to on pin of MCU
#define DEBOUNCE 5                 		 //Mechanical bounce compensator. 

//Audio
//#define AUDIO_VOICES
//#define C4_AUDIO
//#define C5_AUDIO
//#define C6_AUDIO
//#define B5_AUDIO
//#define B6_AUDIO
//#define B7_AUDIO

//Backlighting
#define BACKLIGHT_PIN           		 //Pin of MCU assigned to backlight
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 10        		 //Backlight Lvls
#define BACKLIGHT_BREATHING        		 //Backlight breathing. Want some more words to define? Just define and it works no values to be assigned
#define BREATHING_PERIOD 2        		 //Unit = seconds; 1 breath length
#endif


//Misc.                                    	  *E.g. - *without debounce* If you press A in notepad, expecting a single A but instead get mutilple As. Like - AAAAAAA */
#define LOCKING_SUPPORT_ENABLE    		 //Mechanical locking support. Not needed if you use the locking keymaps.
#define LOCKING_RESYNC_ENABLE      		 //Tries to keep switch state consistent with keyboard LED state
//#define IS_COMMAND() (get_mods() == MOD_MASK_SHIFT)           //key combination that allows the use of magic commands (useful for debugging)
//#define FORCE_NKRO           				//Forces NKRO on during keyboard startup regardless of EEPROM setting

//Power and polling
#define USB_MAX_POWER_CONSUMPTION 500     //Sets max power to the board over USB; Unit = mA(milliAmps)
#define USB_POLLING_INTERVAL_MS 10        //Sets the USB polling rate; Unit = ms(milliSecond)
//#define USB_SUSPEND_WAKEUP_DELAY 200      //Number of milliseconde to pause after sending a wakeup packet

//RGB
#define RGB_DI_PIN  B15          				//MCU pin to which Neopixel RGB DI(data in) pin is connected
#ifdef RGB_DI_PIN              				//if RGB_DI_PIN is defined then the below happend till the command ends
#define RGBLIGHT_ANIMATIONS    				//Enables RGB animations; No value needed
//#define RGBLIGHT_LAYERS      				//Define lighting layers that can be toggled on or off
//#define RGBLIGHT_MAX_LAYERS   			//Layers for RGB; Max = 32 (increases firmeware size); default = 8
//#define RGBLIGHT_LAYER_BLINK   			//Adds ability to blink a lighting layer; Units = ms
//#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF    //Lighting layers will be shown even if RGB Light is off
#define RGBLED_NUM 107     						 //Number of LEDs
//#define RGBLIGHT_SPLIT   						 //For split keyboards
//#define RGBLED_SPLIT { Lt Value, Rt Value }    //LEDs connected to each half
#define RGBLIGHT_HUE_STEP 5   				     //Units to step when in/decreasing hue
#define RGBLIGHT_SAT_STEP 15   					 //Units to step when in/decreasing saturation
#define RGBLIGHT_VAL_STEP 12   					 //Units to step when in/decreasing value
#endif                         					 //End of ifdef
//#define RGBW   								 //Enables RGBW LED support

//Interface
//#define USE_I2C   							 //For using I2C instead of Serial
//#define F_SCL 100000L        					 //Sets the I2C clock rate speed for keyboards using I2C. The default is 400000L, except for keyboards using split_common, where the default is 100000L