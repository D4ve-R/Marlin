/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

#define STATUS_SCREENWIDTH 128
#define STATUS_SCREEN_HOTEND_TEXT_X(E) (76 + (E) * 20)//(38 + (E) * 20)
#define STATUS_SCREEN_BED_TEXT_X (HOTENDS > 1 ? 81 : 73)
#define STATUS_SCREEN_FAN_TEXT_X 103

//============================================

#if HOTENDS < 2



  const unsigned char status_screen0_bmp[] PROGMEM = {
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00000000,B00000000,B00000000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00111111,B11111111,B11110000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00111000,B00000000,B01110000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00110000,B11111100,B00110000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00100000,B11111100,B00010000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00100000,B01111000,B00010000,
    0X1D,0XC0,0X00,0X00,0X00,0X07,0XC0,0X00,0X00,0X00,0X00,0X00,B00000000,B00100000,B00110000,B00010000,
    0X0D,0X80,0X00,0X00,0X00,0X08,0X80,0X00,0X00,0X00,0X7F,0X80,B00000000,B00101100,B00000000,B11010000,
    0X0D,0X80,0X00,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0XFF,0XC0,B00000000,B00101110,B00110001,B11010000,
    0X0D,0X87,0X87,0XC7,0X00,0X01,0X07,0X9D,0XC3,0X00,0XFF,0XC0,B00000000,B00101111,B01111011,B11010000,
    0X0D,0X88,0X48,0X88,0X80,0X01,0X08,0X46,0X44,0X80,0XFF,0XC0,B00000000,B00101111,B01111011,B11010000,
    0X0A,0X88,0X48,0X81,0X80,0X02,0X08,0X44,0X08,0X40,0X7F,0X80,B00000000,B00101110,B00110001,B11010000,
    0X0A,0X8F,0XC7,0X06,0X80,0X02,0X0F,0XC4,0X08,0X40,0X7F,0X80,B00000000,B00101100,B00000000,B11010000,
    0X0A,0X88,0X08,0X08,0X80,0X04,0X08,0X04,0X08,0X40,0XFF,0XC0,B00000000,B00100000,B00110000,B00010000,
    0X0A,0X88,0X47,0X89,0X80,0X04,0X48,0X44,0X04,0X80,0XFF,0XC0,B00000000,B00100000,B01111000,B00010000,
    0X1A,0XC7,0X88,0X46,0XC0,0X0F,0XC7,0X9F,0X03,0X00,0XFF,0XC0,B00000000,B00100000,B11111100,B00010000,
    0X00,0X00,0X08,0X40,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0X00,B00000000,B00110000,B11111100,B00110000,
    0X00,0X00,0X07,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X1E,0X00,B00000000,B00111000,B00000000,B01110000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0C,0X00,B00000000,B00111111,B11111111,B11110000
    
  };
  const unsigned char status_screen1_bmp[] PROGMEM = {
  	0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00000000,B00000000,B00000000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00111111,B11111111,B11110000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00111000,B00000000,B01110000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00110011,B10000111,B00110000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00100111,B10000111,B10010000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,B00000000,B00101111,B10000111,B11010000,
    0X1D,0XC0,0X00,0X00,0X00,0X07,0XC0,0X00,0X00,0X00,0X00,0X00, B00000000,B00101111,B10000111,B11010000,
    0X0D,0X80,0X00,0X00,0X00,0X08,0X80,0X00,0X00,0X00,0X7F,0X80,B00000000,B00101111,B00000011,B11010000,
    0X0D,0X80,0X00,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0XFF,0XC0,B00000000,B00100000,B00110000,B00010000,
    0X0D,0X87,0X87,0XC7,0X00,0X01,0X07,0X9D,0XC3,0X00,0XFF,0XC0,B00000000,B00100000,B01111000,B00010000,
    0X0D,0X88,0X48,0X88,0X80,0X01,0X08,0X46,0X44,0X80,0XFF,0XC0,B00000000,B00100000,B01111000,B00010000,
    0X0A,0X88,0X48,0X81,0X80,0X02,0X08,0X44,0X08,0X40,0X7F,0X80,B00000000,B00100000,B00110000,B00010000,
    0X0A,0X8F,0XC7,0X06,0X80,0X02,0X0F,0XC4,0X08,0X40,0X7F,0X80,B00000000,B00101111,B00000011,B11010000,
    0X0A,0X88,0X08,0X08,0X80,0X04,0X08,0X04,0X08,0X40,0XFF,0XC0,B00000000,B00101111,B10000111,B11010000,
    0X0A,0X88,0X47,0X89,0X80,0X04,0X48,0X44,0X04,0X80,0XFF,0XC0,B00000000,B00101111,B10000111,B11010000,
    0X1A,0XC7,0X88,0X46,0XC0,0X0F,0XC7,0X9F,0X03,0X00,0XFF,0XC0,B00000000,B00100111,B10000111,B10010000,
    0X00,0X00,0X08,0X40,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0X00,B00000000,B00110011,B10000111,B00110000,
    0X00,0X00,0X07,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X1E,0X00,B00000000,B00111000,B00000000,B01110000,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0C,0X00,B00000000,B00111111,B11111111,B11110000,
  };


  /*

  const unsigned char status_screen0_bmp[] PROGMEM = {
    0X00,0X00,0X00,0X00,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11110000,
    0X00,0X00,0X00,0X00,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    0X00,0X70,0X70,0XFF,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110000,B11111100,B00110000,
    0X00,0X30,0XE1,0X83,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B11111100,B00010000,
    0X00,0X30,0XE1,0X02,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B01111000,B00010000,
    0X00,0X38,0XE1,0X04,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00110000,B00010000,
    0X00,0X38,0XE0,0X04,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101100,B00000000,B11010000,
    0X00,0X39,0X60,0X04,0X00,B00011111,B11100000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00101110,B00110001,B11010000,
    0X00,0X39,0X60,0X08,0X00,B00111111,B11110000,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00101111,B01111011,B11010000,
    0X00,0X29,0X60,0X08,0X00,B00111111,B11110000,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00101111,B01111011,B11010000,
    0X00,0X2D,0X60,0X10,0X00,B00111111,B11110000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00101110,B00110001,B11010000,
    0X00,0X2D,0X60,0X10,0X00,B00011111,B11100000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00101100,B00000000,B11010000,
    0X00,0X2E,0X60,0X10,0X00,B00011111,B11100000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00100000,B00110000,B00010000,
    0X00,0X26,0X60,0X30,0X00,B00111111,B11110000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00100000,B01111000,B00010000,
    0X00,0X26,0X60,0X30,0X00,B00111111,B11110000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00100000,B11111100,B00010000,
    0X00,0X26,0X60,0X30,0X00,B00111111,B11110000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00110000,B11111100,B00110000,
    0X00,0X24,0X60,0X30,0X00,B00001111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    0X00,0X70,0XF0,0X30,0X00,B00000111,B10000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00111111,B11111111,B11110000,
    0X00,0X00,0X00,0X00,0X00,B00000011,B00000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000
  };
  const unsigned char status_screen1_bmp[] PROGMEM = {
    0X00,0X00,0X00,0X00,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11110000,
    0X00,0X00,0X00,0X00,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    0X00,0X70,0X70,0XFF,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110011,B10000111,B00110000,
    0X00,0X30,0XE1,0X83,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100111,B10000111,B10010000,
    0X00,0X30,0XE1,0X02,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B10000111,B11010000,
    0X00,0X38,0XE1,0X04,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B10000111,B11010000,
    0X00,0X38,0XE0,0X04,0X00,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B00000011,B11010000,
    0X00,0X39,0X60,0X04,0X00,B00011111,B11100000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00100000,B00110000,B00010000,
    0X00,0X39,0X60,0X08,0X00,B00111111,B11110000,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00100000,B01111000,B00010000,
    0X00,0X29,0X60,0X08,0X00,B00111111,B11110000,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00100000,B01111000,B00010000,
    0X00,0X2D,0X60,0X10,0X00,B00111111,B11110000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00100000,B00110000,B00010000,
    0X00,0X2D,0X60,0X10,0X00,B00011111,B11100000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00101111,B00000011,B11010000,
    0X00,0X2E,0X60,0X10,0X00,B00011111,B11100000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00101111,B10000111,B11010000,
    0X00,0X26,0X60,0X30,0X00,B00111111,B11110000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00101111,B10000111,B11010000,
    0X00,0X26,0X60,0X30,0X00,B00111111,B11110000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00100111,B10000111,B10010000,
    0X00,0X26,0X60,0X30,0X00,B00111111,B11110000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00110011,B10000111,B00110000,
    0X00,0X24,0X60,0X30,0X00,B00001111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    0X00,0X70,0XF0,0X30,0X00,B00000111,B10000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00111111,B11111111,B11110000,
     0X00,0X00,0X00,0X00,0X00,B00000011,B00000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000
  };

  */

