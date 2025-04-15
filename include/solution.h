#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <algorithm>
#include <unordered_map>

// 避免在 header 中使用 using namespace std;
// 直接使用 std::vector 會更安全
namespace quicksort {
    class Solution {
        public:
            std::vector<int> quickSort(const std::vector<int>& nums);

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

namespace leetcode242 {
    class Solution {
        public:
            bool isAnagram(std::string s, std::string t);
            bool isAnagramSort(std::string s, std::string t);
            bool isAnagramVector(std::string s, std::string t);
            bool isAnagramHash(std::string s, std::string t);
            bool isAnagramCount(std::string s, std::string t);
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

namespace leetcode518 {
    class Solution {
        public:
            int change(int amount, std::vector<int>& coins);
    };
}
#endif // SOLUTION_H