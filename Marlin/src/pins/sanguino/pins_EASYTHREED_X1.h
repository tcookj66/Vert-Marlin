/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Easythreed X1 aka Sondori Pico aka LABISTS X1 pin assignments
 */

#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME "Easythreed X1"
#endif

#define IS_MELZI 1

#define BUTTON1 27  // start
#define BUTTON2 28  // plus
#define BUTTON3 29  // minus
#define BUTTON4 30  // home

#define LED1 17
#define LED2 16
#define LED3 11
#define LED4 10

/*
#define START_PIN 27
#define LED_START 10

#define PLUS_PIN 28
#define LED_PLUS 11

#define MINUS_PIN 29
#define LED_MINUS 16

#define HOME_PIN 30
#define LED_HOME 17
*/

#define X_STEP_PIN 15
#define X_DIR_PIN 21
#define X_STOP_PIN 18

#define Y_STEP_PIN 22
#define Y_DIR_PIN 23
#define Y_STOP_PIN 19

#define Z_STEP_PIN 3
#define Z_DIR_PIN 2
#define Z_STOP_PIN 20

#define E0_STEP_PIN 1
#define E0_DIR_PIN 0

#define FAN_PIN 4

#define HEATER_0_PIN 13

// #define HEATER_BED_PIN 12
// #define TEMP_BED_PIN 6
#define X_ENABLE_PIN 14
#define Y_ENABLE_PIN 14
#define Z_ENABLE_PIN 26
#define E0_ENABLE_PIN 14

#define TEMP_0_PIN 7
#define SDSS 31
