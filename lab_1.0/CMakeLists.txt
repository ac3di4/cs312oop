cmake_minimum_required(VERSION 3.0)
project(lab01)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")

add_executable(lab main.cpp matrix.cpp matrix.hpp)
