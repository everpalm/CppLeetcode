/*
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false
*/
#include "solution.h"
#include <gtest/gtest.h>
#include <vector> // 確保包含 vector

using std::string;
using leetcode242::Solution;

TEST(LeetCode242, Example1)
{
    Solution sol;
    string s = "anagram";
    string t = "nagaram";
    bool expected = true;
    EXPECT_EQ(sol.isAnagram(s, t), expected);
    EXPECT_EQ(sol.isAnagramSort(s, t), expected);
    EXPECT_EQ(sol.isAnagramVector(s, t), expected);
    EXPECT_EQ(sol.isAnagramHash(s, t), expected);
    EXPECT_EQ(sol.isAnagramCount(s, t), expected);
}

TEST(LeetCode242, Example2)
{
    Solution sol;
    string s = "rat";
    string t = "car";
    bool expected = false;
    EXPECT_EQ(sol.isAnagram(s, t), expected);
    EXPECT_EQ(sol.isAnagramSort(s, t), expected);
    EXPECT_EQ(sol.isAnagramVector(s, t), expected);
    EXPECT_EQ(sol.isAnagramHash(s, t), expected);
    EXPECT_EQ(sol.isAnagramCount(s, t), expected);
}