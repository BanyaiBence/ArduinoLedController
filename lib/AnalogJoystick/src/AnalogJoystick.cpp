#include "AnalogJoystick.h"

AnalogJoystick::AnalogJoystick(const uint8_t pinX, const uint8_t pinY, const uint8_t pinBtn) :
    pinX(pinX), pinY(pinY), pinBtn(pinBtn) {}

void AnalogJoystick::begin() const {
    pinMode(pinX, INPUT);
    pinMode(pinY, INPUT);

    pinMode(pinBtn, INPUT_PULLUP);
}

int AnalogJoystick::readX() const {
    return analogRead(pinX);
}

int AnalogJoystick::readY() const {
    return analogRead(pinY);
}

bool AnalogJoystick::isButtonPressed() const {
    return digitalRead(pinBtn) == LOW;
}