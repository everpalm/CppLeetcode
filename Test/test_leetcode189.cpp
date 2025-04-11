// tests/test_rotate_array.cpp
#include "solution.h"
#include <gtest/gtest.h>
#include <vector>

// 若有提供 header，建議用#include "rotate_array.h"
// 這裡直接宣告 rotate 函數原型：
// void rotate(std::vector<int>& nums, int k);
using std::vector;
using leetcode189::Solution;

TEST(LeetCode189, Example1) {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    sol.rotate(nums, k);
    vector<int> expected = {5, 6, 7, 1, 2, 3, 4};
    EXPECT_EQ(nums, expected);
}

TEST(LeetCode189, Example2) {
    Solution sol;
    vector<int> nums;
    int k = 3;
    sol.rotate(nums, k);
    vector<int> expected;
    EXPECT_EQ(nums, expected);
}

TEST(LeetCode189, Example3) {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 7; // 7 % 5 = 2
    sol.rotate(nums, k);
    vector<int> expected = {4, 5, 1, 2, 3};
    EXPECT_EQ(nums, expected);
}
