/*
238. Product of Array Except Self
Medium

Topics
Companies

Hint
Given an integer array nums, return an array answer such that answer[i] is
equal to the product of all the elements of nums except nums[i].
[1, 2, 3] --> [1, 2, 3, 6] --> [6]
[1, 2, 3, 4] --> [1, 2, 3, 4, 6, 8, 12, 24] --> [6, 8 , 12, 24]

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit
integer.

You must write an algorithm that runs in O(n) time and without using the
division operation.

 
Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]


Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 

Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Note:
 1  [1] [2] [3]
[0]  1  [2] [3]
[0] [1]  1  [3]
[0] [1] [2]  1
^^^^^^^^^^ start out with the left side
answer[0] = 1
answer[1] = answer[0] * num[0] = 1 * 1
answer[2] = answer[1] * num[1] = 1 * 2
answer[3] = answer[2] * num[2] = 2 * 3
*/
#include "solution.h"
#include <iostream>
// using namespace std;

std::vector<int> Solution::productExceptSelf(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> answer(n, 1);
    std::cout << "Initial answer values: " << std::endl;
    for (const auto& val : answer) {
        std::cout << "answer = " << val << std::endl;
    }
    std::cout << std::endl;

    // 計算左側乘積
    // answer[i] 儲存的是索引 i 左邊所有元素的乘積
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // 用變數 right 來儲存右側乘積，初始值為 1
    int right = 1;
    // 從右往左遍歷，累積右側乘積並更新答案
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= right;
        right *= nums[i];
    }

    std::cout << "Resulting answer values: " << std::endl;
    for (const auto& val : answer) {
        std::cout << "answer = " << val << std::endl;
    }
    std::cout << std::endl;
    return answer;
}
