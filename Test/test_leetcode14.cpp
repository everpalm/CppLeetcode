#include "solution.h"
#include <gtest/gtest.h>
#include <vector> // 確保包含 vector
#include <string>
/*
Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""

Example 3:
Input: strs = ["ab","a"]
Output: "a"
*/
using std::vector;
using std::string;
using leetcode14::Solution;

TEST(LeetCode14, Example1)
{
    Solution sol;
    vector<string> strs = {"flower", "flow", "flight"};
    string expected = "fl";
    EXPECT_EQ(sol.longestCommonPrefix(strs), expected);
}

TEST(LeetCode14, Example2)
{
    Solution sol;
    vector<string> strs = {"dog", "rececar", "car"};
    string expected = "";
    EXPECT_EQ(sol.longestCommonPrefix(strs), expected);
}

TEST(LeetCode14, Example3)
{
    Solution sol;
    vector<string> strs = {"ab", "a"};
    string expected = "a";
    EXPECT_EQ(sol.longestCommonPrefix(strs), expected);
}