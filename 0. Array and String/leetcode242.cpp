/*
242. Valid Anagram
Solved
Easy

Topics
Companies
Given two strings s and t, return true if t is an anagram of s, and false
otherwise.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false

 
Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/
#include "solution.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>


namespace leetcode242 {
    // 使用 std::unordered_map<char, int> 來儲存字元和其出現次數
    // 使用 std::string 來儲存字串
    // 使用 std::cout 來輸出結果
    bool Solution::isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }
        std::unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }
        for (char c : t) {
            if (charCount.find(c) == charCount.end()) {
                return false;
            }
            charCount[c]--;
            if (charCount[c] == 0) {
                charCount.erase(c);
            }
        }
        return charCount.empty();
    }
    // 使用 std::sort 來排序字串
    // 使用 std::string 來儲存字串
    // 使用 std::cout 來輸出結果
    bool Solution::isAnagramSort(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        return s == t;
    }
    // 使用 std::vector<int> 來儲存字元的 ASCII 值
    // 使用 std::string 來儲存字串
    // 使用 std::cout 來輸出結果
    bool Solution::isAnagramVector(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }
        std::vector<int> charCount(26, 0);
        for (char c : s) {
            charCount[c - 'a']++;
        }
        for (char c : t) {
            charCount[c - 'a']--;
            if (charCount[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
    // 使用 std::cout 來輸出結果
    bool Solution::isAnagramCount(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int count[26] = {0};
        for (char c : s) {
            count[c - 'a']++;
        }
        for (char c : t) {
            count[c - 'a']--;
            if (count[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }

    bool Solution::isAnagramHash(std::string s, std::string t) {
        std::unordered_map<char, int> map_s;
        std::unordered_map<char, int> map_t;

        for (const auto& ch : s) {
            map_s[ch]++;
        }
        for (const auto& ch : t) {
            map_t[ch]++;
        }
        for (const auto& pair : map_s) {
            if (pair.second != map_t[pair.first]) return false;
        }
        if (map_t.size() != map_s.size())
            return false;
        return true;
    }
} // namespace leetcode242