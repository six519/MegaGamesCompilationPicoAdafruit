//     >>>>>  MEGA COMPILATION for ESP8266/ESP8285  GPL v3 <<<<
//                    >>>>>  MEGA Tiny Joypad  <<<<
//                      Programmer: Daniel C 2020
//            Contact EMAIL: electro_l.i.b@tinyjoypad.com
//              official website: www.tinyjoypad.com
//       or  https://sites.google.com/view/arduino-collection

//  MEGA COMPILATION is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.

//  You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <avr/pgmspace.h>

//enum {HAUT_TDDUG=0,DROITE_TDDUG=1,BAS_TDDUG=2,GAUCHE_TDDUG=3};

const int8_t ENEMY_ENABLE_TDDUG[] PROGMEM= {
1,1,0,0,
1,1,1,0,
1,1,1,1,
1,1,1,1,
1,1,1,1,
1,1,1,1,
1,1,1,1,
};

const int8_t ENEMY_TDDUG[] PROGMEM= {
28,16,0,
92,40,1,
92,16,0,
36,48,1,
};

const uint8_t LEVEL_TDDUG[]PROGMEM= {
      //L-0 
  0b11111111,0b11001111,0b11111111,
  0b11111111,0b11001111,0b11111111,
  0b10000011,0b11001111,0b11111111,
  0b10000011,0b11001111,0b11111111,
  0b11111111,0b11001111,0b11111111,
  0b11111111,0b11001111,0b11111111,
  0b11111111,0b00000011,0b11111111,
  0b11111111,0b00000011,0b11001111,
  0b11111111,0b11111111,0b11001111,
  0b11111111,0b11111111,0b11001111,
  0b11111111,0b11111111,0b11001111,
  0b11111111,0b11111111,0b11111111,

    //L-1
  0b11111111,0b11001111,0b11111111,
  0b11111111,0b11001111,0b11111111,
  0b10000011,0b11001110,0b00001111,
  0b10000011,0b11001110,0b00001111,
  0b11111111,0b11001111,0b11111111,
  0b11111111,0b11001111,0b11111111,
  0b11111111,0b00000011,0b11111111,
  0b11111111,0b00000011,0b11001111,
  0b11111111,0b11111111,0b11001111,
  0b11111111,0b11111111,0b11001111,
  0b11111111,0b11111111,0b11001111,
  0b11111111,0b11111111,0b11111111,

  //L-2
 
  0b11111111,0b11001111,0b11111111,
  0b11111111,0b11001111,0b11111111,
  0b11001111,0b11001111,0b10000011,
  0b11001111,0b11001111,0b10000011,
  0b11001111,0b11001111,0b11111111,
  0b11001111,0b11001111,0b11111111,
  0b11001111,0b00000011,0b11111111,
  0b11111111,0b00000011,0b11001111,
  0b11111111,0b11111111,0b11001111,
  0b11111111,0b11111111,0b11001111,
  0b11100000,0b11111111,0b11001111,
  0b11100000,0b11111111,0b11111111,

   //L-3
  
  0b11111111,0b11001111,0b10011111,
  0b11111111,0b11001111,0b10011111,
  0b11001111,0b11001111,0b10000011,
  0b11001111,0b11001111,0b10000011,
  0b11000001,0b11001111,0b11111111,
  0b11000001,0b11001111,0b11111111,
  0b11001111,0b00000000,0b00001111,
  0b11111111,0b00000000,0b00001111,
  0b11111111,0b11111111,0b11001111,
  0b11111111,0b11111111,0b11001111,
  0b11100000,0b11111111,0b11001111,
  0b11100000,0b11111111,0b11111111,
  
   //L-4
  
  0b11111111,0b11001111,0b11111111,
  0b11111111,0b11001111,0b11111111,
  0b10000011,0b11001111,0b10000011,
  0b10000011,0b11001111,0b10000011,
  0b11001111,0b11001111,0b11111111,
  0b11001111,0b11001111,0b11111111,
  0b11001111,0b00000011,0b11111111,
  0b11001111,0b00000011,0b11001111,
  0b11001111,0b00111111,0b11001111,
  0b11001111,0b00111111,0b11001111,
  0b11000000,0b00111111,0b11001111,
  0b11000000,0b00111111,0b11111111,

   //L-5
  
  0b11001111,0b11001111,0b11111111,
  0b11001111,0b11001111,0b11111111,
  0b10000011,0b11001111,0b10000011,
  0b10000011,0b11001111,0b10000011,
  0b11111111,0b11001111,0b11001111,
  0b11111111,0b11001111,0b11001111,
  0b11111100,0b00000011,0b11001111,
  0b11111100,0b00000011,0b11001111,
  0b11111100,0b11111111,0b11001111,
  0b11111100,0b11111111,0b11001111,
  0b11000000,0b11111111,0b11001111,
  0b11000000,0b11111111,0b11111111,

     //L-6
  
  0b11111111,0b11111111,0b11110011,
  0b11111111,0b11111111,0b11110011,
  0b10000000,0b00001111,0b11000011,
  0b10000000,0b00001111,0b11000011,
  0b11111111,0b11001111,0b11111111,
  0b11111111,0b11001111,0b11111111,
  0b00000011,0b00000011,0b11001111,
  0b00000011,0b00000011,0b11001111,
  0b00111111,0b11111111,0b00000011,
  0b00111111,0b11111111,0b00000011,
  0b00000000,0b00111111,0b11001111,
  0b00000000,0b00111111,0b11111111,
 };

