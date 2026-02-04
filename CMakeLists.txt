cmake_minimum_required(VERSION 3.15)

project(unit-converter)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(unit-converter
    src/main.cpp
    src/Mass.cpp
    src/Length.cpp
    src/CsvHandler.cpp
)