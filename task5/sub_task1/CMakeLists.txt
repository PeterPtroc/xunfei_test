cmake_minimum_required(VERSION 3.10)

project(vectorTask VERSION 1.0)

add_library(Vector STATIC Vector.cpp)
add_executable(vector_add main.cpp)

target_link_libraries(vector_add PRIVATE Vector)

target_compile_options(vector_add PRIVATE -Wall)
