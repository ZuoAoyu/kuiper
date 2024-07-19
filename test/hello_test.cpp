#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(hello_test, BasicAssertions) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "hellO");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}