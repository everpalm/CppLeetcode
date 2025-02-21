/*
給定一個整數陣列 nums 和一個非負整數 k，請將陣列向右旋轉 k 個位置，要求時間複雜度為 O(n) 且在空間上使用原地演算法（in-place）。
輸入: nums = [1,2,3,4,5,6,7], k = 3  
輸出: [5,6,7,1,2,3,4]
*/
#include "rotate_array.h" 
#include <iostream>
// #include <vector>
#include <algorithm>
using namespace std;

void Solution::rotate(vector<int>& nums, int k) {
    int n = nums.size();
    if(n == 0 || k == 0) return;
    k %= n;  // 當 k >= n 時取餘數
    // 1. 反轉整個陣列
    reverse(nums.begin(), nums.end());
    // 2. 反轉前 k 個元素
    reverse(nums.begin(), nums.begin() + k);
    // 3. 反轉剩餘的元素
    reverse(nums.begin() + k, nums.end());
}

#ifndef UNIT_TEST
int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);
    

    cout << "rotated array = ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
#endif


