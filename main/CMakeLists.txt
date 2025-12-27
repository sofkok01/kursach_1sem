cmake_minimum_required(VERSION 4.0)
project(main)

set(CMAKE_CXX_STANDARD 20)

include_directories(
        /Users/maksimkokotkin/Documents/unified_labs/lab1
        /Users/maksimkokotkin/Documents/unified_labs/lab2
        /Users/maksimkokotkin/Documents/unified_labs/lab3
        /Users/maksimkokotkin/Documents/unified_labs/lab4
)

add_executable(main
        main.cpp
        /Users/maksimkokotkin/Documents/unified_labs/lab1/lab1.cpp
        /Users/maksimkokotkin/Documents/unified_labs/lab2/lab2.cpp
        /Users/maksimkokotkin/Documents/unified_labs/lab3/lab3.cpp
        /Users/maksimkokotkin/Documents/unified_labs/lab4/lab4.cpp
)