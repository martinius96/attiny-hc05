#define RX 3
#define TX 4
#define pinLED 0
#include <SoftwareSerial.h>
SoftwareSerial bluetooth(TX, RX);

void setup() {
  bluetooth.begin(9600);
 pinMode(pinLED, OUTPUT);
}

void loop() {
  byte BluetoothData;
 if (bluetooth.available() > 0) {
    
    BluetoothData=bluetooth.read();
    switch (BluetoothData) {
      case '0':
      digitalWrite(pinLED, LOW);
        bluetooth.println("Vypni LED diodu.");
        break;
      case '1':
       digitalWrite(pinLED, HIGH);
        bluetooth.println("Zapni LED diodu.");
        break;
      case 'c':
        bluetooth.print("System bezi: ");
        bluetooth.print(millis()/1000);
        bluetooth.println(" sekund.");
        break;
      case '\r':
        break;
      case '\n':
        break;
      default:
        bluetooth.println("Neznamy prikaz.");
    }
  }
  delay(100);
}
