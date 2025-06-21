#include <gtest/gtest.h>
#include "sum.h"

int sum(int a, int b);

TEST(SumTest, PositiveNumbers) {
    EXPECT_EQ(sum(3, 4), 7);
    EXPECT_EQ(sum(0, 0), 0);
}

TEST(SumTest, NegativeNumbers) {
    EXPECT_EQ(sum(-2, -3), -5);
    EXPECT_EQ(sum(-1, 1), 0);
}