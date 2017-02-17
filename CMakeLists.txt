cmake_minimum_required(VERSION 3.6)
project(coins)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp coins.cpp)
add_executable(coins ${SOURCE_FILES})