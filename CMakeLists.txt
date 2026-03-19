cmake_minimum_required(VERSION 4.1)
project(Arreglos_y_Matrices)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Arreglos_y_Matrices
        Arreglos.cpp
        Arreglos.h
        Matrices.cpp
        Matrices.h)
