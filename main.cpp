#include "i2c/i2c.h"
#include "led_controller.hpp"

int main(){
    i2c::I2cBus realBus;
    led_controller::LedController realController(&realBus);

    realController.enableLights();
    realController.disableLights();
    return 0;
}