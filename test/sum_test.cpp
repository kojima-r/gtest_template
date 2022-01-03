#include <gtest/gtest.h>
#include "sum.hpp"

TEST(MyTestCase, TestSum) {
    EXPECT_EQ(3, sum(1, 2));
}
