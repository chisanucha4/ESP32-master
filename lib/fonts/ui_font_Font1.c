/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\chits\OneDrive\เอกสาร\SquareLine\assets\Kanit-Regular.ttf -o C:\Users\chits\OneDrive\เอกสาร\SquareLine\assets\ui_font_Font1.c --format lvgl -r 0x20-0x7f -r 0x0E00-0x0E7F --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONT1
#define UI_FONT_FONT1 1
#endif

#if UI_FONT_FONT1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xc,

    /* U+0022 "\"" */
    0xff, 0xf0,

    /* U+0023 "#" */
    0x8, 0x86, 0x61, 0x99, 0xff, 0x11, 0xc, 0xc2,
    0x33, 0xfe, 0x66, 0x19, 0x84, 0x40,

    /* U+0024 "$" */
    0x18, 0xfb, 0x66, 0xcd, 0x9f, 0x1f, 0xf, 0x1e,
    0x3c, 0x7f, 0xe1, 0x80,

    /* U+0025 "%" */
    0x61, 0x24, 0xc9, 0x22, 0x58, 0x64, 0x3, 0x0,
    0x98, 0x69, 0x12, 0x4c, 0x92, 0x18,

    /* U+0026 "&" */
    0x3c, 0x19, 0x86, 0x61, 0xb8, 0x3c, 0xe, 0x6,
    0xdb, 0x1e, 0xc3, 0x38, 0xe7, 0xc8,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x36, 0x6c, 0xcc, 0xcc, 0xc6, 0x63,

    /* U+0029 ")" */
    0xc6, 0x63, 0x33, 0x33, 0x36, 0x6c,

    /* U+002A "*" */
    0x32, 0xd7, 0x9e, 0xcc,

    /* U+002B "+" */
    0x30, 0xcf, 0xcc, 0x30, 0xc0,

    /* U+002C "," */
    0xe8,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x18, 0xc4, 0x63, 0x11, 0x8c, 0x46, 0x30,

    /* U+0030 "0" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xb1, 0x8f, 0x80,

    /* U+0031 "1" */
    0x3f, 0x33, 0x33, 0x33, 0x33, 0x30,

    /* U+0032 "2" */
    0xfd, 0x1c, 0x18, 0x30, 0x61, 0x87, 0x1c, 0x61,
    0xc3, 0xf8,

    /* U+0033 "3" */
    0xf8, 0x1c, 0x18, 0x30, 0xef, 0x3, 0x83, 0x6,
    0x1f, 0xe0,

    /* U+0034 "4" */
    0x6, 0xe, 0x1e, 0x16, 0x26, 0x66, 0xc6, 0xff,
    0x6, 0x6, 0x6,

    /* U+0035 "5" */
    0xfd, 0x83, 0x6, 0xc, 0x1f, 0x81, 0x83, 0x6,
    0x1f, 0xe0,

    /* U+0036 "6" */
    0x3e, 0x60, 0xc0, 0xc0, 0xfe, 0xe7, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c,

    /* U+0037 "7" */
    0xfe, 0xc, 0x30, 0x60, 0xc3, 0x6, 0x8, 0x30,
    0x61, 0x80,

    /* U+0038 "8" */
    0x7e, 0xc3, 0xc3, 0xc3, 0x7f, 0x3c, 0xe7, 0xc3,
    0xc3, 0xc3, 0x7e,

    /* U+0039 "9" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xe7, 0x7f, 0x3,
    0x3, 0x6, 0x7c,

    /* U+003A ":" */
    0xc0, 0x30,

    /* U+003B ";" */
    0x60, 0x0, 0xda,

    /* U+003C "<" */
    0x3, 0xf, 0x38, 0xe0, 0xe0, 0x38, 0xe, 0x3,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x80, 0xf0, 0x3c, 0xf, 0x7, 0x3c, 0xf0, 0xc0,

    /* U+003F "?" */
    0xfc, 0xc, 0x18, 0x30, 0xe3, 0x8e, 0x18, 0x30,
    0x0, 0xc0,

    /* U+0040 "@" */
    0x1f, 0x8e, 0x19, 0xb9, 0xe0, 0xbc, 0x17, 0x9e,
    0xf4, 0x5e, 0x8e, 0x6e, 0xe, 0x0, 0x7c, 0x0,

    /* U+0041 "A" */
    0x1c, 0x7, 0x1, 0x40, 0xd8, 0x32, 0x8, 0xc6,
    0x31, 0xfc, 0x41, 0xb0, 0x6c, 0x8,

    /* U+0042 "B" */
    0xfe, 0xc3, 0xc3, 0xc3, 0xc3, 0xfc, 0xc3, 0xc3,
    0xc3, 0xc3, 0xfe,

    /* U+0043 "C" */
    0x1f, 0x60, 0x60, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0x60, 0x60, 0x3f,

    /* U+0044 "D" */
    0xfe, 0x61, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe1, 0xbf, 0x80,

    /* U+0045 "E" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1,
    0x83, 0x0,

    /* U+0047 "G" */
    0x1f, 0x30, 0x18, 0x18, 0xc, 0x6, 0x3f, 0x7,
    0x83, 0x41, 0xb0, 0xc7, 0xe0,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1f, 0xff, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x60,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x3f,
    0x80,

    /* U+004B "K" */
    0xc3, 0x63, 0x33, 0x1b, 0xf, 0x87, 0xc3, 0xb1,
    0x88, 0xc6, 0x61, 0xb0, 0xc0,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+004D "M" */
    0xc0, 0xf8, 0x7e, 0x1f, 0xcf, 0xd2, 0xf4, 0xbd,
    0xef, 0x33, 0xcc, 0xf0, 0x3c, 0xc,

    /* U+004E "N" */
    0xc1, 0xf0, 0xf8, 0x7e, 0x3d, 0x9e, 0x4f, 0x37,
    0x8f, 0xc3, 0xe1, 0xf0, 0x60,

    /* U+004F "O" */
    0x3f, 0x18, 0x6c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0x98, 0x63, 0xf0,

    /* U+0050 "P" */
    0xfe, 0xc7, 0xc3, 0xc3, 0xc3, 0xc7, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x3f, 0x18, 0x64, 0xb, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xe1, 0xdc, 0xe3, 0xf8, 0x30, 0xc,
    0x1, 0xc0,

    /* U+0052 "R" */
    0xfe, 0xc7, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xc4,
    0xc6, 0xc6, 0xc3,

    /* U+0053 "S" */
    0x7d, 0x83, 0x6, 0xf, 0xf, 0x87, 0x83, 0x6,
    0xf, 0xf0,

    /* U+0054 "T" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xb1, 0x8f, 0x80,

    /* U+0056 "V" */
    0xc0, 0xb0, 0x64, 0x19, 0x8c, 0x63, 0x8, 0xc3,
    0x60, 0xd8, 0x16, 0x7, 0x1, 0xc0,

    /* U+0057 "W" */
    0x86, 0x3c, 0x63, 0xc6, 0x3c, 0xe2, 0x4f, 0x64,
    0x96, 0x69, 0x67, 0x94, 0x71, 0xc3, 0xc, 0x30,
    0xc0,

    /* U+0058 "X" */
    0xc1, 0xb1, 0x99, 0x86, 0xc1, 0xc0, 0xc0, 0x70,
    0x6c, 0x66, 0x31, 0xb0, 0x60,

    /* U+0059 "Y" */
    0x40, 0x98, 0x62, 0x10, 0xcc, 0x1e, 0x7, 0x80,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,

    /* U+005A "Z" */
    0xff, 0x7, 0x6, 0xc, 0x1c, 0x18, 0x30, 0x30,
    0x60, 0xc0, 0xff,

    /* U+005B "[" */
    0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8f,
    0x80,

    /* U+005C "\\" */
    0xc3, 0x4, 0x18, 0x60, 0x83, 0xc, 0x10, 0x61,
    0x82,

    /* U+005D "]" */
    0xf8, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x3f,
    0x80,

    /* U+005E "^" */
    0x31, 0xc5, 0xb3,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0xb4,

    /* U+0061 "a" */
    0x7c, 0xc, 0x1b, 0xfc, 0x78, 0xf3, 0xbf,

    /* U+0062 "b" */
    0xc0, 0xc0, 0xc0, 0xfc, 0xc6, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc6, 0xfc,

    /* U+0063 "c" */
    0x3e, 0xc3, 0x6, 0xc, 0x18, 0x18, 0x9f,

    /* U+0064 "d" */
    0x3, 0x3, 0x3, 0x3f, 0x63, 0xc3, 0xc3, 0xc3,
    0xc3, 0xe3, 0x7f,

    /* U+0065 "e" */
    0x3c, 0x8f, 0x1e, 0x3f, 0xf8, 0x18, 0x1e,

    /* U+0066 "f" */
    0x3b, 0x19, 0xf6, 0x31, 0x8c, 0x63, 0x18,

    /* U+0067 "g" */
    0x7f, 0xc6, 0xc6, 0xc6, 0xc6, 0x7c, 0xc0, 0xfc,
    0x6, 0x6, 0xfc,

    /* U+0068 "h" */
    0xc1, 0x83, 0x7, 0xec, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+0069 "i" */
    0x60, 0x76, 0xdb, 0x6d, 0x80,

    /* U+006A "j" */
    0x30, 0x7, 0x33, 0x33, 0x33, 0x33, 0x3e,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x3c, 0xdb, 0x3c, 0x7c, 0xcd,
    0x8b, 0x18,

    /* U+006C "l" */
    0xdb, 0x6d, 0xb6, 0xdb, 0x80,

    /* U+006D "m" */
    0xfd, 0xee, 0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63,

    /* U+006E "n" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3,

    /* U+006F "o" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+0070 "p" */
    0xfe, 0xc7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc,
    0xc0, 0xc0, 0xc0,

    /* U+0071 "q" */
    0x3f, 0x31, 0xb0, 0xd8, 0x6c, 0x36, 0x1b, 0x8c,
    0xfe, 0x3, 0x1, 0x80, 0xc0, 0x70,

    /* U+0072 "r" */
    0xdf, 0xb1, 0x8c, 0x63, 0x18,

    /* U+0073 "s" */
    0x7b, 0xc, 0x3e, 0x7c, 0x30, 0xfe,

    /* U+0074 "t" */
    0x63, 0x3e, 0xc6, 0x31, 0x8c, 0x61, 0xc0,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbf,

    /* U+0076 "v" */
    0xc2, 0xc6, 0x46, 0x64, 0x6c, 0x2c, 0x38, 0x38,

    /* U+0077 "w" */
    0x44, 0x6c, 0xcd, 0x99, 0x37, 0x62, 0xbc, 0x53,
    0x8e, 0x61, 0x8c,

    /* U+0078 "x" */
    0x63, 0x36, 0x3c, 0x1c, 0x1c, 0x34, 0x26, 0x63,

    /* U+0079 "y" */
    0x41, 0xb0, 0x98, 0xc6, 0x63, 0x60, 0xb0, 0x70,
    0x38, 0x8, 0xc, 0x1c, 0x0,

    /* U+007A "z" */
    0xfc, 0x31, 0x8c, 0x31, 0x84, 0x3f,

    /* U+007B "{" */
    0x76, 0x66, 0x66, 0xc6, 0x66, 0x66, 0x70,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xe6, 0x66, 0x66, 0x36, 0x66, 0x66, 0xe0,

    /* U+007E "~" */
    0xf0, 0xf,

    /* U+0E01 "ก" */
    0x3e, 0x71, 0xf8, 0x66, 0x36, 0x1b, 0xd, 0x86,
    0xc3, 0x61, 0x80,

    /* U+0E02 "ข" */
    0xe3, 0x63, 0x63, 0xe3, 0xc3, 0xc3, 0xc3, 0xc2,
    0x3c,

    /* U+0E03 "ฃ" */
    0xf7, 0x6d, 0xdb, 0x3c, 0x78, 0xf1, 0xe3, 0x7c,

    /* U+0E04 "ค" */
    0x3e, 0xe7, 0xc3, 0xc3, 0xc3, 0xfb, 0xc3, 0xc3,
    0xc3,

    /* U+0E05 "ฅ" */
    0x7e, 0xdb, 0xc3, 0xc3, 0xc3, 0xfb, 0xc3, 0xc3,
    0xc3,

    /* U+0E06 "ฆ" */
    0xf3, 0xb3, 0x33, 0x63, 0xc3, 0xc3, 0xc3, 0xe3,
    0xde,

    /* U+0E07 "ง" */
    0x1e, 0x6, 0x3, 0xc3, 0x43, 0x63, 0x63, 0x26,
    0x3c,

    /* U+0E08 "จ" */
    0xfc, 0x6, 0x3, 0x3, 0xc3, 0x63, 0x63, 0x26,
    0x3c,

    /* U+0E09 "ฉ" */
    0xfc, 0x6, 0x3, 0x3, 0xc3, 0xc3, 0xc3, 0xc7,
    0x7f,

    /* U+0E0A "ช" */
    0xe3, 0x63, 0x6e, 0xe3, 0xc3, 0xc3, 0xc3, 0xc6,
    0x3c,

    /* U+0E0B "ซ" */
    0xf3, 0xb3, 0x36, 0x63, 0xc3, 0xc3, 0xc3, 0xc6,
    0x7c,

    /* U+0E0C "ฌ" */
    0x3e, 0xf, 0x86, 0x3e, 0x18, 0xcc, 0x63, 0x71,
    0x8d, 0x86, 0x36, 0x18, 0xd8, 0x63, 0x79, 0xf8,

    /* U+0E0D "ญ" */
    0x3e, 0x7, 0xc3, 0xf, 0x86, 0x19, 0x8c, 0x36,
    0x18, 0x6c, 0x30, 0xd8, 0x3f, 0xb0, 0x3, 0x78,
    0x86, 0x1, 0xf8,

    /* U+0E0E "ฎ" */
    0x3e, 0xe3, 0xe3, 0x33, 0x63, 0x63, 0x63, 0x63,
    0xe3, 0x3, 0x3, 0x3f, 0x3,

    /* U+0E0F "ฏ" */
    0x3e, 0xe3, 0xe3, 0x33, 0x63, 0x63, 0x63, 0x63,
    0xe3, 0x3, 0xb, 0x7f, 0x64,

    /* U+0E10 "ฐ" */
    0xff, 0x6, 0x3, 0x3, 0x3, 0xc3, 0x63, 0x26,
    0x3c, 0x0, 0x13, 0xfe, 0xc0,

    /* U+0E11 "ฑ" */
    0xfe, 0xd3, 0x33, 0x23, 0x63, 0x63, 0x63, 0x63,
    0x63,

    /* U+0E12 "ฒ" */
    0x7f, 0xd, 0x26, 0x3c, 0x18, 0xf0, 0x63, 0xc1,
    0x8f, 0x6, 0x3c, 0x18, 0xd8, 0x73, 0x39, 0xf8,

    /* U+0E13 "ณ" */
    0x3e, 0xf, 0x86, 0x3e, 0x18, 0xcc, 0x63, 0x71,
    0x8d, 0x86, 0x36, 0x18, 0xd8, 0x63, 0x78, 0xfc,

    /* U+0E14 "ด" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xc3, 0x39, 0x80,

    /* U+0E15 "ต" */
    0x7f, 0x24, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xc3, 0x39, 0x80,

    /* U+0E16 "ถ" */
    0x3e, 0x71, 0xf8, 0x66, 0x37, 0x1b, 0xd, 0x86,
    0xc3, 0x79, 0x80,

    /* U+0E17 "ท" */
    0xfe, 0xe3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3,

    /* U+0E18 "ธ" */
    0x7d, 0x83, 0x7, 0xc3, 0xf8, 0xf1, 0xe3, 0xfc,

    /* U+0E19 "น" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7,
    0x7f,

    /* U+0E1A "บ" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66,
    0x3c,

    /* U+0E1B "ป" */
    0x3, 0x3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x67, 0x3c,

    /* U+0E1C "ผ" */
    0xe3, 0xc3, 0xc3, 0xdb, 0xdb, 0xf7, 0xe7, 0xe7,
    0xc3,

    /* U+0E1D "ฝ" */
    0x3, 0x3, 0xe3, 0xc3, 0xc3, 0xdb, 0xdb, 0xf7,
    0xe7, 0xe7, 0xc3,

    /* U+0E1E "พ" */
    0x44, 0x68, 0xcd, 0x99, 0x37, 0x26, 0xac, 0x57,
    0x8e, 0x71, 0x8c, 0x31, 0x80,

    /* U+0E1F "ฟ" */
    0x0, 0x20, 0xd, 0x11, 0xa3, 0x36, 0x64, 0xdc,
    0x9a, 0xb1, 0x5e, 0x39, 0xc6, 0x30, 0xc6, 0x0,

    /* U+0E20 "ภ" */
    0x3e, 0xe3, 0xe3, 0x33, 0x63, 0x63, 0x63, 0x63,
    0xe3,

    /* U+0E21 "ม" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xe3,
    0xde,

    /* U+0E22 "ย" */
    0x73, 0xc3, 0xc3, 0xc3, 0x73, 0xc3, 0xc3, 0xc7,
    0x7e,

    /* U+0E23 "ร" */
    0x7d, 0x83, 0x7, 0x87, 0xc3, 0xc1, 0x83, 0xfc,

    /* U+0E24 "ฤ" */
    0x3e, 0x71, 0xb8, 0x66, 0x37, 0x1b, 0xd, 0x86,
    0xc3, 0x79, 0x80, 0xc0, 0x60, 0x30,

    /* U+0E25 "ล" */
    0x7e, 0x3, 0x3, 0x3, 0x7f, 0xc3, 0xc3, 0xc3,
    0x7b,

    /* U+0E26 "ฦ" */
    0x3e, 0xe3, 0xe3, 0x33, 0x63, 0x63, 0x63, 0x63,
    0xe3, 0x3, 0x3, 0x3,

    /* U+0E27 "ว" */
    0xf8, 0x18, 0x18, 0x30, 0x60, 0xc1, 0x86, 0xf8,

    /* U+0E28 "ศ" */
    0x7f, 0xf3, 0xb0, 0xd8, 0x6c, 0x37, 0xdb, 0xd,
    0x86, 0xc3, 0x0,

    /* U+0E29 "ษ" */
    0xc3, 0x61, 0xb0, 0xd9, 0xfc, 0x36, 0x1b, 0xc,
    0xcc, 0x3c, 0x0,

    /* U+0E2A "ส" */
    0x7f, 0x3, 0x3, 0x3, 0x7f, 0xc3, 0xc3, 0xc3,
    0x7b,

    /* U+0E2B "ห" */
    0xc3, 0xc3, 0xc3, 0xfe, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3,

    /* U+0E2C "ฬ" */
    0x0, 0x20, 0x19, 0x11, 0xa3, 0x36, 0x64, 0xdc,
    0x9a, 0xb1, 0x5e, 0x39, 0x87, 0x30, 0xc6, 0x0,

    /* U+0E2D "อ" */
    0xfc, 0x6, 0x3, 0x3, 0xf3, 0xc3, 0xc3, 0xc6,
    0xfc,

    /* U+0E2E "ฮ" */
    0xff, 0x6, 0x3, 0x3, 0xf3, 0xc3, 0xc3, 0xc6,
    0xfc,

    /* U+0E2F "ฯ" */
    0xc7, 0x8f, 0x1e, 0x37, 0xe0, 0xc1, 0x83, 0x6,

    /* U+0E30 "ะ" */
    0x8f, 0x0, 0x8, 0xf0,

    /* U+0E31 "ั" */
    0xc3, 0xf0,

    /* U+0E32 "า" */
    0xf8, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc,

    /* U+0E33 "ำ" */
    0x60, 0x24, 0xf, 0x0, 0x0, 0xf, 0x80, 0x30,
    0xc, 0x3, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0,

    /* U+0E34 "ิ" */
    0xfe,

    /* U+0E35 "ี" */
    0x6, 0xf, 0xf8,

    /* U+0E36 "ึ" */
    0xe, 0x17, 0xf8,

    /* U+0E37 "ื" */
    0x1c, 0x7f, 0xc0,

    /* U+0E38 "ุ" */
    0xed, 0x80,

    /* U+0E39 "ู" */
    0xca, 0x5e,

    /* U+0E3A "ฺ" */
    0xf0,

    /* U+0E3F "฿" */
    0x18, 0x18, 0xfe, 0xdb, 0xdb, 0xdb, 0xfc, 0xdb,
    0xdb, 0xdb, 0xdb, 0xfe, 0x18,

    /* U+0E40 "เ" */
    0xdb, 0x6d, 0xb6, 0xe0,

    /* U+0E41 "แ" */
    0xcd, 0x9b, 0x36, 0x6c, 0xd9, 0xb3, 0x66, 0xee,

    /* U+0E42 "โ" */
    0xfa, 0x18, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc7,
    0x80,

    /* U+0E43 "ใ" */
    0xf0, 0xc6, 0x67, 0x31, 0x8c, 0x63, 0x18, 0xc7,
    0x0,

    /* U+0E44 "ไ" */
    0xf9, 0x98, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc7,
    0x80,

    /* U+0E45 "ๅ" */
    0xf8, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30,
    0xc3,

    /* U+0E46 "ๆ" */
    0x7e, 0xdb, 0xc3, 0xc3, 0xc3, 0x73, 0x3, 0x3,
    0x3,

    /* U+0E47 "็" */
    0x7e, 0x9, 0x1f,

    /* U+0E48 "่" */
    0xf0,

    /* U+0E49 "้" */
    0xc1, 0x7, 0xc0,

    /* U+0E4A "๊" */
    0xdb, 0x57, 0x38,

    /* U+0E4B "๋" */
    0x6f, 0x60,

    /* U+0E4C "์" */
    0xfe, 0x0,

    /* U+0E4D "ํ" */
    0x69, 0x96,

    /* U+0E4E "๎" */
    0x74, 0x8e,

    /* U+0E4F "๏" */
    0x3c, 0x42, 0x99, 0xa5, 0xa5, 0x99, 0x42, 0x3c,

    /* U+0E50 "๐" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x1e, 0xd, 0x8c,
    0x7c,

    /* U+0E51 "๑" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x1e, 0xd, 0xee,
    0xe, 0xe, 0x0, 0x0,

    /* U+0E52 "๒" */
    0xc0, 0x6d, 0xbd, 0x7e, 0x3f, 0x1e, 0xef, 0x6,
    0xc6, 0x3e, 0x0,

    /* U+0E53 "๓" */
    0x7f, 0x6c, 0xf6, 0x7b, 0x3c, 0x1e, 0xf, 0x6,
    0xf3,

    /* U+0E54 "๔" */
    0x0, 0x1f, 0x98, 0x18, 0xc, 0x76, 0x63, 0x30,
    0xd8, 0x3f, 0x80,

    /* U+0E55 "๕" */
    0x20, 0xf, 0xd8, 0x18, 0xc, 0x7e, 0x63, 0x30,
    0xd8, 0x3f, 0x80,

    /* U+0E56 "๖" */
    0x80, 0x6f, 0x18, 0xc8, 0x30, 0x18, 0xc, 0x6,
    0x86, 0x3e, 0x0,

    /* U+0E57 "๗" */
    0x0, 0x37, 0xf3, 0xd9, 0xbd, 0x9b, 0xd9, 0xbc,
    0x1b, 0xc1, 0xbe, 0x1b, 0x79, 0xe0,

    /* U+0E58 "๘" */
    0x0, 0x1f, 0xd8, 0x18, 0xc, 0x3e, 0x4f, 0x27,
    0x93, 0x77, 0x80,

    /* U+0E59 "๙" */
    0x0, 0x6e, 0xef, 0x25, 0xe4, 0xec, 0xc1, 0x88,
    0x31, 0x6, 0x20, 0x76, 0x0,

    /* U+0E5A "๚" */
    0xc6, 0x3c, 0x63, 0xc6, 0x3c, 0x63, 0x7f, 0xf0,
    0x63, 0x6, 0x30, 0x63, 0x6, 0x30,

    /* U+0E5B "๛" */
    0x3c, 0x0, 0x19, 0xa0, 0xc, 0x6d, 0xa3, 0x1b,
    0x7a, 0xc6, 0xdf, 0xb3, 0x2b, 0x4c, 0x18, 0x1,
    0x8c, 0x0, 0x3e, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 59, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 52, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 87, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6, .adv_w = 180, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 142, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 32, .adv_w = 186, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 171, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 46, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 61, .adv_w = 83, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 67, .adv_w = 83, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 73, .adv_w = 111, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 77, .adv_w = 121, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 82, .adv_w = 54, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 83, .adv_w = 120, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 84, .adv_w = 46, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 110, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 167, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 82, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 133, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 139, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 46, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 197, .adv_w = 54, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 200, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 208, .adv_w = 121, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 211, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 219, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 196, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 245, .adv_w = 179, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 166, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 164, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 167, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 60, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 160, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 194, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 171, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 178, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 178, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 445, .adv_w = 156, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 142, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 145, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 173, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 179, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 222, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 173, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 168, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 90, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 568, .adv_w = 115, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 577, .adv_w = 90, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 586, .adv_w = 122, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 589, .adv_w = 138, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 590, .adv_w = 67, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 591, .adv_w = 140, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 137, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 92, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 142, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 652, .adv_w = 148, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 73, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 79, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 674, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 72, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 219, .box_w = 12, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 148, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 149, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 149, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 727, .adv_w = 149, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 741, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 752, .adv_w = 92, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 148, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 148, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 774, .adv_w = 191, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 785, .adv_w = 138, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 153, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 806, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 78, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 819, .adv_w = 50, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 823, .adv_w = 78, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 830, .adv_w = 144, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 832, .adv_w = 157, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 149, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 852, .adv_w = 148, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 860, .adv_w = 157, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 157, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 144, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 896, .adv_w = 146, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 905, .adv_w = 149, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 149, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 149, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 932, .adv_w = 245, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 948, .adv_w = 248, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 967, .adv_w = 166, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 980, .adv_w = 166, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 993, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1006, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1015, .adv_w = 253, .box_w = 14, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1031, .adv_w = 246, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1047, .adv_w = 165, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1058, .adv_w = 165, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1069, .adv_w = 157, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1080, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1089, .adv_w = 135, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1097, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1106, .adv_w = 159, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1115, .adv_w = 159, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1126, .adv_w = 165, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1135, .adv_w = 165, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1146, .adv_w = 186, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1159, .adv_w = 186, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1175, .adv_w = 166, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1184, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1193, .adv_w = 153, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1202, .adv_w = 129, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1210, .adv_w = 157, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1224, .adv_w = 152, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1233, .adv_w = 166, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1245, .adv_w = 127, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1253, .adv_w = 163, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1264, .adv_w = 163, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1275, .adv_w = 156, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1284, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1293, .adv_w = 186, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1309, .adv_w = 147, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1318, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1327, .adv_w = 142, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1335, .adv_w = 83, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1339, .adv_w = 0, .box_w = 6, .box_h = 2, .ofs_x = -5, .ofs_y = 10},
    {.bitmap_index = 1341, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1348, .adv_w = 113, .box_w = 10, .box_h = 13, .ofs_x = -4, .ofs_y = 0},
    {.bitmap_index = 1365, .adv_w = 0, .box_w = 7, .box_h = 1, .ofs_x = -8, .ofs_y = 10},
    {.bitmap_index = 1366, .adv_w = 0, .box_w = 7, .box_h = 3, .ofs_x = -7, .ofs_y = 10},
    {.bitmap_index = 1369, .adv_w = 0, .box_w = 7, .box_h = 3, .ofs_x = -8, .ofs_y = 10},
    {.bitmap_index = 1372, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -7, .ofs_y = 10},
    {.bitmap_index = 1375, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -3, .ofs_y = -4},
    {.bitmap_index = 1377, .adv_w = 0, .box_w = 5, .box_h = 3, .ofs_x = -6, .ofs_y = -4},
    {.bitmap_index = 1379, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -3, .ofs_y = -3},
    {.bitmap_index = 1380, .adv_w = 162, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1393, .adv_w = 79, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1397, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1405, .adv_w = 81, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1414, .adv_w = 75, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1423, .adv_w = 77, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1432, .adv_w = 113, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1441, .adv_w = 152, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1450, .adv_w = 0, .box_w = 6, .box_h = 4, .ofs_x = -8, .ofs_y = 10},
    {.bitmap_index = 1453, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -3, .ofs_y = 10},
    {.bitmap_index = 1454, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -6, .ofs_y = 10},
    {.bitmap_index = 1457, .adv_w = 0, .box_w = 7, .box_h = 3, .ofs_x = -7, .ofs_y = 10},
    {.bitmap_index = 1460, .adv_w = 0, .box_w = 4, .box_h = 3, .ofs_x = -5, .ofs_y = 10},
    {.bitmap_index = 1462, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = -5, .ofs_y = 10},
    {.bitmap_index = 1464, .adv_w = 0, .box_w = 4, .box_h = 4, .ofs_x = -4, .ofs_y = 10},
    {.bitmap_index = 1466, .adv_w = 0, .box_w = 4, .box_h = 4, .ofs_x = -5, .ofs_y = 10},
    {.bitmap_index = 1468, .adv_w = 155, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1476, .adv_w = 157, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1485, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1497, .adv_w = 180, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1508, .adv_w = 164, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1517, .adv_w = 161, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1528, .adv_w = 160, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1539, .adv_w = 165, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1550, .adv_w = 218, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1564, .adv_w = 161, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1575, .adv_w = 190, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1588, .adv_w = 225, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1602, .adv_w = 301, .box_w = 18, .box_h = 9, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 3585, .range_length = 58, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 3647, .range_length = 29, .glyph_id_start = 154,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 4, 5, 0,
    6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 8, 9, 10, 11, 12,
    13, 14, 14, 15, 16, 17, 14, 14,
    10, 18, 10, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 0, 0, 0, 0,
    0, 0, 28, 29, 30, 31, 29, 32,
    33, 34, 35, 36, 37, 38, 34, 34,
    29, 29, 39, 40, 41, 42, 43, 44,
    45, 46, 47, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 2, 0, 3,
    0, 4, 5, 0, 0, 6, 0, 0,
    0, 4, 4, 0, 0, 0, 0, 0,
    0, 0, 7, 8, 9, 8, 8, 8,
    9, 8, 8, 10, 8, 8, 8, 8,
    9, 8, 9, 8, 11, 12, 13, 14,
    15, 16, 17, 18, 0, 0, 0, 0,
    0, 0, 19, 20, 21, 21, 21, 22,
    23, 20, 24, 25, 20, 26, 27, 27,
    21, 27, 21, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -6, 0, -17, -32, 0,
    -6, -22, 0, 0, 0, 0, 0, 0,
    0, 0, -12, 0, -9, -6, -9, -9,
    -6, 0, -12, -12, -9, -9, -9, -9,
    -9, -12, -12, 0, 0, 0, 0, -12,
    -1, 0, 0, 0, 0, 0, -14, 0,
    -22, 0, 0, -14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, -17, -9, 0, -12, 0, 0, -17,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -22, -5, 0, 0, 0, 0,
    -9, 0, -14, 0, -14, -22, -12, -29,
    -24, -8, -37, -4, -9, 0, -12, -12,
    0, -17, -9, -13, 0, 0, -14, -9,
    -22, -19, -12, -22, -4, -4, -5, 1,
    0, 0, 0, -9, 0, 0, 0, -3,
    -6, 0, -17, -6, -14, -19, -5, 0,
    0, 0, 0, 0, -4, -4, 0, 0,
    0, 0, 0, -9, -6, -9, -9, -4,
    0, 0, 0, 0, 0, 0, -10, 0,
    -5, 0, -5, 0, 0, -8, 0, -4,
    -6, 0, 0, 0, -1, 0, 0, 0,
    -4, 0, 0, 4, 0, 0, -4, -4,
    -9, -4, 0, -4, -19, 0, 0, 0,
    0, -14, 0, 0, -8, -5, -3, 0,
    -10, -10, -17, -22, 0, -4, 0, 0,
    0, 0, -6, -9, 0, 0, -1, 0,
    0, -3, 0, -12, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -5, 0, 0, -4, 0, -6, 0, 0,
    -5, 0, -5, 0, 0, -4, -6, 0,
    0, 0, 1, 0, -13, -9, -6, -6,
    0, 0, -32, 0, 0, 0, 0, -20,
    0, 0, -8, -8, 0, 0, 0, -1,
    -6, -6, -4, -14, 0, -10, -5, -9,
    -4, -4, 0, -9, -9, -6, -9, -17,
    -12, -19, -14, -10, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, 0, -12, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, -9, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, -5, -5,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, 0, 0, 0, -4, -6, -6,
    -9, 0, 0, -12, 0, 0, 0, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -4, -4, 0,
    0, 0, 0, -12, 0, -17, 0, -9,
    -9, -13, -9, -8, -9, -9, -1, -9,
    -3, -17, -12, -4, -12, -14, -6, -6,
    -6, -17, -14, -22, -22, -17, -22, -6,
    -12, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, -33, 0, -40, -15, -6,
    -42, 0, 0, 0, -6, -6, 0, -9,
    0, 0, 0, 0, -6, 0, -22, -14,
    0, -22, 0, 0, -27, -13, 0, 0,
    0, -20, 0, 0, -18, 0, 0, 0,
    -12, -9, -14, -12, 0, -5, 0, 0,
    0, 0, 1, -4, 0, 0, 0, 0,
    0, -4, -12, -4, 0, 0, 0, -9,
    0, 0, 0, 0, -12, 0, -4, -5,
    0, 0, 0, -17, -8, -6, -17, 0,
    -12, 0, -4, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, -4, -8, -6,
    0, -4, 0, 0, 0, 0, 0, -14,
    0, 0, -8, -8, -10, 0, -17, -8,
    -14, -19, -8, -4, 0, 0, -1, 0,
    -6, 0, 0, 0, -4, -4, -1, -12,
    -6, -12, -12, 0, 0, -24, 0, 0,
    0, 0, -22, 0, -3, -15, -8, 0,
    0, 0, -4, -6, -3, -4, -24, 0,
    -24, -9, -19, -13, -12, -4, -22, -24,
    -12, -17, -27, -29, -29, -32, -29, 0,
    0, 0, 0, 0, 0, -12, 0, 0,
    0, 0, 0, 0, 0, 0, -9, -9,
    -6, -1, 0, 0, 0, 0, -4, -4,
    0, 0, -1, 0, -4, -6, -6, -12,
    -6, -4, -4, -32, 0, 0, 0, 0,
    -35, -4, -10, -26, -12, 0, -5, 0,
    -9, -6, -9, -6, -24, -4, -23, -12,
    -20, -12, -17, -4, -15, -19, -14, -12,
    -24, -24, -27, -22, -17, 0, -24, 0,
    0, 0, 0, -24, 0, -10, -15, -8,
    -4, 0, -9, -4, -9, -9, -6, -19,
    -9, -19, -12, -14, -12, -17, 0, -9,
    -17, -6, -14, -17, -17, -17, -17, -17,
    0, -12, 0, 0, 0, 0, -8, -5,
    -17, -14, -12, 0, -6, -6, -9, 0,
    -9, -9, -12, 0, -17, -12, -8, -22,
    0, -6, -6, -6, -17, -12, -22, -22,
    -12, -22, -12, -5, -35, 0, 0, 0,
    0, -37, -5, -22, -31, -17, -6, 0,
    -9, -9, -9, -9, -9, -35, -6, -24,
    -14, -24, -17, -19, -5, -20, -24, -17,
    -24, -27, -27, -27, -27, -27, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    -3, 0, 0, -6, -9, -9, -6, -4,
    0, 0, 0, -1, 0, -5, -8, 0,
    0, 0, -1, 0, -9, -9, -4, -12,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -17, 0, -19, -9,
    0, -29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    -6, -6, -12, 0, 0, -12, 0, 0,
    0, 0, -17, 0, -4, 0, 0, -24,
    0, -24, -19, -17, -24, -6, 0, 0,
    0, 0, 0, -5, -6, 0, 0, -1,
    0, 0, -14, -12, -12, -14, -5, 0,
    -4, 0, 0, 0, 0, -1, 0, 0,
    0, 0, -5, 0, -9, -1, -10, -17,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, -6, -6,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -9, 0, -1, 0, -3, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    -6, -6, -9, -6, 0, 0, -27, 0,
    0, 0, 0, -19, 0, 0, -22, 0,
    0, 0, 0, -6, 0, 0, 0, -14,
    0, -9, -10, -12, -14, -9, 0, -6,
    -3, -8, 0, -13, -5, -17, -13, -5,
    0, -9, 0, 0, 0, 0, 0, 0,
    -5, -9, -5, -24, -4, -9, -12, -19,
    -22, -9, -10, 0, -3, 0, -4, -6,
    -6, 0, -6, -6, 0, 0, -5, -5,
    -12, -12, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -27, 0,
    -19, -9, -6, -22, 0, -4, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, -6, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, -9, -6, -14, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -8,
    0, -9, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, -12,
    0, 0, -8, 0, 0, -12, 0, 0,
    0, 0, -6, -10, -10, -12, -9, -22,
    0, -22, -12, 0, -17, -12, -14, 0,
    -17, -9, -9, -14, -17, -8, 0, -9,
    -9, -6, -17, -12, -12, -12, -6, -6,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -6, 0, -9, -12, -6, -12,
    0, 0, 0, 0, -9, 0, -9, -14,
    -6, 0, 0, -6, -6, -17, -12, -12,
    -17, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, -15, 0, -15,
    -8, -8, -18, 0, 0, 0, -3, 0,
    0, -5, 5, 0, 0, 0, 0, 0,
    -10, 0, -5, 0, 0, 0, -24, 0,
    0, 0, 0, -17, 0, 0, -22, 0,
    -19, 0, -14, -9, -9, -17, -9, -8,
    0, -5, 0, 0, 0, -9, 0, 0,
    -1, 0, 0, -9, -9, -9, -9, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, -22, 0, -19, -12, -14,
    -27, 0, -4, 0, -4, -6, 0, 0,
    0, 0, 0, -6, -4, 0, -12, -12,
    -12, -12, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -17, -14, -12, -19, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, -5, -5, -6, -12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -12, 0, -14, -12, 0, -24, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, -6, -9, -9,
    0, 0, -24, 0, 0, 0, 0, -22,
    -4, -3, -19, 0, -14, -6, -24, -17,
    -22, -27, -17, -12, 0, -14, -9, -17,
    -9, -14, 0, -6, -17, -1, -6, -6,
    -12, -12, -12, -12, 0, -24, 0, 0,
    0, 0, -17, 0, -1, -12, 0, -22,
    -4, -22, -17, -19, -24, -6, -12, 0,
    -12, -5, -6, -9, -14, 0, -6, -12,
    -5, -6, -6, -9, -17, -12, -6, 0,
    -6, 0, 0, 0, 0, -12, -9, -12,
    -17, -4, -29, -12, -27, -17, -12, -27,
    -12, -12, 0, -12, 0, -12, -9, 0,
    0, 0, -12, -6, -9, -12, -12, -6,
    -9, -9, 0, -19, 0, 0, 0, 0,
    -19, 0, -5, -24, -1, -24, -1, -19,
    -14, -22, -27, -12, -17, 0, -12, -4,
    -12, -6, -9, 0, 0, -12, 0, -4,
    -12, -6, -9, -6, -4, 0, -1, 0,
    0, 0, 0, -4, 0, 0, -1, 0,
    -17, -1, -17, -9, -17, -29, 0, -5,
    0, -5, 0, -6, 0, -5, 0, 0,
    -4, 0, -4, -9, -6, -9, -9, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 48,
    .right_class_cnt     = 35,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Font1 = {
#else
lv_font_t ui_font_Font1 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONT1*/

