#include <Arduino.h>

unsigned long last_time = 0;
float temp = 25.0;



void setup() {
Serial.begin(115200);

delay(2000);

Serial.println("time_ms, temp_c");
}

void loop() {

  if ( millis() - last_time >= 1000 ) {

    last_time = millis();
    Serial.print(last_time);
    Serial.print(",");
    Serial.println(temp);

  }

}

