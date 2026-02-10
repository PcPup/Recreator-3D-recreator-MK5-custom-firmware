/**
 * MARLIN 2.1.2.7 for Recreator MK5 with Creality 4.2.2 board
 * Created by PcPup on 2026-02-09
 */
#pragma once
#define CONFIGURATION_H_VERSION 02010206
//For -Recreator MK5 -Creality 4.2.2
#define STRING_CONFIG_H_AUTHOR "(PcPup -Recreator MK5 -Creality 4.2.2)" 
#define SHOW_BOOTSCREEN
#define SHOW_CUSTOM_BOOTSCREEN
#define CUSTOM_STATUS_SCREEN_IMAGE

#ifndef MOTHERBOARD
  #define MOTHERBOARD BOARD_CREALITY_V4
#endif
#define SERIAL_PORT 1
#define BAUDRATE 115200
#define CUSTOM_MACHINE_NAME "Recreator MK5"

#define DISABLE_X true
#define DISABLE_Y true
#define DISABLE_Z true

#define X_DRIVER_TYPE  A4988
#define Y_DRIVER_TYPE  A4988
#define Z_DRIVER_TYPE  A4988
#define E0_DRIVER_TYPE A4988

#define EXTRUDERS 1

#define X_MIN_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.
#define Y_MIN_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.
#define Z_MIN_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.
#define X_MAX_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.
#define Y_MAX_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.
#define Z_MAX_ENDSTOP_INVERTING false // Set to true to invert the logic of the endstop.

#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75
#define TEMP_SENSOR_0 1
#if HAS_E_TEMP_SENSOR
  #define TEMP_RESIDENCY_TIME         10  
  #define TEMP_WINDOW                  1  
  #define TEMP_HYSTERESIS              3  
#endif

#define HEATER_0_MINTEMP   5
#define HEATER_0_MAXTEMP 275
#define HOTEND_OVERSHOOT 15   

#define PIDTEMP           
#define PID_MAX  255      
#define PID_K1     0.95 

#if ENABLED(PIDTEMP) 
  #define DEFAULT_KP  21.73
  #define DEFAULT_KI   1.54
  #define DEFAULT_KD  76.55
#endif

#if ANY(PIDTEMP)
  #define PID_FUNCTIONAL_RANGE 10                     
  #define PID_EDIT_MENU           
  #define PID_AUTOTUNE_MENU   
#endif    

#define PREVENT_COLD_EXTRUSION
#define EXTRUDE_MINTEMP 0
#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MAXLENGTH 200

#define THERMAL_PROTECTION_HOTENDS

#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG

#define DEFAULT_AXIS_STEPS_PER_UNIT   { 0,0,0,93 }
#define DEFAULT_MAX_FEEDRATE          { 0,0,0,25 }
#define DEFAULT_MAX_ACCELERATION      { 0,0,0,5000 }

#define DEFAULT_ACCELERATION           500    
#define DEFAULT_RETRACT_ACCELERATION   500   
#define DEFAULT_TRAVEL_ACCELERATION    500    
#define DEFAULT_EJERK    5.0  

#if DISABLED(CLASSIC_JERK)
  #define JUNCTION_DEVIATION_MM 0.08  
  #define JD_HANDLE_SMALL_SEGMENTS                                   
#endif

#define S_CURVE_ACCELERATION

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0 

#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true

#define INVERT_E0_DIR true

#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1

#define X_BED_SIZE 0
#define Y_BED_SIZE 0

#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS 0
#define Y_MAX_POS 0
#define Z_MAX_POS 0
#define MIN_SOFTWARE_ENDSTOPS
#if ENABLED(MIN_SOFTWARE_ENDSTOPS)
  #define MIN_SOFTWARE_ENDSTOP_X
  #define MIN_SOFTWARE_ENDSTOP_Y
  #define MIN_SOFTWARE_ENDSTOP_Z
#endif

// Max software endstops constrain movement within maximum coordinate bounds
#define MAX_SOFTWARE_ENDSTOPS
#if ENABLED(MAX_SOFTWARE_ENDSTOPS)
  #define MAX_SOFTWARE_ENDSTOP_X
  #define MAX_SOFTWARE_ENDSTOP_Y
  #define MAX_SOFTWARE_ENDSTOP_Z
#endif

#define HOMING_FEEDRATE_MM_M { (20*60), (20*60), (4*60) }

#define VALIDATE_HOMING_ENDSTOPS

#define EEPROM_SETTINGS       // Persistent storage with M500 and M501
//#define DISABLE_M503        // Saves ~2700 bytes of flash. Disable for release!
#define EEPROM_CHITCHAT       // Give feedback on EEPROM commands. Disable to save flash.
#define EEPROM_BOOT_SILENT    // Keep M503 quiet and only give errors during first load
#if ENABLED(EEPROM_SETTINGS)
  //#define EEPROM_AUTO_INIT  // Init EEPROM automatically on any errors.
  //#define EEPROM_INIT_NOW   // Init EEPROM on first boot after a new build.
#endif

#define HOST_KEEPALIVE_FEATURE        // Disable this if your host doesn't like keepalive messages
#define DEFAULT_KEEPALIVE_INTERVAL 2  // Number of seconds between "busy" messages. Set with M113.
#define BUSY_WHILE_HEATING            // Some hosts require "busy" messages even during heating

#define PREHEAT_1_LABEL       "PET1"
#define PREHEAT_1_TEMP_HOTEND 210
#define PREHEAT_1_FAN_SPEED   0

#define PREHEAT_2_LABEL       "CLEAN"
#define PREHEAT_2_TEMP_HOTEND 250
#define PREHEAT_2_FAN_SPEED   0

#define PRINTJOB_TIMER_AUTOSTART

#define LCD_LANGUAGE en
#define DISPLAY_CHARSET_HD44780 JAPANESE

#define LCD_INFO_SCREEN_STYLE 0

#define SDSUPPORT

#if ENABLED(ENCODER_NOISE_FILTER)
  #define ENCODER_SAMPLES 10
#endif

#define SPEAKER

#define CR10_STOCKDISPLAY
#if ENABLED(CR10_STOCKDISPLAY)
  #define RET6_12864_LCD  // Specific to the SoC (can either be RET / VET)
#endif
#define FAN_SOFT_PWM
#define SOFT_PWM_SCALE 0
#define SERVO_DELAY { 300 }
