// Audio
#define ODROID_I2S_NUM (I2S_NUM_0)
#define ODROID_AUDIO_VOLUME_MIN 0
#define ODROID_AUDIO_VOLUME_MAX 9
#define ODROID_AUDIO_VOLUME_DEFAULT (ODROID_AUDIO_VOLUME_MAX/3)

// Video
#define ODROID_SCREEN_WIDTH  320
#define ODROID_SCREEN_HEIGHT 240

// Battery ADC
#define BATT_VOLTAGE_FULL        (4.2f)
#define BATT_VOLTAGE_EMPTY       (3.5f)
#define BATT_DIVIDER_R1          (10000)
#define BATT_DIVIDER_R2          (10000)

// GPIO Allocations
#define ODROID_PIN_LED            GPIO_NUM_2
#define ODROID_PIN_DAC1           GPIO_NUM_25
#define ODROID_PIN_DAC2           GPIO_NUM_26
#define ODROID_PIN_I2S_DAC_BCK    GPIO_NUM_4
#define ODROID_PIN_I2S_DAC_WS     GPIO_NUM_12
#define ODROID_PIN_I2S_DAC_DATA   GPIO_NUM_15
#define ODROID_PIN_GAMEPAD_X      ADC1_CHANNEL_6
#define ODROID_PIN_GAMEPAD_Y      ADC1_CHANNEL_7
#define ODROID_PIN_GAMEPAD_SELECT GPIO_NUM_27
#define ODROID_PIN_GAMEPAD_START  GPIO_NUM_39
#define ODROID_PIN_GAMEPAD_A      GPIO_NUM_32
#define ODROID_PIN_GAMEPAD_B      GPIO_NUM_33
#define ODROID_PIN_GAMEPAD_MENU   GPIO_NUM_13
#define ODROID_PIN_GAMEPAD_VOLUME GPIO_NUM_0
#define ODROID_PIN_SPI_MISO       GPIO_NUM_19
#define ODROID_PIN_SPI_MOSI       GPIO_NUM_23
#define ODROID_PIN_SPI_CLK        GPIO_NUM_18
#define ODROID_PIN_LCD_MISO       ODROID_PIN_SPI_MISO
#define ODROID_PIN_LCD_MOSI       ODROID_PIN_SPI_MOSI
#define ODROID_PIN_LCD_CLK        ODROID_PIN_SPI_CLK
#define ODROID_PIN_LCD_CS         GPIO_NUM_5
#define ODROID_PIN_LCD_DC         GPIO_NUM_21
#define ODROID_PIN_LCD_BCKL       GPIO_NUM_14
#define ODROID_PIN_SD_MISO        ODROID_PIN_SPI_MISO
#define ODROID_PIN_SD_MOSI        ODROID_PIN_SPI_MOSI
#define ODROID_PIN_SD_CLK         ODROID_PIN_SPI_CLK
#define ODROID_PIN_SD_CS          GPIO_NUM_22
#define ODROID_PIN_NES_LATCH      GPIO_NUM_15
#define ODROID_PIN_NES_CLOCK      GPIO_NUM_12
#define ODROID_PIN_NES_DATA       GPIO_NUM_4

// SD Card Paths
#define ODROID_BASE_PATH           "/sd"
#define ODROID_BASE_PATH_ROMS      ODROID_BASE_PATH "/roms"
#define ODROID_BASE_PATH_SAVES     ODROID_BASE_PATH "/odroid/data"
#define ODROID_BASE_PATH_TEMP      ODROID_BASE_PATH "/odroid/data" // temp
#define ODROID_BASE_PATH_ROMART    ODROID_BASE_PATH "/romart"
#define ODROID_BASE_PATH_CRC_CACHE ODROID_BASE_PATH "/odroid/cache/crc"
