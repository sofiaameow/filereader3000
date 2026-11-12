cmake_minimum_required(VERSION 3.20)

project(filereader3000 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(filereader3000
    src/main.cpp
    src/readfile.cpp
)

target_include_directories(filereader3000 PRIVATE include)

target_link_libraries(filereader3000 PRIVATE stdc++exp)
