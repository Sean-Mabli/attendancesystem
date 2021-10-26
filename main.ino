#include <SPI.h>
#include <MFRC522.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>

#define RST_PIN   22
#define SS_PIN    21

MFRC522 mfrc522(SS_PIN, RST_PIN);

#define NEW_UID {0xDE, 0xAD, 0xBE, 0xEF}

MFRC522::MIFARE_Key key;

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define I2C_SDA 16
#define I2C_SCL 17

TwoWire I2CBME = TwoWire(0);

const char* ssid = "Your SSID"; //Enter Your SSID
const char* password = "Your Password"; //Enter Your Password
String Card_UID;
String Student_1 = "Student 1";
String Student_1_Class = "Pending";
String Student_1_Class_Color = "#FFCC00";
String Student_1_Class_Time =  "Pending";
String Student_2 = "Student 2";
String Student_2_Class = "Pending";
String Student_2_Class_Color = "#FFCC00";
String Student_2_Class_Time = "Pending";
String Student_3 = "Student 3";
String Student_3_Class = "Pending";
String Student_3_Class_Color = "#FFCC00";
String Student_3_Class_Time = "Pending";
String Current_Time;
String Current_Time_ID;
String Last_Class_End_Time = "12:00 PM";
String Last_Class_End_Time_ID;
String Current_Class_Start_Time = "12:20 PM";
String Current_Class_Start_Time_ID;

WebServer server(80);

#include <NTPClient.h>
#include <WiFiUdp.h>

#define NTP_OFFSET -4 * 60 * 60 //Change -4 Based On Time Zone
#define NTP_INTERVAL 60 * 1000
#define NTP_ADDRESS "0.pool.ntp.org"

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, NTP_ADDRESS, NTP_OFFSET, NTP_INTERVAL);
 
void setup() {
  Serial.begin(115200);

  Wire.begin(I2C_SDA, I2C_SCL);

  lcd.init();
  lcd.backlight();

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Connecting");
    delay(1000);
    lcd.setCursor(10, 0);
    lcd.print(".");
    delay(1000);
    lcd.setCursor(11, 0);
    lcd.print(".");
    delay(1000);
    lcd.setCursor(12, 0);
    lcd.print(".");
    delay(1000);
    lcd.setCursor(10, 0);
    lcd.print("   ");
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(ssid);
  lcd.setCursor(0, 1);
  lcd.print(WiFi.localIP());
  delay(2000);
  lcd.clear();

  timeClient.begin();

  server.on("/", Websetup);

  const char * headerkeys[] = {"User-Agent", "Cookie"} ;
  size_t headerkeyssize = sizeof(headerkeys) / sizeof(char*);

  server.collectHeaders(headerkeys, headerkeyssize);
  server.begin();
  Serial.println("HTTP server started");

  while (!Serial);
  SPI.begin();
  mfrc522.PCD_Init();

  for (byte i = 0; i < 6; i++) {
    key.keyByte[i] = 0xFF;
  }
}
void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Please Scan Card");

  server.handleClient();
  Time_Conversion();
  Last_Class_End_Time_Convertion();
  Current_Class_Start_Time_Convertion();

  if ( ! mfrc522.PICC_IsNewCardPresent() || ! mfrc522.PICC_ReadCardSerial() ) {
    delay(50);
    return;
  }

  Serial.print("Card UID:");
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Card_UID += mfrc522.uid.uidByte[i];
    Serial.print(mfrc522.uid.uidByte[i]);

    if (Card_UID == "Your Card UID") { //Enter Your Card UID

      lcd.setCursor(0, 0);
      lcd.clear();
      lcd.print("Hi " + Student_1);
      delay(2000);
      lcd.clear();

      if (Last_Class_End_Time_ID.toInt() < Current_Time_ID.toInt() < Current_Class_Start_Time_ID.toInt()) {
        Student_1_Class = "Ontime";
        Student_1_Class_Color = "#00cc00";
      }
      if (Current_Class_Start_Time_ID.toInt() < Current_Time_ID.toInt()) {
        Student_1_Class = "Late";
        Student_1_Class_Color = "#e62e00";
      }
      Student_1_Class_Time = Current_Time;
      Card_UID = "";
    }
    if (Card_UID == "Your Card UID") { //Enter Your Card UID

      lcd.setCursor(0, 0);
      lcd.clear();
      lcd.print("Hi " + Student_2);
      delay(2000);
      lcd.clear();

      if (Last_Class_End_Time_ID.toInt() < Current_Time_ID.toInt() < Current_Class_Start_Time_ID.toInt()) {
        Student_2_Class = "Ontime";
        Student_2_Class_Color = "#00cc00";
      }
      if (Current_Class_Start_Time_ID.toInt() < Current_Time_ID.toInt()) {
        Student_2_Class = "Late";
        Student_2_Class_Color = "#e62e00";
      }
      Student_2_Class_Time = Current_Time;
      Card_UID = "";
    }
    if (Card_UID == "Your Card UID") { //Enter Your Card UID

      lcd.setCursor(0, 0);
      lcd.clear();
      lcd.print("Hi " + Student_3);
      delay(2000);
      lcd.clear();

      if (Last_Class_End_Time_ID.toInt() < Current_Time_ID.toInt() < Current_Class_Start_Time_ID.toInt()) {
        Student_3_Class = "Ontime";
        Student_2_Class_Color = "#00cc00";
      }
      if (Current_Class_Start_Time_ID.toInt() < Current_Time_ID.toInt()) {
        Student_3_Class = "Late";
        Student_3_Class_Color = "#e62e00";
      }
      Student_3_Class_Time = Current_Time;
      Card_UID = "";
    }
  }
}