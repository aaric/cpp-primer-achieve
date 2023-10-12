cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

project(cpp-primer-achieve VERSION 1.0.0)

# set(DCMAKE_BUILD_TYPE Debug)
# set(CMAKE_INSTALL_PREFIX "E://test_cpp")
set(SRC_LIST src/main.cpp src/Two.cpp
        include/ch02_command_line_parameters.h
        include/ch03_class.h
        include/ch04_string.h
        include/ch05_auto_decltype.h
        include/ch06_vector.h
        include/ch07_parameter_initialization_list.h)

message(STATUS "CMAKE_PROJECT_NAME: ${CMAKE_PROJECT_NAME}")
message(STATUS "CMAKE_PROJECT_VERSION: ${CMAKE_PROJECT_VERSION}")
message(STATUS "CMAKE_INSTALL_PREFIX: ${CMAKE_INSTALL_PREFIX}")
message(STATUS "PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message(STATUS "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")

include_directories(include)

add_executable(${CMAKE_PROJECT_NAME} ${SRC_LIST})