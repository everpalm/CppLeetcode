#include "solution.h"
#include <gtest/gtest.h>
#include <vector> // 確保包含 vector
#include <algorithm> // 確保包含 algorithm

using std::vector;
using quicksort::Solution;
// 測試：對一個無序的 vector 進行排序
TEST(QuickSortTest, SortsUnsortedVector) {
    Solution sol;
    std::vector<int> input = {4, 6, 1, 7, 3, 2, 5};
    std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> output = sol.quickSort(input);
    EXPECT_EQ(output, expected);
}

// 測試：對空 vector 進行排序
TEST(QuickSortTest, HandlesEmptyVector) {
    Solution sol;
    std::vector<int> input = {};
    std::vector<int> expected = {};
    std::vector<int> output = sol.quickSort(input);
    EXPECT_EQ(output, expected);
}

// 測試：對已排序的 vector 進行排序（保持不變）
TEST(QuickSortTest, AlreadySorted) {
    Solution sol;
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> expected = {1, 2, 3, 4, 5};
    std::vector<int> output = sol.quickSort(input);
    EXPECT_EQ(output, expected);
}

// 測試：對逆序排列的 vector 進行排序
TEST(QuickSortTest, ReverseSorted) {
    Solution sol;
    std::vector<int> input = {5, 4, 3, 2, 1};
    std::vector<int> expected = {1, 2, 3, 4, 5};
    std::vector<int> output = sol.quickSort(input);
    EXPECT_EQ(output, expected);
}
