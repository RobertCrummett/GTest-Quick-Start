cmake_minimum_required(VERSION 3.29)

project(gtest_example LANGUAGES CXX)

# Main target, without testing
set(TARGET run)
add_executable(${TARGET} main.cpp factorial.hpp)

# Test the dependency `factorial.hpp`
find_package(GTest REQUIRED)

set(TEST_TARGET test)
add_executable(${TEST_TARGET} factorial_test.cpp factorial.hpp)

target_link_libraries(${TEST_TARGET} GTest::gtest GTest::gtest_main)
