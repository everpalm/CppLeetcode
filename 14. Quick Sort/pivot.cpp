#include "solution.h"
#include <iostream>

namespace quicksort {
    // partition 函數：以 arr[high] 為 pivot，將區間分成小於或等於 pivot 和大於 pivot 的兩部分
int Solution::partition(std::vector<int>& arr, int low, int high) {
        int pivot = arr[high];  // 選擇 pivot 為最後一個元素
        int i = low - 1;        // i 為小於 pivot 區域的最後一個索引
        for (int j = low; j < high; ++j) {
            if (arr[j] <= pivot) {
                ++i;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);
        return i + 1;
    }

    // quickSortHelper：遞迴排序 arr 中區間 [low, high]
    void Solution::quickSortHelper(std::vector<int>& arr, int low, int high) {
        if (low < high) {
            int pivotIndex = partition(arr, low, high);
            quickSortHelper(arr, low, pivotIndex - 1);
            quickSortHelper(arr, pivotIndex + 1, high);
        }
    }

    // quickSort：公開介面，接收 const vector 並返回排序後的結果
    std::vector<int> Solution::quickSort(const std::vector<int>& nums) {
        // 建立一份拷貝以進行就地排序
        std::vector<int> arr = nums;
        if (!arr.empty()) {
            quickSortHelper(arr, 0, arr.size() - 1);
        }
        return arr;
    }
}

