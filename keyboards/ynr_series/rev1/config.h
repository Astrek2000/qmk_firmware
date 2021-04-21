#pragma once

#include "config_common.h"

// USB device descriptor parameter
#define VENDOR_ID    0xABCD      //vid 
#define PRODUCT_ID   0x6969      //pid    
#define DEVICE_VER   0x0002    	 //Revision or Device Version
#define MANUFACTURER   Prozekt   //It is what it says it is.
#define PRODUCT        YNR_Board // Seriously?

//key matrix
#define MATRIX_ROWS 6
#define MATRIX_COLS 19

#define MATRIX_ROW_PINS  {PB_11, PB_10, PB_1, PB_0, PA_7, PA_6}      //Mention the pins you used of the MCU for rows
#define MATRIX_COL_PINS  {PB_12, PB_13, PB_14, PB_15, PA_8, PA_9, PA_10, PA_11, PA_12, PA_15, PB_3, PB_4, PB_5, PB_6, PB_7, PB_8, PB_9, PC_14, PC_15}      //Mention the pins you used of the MCU for cols
//#define MATRIX_IO_DELAY {}      //Delay unit = microseconds; delay between changing matrix pin state and reading values
#define UNUSED_PINS {PA_5, PA_4, PA_3, PA_2, PA_1, PA_0, PC_13}            //If you have unsed pins of the MCU
//#define MATRIX_HAS_GHOST        //Whoa... key Ghosting in this day and age?
#define DIODE_DIRECTION COL2ROW   //Diode direction. Check where the black mark/any mark of a diode is facing
//#define DIRECT_PINS { { rows }, { cols } }    //A matrix where 1 switch is assigned to on pin of MCU

//Audio
//#define AUDIO_VOICES
//#define C4_AUDIO
//#define C5_AUDIO
//#define C6_AUDIO
//#define B5_AUDIO
//#define B6_AUDIO
//#define B7_AUDIO

//Backlighting
#define BACKLIGHT_PIN              		 //Pin of MCU assigned to backlight
#define BACKLIGHT_LEVELS 10        		 //Backlight Lvls
#define BACKLIGHT_BREATHING        		 //Backlight breathing. Want some more words to define? Just define and it works no values to be assigned
#define BREATHING_PERIOD          		 //Unit = seconds; 1 breath length
#define DEBOUNCE 5                 		 /*Mechanical bounce compensator. 
 
//Misc.                                    	  *E.g. - *without debounce* If you press A in notepad, expecting a single A but instead get mutilple As. Like - AAAAAAA */
#define LOCKING_SUPPORT_ENABLE    		 //Mechanical locking support. Not needed if you use the locking keymaps.
#define LOCKING_RESYNC_ENABLE      		 //Tries to keep switch state consistent with keyboard LED state
//#define IS_COMMAND() (get_mods() == MOD_MASK_SHIFT)           //key combination that allows the use of magic commands (useful for debugging)
//#define FORCE_NKRO           				//Forces NKRO on during keyboard startup regardless of EEPROM setting

//Power and polling
#define USB_MAX_POWER_CONSUMPTION 900     //Sets max power to the board over USB; Unit = mA(milliAmps)
#define USB_POLLING_INTERVAL_MS 10        //Sets the USB polling rate; Unit = ms(milliSecond)
//#define USB_SUSPEND_WAKEUP_DELAY 200      //Number of milliseconde to pause after sending a wakeup packet

//RGB
//#define RGB_DI_PIN             				//MCU pin to which Neopixel RGB DI(data in) pin is connected
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