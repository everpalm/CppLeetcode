/*
Example 1:
Input: amount = 5, coins = [1,2,5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1

Example 2:
Input: amount = 3, coins = [2]
Output: 0
Explanation: the amount of 3 cannot be made up just with coins of 2.

Example 3:
Input: amount = 10, coins = [10]
Output: 1
*/
#include "solution.h"
#include <gtest/gtest.h>
#include <vector>
#include <algorithm>

using std::vector;
using leetcode518::Solution;

TEST(LeetCode518, Example1)
{
    Solution sol;
    int amount = 5;
    vector<int> coins = {1, 2, 5};
    int expected = 4;
    EXPECT_EQ(sol.change(amount, coins), expected);
}

TEST(LeetCode518, Example2)
{
    Solution sol;
    int amount = 3;
    vector<int> coins = {2};
    int expected = 0;
    EXPECT_EQ(sol.change(amount, coins), expected);
}

TEST(LeetCode518, Example3)
{
    Solution sol;
    int amount = 10;
    vector<int> coins = {10};
    int expected = 1;
    EXPECT_EQ(sol.change(amount, coins), expected);
}
