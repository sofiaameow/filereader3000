cmake_minimum_required(VERSION 3.20)

project(MyProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(MyProject
    src/main.cpp
    src/readfile.cpp
)

target_include_directories(MyProject PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)
