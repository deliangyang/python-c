cmake_minimum_required(VERSION 3.13)
project(py_add C)

set(CMAKE_C_STANDARD 11)

include_directories(. C:/Python27/include)

link_libraries("C:/Python27/libs/libpython27.a")

add_executable(py_add
        main.c)
