#include "solution.h"
#include <iostream>

namespace leetcode309 {
    // 使用 std::vector<int> 來儲存整數陣列
    // 使用 std::vector<int> 來儲存答案陣列
    // 使用 std::cout 來輸出結果
    int Solution::maxProfit(std::vector<int>& prices) {
        int n = prices.size();
        std::vector<int> hold(n, 0);
        std::vector<int> sold(n, 0);
        std::vector<int> cooldown(n, 0);

        hold[0] = -prices[0];
        sold[0] = 0;
        cooldown[0] = 0;

        for (int i = 1; i < n; i++) {
            hold[i] = std::max(hold[i - 1], cooldown[i - 1] - prices[i]);
            sold[i] = hold[i - 1] + prices[i];
            cooldown[i] = std::max(cooldown[i - 1], sold[i - 1]);
        }
        return std::max(sold[n - 1], cooldown[n - 1]);
    }
}