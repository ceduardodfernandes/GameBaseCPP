cmake_minimum_required(VERSION 3.5)
project(GameBaseCPP)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/lib/include)

file(GLOB GameBaseCPP_SRC "*.h" "*.cpp")

add_executable(GameBaseCPP ${GameBaseCPP_SRC})

target_link_libraries(GameBaseCPP ${CMAKE_SOURCE_DIR}/lib/libEASTL.a)