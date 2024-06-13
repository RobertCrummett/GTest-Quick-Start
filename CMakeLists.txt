cmake_minimum_required(VERSION 3.29)

project(gtest_example LANGUAGES CXX)

find_package(GTest REQUIRED)
set(TARGET run)
add_executable(${TARGET} main.cpp)
target_link_libraries(${TARGET} gtest::gtest)
