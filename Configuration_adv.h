#pragma once
#define CONFIGURATION_ADV_H_VERSION 02010206
#define DISABLE_X true
#define DISABLE_Y true
#define DISABLE_Z true
#define INVERT_X_STEP_PIN false
#define INVERT_Y_STEP_PIN false
#define INVERT_Z_STEP_PIN false
#define INVERT_E_STEP_PIN false

#define THERMOCOUPLE_MAX_ERRORS 15

#if ENABLED(THERMAL_PROTECTION_HOTENDS)
  #define THERMAL_PROTECTION_PERIOD 40        // (seconds)
  #define THERMAL_PROTECTION_HYSTERESIS 4     // (°C)

  #define WATCH_TEMP_PERIOD  40               // (seconds)
  #define WATCH_TEMP_INCREASE 2               // (°C)
#endif

#if ANY(THERMAL_PROTECTION_HOTENDS, THERMAL_PROTECTION_BED, THERMAL_PROTECTION_CHAMBER, THERMAL_PROTECTION_COOLER)
 
#endif

#define AUTOTEMP
#if ENABLED(AUTOTEMP)
  #define AUTOTEMP_OLDWEIGHT    0.98  
#endif

#define TEMP_SENSOR_AD595_OFFSET  0.0
#define TEMP_SENSOR_AD595_GAIN    1.0
#define TEMP_SENSOR_AD8495_OFFSET 0.0
#define TEMP_SENSOR_AD8495_GAIN   1.0

#define E0_AUTO_FAN_PIN -1

#define EXTRUDER_AUTO_FAN_TEMPERATURE 50
#define EXTRUDER_AUTO_FAN_SPEED 255   
 
#define FANMUX0_PIN -1
#define FANMUX1_PIN -1
#define FANMUX2_PIN -1

#define HOMING_BUMP_MM      { 5, 5, 2 }      
#define HOMING_BUMP_DIVISOR { 2, 2, 4 }       

#define AXIS_RELATIVE_MODES { false, false, false, false }

#define DEFAULT_STEPPER_TIMEOUT_SEC 120
#define DISABLE_IDLE_X
#define DISABLE_IDLE_Y
#define DISABLE_IDLE_Z    
#define DISABLE_IDLE_E    

#define DEFAULT_MINIMUMFEEDRATE       0.0     // (mm/s) Minimum feedrate. Set with M205 S.
#define DEFAULT_MINTRAVELFEEDRATE     0.0     // (mm/s) Minimum travel feedrate. Set with M205 T.

#define DEFAULT_MINSEGMENTTIME        20000   // (µs) Set with M205 B.

#define SLOWDOWN
#if ENABLED(SLOWDOWN)
  #define SLOWDOWN_DIVISOR 2
#endif

#define MINIMUM_PLANNER_SPEED 0.05 // (mm/s)

#define MICROSTEP_MODES { 16, 16, 16, 16, 16, 16 } // [1,2,4,8,16]

#if HAS_MANUAL_MOVE_MENU
  #define MANUAL_FEEDRATE { 50*60, 50*60, 4*60, 2*60 } // (mm/min) Feedrates for manual moves along X, Y, Z, E from panel
  #define FINE_MANUAL_MOVE 0.025    // (mm) Smallest manual move (< 0.1mm) applying to Z on most machines
  #if IS_ULTIPANEL
    #define MANUAL_E_MOVES_RELATIVE // Display extruder move distance rather than "position"
    #define ULTIPANEL_FEEDMULTIPLY  
  #endif
#endif
#define ENCODER_RATE_MULTIPLIER
#if ENABLED(ENCODER_RATE_MULTIPLIER)
  #define ENCODER_10X_STEPS_PER_SEC   30  // (steps/s) Encoder rate for 10x speed
  #define ENCODER_100X_STEPS_PER_SEC  80  // (steps/s) Encoder rate for 100x speed
#endif
  #define LCD_INFO_MENU
  #if ENABLED(LCD_INFO_MENU)
  #endif
#if ANY(HAS_DISPLAY, DWIN_LCD_PROUI, DWIN_CREALITY_LCD_JYERSUI)
  #define SOUND_ON_DEFAULT    
#endif
#if EITHER(HAS_DISPLAY, DWIN_LCD_PROUI)
  #define LCD_TIMEOUT_TO_STATUS 30000     // (ms)
  #if ENABLED(SHOW_BOOTSCREEN)
    #define BOOTSCREEN_TIMEOUT 1000      // (ms) Total Duration to display the boot screen(s)
    #if EITHER(HAS_MARLINUI_U8GLIB, TFT_COLOR_UI)
      #define BOOT_MARLIN_LOGO_SMALL      // Show a smaller Marlin logo on the Boot Screen (saving lots of flash)
    #endif
  #endif
  #define STATUS_MESSAGE_SCROLLING
#endif 
#if HAS_DISPLAY && EITHER(SDSUPPORT, SET_PROGRESS_MANUALLY)
  #define SHOW_PROGRESS_PERCENT          
  #define SHOW_ELAPSED_TIME               
#endif
#if ENABLED(SDSUPPORT)
  #define SDCARD_READONLY                   
  #define SD_PROCEDURE_DEPTH 1             
  #define SD_FINISHED_STEPPERRELEASE true   
  #define SD_FINISHED_RELEASECOMMAND "M84"  
  #define SDCARD_RATHERRECENTFIRST
  #define SD_MENU_CONFIRM_START       
  #define EVENT_GCODE_SD_ABORT "G28XY"      
  #define SCROLL_LONG_FILENAMES          
#endif 
#if HAS_MARLINUI_U8GLIB
  #define STATUS_HOTEND_INVERTED      
  #define STATUS_HOTEND_ANIM           
#endif 
#if HAS_MARLINUI_U8GLIB || IS_DWIN_MARLINUI
  #define MENU_HOLLOW_FRAME         
#endif
#if ANY(DOGLCD, TFT_COLOR_UI, TOUCH_UI_FTDI_EVE, IS_DWIN_MARLINUI)
  #ifdef LCD_LANGUAGE_2
  #endif
#endif
#define USE_WATCHDOG
#if ENABLED(USE_WATCHDOG)
#endif
#define ARC_SUPPORT                   
#if ENABLED(ARC_SUPPORT)
  #define MIN_ARC_SEGMENT_MM      0.1 
  #define MAX_ARC_SEGMENT_MM      1.0 
  #define MIN_CIRCLE_SEGMENTS    72   
  #define N_ARC_CORRECTION       25   
#endif
#if EITHER(ARC_SUPPORT, BEZIER_CURVE_SUPPORT)
#endif
#define MIN_STEPS_PER_SEGMENT 6
#if BOTH(SDSUPPORT, DIRECT_STEPPING)
  #define BLOCK_BUFFER_SIZE  8
#elif ENABLED(SDSUPPORT)
  #define BLOCK_BUFFER_SIZE 16
#else
  #define BLOCK_BUFFER_SIZE 16
#endif
#define MAX_CMD_SIZE 96
#define BUFSIZE 4
#define TX_BUFFER_SIZE 0
#define SERIAL_OVERRUN_PROTECTION
#define PROPORTIONAL_FONT_RATIO 1.0
#define AUTO_REPORT_TEMPERATURES
#define EXTENDED_CAPABILITIES_REPORT
#if ENABLED(EXTENDED_CAPABILITIES_REPORT)
#endif

#define FASTER_GCODE_PARSER

#if ENABLED(FASTER_GCODE_PARSER)
#endif
