#include <Arduino.h>
#include <U8g2lib.h>
#include <Adafruit_NeoPixel.h>
#include <AnalogJoystick.h>

constexpr uint16_t PIXEL_COUNT = 60;
#define LED_PIN 12
#define JOYSTICK_BTN_PIN 22
#define JOYSTICK_PWR_PIN 24

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(
    U8G2_R0,
    U8X8_PIN_NONE
    );
Adafruit_NeoPixel strip(PIXEL_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
AnalogJoystick joystick(A0, A1, JOYSTICK_BTN_PIN);

void setup() {
    u8g2.begin();
    u8g2.setFont(u8g2_font_t0_11_tf);

    strip.begin();
    strip.clear();
    strip.show();
    pinMode(JOYSTICK_PWR_PIN, OUTPUT);
    digitalWrite(JOYSTICK_PWR_PIN, HIGH); // Turn on the power to the joystick
    joystick.begin();

    for (int i = 0; i < PIXEL_COUNT; i++) {
        uint32_t color = 0;
        if (i < PIXEL_COUNT / 3) {
            color = Adafruit_NeoPixel::Color(255, 0, 0); // Red
        } else if (i < 2 * PIXEL_COUNT / 3) {
            color = Adafruit_NeoPixel::Color(0, 255, 0); // Green
        } else {
            color = Adafruit_NeoPixel::Color(0, 0, 255); // Blue
        }
        strip.setPixelColor(i, color);
    }

    strip.setBrightness(50);
    strip.show();
}

void loop() {
    const int x = joystick.readX();
    const int y = joystick.readY();

    u8g2.clearBuffer();


    char valString[16];

    u8g2.drawStr(10, 20, "X-Axis:");
    snprintf(valString, sizeof(valString), "%d", x);
    u8g2.drawStr(64, 20, valString);

    u8g2.drawStr(10, 40, "Y-Axis:");
    snprintf(valString, sizeof(valString), "%d", y);
    u8g2.drawStr(64, 40, valString);


    u8g2.sendBuffer();
}