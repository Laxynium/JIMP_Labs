cmake_minimum_required(VERSION 3.8)
project(lab_8)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c Complex.h Complex.c Point.h Point.c)
add_executable(lab_8 ${SOURCE_FILES})