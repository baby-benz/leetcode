cmake_minimum_required(VERSION 3.20)
project(994_rotting_oranges C)

set(CMAKE_C_STANDARD 11)

add_executable(994_rotting_oranges main.c oranges_rotting.c oranges_rotting.h queue.c queue.h)
