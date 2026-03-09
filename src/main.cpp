#include <Arduino.h>

unsigned long last_time = 0;  // for timer values you always use unsigned long
float temp = 25.0;

void setup() {

Serial.begin(115200);
Serial.println("time_ms, temp_c");

}

void loop() {

  if ( millis() - last_time >= 1000 ) {

    // so the timer is basically every second

    last_time = millis();
    Serial.print(last_time);
    Serial.print(",");
    Serial.println(temp);

  }

}

