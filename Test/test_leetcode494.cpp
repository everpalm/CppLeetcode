/*
Example 1:
Input: nums = [1,1,1,1,1], target = 3
Output: 5

Explanation: There are 5 ways to assign symbols to make the sum of nums be
target 3.
-1 + 1 + 1 + 1 + 1 = 3
+1 - 1 + 1 + 1 + 1 = 3
+1 + 1 - 1 + 1 + 1 = 3
+1 + 1 + 1 - 1 + 1 = 3
+1 + 1 + 1 + 1 - 1 = 3

Example 2:
Input: nums = [1], target = 1
Output: 1
*/
#include "solution.h"
#include <gtest/gtest.h>
#include <vector>
#include <algorithm>

using std::vector;
using leetcode494::Solution;
TEST(LeetCode494, Example1)
{
    Solution sol;
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;
    int expected = 5;
    EXPECT_EQ(expected, sol.findTargetSumWays(nums, target));
}
TEST(LeetCode494, Example2)
{
    Solution sol;
    vector<int> nums = {1};
    int target = 1;
    int expected = 1;
    EXPECT_EQ(expected, sol.findTargetSumWays(nums, target));
}
TEST(LeetCode494, Example3)
{
    Solution sol;
    vector<int> nums = {1, 2, 3};
    int target = 4;
    int expected = 1; // Example: +1 -2 +3 = 4
    EXPECT_EQ(expected, sol.findTargetSumWays(nums, target));
}
TEST(LeetCode494, Example4)
{
    Solution sol;
    vector<int> nums = {0, 0, 0, 0, 0};
    int target = 0;
    int expected = 32; // Example: +0 -0 +0 -0 +0 = 0
    EXPECT_EQ(expected, sol.findTargetSumWays(nums, target));
}