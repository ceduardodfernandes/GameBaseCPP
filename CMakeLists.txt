cmake_minimum_required(VERSION 3.5)
project(GameBaseCPP)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCE_FILES src/main.cpp src/model/entity/GameObject.cpp src/model/entity/Block.cpp include/model/entity/GameObject.h include/model/entity/Block.h include/util/file/GameDataReader.h src/util/file/GameDataReader.cpp)
add_executable(GameBaseCPP ${SOURCE_FILES})