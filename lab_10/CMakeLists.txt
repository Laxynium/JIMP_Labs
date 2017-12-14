cmake_minimum_required(VERSION 3.8)
project(lab_10)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c GenericList.h GenericList.c)
add_executable(lab_10 ${SOURCE_FILES})