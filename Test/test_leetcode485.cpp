/*
Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3

Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

Example 2:
Input: nums = [1,0,1,1,0,1]
Output: 2
*/
#include "solution.h"
#include <gtest/gtest.h>
#include <vector>

using std::vector;

TEST(LeetCode485, Example1)
{
    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int expected = 3;
    EXPECT_EQ(sol.findMaxConsecutiveOnes(nums), expected);
}

TEST(LeetCode485, Example2)
{
    Solution sol;
    vector<int> nums = {1, 0, 1, 1, 0, 1};
    int expected = 2;
    EXPECT_EQ(sol.findMaxConsecutiveOnes(nums), expected);
}

TEST(LeetCode485, Example3)
{
    Solution sol;
    vector<int> nums = {};
    int expected = 0;
    EXPECT_EQ(sol.findMaxConsecutiveOnes(nums), expected);
}