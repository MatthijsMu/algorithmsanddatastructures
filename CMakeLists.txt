cmake_minimum_required(VERSION 3.25)
project(algorithmsanddatastructures)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(algorithmsanddatastructures
        stack.cpp
        stack.h queue.cpp)
