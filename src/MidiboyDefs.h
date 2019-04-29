#ifndef MIDIBOY_DEFS_H
#define MIDIBOY_DEFS_H

#ifndef ARDUBOY2_CORE_H
#error Don't include MidiboyDefs.h directly! Include Arduboy2Core.h instead!
#endif

#ifdef MIDIBOY

#undef ARDUBOY_10
#undef AB_DEVKIT

// See Arduboy2Core.h for value meanings.

// First undef all of the values, so we can redefine them again without compiler warnings.

#undef PIN_CS
#undef CS_PORT
#undef CS_BIT

#undef PIN_DC
#undef DC_PORT
#undef DC_BIT

#undef PIN_RST
#undef RST_PORT
#undef RST_BIT

#undef RED_LED
#undef GREEN_LED
#undef BLUE_LED

#undef RED_LED_PORT
#undef RED_LED_BIT

#undef GREEN_LED_PORT
#undef GREEN_LED_BIT

#undef BLUE_LED_PORT
#undef BLUE_LED_BIT

#undef LEFT_BUTTON
#undef RIGHT_BUTTON
#undef UP_BUTTON
#undef DOWN_BUTTON
#undef A_BUTTON
#undef B_BUTTON

#undef PIN_LEFT_BUTTON
#undef LEFT_BUTTON_PORT
#undef LEFT_BUTTON_PORTIN
#undef LEFT_BUTTON_DDR
#undef LEFT_BUTTON_BIT

#undef PIN_RIGHT_BUTTON
#undef RIGHT_BUTTON_PORT
#undef RIGHT_BUTTON_PORTIN
#undef RIGHT_BUTTON_DDR
#undef RIGHT_BUTTON_BIT

#undef PIN_UP_BUTTON
#undef UP_BUTTON_PORT
#undef UP_BUTTON_PORTIN
#undef UP_BUTTON_DDR
#undef UP_BUTTON_BIT

#undef PIN_DOWN_BUTTON
#undef DOWN_BUTTON_PORT
#undef DOWN_BUTTON_PORTIN
#undef DOWN_BUTTON_DDR
#undef DOWN_BUTTON_BIT

#undef PIN_A_BUTTON
#undef A_BUTTON_PORT
#undef A_BUTTON_PORTIN
#undef A_BUTTON_DDR
#undef A_BUTTON_BIT

#undef PIN_B_BUTTON
#undef B_BUTTON_PORT
#undef B_BUTTON_PORTIN
#undef B_BUTTON_DDR
#undef B_BUTTON_BIT

#undef PIN_SPEAKER_1
#undef PIN_SPEAKER_2

#undef SPEAKER_1_PORT
#undef SPEAKER_1_DDR
#undef SPEAKER_1_BIT

#undef SPEAKER_2_PORT
#undef SPEAKER_2_DDR
#undef SPEAKER_2_BIT

#undef RAND_SEED_IN
#undef RAND_SEED_IN_PORT
#undef RAND_SEED_IN_BIT

#undef RAND_SEED_IN_ADMUX

#undef SPI_MISO_PORT
#undef SPI_MISO_BIT

#undef SPI_MOSI_PORT
#undef SPI_MOSI_BIT

#undef SPI_SCK_PORT
#undef SPI_SCK_BIT

#undef SPI_SS_PORT
#undef SPI_SS_BIT

#undef OLED_PIXELS_INVERTED
#undef OLED_PIXELS_NORMAL

#undef OLED_ALL_PIXELS_ON
#undef OLED_PIXELS_FROM_RAM

#undef OLED_VERTICAL_FLIPPED
#undef OLED_VERTICAL_NORMAL

#undef OLED_HORIZ_FLIPPED
#undef OLED_HORIZ_NORMAL

#undef WIDTH 128
#undef HEIGHT 64

#undef COLUMN_ADDRESS_END
#undef PAGE_ADDRESS_END

// Now define to the correct values for Midiboy.

#define PIN_CS   PIN_SPI_SS
#define CS_PORT  digitalPinToPORT(PIN_CS)
#define CS_BIT   digitalPinToBit(PIN_CS)

#define PIN_DC   PIN_LCD_DC
#define DC_PORT  digitalPinToPORT(PIN_DC)
#define DC_BIT   digitalPinToBit(PIN_DC)

#define PIN_RST  PIN_LCD_RESET
#define RST_PORT digitalPinToPORT(PIN_RST)
#define RST_BIT  digitalPinToBit(PIN_RST)

#define RED_LED -1
#define GREEN_LED -1
#define BLUE_LED -1

//#define RED_LED_PORT PORTB
//#define RED_LED_BIT PORTB6

//#define GREEN_LED_PORT PORTB
//#define GREEN_LED_BIT PORTB7

//#define BLUE_LED_PORT PORTB
//#define BLUE_LED_BIT PORTB5

#define LEFT_BUTTON  digitalPinToBitMask(PIN_BTN_LEFT)
#define RIGHT_BUTTON digitalPinToBitMask(PIN_BTN_RIGHT)
#define UP_BUTTON    digitalPinToBitMask(PIN_BTN_UP)
#define DOWN_BUTTON  digitalPinToBitMask(PIN_BTN_DOWN)
#define A_BUTTON     digitalPinToBitMask(PIN_BTN_A)
#define B_BUTTON     digitalPinToBitMask(PIN_BTN_B)

