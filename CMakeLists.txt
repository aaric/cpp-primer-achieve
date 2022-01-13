cmake_minimum_required(VERSION 3.10)

project(main)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_LIST src/main.cpp src/Two.cpp)

include_directories(include)

add_executable(main ${SRC_LIST})