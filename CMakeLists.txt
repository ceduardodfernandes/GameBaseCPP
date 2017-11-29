cmake_minimum_required(VERSION 3.5)
project(GameBaseCPP)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(GameBaseCPP ${PROJECT_SOURCE_DIR}/src/main.cpp)