#pragma once

//#define USE_MATRIX_I2C


/* Select hand configuration */
#define EE_HANDS
//#define USE_SERIAL_PD2
//#define USE_MATRIX_I2C

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

/* ws2812 RGB LED */
#define RGB_DI_PIN D3


#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_SPLIT
    #define RGBLED_NUM 72  // Number of LEDs
    #define RGBLED_SPLIT { 36, 36 } // haven't figured out how to use this yet 
    //#define DRIVER_LED_TOTAL 72

    #define RGBLIGHT_LIMIT_VAL 150
    // High value can cause flickering when using TRRS.
    #define RGBLIGHT_DEFAULT_VAL 90
    #define RGBLIGHT_EFFECT_BREATHE_MAX 150
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 10
    #define RGBLIGHT_VAL_STEP 10

    // When this is not defined, you have define all avaiable animations below.
    //#define RGBLIGHT_ANIMATIONS
    
    //#define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_BREATHING
    //#define RGBLIGHT_EFFECT_CHRISTMAS
    //#define RGBLIGHT_EFFECT_KNIGHT
    //#define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    //#define RGBLIGHT_EFFECT_RGB_TEST
    //#define RGBLIGHT_EFFECT_SNAKE
    //#define RGBLIGHT_EFFECT_STATIC_GRADIENT
    //#define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_EFFECT_STATIC_LIGHT
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL
#endif


#ifdef ENCODER_ENABLE
    #define ENCODER_DIRECTION_FLIP
#endif