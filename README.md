# attiny-hc05
* Testovací program pre spojenie Attiny 85 a Bluetooth modulu HC-05
* Modul je napájaný na 5V, pričom RX pin musí prijímať iba 3.3V signál! Nutné previesť prostredníctvom napäťového deliča
## Zapojenie - Wiring

AtTiny85|HC-05
:----------: | :----------:
5V|Vcc
GND|GND
D3|TX
D4 **(3.3V!!!)**|RX

# Aplikácia pre ovládanie
* Dostupné v obchode Play pre Android: https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal
* Aplikácia podporuje auto-connect, reconnect
* Spoľahlivo funguje s príkazmi
