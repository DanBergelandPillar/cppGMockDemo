#ifndef I2C_H // I2C_H guard
#define I2C_H

#include <iostream>

namespace i2c
{
    class I2cInterface
    {
        public:
            virtual bool writeData(int address, int data) = 0;
            virtual ~I2cInterface() {};
    };

    class I2cBus : public I2cInterface
    {
        public:
            bool writeData(int address, int data);
    };
}
#endif // I2C_H guard