#include <gtest/gtest.h>

//別ファイル//
int sum(int a, int b) {
    return a + b;
}
/////////////

TEST(MyTestCase, TestSum) {
    EXPECT_EQ(3, sum(1, 2));
}