const int8_t RnD_TDDUG[]PROGMEM= {-1,-1,1,-1,1,1,-1,-1,-1,1,1,1,-1,1,-1,1};

const uint8_t  TDDUG [] PROGMEM= {
0xFF,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x80,0x01,0x00,
0x01,0x00,0x01,0x00,0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,
0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x80,0x01,0x00,
0x01,0x00,0x01,0x00,0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,
0x01,0x80,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0xFF,0xFF,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,
0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,
0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,
0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,
0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xDB,0xFF,
0xFF,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,
0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,
0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,
0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,
0xA6,0xB6,0x56,0xB6,0xA6,0xB6,0x56,0xB6,0xA6,0xFF,0xFF,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,
0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,
0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,
0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,
0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0x6D,0x55,0x6D,0x2A,0xFF,
0xFF,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,
0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,
0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,
0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,
0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0x8A,0x51,0xFF,0xFF,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,
0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,
0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,
0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,
0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0x82,0x14,0xFF,
0xFF,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,
0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,
0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,
0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,
0x04,0x20,0x04,0x20,0x04,0x20,0x04,0x20,0x04,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
};

const uint8_t  Dig_TDDUG [] PROGMEM= {
  8,1,
0x00,0x1C,0x7E,0x3E,0x3E,0x7E,0x34,0x00,0x00,0x1C,0x3E,0x7E,0x3E,0x7E,0x34,0x00,0x00,0x1C,0x3E,0x7E,
0x3E,0x3E,0x74,0x00,0x00,0x3C,0x7E,0x3E,0x7E,0x7C,0x24,0x00,0x00,0x3C,0x7E,0x3E,0x7E,0x7C,0x28,0x00,
0x00,0x3C,0x7E,0x3E,0x7E,0x7C,0x48,0x00,0x00,0x34,0x7E,0x3E,0x3E,0x7E,0x1C,0x00,0x00,0x34,0x7E,0x3E,
0x7E,0x3E,0x1C,0x00,0x00,0x74,0x3E,0x3E,0x7E,0x3E,0x1C,0x00,0x00,0x3C,0x7E,0x7C,0x7E,0x3E,0x24,0x00,
0x00,0x3C,0x7E,0x7C,0x7E,0x3E,0x14,0x00,0x00,0x3C,0x7E,0x7C,0x7E,0x3E,0x12,0x00,0x00,0x3C,0x7E,0x7E,
0x7E,0x7E,0x3C,0x00,0x00,0x3C,0x78,0x70,0x70,0x78,0x3C,0x00,0x00,0x38,0x70,0x60,0x60,0x70,0x38,0x00,
0x00,0x20,0x40,0x40,0x40,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

const uint8_t  police_TDDUG [] PROGMEM= {
4,1,
0x7C,0x44,0x7C,0x00,0x00,0x7C,0x00,0x00,0x74,0x54,0x5C,0x00,0x44,0x54,0x7C,0x00,0x1C,0x10,0x7C,0x00,
0x5C,0x54,0x74,0x00,0x7C,0x54,0x74,0x00,0x04,0x74,0x0C,0x00,0x7C,0x54,0x7C,0x00,0x5C,0x54,0x7C,0x00,};


const uint8_t  Sprite_ENEMY_TDDUG [] PROGMEM= {
8,1,
0x00,0x18,0x7C,0x74,0x3C,0x74,0x58,0x00,0x00,0x0C,0x7E,0x5A,0x1E,0x7A,0x4C,0x00,0x00,0x18,0x34,0x3C,
0x1C,0x34,0x18,0x00,0x00,0x1C,0x32,0x3E,0x1E,0x32,0x1C,0x00,0x0E,0xFF,0xFD,0xD9,0x1F,0xFD,0xF9,0xCE,
0x00,0x58,0x74,0x3C,0x74,0x7C,0x18,0x00,0x00,0x4C,0x7A,0x1E,0x5A,0x7E,0x0C,0x00,0x00,0x18,0x34,0x3C,
0x1C,0x34,0x18,0x00,0x00,0x1C,0x32,0x3E,0x1E,0x32,0x1C,0x00,0xCE,0xF9,0xFD,0x1F,0xD9,0xFD,0xFF,0x0E,
0x20,0x30,0x3C,0x7C,0x7A,0x7E,0x74,0x24,0x20,0x30,0x3E,0x7E,0x75,0x77,0x72,0x22,0x47,0x29,0x32,0x14,
0x14,0x32,0x29,0x47,0x38,0x56,0x52,0xA4,0xA4,0x52,0x56,0x38,0x78,0x7E,0xFE,0xF5,0xF7,0xF3,0xF2,0x52,
0x24,0x74,0x7E,0x7A,0x7C,0x3C,0x30,0x20,0x22,0x72,0x77,0x75,0x7E,0x3E,0x30,0x20,0x47,0x29,0x32,0x14,
0x14,0x32,0x29,0x47,0x38,0x56,0x52,0xA4,0xA4,0x52,0x56,0x38,0x52,0xF2,0xF3,0xF7,0xF5,0xFE,0x7E,0x78,
};

const uint8_t  LAZER_TDDUG [] PROGMEM= {
4,1,
0x02,0x02,0x04,0x04,
0x00,0x0C,0x03,0x00,
};

const uint8_t  LIVE_TDDUG [] PROGMEM= {
0x38,0x38,0x38,0x00,
0x38,0x38,0x38,0x00,
0x38,0x38,0x38,0x00,
0x38,0x38,0x38,0x00,
};

const uint8_t  DDUG_INTRO_TDDUG [] PROGMEM= {
35,4,
0x00,0xFC,0xFA,0xFA,0x02,0xFA,0xFA,0xFE,0xFE,0xEE,0x0A,0xFE,0xFE,0xFE,0x06,0xF6,0xF6,0xF6,0x0E,0xFE,
0x06,0xFE,0xFE,0xFE,0x06,0xFE,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC3,0xC3,0xA2,
0xE3,0x43,0x43,0x03,0xFB,0xFE,0x0F,0xEF,0xEF,0xDE,0x3F,0xFF,0x0F,0xEE,0xEF,0xDF,0x36,0xF6,0x36,0xF8,
0xFF,0xFB,0x38,0xF8,0x18,0xE8,0xE8,0xE8,0xD8,0xF0,0x02,0x03,0x03,0x07,0x07,0x07,0x07,0x02,0x00,0x0F,
0x9F,0xD0,0xD7,0xD7,0xDB,0x9C,0x1F,0x10,0x17,0x17,0x1B,0x1C,0x1F,0x18,0x17,0x17,0x17,0x90,0x5F,0xD8,
0x57,0xD6,0x96,0x18,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x0F,0x07,0x07,0x0F,
0x06,0x00,0x02,0x02,0x01,0x01,0x02,0x04,0x04,0x02,0x00,0x00,0x09,0x0F,0x03,0x0B,0x0F,0x01,0x00,0x00,};

const uint8_t  START_TDDUG [] PROGMEM= {
25,1,
0x80,0x92,0xA5,0xA9,0x92,0x80,0x81,0xBF,0x81,0x81,0xBE,0x85,
0x85,0xBE,0x80,0xBF,0x85,0x85,0xBA,0x80,0x81,0xBF,0x81,0x81,0x80,
};
