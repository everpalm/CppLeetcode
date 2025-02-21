#include "leetcode238.h"
#include <gtest/gtest.h>
#include <vector> // 確保包含 vector

using std::vector;

TEST(ProductExceptSelfTest, BasicTest)
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> expected = {24, 12, 8, 6};
    EXPECT_EQ(sol.productExceptSelf(nums), expected);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
