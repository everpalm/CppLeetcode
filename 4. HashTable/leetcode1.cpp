/*
1. Two Sum
Solved
Easy

Topics
Companies

Hint
Given an array of integers nums and an integer target, return indices of the
two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may
not use the same element twice.

You can return the answer in any order.

 
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time
complexity?
*/
#include "solution.h"
#include <iostream>

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> buffer;  // Hash map to store value:index pairs
    
    for (int key = 0; key < nums.size(); key++) {
        int value = nums[key];
        int complement = target - value;
        
        // Check if complement exists in the hash map
        if (buffer.find(complement) != buffer.end()) {
            return {buffer[complement], key};  // Return vector with both indices
        }
        
        buffer[value] = key;  // Store current value and its index
    }
    
    return {};  // Return empty vector if no solution is found
}
