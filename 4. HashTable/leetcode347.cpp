/*
347. Top K Frequent Elements
Medium

Topics
Companies
Given an integer array nums and an integer k, return the k most frequent
elements. You may return the answer in any order.

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
 

Follow up: Your algorithm's time complexity must be better than O(n log n),
where n is the array's size.
*/
#include "solution.h"
#include <iostream>

namespace leetcode347 {
    // 使用 std::vector<int> 來儲存整數陣列
    // 使用 std::unordered_map<int, int> 來儲存頻率
    // 使用 std::vector<std::vector<int>> 來儲存桶排序的結果
    // 使用 std::cout 來輸出結果
    std::vector<int> Solution::topKFrequent(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        std::vector<std::vector<int>> bucket(nums.size() + 1);
        for (const auto& kv : freq) {
            bucket[kv.second].push_back(kv.first);
            std::cout << "bucket[" << kv.second << "] = " << kv.first << std::endl;
        }

        std::vector<int> result;
        std::cout << "bucket.size() = " << bucket.size() << std::endl;
        for (int i = bucket.size() - 1; i >= 0 && result.size() < target; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == target) {
                    break;
                }
            }
        }
        
        return result;
    }

    std::vector<int> Solution::standardSort(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        // 將 (數字, 頻率) 存入 vector
        std::vector<std::pair<int, int>> freq_vec(freq.begin(), freq.end());

        std::sort(freq_vec.begin(), freq_vec.end(), [](
            const std::pair<int, int>& a, const std::pair<int, int>& b
        ) {
            return a.second > b.second; // 依照頻率由大到小排序
        });
        
        std::vector<int> result;
        for (int i = 0; i < target; ++i) {
            result.push_back(freq_vec[i].first);
        }
        
        return result;
    }
}
