cmake_minimum_required(VERSION 4.1)
project(HackStack)

set(CMAKE_CXX_STANDARD 26)

add_executable(HackStack main.cpp
        "divideTwoIntegers.cpp"
        algorithms.h
        bigO.cpp)
