# gmock demo

The purpose of this demo is to show, very simply, how gmock works. In this code, we have an LED_Controller that is responsible for turning lights on and off. The LEDs are on an I2C bus, which is a low speed data bus commonly used on embedded systems. I2c is very simple, it allows you to send a small data package to an address on the bus.  

To show the decoupling of code from hardware, we will show that we can invert the dependency on the I2c bus by passing an interface into the led controller's constructor. For the purpose of testing, the mocked implementation of the i2c interface is passed into the controller. In the real app, the real implementation of the i2c interface, which would be the real hardware access, will be used.

* How to build and run tests
* cmake -S . -B build
* cmake --build build
* cd build && ctest
