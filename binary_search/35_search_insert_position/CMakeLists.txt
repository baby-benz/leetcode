cmake_minimum_required(VERSION 3.20)
project(search_insert_position C)

set(CMAKE_C_STANDARD 11)

add_executable(search_insert_position main.c search.c search.h)
