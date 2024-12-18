#include <FastBot2.h>
FastBot2 bot;

#define SSID "VIP KAZAKH";
#define PASSWORD "555666777";



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  WiFi.begin(SSID, PASSWORD);

  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");

  }
  Serial.println("Connected");

}

void loop() {
  // put your main code here, to run repeatedly:

}
