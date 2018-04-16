cmake_minimum_required(VERSION 3.8)
project(enableif)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp enable_if.hpp)
add_executable(enableif ${SOURCE_FILES})