#else // HOTENDS >= 2

  const unsigned char status_screen0_bmp[] PROGMEM = {
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110000,B11111100,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B11111100,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B01111000,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100000,B00110000,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101100,B00000000,B11010000,
    B11111000,B00000001,B10000000,B00000000,B00001100,B00011111,B11100000,B00000001,B11111110,B00000000,B00001000,B00100000,B10000000,B00101110,B00110001,B11010000,
    B01001000,B00000000,B10000000,B00000000,B00010010,B00111110,B11110000,B00000011,B11001111,B00000000,B00000100,B00010000,B01000000,B00101111,B01111011,B11010000,
    B01000011,B11000011,B10001100,B11010000,B00000010,B00111100,B11110000,B00000011,B10110111,B00000000,B00000100,B00010000,B01000000,B00101111,B01111011,B11010000,
    B01110001,B00100100,B10010010,B01100111,B11001100,B00111010,B11110000,B00000011,B11110111,B00000000,B00001000,B00100000,B10000000,B00101110,B00110001,B11010000,
    B01000001,B00100100,B10011110,B01000000,B00000010,B00011110,B11100000,B00000001,B11101110,B00000000,B00010000,B01000001,B00000000,B00101100,B00000000,B11010000,
    B01001001,B00100100,B10010000,B01000000,B00010010,B00011110,B11100000,B00000001,B11011110,B00000000,B00100000,B10000010,B00000000,B00100000,B00110000,B00010000,
    B11111011,B10110011,B11001110,B11100000,B00001100,B00111110,B11110000,B00000011,B10111111,B00000000,B00100000,B10000010,B00000000,B00100000,B01111000,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111110,B11110000,B00000011,B10000111,B00000000,B00010000,B01000001,B00000000,B00100000,B11111100,B00010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11110000,B00000011,B11111111,B00000000,B00001000,B00100000,B10000000,B00110000,B11111100,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11000000,B00000000,B11111100,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B00000000,B01111000,B00000000,B11111111,B11111111,B11000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B00000000,B00000000,B00110000,B00000000,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000
  };
  const unsigned char status_screen1_bmp[] PROGMEM = {
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00110011,B10000111,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00100111,B10000111,B10010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B10000111,B11010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B10000111,B11010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00101111,B00000011,B11010000,
    B11111000,B00000001,B10000000,B00000000,B00001100,B00011111,B11100000,B00000001,B11111110,B00000000,B00001000,B00100000,B10000000,B00100000,B00110000,B00010000,
    B01001000,B00000000,B10000000,B00000000,B00010010,B00111110,B11110000,B00000011,B11001111,B00000000,B00000100,B00010000,B01000000,B00100000,B01111000,B00010000,
    B01000011,B11000011,B10001100,B11010000,B00000010,B00111100,B11110000,B00000011,B10110111,B00000000,B00000100,B00010000,B01000000,B00100000,B01111000,B00010000,
    B01110001,B00100100,B10010010,B01100111,B11001100,B00111010,B11110000,B00000011,B11110111,B00000000,B00001000,B00100000,B10000000,B00100000,B00110000,B00010000,
    B01000001,B00100100,B10011110,B01000000,B00000010,B00011110,B11100000,B00000001,B11101110,B00000000,B00010000,B01000001,B00000000,B00101111,B00000011,B11010000,
    B01001001,B00100100,B10010000,B01000000,B00010010,B00011110,B11100000,B00000001,B11011110,B00000000,B00100000,B10000010,B00000000,B00101111,B10000111,B11010000,
    B11111011,B10110011,B11001110,B11100000,B00001100,B00111110,B11110000,B00000011,B10111111,B00000000,B00100000,B10000010,B00000000,B00101111,B10000111,B11010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111110,B11110000,B00000011,B10000111,B00000000,B00010000,B01000001,B00000000,B00100111,B10000111,B10010000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11110000,B00000011,B11111111,B00000000,B00001000,B00100000,B10000000,B00110011,B10000111,B00110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11000000,B00000000,B11111100,B00000000,B00000000,B00000000,B00000000,B00111000,B00000000,B01110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B10000000,B00000000,B01111000,B00000000,B11111111,B11111111,B11000000,B00111111,B11111111,B11110000,
    B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B00000000,B00000000,B00110000,B00000000,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000
  };

#endif // HOTENDS >= 2