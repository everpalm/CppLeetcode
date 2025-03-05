// #include "leetcode309.h"
#include "solution.h"
#include <gtest/gtest.h>
#include <vector> // 確保包含 vector

using std::vector;

TEST(MaxProfitTest, LeetCode309)
{
    Solution sol;
    vector<int> prices = {1, 2, 3, 0, 2};
    int expected = 3;
    EXPECT_EQ(sol.maxProfit(prices), expected);
}

