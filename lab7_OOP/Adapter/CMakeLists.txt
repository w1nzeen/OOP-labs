cmake_minimum_required(VERSION 3.30)
project(Adapter)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Adapter
    Func.cpp
    Func.h
    main.cpp)
