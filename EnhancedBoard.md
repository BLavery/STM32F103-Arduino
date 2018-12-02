# Enhanced 'F103 board:

I often use another useful 'F103C8T6 board, with onboard connectors for ESP8266, NRF24, SD, Flash, EEprom and Bluetooth.
It runs the same software, but this board has some differing pin uses:
 - PA1 led
 - PA2 TX2 to ESP8266 and Bluetooth connectors
 - PA3 RX2 to ESP8266 and Bluetooth connectors 
 - PA4 SPI SS, to SD card CD
 - PA5 SPI SCK, to Flash, SD, NRF24
 - PA6 SPI MISO, to Flash, SD, NRF24
 - PA7 SPI MOSI, to Flash, SD, NRF24
 - PA8 User button
 - PA9 TX1
 - PA10 RX1
 - PA15 to NRF24 IRQ
 - PB0 to NFR24 CE
 - PB2 to NRF24 CSN & BOOT1
 - PB4 to EEprom
 - PB5 to EEprom
 - PC13 To Flash chip CE

