#include "leetcode238.h"
#include <iostream>
// using namespace std;

std::vector<int> Solution::productExceptSelf(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> answer(n, 1);
    // cout << "Initial answer values: ";
    // for (int val : answer) {
    //     cout << val << " ";
    // }
    // cout << endl;

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
    
    return answer;
}

// #ifndef UNIT_TEST
// int main() {
//     Solution sol;
//     vector<int> nums = {1, 2, 3, 4};
//     vector<int> result = sol.productExceptSelf(nums);

//     cout << "Result: ";
//     for (int val : result) {
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }
// #endif
