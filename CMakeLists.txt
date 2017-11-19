cmake_minimum_required(VERSION 3.8)
project(GameBaseCPP)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCE_FILES src/main.cpp src/model/GameObject.cpp src/model/Block.cpp include/model/GameObject.h include/model/Block.h)
add_executable(GameBaseCPP ${SOURCE_FILES})