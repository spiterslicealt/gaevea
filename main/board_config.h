#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#include "sdkconfig.h"

/*
 * NM-CYD-C5
 * ESP32-C5-WROOM-1
 *
 * Screen removed.
 * J4CK3D is operated entirely through its WebUI.
 */

/* No J4CK3D physical button required */
#define GPIO_BUTTON                  -1

/*
 * NM-CYD-C5 exposed GPS UART:
 * RX = GPIO4
 * TX = GPIO5
 *
 * These are only informational for J4CK3D because the
 * current application does not initialize the UART.
 */
#define GPIO_UART_TX                 5
#define GPIO_UART_RX                 4

/* NM-CYD-C5 onboard antenna */
#define USE_EXTERNAL_ANTENNA         0

/* Board identification */
#define BOARD_ESP32_C5_DEVKITC       0
#define BOARD_ESP32_C5_GENERIC       1

#define BOARD_NAME                   "NM-CYD-C5"

/* AP channel */
#define DEFAULT_WIFI_CHANNEL         1

/* UK regulatory domain */
#define WIFI_COUNTRY_POLICY          WIFI_COUNTRY_POLICY_AUTO
#define WIFI_COUNTRY_CODE            "GB"

#endif
