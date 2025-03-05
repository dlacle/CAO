cmake_minimum_required(VERSION 3.30)
project(lab2)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab2 main.cpp
        registers.cpp registers.h program.h program.cpp simulator.h simulator.cpp)
