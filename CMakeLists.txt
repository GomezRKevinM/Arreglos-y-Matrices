cmake_minimum_required(VERSION 4.1)
project(Arreglos_y_Matrices VERSION 1.0 LANGUAGES CXX)

add_executable(Arreglos_y_Matrices
        Kevin/C++/Main.cpp
        Kevin/C++/Arreglos.cpp
        Kevin/C++/Matrices.cpp
)

target_compile_features(Arreglos_y_Matrices PRIVATE cxx_std_20)
target_include_directories(Arreglos_y_Matrices PRIVATE Kevin/C++)