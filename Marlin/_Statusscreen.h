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

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y            6

#define STATUS_LOGO_WIDTH 32

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000001,B10011110,B01111100,
  B00000000,B00000001,B10011110,B01111100,
  B10000001,B00111101,B11111111,B11111100,
  B11000011,B01111101,B11111111,B11111100,
  B11000011,B11000111,B10011000,B01110000,
  B11011011,B11000111,B10011000,B01110000,
  B11011011,B11000111,B10011000,B01110000,
  B11111111,B01111101,B10011000,B01110000,
  B01111111,B00111101,B10011000,B00110000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B01111000,B00000000,B00000000,B00000000,
  B01111000,B00000000,B00000000,B00000000,
  B11111100,B11100111,B11000111,B10011111,
  B11111101,B11111111,B11111111,B11111111,
  B01100011,B00011110,B00011001,B11111111,
  B01100011,B00011110,B00001111,B11111110,
  B01100011,B00011110,B00000111,B11110011,
  B01100001,B11111110,B00000000,B11111111,
  B01100000,B11100110,B00000000,B11011111,
  B00000000,B00000000,B00011000,B11000000,
  B00000000,B00000000,B00001111,B00000000,
  B00000000,B00000000,B00000111,B00000000
};




//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          73
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          81
#endif
