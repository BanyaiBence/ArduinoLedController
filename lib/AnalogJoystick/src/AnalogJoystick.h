#ifndef ARDUINOLEDCONTROLLER_ANALOG_JOYSTICK_H
#define ARDUINOLEDCONTROLLER_ANALOG_JOYSTICK_H

#include <Arduino.h>

class AnalogJoystick {
private:
    uint8_t pinX;
    uint8_t pinY;
    uint8_t pinBtn;

public:
    AnalogJoystick(uint8_t pinX, uint8_t pinY, uint8_t pinBtn);

    void begin() const;

    int readX() const;

    int readY() const;

    bool isButtonPressed() const;
};


#endif //ARDUINOLEDCONTROLLER_ANALOG_JOYSTICK_H
