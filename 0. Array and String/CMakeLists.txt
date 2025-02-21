cmake_minimum_required(VERSION 3.10)
project(LinkedList)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. 建立一個靜態庫來包含 rotate() 定義
# add_library(rotate_array_lib "1. LinkedList/rotate_array.cpp")
# 若你的 rotate_array.cpp 裡面有 main()，請用條件編譯來排除它，例：
# 在 rotate_array.cpp 中包圍 main() 的部分：
#   #ifndef UNIT_TEST
#   int main() { ... }
#   #endif
# 並在這裡不定義 UNIT_TEST，讓庫只包含 rotate() 定義

# 2. 建立產品執行檔，連結剛才的庫
add_executable(rotate_array "1. LinkedList/rotate_array.cpp")
# add_executable(check_vector "1. LinkedList/check_vector.cpp")
# 或者，如果產品執行檔需要 main()，你可以直接編譯一個獨立的檔案

# 3. 引入 FetchContent 模組下載 Google Test
# include(FetchContent)
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/release-1.12.1.zip
# )
# FetchContent_MakeAvailable(googletest)

# # 4. 建立測試目標，不直接包含 rotate_array.cpp，而是連結前面建立的庫
# add_executable(test_rotate_array tests/test_rotate_array.cpp)
# # 定義 UNIT_TEST 使 rotate_array.cpp 裡的 main() 不被編譯進來（如果有的話）
# target_compile_definitions(test_rotate_array PRIVATE UNIT_TEST)
# # 連結產品庫以及 Google Test 庫
# target_link_libraries(test_rotate_array PRIVATE rotate_array_lib GTest::gtest GTest::gtest_main)

# # 5. 啟用測試
# enable_testing()
# add_test(NAME TestRotateArray COMMAND test_rotate_array)
