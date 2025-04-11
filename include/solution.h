#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <algorithm>
#include <unordered_map>

// 避免在 header 中使用 using namespace std;
// 直接使用 std::vector 會更安全
namespace quicksort {
    // 使用 std::vector 來儲存整數陣列
    // 使用 std::unordered_map 來儲存哈希表
    // 使用 std::string 來儲存字串
    class Solution {
        public:
            // std::vector<int> productExceptSelf(const std::vector<int>& nums);
            // void rotate(std::vector<int>& nums, int k);
            std::vector<int> quickSort(const std::vector<int>& nums);
            // int maxProfit(std::vector<int>& prices);
            // std::vector<int> twoSum(std::vector<int>& nums, int target);
            // std::vector<int> topKFrequent(std::vector<int>& nums, int target);
            // std::vector<int> standardSort(std::vector<int>& nums, int target);
            // std::string longestCommonPrefix(std::vector<std::string>& strs);
            // int findMaxConsecutiveOnes(std::vector<int>& nums);

        private:
            int partition(std::vector<int>& arr, int low, int high);
            void quickSortHelper(std::vector<int>& arr, int low, int high);
    };
}


namespace leetcode1 {
    class Solution {
        public:
            std::vector<int> twoSum(std::vector<int>& nums, int target);
    };
}


namespace leetcode14 {
    class Solution {
        public:
            std::string longestCommonPrefix(std::vector<std::string>& strs);
    };
}


namespace leetcode189 {
    class Solution {
        public:
            void rotate(std::vector<int>& nums, int k);
    };
}

namespace leetcode238 {
    class Solution {
        public:
            std::vector<int> productExceptSelf(const std::vector<int>& nums);
    };
}

namespace leetcode309 {
    class Solution {
        public:
            int maxProfit(std::vector<int>& prices);
    };
}

namespace leetcode347 {
    class Solution {
        public:
            std::vector<int> topKFrequent(std::vector<int>& nums, int target);
            std::vector<int> standardSort(std::vector<int>& nums, int target);
    };
}

namespace leetcode485 {
    class Solution {
        public:
            int findMaxConsecutiveOnes(std::vector<int>& nums);
    };
}
#endif // SOLUTION_H