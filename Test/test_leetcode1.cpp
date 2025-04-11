#include "solution.h"
#include <gtest/gtest.h>
#include <vector> // 確保包含 vector

using std::vector;
using leetcode1::Solution;

TEST(LeetCode1, ClassicCase)
{
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> expected = {0, 1};
    EXPECT_EQ(sol.twoSum(nums, target), expected);
}

TEST(LeetCode1, DuplicateNumbers)
{
    Solution sol;
    vector<int> nums = {3, 2, 3, 4};
    int target = 6;
    vector<int> expected = {0, 2};
    EXPECT_EQ(sol.twoSum(nums, target), expected);
}