cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")


set(CUSTOM_PROJECT_NAME "main")

project(${CUSTOM_PROJECT_NAME})

set(SRC_LIST src/main.cpp src/Two.cpp)

message(STATUS "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")

include_directories(include)

add_executable(${CUSTOM_PROJECT_NAME} ${SRC_LIST})