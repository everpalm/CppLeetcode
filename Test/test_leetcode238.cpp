// #include "leetcode238.h"
#include "solution.h"
#include <gtest/gtest.h>
#include <vector> // 確保包含 vector

using std::vector;

/*
Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]


Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

TEST(LeetCode238, Example1)
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> expected = {24, 12, 8, 6};
    EXPECT_EQ(sol.productExceptSelf(nums), expected);
}

TEST(LeetCode238, Example2)
{
    Solution sol;
    vector<int> nums = {-1, 1, 0, -3, 3};
    vector<int> expected = {0, 0, 9, 0, 0};
    EXPECT_EQ(sol.productExceptSelf(nums), expected);
}
