#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SSD1306 display (SCREEN_HEIGHT, SCREEN_WIDTH, &Wire, OLED_RESET );

void setup() {

  Serial.begin(115200);

  delay(1000);

  Wire.begin(21, 22);

  Serial.println("Scanning I2C bus...");

  for (byte address = 1; address < 127; address++) {

    Wire.beginTransmission(address);

    byte error = Wire.endTransmission();

    if (error == 0) {

      Serial.print("Device found at address 0x");

      Serial.println(address, HEX);

    }

  }

}

void loop() {

}


