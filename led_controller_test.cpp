#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "led_controller.hpp"
#include "i2c/i2c.h"

class MockI2cBus : public i2c::I2cInterface {
 public:
  MOCK_METHOD(bool, writeData, (int address, int data), (override));
};

//using ::testing::Return;

// Demonstrate some basic assertions.
TEST(led_controller_test, WhenLightsEnabledThenI2cBusCalled) {
  MockI2cBus mockBus;
  led_controller::LedController ledController(&mockBus);
  EXPECT_CALL(mockBus, writeData)
      .Times(1);
//      .WillOnce(Return(true));

  ledController.enableLights();

  //this test only expects the i2c bus to be called, so no additional EXPECT statements.
}
