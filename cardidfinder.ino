#include <SPI.h>
#include <MFRC522.h>
#define RST_PIN   22
#define SS_PIN    21
MFRC522 mfrc522(SS_PIN, RST_PIN);
#define NEW_UID {0xDE, 0xAD, 0xBE, 0xEF}
MFRC522::MIFARE_Key key;
void setup() {
 Serial.begin(115200);
 while (!Serial);
 SPI.begin();
 mfrc522.PCD_Init();
 for (byte i = 0; i < 6; i++) {
   key.keyByte[i] = 0xFF;
 }
}
void loop() {
 if ( ! mfrc522.PICC_IsNewCardPresent() || ! mfrc522.PICC_ReadCardSerial() ) {
   delay(50);
   return;
 }
 Serial.print("Card UID:");
 for (byte i = 0; i < mfrc522.uid.size; i++) {
   Serial.print(mfrc522.uid.uidByte[i]);
 }
}