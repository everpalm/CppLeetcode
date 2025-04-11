// #include "leetcode309.h"
/*
Example 1:
Input: prices = [1,2,3,0,2]
Output: 3

Explanation: transactions = [buy, sell, cooldown, buy, sell]

Example 2:
Input: prices = [1]
Output: 0
*/

#include "solution.h"
#include <gtest/gtest.h>
#include <vector> // 確保包含 vector

using std::vector;

TEST(LeetCode309, Example1)
{
    Solution sol;
    vector<int> prices = {1, 2, 3, 0, 2};
    int expected = 3;
    EXPECT_EQ(sol.maxProfit(prices), expected);
}

TEST(LeetCode309, Example2)
{
    Solution sol;
    vector<int> prices = {1};
    int expected = 0;
    EXPECT_EQ(sol.maxProfit(prices), expected);
}
