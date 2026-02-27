#include "gtest/gtest.h"

#include "lib.h"

// Assuming you have a function or class to test from your src directory (needs appropriate include and linking)

TEST(gtest_version, BasicAssertions) {
 
    EXPECT_TRUE(version() > 0);
}