#ifndef _CONFIG_H_
#define _CONFIG_H_

//#define PCB_REV1
#define PCB_REV2

#define USE_WATCHDOG
#define CONFIG_GEOFENCE

#ifdef PCB_REV2
//    #define CONFIG_HAVE_FM24V10
    #define CONFIG_HAVE_FM24CL64B
#endif

#ifdef CONFIG_HAVE_FM24V10
    #define FM24_HAS_SLEEP_MODE
#endif


//#define CONFIG_RTC_DST
//#define CONFIG_RTC_DST_ZONE 4
//
// short timespan position averaging doesn't really improve 
// the location precision when the device can only see the sky partially
//#define CONFIG_POSITION_AVERAGING 


// debug flags, keep all of them disabled for a RELEASE version

//#define CALIBRATION
//#define DEBUG_GPS
#define DEBUG_GPRS
//#define CONFIG_DEBUG

#endif
