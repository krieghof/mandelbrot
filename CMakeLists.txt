cmake_minimum_required(VERSION 3.14)
project(mandelbrot C)

set(CMAKE_C_STANDARD 11)

add_executable(mandelbrot src/main.c src/mandelbrot.c src/mandelbrot.h)