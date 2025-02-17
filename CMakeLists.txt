cmake_minimum_required(VERSION 3.10)
project(CppLeetcode)

set(CMAKE_CXX_STANDARD 11)

# Target product
# add_executable(CppLeetcode main.cpp)
add_executable(rotate_array "1. LinkedList/rotate_array.cpp")

# 引入 FetchContent 模組
include(FetchContent)
# 設定下載 Google Test（這裡以 release-1.12.1 為例，可根據需要調整版本）
FetchContent_Declare(
  googletest
  URL <https://github.com/google/googletest/archive/release-1.12.1.zip>
)

# # 下載並建置 Google Test
# FetchContent_MakeAvailable(googletest)

# # 將 Google Test 加入到專案中
# add_executable(test_rotate_array tests/test_rotate_array.cpp)

# # 設定測試
# target_link_libraries(test_rotate_array PRIVATE gtest gtest_main)

# enable_testing()
# add_test(NAME TestRotateArray COMMAND test_rotate_array)
