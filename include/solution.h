#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <algorithm>
#include <unordered_map>

// 避免在 header 中使用 using namespace std;
// 直接使用 std::vector 會更安全
class Solution {
public:
    std::vector<int> productExceptSelf(const std::vector<int>& nums);
    void rotate(std::vector<int>& nums, int k);
    std::vector<int> quickSort(const std::vector<int>& nums);
    int maxProfit(std::vector<int>& prices);
    std::vector<int> twoSum(std::vector<int>& nums, int target);
    std::vector<int> topKFrequent(std::vector<int>& nums, int target);
    std::vector<int> standardSort(std::vector<int>& nums, int target);
    std::string longestCommonPrefix(std::vector<std::string>& strs);
    int findMaxConsecutiveOnes(std::vector<int>& nums);

private:
    int partition(std::vector<int>& arr, int low, int high);
    void quickSortHelper(std::vector<int>& arr, int low, int high);
};

#endif // SOLUTION_H