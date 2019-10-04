cmake_minimum_required(VERSION 3.13)
project(C_Vector C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Vector main.c clib1.c c_vector.c c_vector.h)