#define PIN_LEFT_BUTTON     PIN_BTN_LEFT
#define LEFT_BUTTON_PORT    digitalPinToPORT(PIN_LEFT_BUTTON)
#define LEFT_BUTTON_PORTIN  digitalPinToPIN(PIN_LEFT_BUTTON)
#define LEFT_BUTTON_DDR     digitalPinToDDR(PIN_LEFT_BUTTON)
#define LEFT_BUTTON_BIT     digitalPinToBit(PIN_LEFT_BUTTON)

#define PIN_RIGHT_BUTTON    PIN_BTN_RIGHT
#define RIGHT_BUTTON_PORT   digitalPinToPORT(PIN_RIGHT_BUTTON)
#define RIGHT_BUTTON_PORTIN digitalPinToPIN(PIN_RIGHT_BUTTON)
#define RIGHT_BUTTON_DDR    digitalPinToDDR(PIN_RIGHT_BUTTON)
#define RIGHT_BUTTON_BIT    digitalPinToBit(PIN_RIGHT_BUTTON)

#define PIN_UP_BUTTON       PIN_BTN_UP
#define UP_BUTTON_PORT      digitalPinToPORT(PIN_UP_BUTTON)
#define UP_BUTTON_PORTIN    digitalPinToPIN(PIN_UP_BUTTON)
#define UP_BUTTON_DDR       digitalPinToDDR(PIN_UP_BUTTON)
#define UP_BUTTON_BIT       digitalPinToBit(PIN_UP_BUTTON)

#define PIN_DOWN_BUTTON     PIN_BTN_DOWN
#define DOWN_BUTTON_PORT    digitalPinToPORT(PIN_DOWN_BUTTON)
#define DOWN_BUTTON_PORTIN  digitalPinToPIN(PIN_DOWN_BUTTON)
#define DOWN_BUTTON_DDR     digitalPinToDDR(PIN_DOWN_BUTTON)
#define DOWN_BUTTON_BIT     digitalPinToBit(PIN_DOWN_BUTTON)

#define PIN_A_BUTTON        PIN_BTN_A
#define A_BUTTON_PORT       digitalPinToPORT(PIN_A_BUTTON)
#define A_BUTTON_PORTIN     digitalPinToPIN(PIN_A_BUTTON)
#define A_BUTTON_DDR        digitalPinToDDR(PIN_A_BUTTON)
#define A_BUTTON_BIT        digitalPinToBit(PIN_A_BUTTON)

#define PIN_B_BUTTON        PIN_BTN_B
#define B_BUTTON_PORT       digitalPinToPORT(PIN_B_BUTTON)
#define B_BUTTON_PORTIN     digitalPinToPIN(PIN_B_BUTTON)
#define B_BUTTON_DDR        digitalPinToDDR(PIN_B_BUTTON)
#define B_BUTTON_BIT        digitalPinToBit(PIN_B_BUTTON)

#define PIN_SPEAKER_1       PIN_SPK_A
#define PIN_SPEAKER_2       PIN_SPK_B

#define SPEAKER_1_PORT      digitalPinToPORT(PIN_SPEAKER_1)
#define SPEAKER_1_DDR       digitalPinToDDR(PIN_SPEAKER_1)
#define SPEAKER_1_BIT       digitalPinToBit(PIN_SPEAKER_1)

#define SPEAKER_2_PORT      digitalPinToPORT(PIN_SPEAKER_2)
#define SPEAKER_2_DDR       digitalPinToDDR(PIN_SPEAKER_2)
#define SPEAKER_2_BIT       digitalPinToBit(PIN_SPEAKER_2)

//#define RAND_SEED_IN        A4
//#define RAND_SEED_IN_PORT   PORTF
//#define RAND_SEED_IN_BIT    PORTF1

#define RAND_SEED_IN_ADMUX (_BV(REFS0) | _BV(REFS1) | _BV(MUX2))

#define SPI_MISO_PORT digitalPinToPORT(PIN_SPI_MISO)
#define SPI_MISO_BIT  digitalPinToBit(PIN_SPI_MISO)

#define SPI_MOSI_PORT digitalPinToPORT(PIN_SPI_MOSI)
#define SPI_MOSI_BIT  digitalPinToBit(PIN_SPI_MOSI)

#define SPI_SCK_PORT  digitalPinToPORT(PIN_SPI_SCK)
#define SPI_SCK_BIT   digitalPinToBit(PIN_SPI_SCK)

#define SPI_SS_PORT   digitalPinToPORT(PIN_SPI_SS)
#define SPI_SS_BIT    digitalPinToBit(PIN_SPI_SS)

#define OLED_PIXELS_INVERTED 0xA7
#define OLED_PIXELS_NORMAL 0xA6

#define OLED_ALL_PIXELS_ON 0xA5
#define OLED_PIXELS_FROM_RAM 0xA4

#define OLED_VERTICAL_FLIPPED 0xC8
#define OLED_VERTICAL_NORMAL 0xC0

#define OLED_HORIZ_FLIPPED 0xA0
#define OLED_HORIZ_NORMAL 0xA1

#define WIDTH 128
#define HEIGHT 64

#define COLUMN_ADDRESS_END (WIDTH - 1) & 127
#define PAGE_ADDRESS_END ((HEIGHT/8)-1) & 7

#endif // MIDIBOY

#endif // MIDIBOY_DEFS_H
