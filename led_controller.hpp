#ifndef LED_CONTROLLER_H // LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include <iostream>
#include "i2c/i2c.h"

namespace led_controller
{
    class LedControllerInterface
    {
        public: 
            virtual bool enableLights() = 0;
            virtual bool disableLights() = 0;
        protected:
            i2c::I2cInterface* memberBus;
    };

    class LedController : public LedControllerInterface
    {
        public:
            LedController(i2c::I2cInterface *bus);
            bool enableLights();
            bool disableLights();
    };
}
#endif // LED_CONTROLLER_H guard