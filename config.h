// Copyright 2023 semput (@schweetjp-t)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// #define "config_common.h"

//#define VENDOR_ID   0xFEED
//#define PRODUCT_ID  0x0000
//#define DEVICE_VER  0x0001
//#define MANUFACTURER    semput
//#define PRODUCT     grass

#define MATRIX_ROWS 2
#define MATRIX_COLS 3
//#define MATRIX_ROW_PINS { GP0, GP1 }
//#define MATRIX_COL_PINS { GP2, GP4, GP3 }
//#define DIODE_DIRECTION COL2ROW

//oled
#define HAL_USE_I2C TRUE
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP28
#define I2C1_SCL_PIN GP29
#define OLED_DISPLAY_128X64
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 64

#include_next <mcuconf.h> // for i2c
#undef RP_I2C_USE_I2C0
#define RP_I2C_USE_I2C0 TRUE
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 FALSE
#define OLED_TIMEOUT 300000 // timeout after 300 seconds = 5 mins

//rgb//
#define WS2812_DI_PIN   GP26
#define WS2812_PIO_USE_PIO1
//#define NOP_FUDGE   1
#define RGBLED_NUM 3
#define RGBLIGHT_SLEEP
//#define RGBLIGHT_EFFECT_BREATHING
//#define RGBLIGHT_EFFECT_ALTERNATING
//#define RGBLIGHT_ANIMATIONS
//#define RGBLIGHT_DEFAULT_MODE   RGBLIGHT_MODE_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_LIMIT_VAL 255


