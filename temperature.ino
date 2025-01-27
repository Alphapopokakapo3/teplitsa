#include <DHT.h>
DHT dht(18, DHT11);

void setup() {
   dht.begin();
   Serial.begin(9600);
   pinMode(21, OUTPUT);
}

void loop() {
   float t = dht.readTemperature();
   
   if (t < 27) {
      digitalWrite(21, 1);
    } else {
      digitalWrite(21, 0);
    }

   
   Serial.println(t);
}
