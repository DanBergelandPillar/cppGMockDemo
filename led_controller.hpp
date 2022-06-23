#ifndef LED_CONTROLLER_H // LED_CONTROLLER_H
#define LED_CONTROLLER_H

#include <iostream>

namespace led_controller
{
    class LedControllerInterface
    {
        public:
            virtual void enableLights() = 0;
            virtual void disableLights() = 0;
    };

    class LedController : public LedControllerInterface
    {
        public:
            void enableLights();
            void disableLights();
    };
}
#endif // LED_CONTROLLER_H guard