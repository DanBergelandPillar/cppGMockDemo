#include <gtest/gtest.h>
#include "led_controller.hpp"

// Demonstrate some basic assertions.
TEST(led_controller_test, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}
