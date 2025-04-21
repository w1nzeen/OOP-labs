cmake_minimum_required(VERSION 3.30)
project(Lab3_OOP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab3_OOP
        Func.cpp
        Func.h
    main.cpp)
