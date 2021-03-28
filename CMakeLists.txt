cmake_minimum_required(VERSION 3.17)
project(number_13)

set(CMAKE_CXX_STANDARD 20)

add_executable(number_13 main.cpp)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")