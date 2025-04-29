/*
Example 1:
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1
and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Example 2:
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being
0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/
#include "solution.h"
#include <iostream>
#include <vector>
#include <gtest/gtest.h>

using std::vector;
using leetcode26::Solution;

TEST(LeetCode26, Example1)
{
    Solution sol;
    vector<int> nums = {1, 1, 2};
    int expected = 2;
    EXPECT_EQ(sol.removeDuplicates(nums), expected);
    EXPECT_EQ(nums[0], 1);
    EXPECT_EQ(nums[1], 2);
}
TEST(LeetCode26, Example2)
{
    Solution sol;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int expected = 5;
    EXPECT_EQ(sol.removeDuplicates(nums), expected);
    EXPECT_EQ(nums[0], 0);
    EXPECT_EQ(nums[1], 1);
    EXPECT_EQ(nums[2], 2);
    EXPECT_EQ(nums[3], 3);
    EXPECT_EQ(nums[4], 4);
}
TEST(LeetCode26, Example3)
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    int expected = 5;
    EXPECT_EQ(sol.removeDuplicates(nums), expected);
    EXPECT_EQ(nums[0], 1);
    EXPECT_EQ(nums[1], 2);
    EXPECT_EQ(nums[2], 3);
    EXPECT_EQ(nums[3], 4);
    EXPECT_EQ(nums[4], 5);
}
TEST(LeetCode26, Example4)
{
    Solution sol;
    vector<int> nums = {1, 1, 1, 1, 1};
    int expected = 1;
    EXPECT_EQ(sol.removeDuplicates(nums), expected);
    EXPECT_EQ(nums[0], 1);
}
TEST(LeetCode26, Optimzed1)
{
    Solution sol;
    vector<int> nums = {1, 1, 2};
    int expected = 2;
    EXPECT_EQ(sol.Optimized(nums), expected);
    EXPECT_EQ(nums[0], 1);
    EXPECT_EQ(nums[1], 2);
}
TEST(LeetCode26, Optimized2)
{
    Solution sol;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int expected = 5;
    EXPECT_EQ(sol.Optimized(nums), expected);
    EXPECT_EQ(nums[0], 0);
    EXPECT_EQ(nums[1], 1);
    EXPECT_EQ(nums[2], 2);
    EXPECT_EQ(nums[3], 3);
    EXPECT_EQ(nums[4], 4);
}
