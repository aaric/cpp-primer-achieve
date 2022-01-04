cmake_minimum_required(VERSION 2.8.12)

if (POLICY CMP0048)
  cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

project(main VERSION 0.4.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_LIST src/main.cpp src/func.cpp)

add_executable(main ${SRC_LIST})