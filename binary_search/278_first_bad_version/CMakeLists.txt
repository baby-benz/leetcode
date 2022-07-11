cmake_minimum_required(VERSION 3.20)
project(first_bad_version C)

set(CMAKE_C_STANDARD 11)

add_executable(first_bad_version main.c search.c search.h)
