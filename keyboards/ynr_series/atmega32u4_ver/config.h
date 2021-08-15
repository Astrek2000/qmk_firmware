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

#define MATRIX_ROW_PINS  {F7, F6, F5, F4, F1, F0}      //Mention the pins you used of the MCU for rows
#define MATRIX_COL_PINS  {E6, B2, B1, B0, B3, B7, D0, D1, D2, D3, D5, D4, D6, D7, B4, B5, B6, C6, C7}      //Mention the pins you used of the MCU for cols

#define UNUSED_PINS {}            //If you have unsed pins of the MCU

#define DIODE_DIRECTION COL2ROW   //Diode direction. Check where the black mark/any mark of a diode is facing




//Backlighting
#define BACKLIGHT_PIN           		 //Pin of MCU assigned to backlight
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 10        		 //Backlight Lvls
#define BACKLIGHT_BREATHING        		 //Backlight breathing. Want some more words to define? Just define and it works no values to be assigned
#define BREATHING_PERIOD 2        		 //Unit = seconds; 1 breath length 
#endif


//Misc.                                    	  
#define DEBOUNCE 5                 		 //Mechanical bounce compensator. *E.g. - *without debounce* If you press A in notepad, expecting a single A but instead get mutilple As. Like - AAAAAAA */
#define LOCKING_SUPPORT_ENABLE    		 //Mechanical locking support. Not needed if you use the locking keymaps.
#define LOCKING_RESYNC_ENABLE      		 //Tries to keep switch state consistent with keyboard LED state

#define USB_MAX_POWER_CONSUMPTION 200     //Sets max power to the board over USB; Unit = mA(milliAmps)
#define USB_POLLING_INTERVAL_MS 10        //Sets the USB polling rate; Unit = ms(milliSecond)


//RGB
#define RGB_DI_PIN  E2         				//MCU pin to which Neopixel RGB DI(data in) pin is connected
#ifdef RGB_DI_PIN              				//if RGB_DI_PIN is defined then the below happend till the command ends
#define RGBLIGHT_ANIMATIONS    				//Enables RGB animations; No value needed

#define RGBLED_NUM  107  						 //Number of LEDs
#define RGBLIGHT_HUE_STEP 5   				     //Units to step when in/decreasing hue
#define RGBLIGHT_SAT_STEP 15   					 //Units to step when in/decreasing saturation
#define RGBLIGHT_VAL_STEP 12   					 //Units to step when in/decreasing value
#endif                         					 //End of ifdef
//#define RGBW   								 //Enables RGBW LED support

