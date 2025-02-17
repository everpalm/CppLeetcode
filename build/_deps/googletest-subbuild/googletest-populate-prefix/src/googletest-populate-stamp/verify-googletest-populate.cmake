# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

if("<https://github.com/google/googletest/archive/release-1.12.1.zip>" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if(NOT EXISTS "<https://github.com/google/googletest/archive/release-1.12.1.zip>")
  message(FATAL_ERROR "File not found: <https://github.com/google/googletest/archive/release-1.12.1.zip>")
endif()

if("" STREQUAL "")
  message(WARNING "File cannot be verified since no URL_HASH specified")
  return()
endif()

if("" STREQUAL "")
  message(FATAL_ERROR "EXPECT_VALUE can't be empty")
endif()

message(VERBOSE "verifying file...
     file='<https://github.com/google/googletest/archive/release-1.12.1.zip>'")

file("" "<https://github.com/google/googletest/archive/release-1.12.1.zip>" actual_value)

if(NOT "${actual_value}" STREQUAL "")
  message(FATAL_ERROR "error:  hash of
  <https://github.com/google/googletest/archive/release-1.12.1.zip>
does not match expected value
  expected: ''
    actual: '${actual_value}'
")
endif()

message(VERBOSE "verifying file... done")
