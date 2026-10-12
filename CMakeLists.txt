cmake_minimum_required(VERSION 4.0)
project(ToDOlist)

set(CMAKE_CXX_STANDARD 20)

add_executable(ToDOlist main.cpp
        task.cpp
        task.h
        verwaltung.cpp
        verwaltung.h
        Befehle.cpp
        Befehle.h)
