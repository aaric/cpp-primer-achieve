cmake_minimum_required(VERSION 3.10)

project(main)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_LIST src/main.cpp src/func.cpp)

add_executable(main ${SRC_LIST})