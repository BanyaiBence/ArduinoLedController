#include <Arduino.h>
#include <U8g2lib.h>
#include <Adafruit_NeoPixel.h>

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(
    U8G2_R0,
    U8X8_PIN_NONE
    );

void setup() {
    u8g2.begin();
}

void loop() {
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_ncenB10_tf);
    u8g2.drawStr(0, 20, "Hello World!");
    u8g2.sendBuffer();
    delay(500);
}