cmake_minimum_required(VERSION 3.29)
project(Pointers)

set(CMAKE_CXX_STANDARD 14)

add_executable(Pointers
    main.cpp
        problem1.cpp
        problem6.cpp
        problem7.cpp)
add_executable(problem1 problem1.cpp)
add_executable(problem6 problem6.cpp)
add_executable(problem7 problem7.cpp)
