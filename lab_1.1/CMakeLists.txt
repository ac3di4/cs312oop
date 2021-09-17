cmake_minimum_required(VERSION 3.0)
project(lab01)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")

# Setup testing
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})
add_executable(unit_tests tests.cpp Deltoid.hpp)

# Link test executable against gtest & gtest_main
target_link_libraries(unit_tests gtest gtest_main)
add_test(unit_tests unit_tests)

add_executable(lab main.cpp Deltoid.hpp)
