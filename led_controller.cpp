#include "led_controller.hpp"

using namespace led_controller;

int LED_ADDRESS = 42;
int ENABLE_LIGHTS_DATA = 255;

LedController::LedController(i2c::I2cInterface *bus){
    memberBus = bus;
}

bool LedController::enableLights(){
    bool success = memberBus->writeData(LED_ADDRESS, ENABLE_LIGHTS_DATA);
    return success;
}

bool LedController::disableLights(){
}