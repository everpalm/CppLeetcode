cmake_minimum_required(VERSION 3.10)
project(CppLeetcode)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    test_suite
    # "0. Array and String/leetcode238.cpp"
    # "Test/test_leetcode238.cpp"
    # "14. Quick Sort/pivot.cpp"
    # "Test/test_pivot.cpp"
    # "23. 2-D Dynamic Programming/leetcode309.cpp"
    # "Test/test_leetcode309.cpp"
    # "4. HashTable/leetcode1.cpp"
    # "Test/test_leetcode1.cpp"
    "4. HashTable/leetcode347.cpp"
    "Test/test_leetcode347.cpp"
)
# )

target_link_libraries(test_suite gtest gtest_main)

target_include_directories(test_suite PRIVATE ${CMAKE_SOURCE_DIR}/include)

add_test(NAME test_suite COMMAND test_suite)
