cmake_minimum_required(VERSION 3.8)
project(lab_9)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c Table.h Table.c SmartString.h SmartString.c)
add_executable(lab_9 ${SOURCE_FILES})