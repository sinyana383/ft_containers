cmake_minimum_required(VERSION 3.22)
project(lunch)

set(CMAKE_CXX_STANDARD 98)

add_executable(lunch stack/Stack.hpp stack/main.cpp)