#include "solution.h"
#include <gtest/gtest.h>
#include <vector> // 確保包含 vector

using std::vector;
/*
Example 1:
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

Example 2:
Input: nums = [1], k = 1
Output: [1]
 

Constraints:
1 <= nums.length <= 105
-104 <= nums[i] <= 104
k is in the range [1, the number of unique elements in the array].
It is guaranteed that the answer is unique.
*/
TEST(LeetCode347, Example1)
{
    Solution sol;
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> expected = {1, 2};
    EXPECT_EQ(sol.topKFrequent(nums, k), expected);
}

TEST(LeetCode347, Example2)
{
    Solution sol;
    vector<int> nums = {1};
    int k = 1;
    vector<int> expected = {1};
    EXPECT_EQ(sol.topKFrequent(nums, k), expected);
}