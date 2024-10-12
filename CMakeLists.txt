cmake_minimum_required(VERSION 3.29)
project(cp)

set(CMAKE_CXX_STANDARD 14)

add_executable(cp
        basics/bitwise/main.cpp
        basics/bitwise/brute_force_sum_numbers.cpp)
