cmake_minimum_required(VERSION 3.20)
project(binary_search C)

set(CMAKE_C_STANDARD 11)

add_executable(binary_search main.c search.c search.h)
