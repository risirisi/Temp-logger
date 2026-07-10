// #include <Arduino.h>

// unsigned long last_time = 0;  // for timer values you always use unsigned long
// float temp = 26.0;

// // new function, void since the func returns nothing

// void log_temp(){

//   Serial.print(last_time);
//   Serial.print(",");
//   Serial.println(temp);
//   temp += 0.1; // incrementing temp by +0.1, temp + 0.1

//   if (temp >= 30){
//     temp = 25.0;
//   }
// }

// void setup() {

// Serial.begin(115200);
// delay(3000);
// Serial.println("time_ms, temp_c");

// }

// void loop() {

//   if ( millis() - last_time >= 1000 ) {

//     // so the timer is basically every second
//     last_time = millis();
//     log_temp();


//   }

// }



#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C   // Try 0x3D if this doesn't work

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);

  Wire.begin(21, 22);

  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println("SSD1306 failed");
    while (true);
  }

  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 20);
  display.println("RISI");

  display.display();
  delay(1000);

  // Start horizontal scrolling
  display.startscrollleft(0x00, 0x0F);
}


void loop() {
}