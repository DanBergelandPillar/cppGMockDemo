#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "led_controller.hpp"
#include "i2c/i2c.h"

class MockI2cBus : public i2c::I2cInterface {
 public:
  MOCK_METHOD(bool, writeData, (int address, int data), (override));
};

using ::testing::Return;

TEST(led_controller_test, WhenLightsEnabledThenI2cBusCalled) {
  MockI2cBus mockBus;
  led_controller::LedController ledController(&mockBus);
  int expectedAddress = 42;
  int expectedData = 255;
  EXPECT_CALL(mockBus, writeData(expectedAddress, expectedData))
      .Times(1)
      .WillOnce(Return(true));

  bool success = ledController.enableLights();

  EXPECT_EQ(success, true);
}
