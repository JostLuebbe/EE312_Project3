cmake_minimum_required(VERSION 3.6)
project(Project3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Project3.cpp header.c)
add_executable(Project3 ${SOURCE_FILES})