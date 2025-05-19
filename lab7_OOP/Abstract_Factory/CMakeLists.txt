cmake_minimum_required(VERSION 3.30)
project(Abstract_Factory)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Abstract_Factory
    Func.cpp
    Func.h
    main.cpp)
