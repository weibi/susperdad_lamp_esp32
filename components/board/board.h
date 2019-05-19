#ifndef _LAMP_ESP32_BOARD_H_
#define _LAMP_ESP32_BOARD_H_

#ifdef __cplusplus
extern "C" {
#endif

#define PCM5102_MUTE                21
#define PCM5102_MUTE_ON             0
#define PCM5102_MUTE_OFF            1

/* I2S gpios */
#define IIS_DOUT                    22
#define IIS_LRCK                    25
#define IIS_BCK                     26
#define IIS_DSIN                    -1
#define IIS_SCLK                    -1

/* SPI gpios */
#define TFT_SPI_MISO                    -1
#define TFT_SPI_MOSI                    19
#define TFT_SPI_SCLK                    18
#define TFT_SPI_CS                      5
#define TFT_DC                          23
#define TFT_RESET                       -1
#define TFT_BACKLIGHT                   27


#ifdef __cplusplus
}
#endif

#endif /*_LAMP_ESP32_BOARD_H_*/