#ifndef LEETCODE238_H
#define LEETCODE238_H

#include <vector>

// 避免在 header 中使用 using namespace std;
// 直接使用 std::vector 會更安全
class Solution {
public:
    std::vector<int> productExceptSelf(const std::vector<int>& nums);
};

#endif // LEETCODE238_H