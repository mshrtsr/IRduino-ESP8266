#include <EEPROM.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <IRremoteESP8266.h>
#include <IRDaikinESP.h>
#include <IRremoteInt.h>

const byte IrLED = 4;
const byte IrMOD = 2;
//const char* ssid = "aterm-6871d8-g";
//const char* password = "14043083";
const char* ssid = "ESP8266";
const char* password = "wifiwifi";
MDNSResponder mdns;

ESP8266WebServer server(80);

IRsend irsend(IrLED);
IRrecv irrecv(IrMOD);

decode_results results;

void setup(void) {
  delay(1000);
  beginEEPROM();
  irsend.begin();
  irrecv.enableIRIn();
  Serial.begin(115200);
  connectWiFi();
  setupServer();


}

void loop(void) {
  server.handleClient();
}
