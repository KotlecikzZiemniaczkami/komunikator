cmake_minimum_required(VERSION 3.24)
project(kompilator)

set(CMAKE_CXX_STANDARD 17)

add_executable(kompilator main.cpp message.cpp message.h user.cpp user.h)
