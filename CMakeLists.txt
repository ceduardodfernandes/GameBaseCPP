cmake_minimum_required(VERSION 3.5)
project(GameBaseCPP)

set(CMAKE_CXX_STANDARD 11)

# get_cmake_property(_variableNames VARIABLES)
# list(SORT _variableNames)
# foreach(_variableName ${_variableNames})
#        message(STATUS "${_variableName}=${${_variableName}}")
# endforeach()

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SYSTEM_PREFIX_PATH}/FindSDL2.cmake")

message(STATUS "CMAKE_SYSTEM_PREFIX_PATH=${CMAKE_SYSTEM_PREFIX_PATH}")
message(STATUS "SDL2_FOUND=${SDL2_FOUND}")

find_package(SDL2 REQUIRED)
include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/lib/include)

message(STATUS "SDL2_INCLUDE_DIR=${SDL2_INCLUDE_DIR}")

set(HEADER_FILES
        include/model/entity/test/Dog.h
        include/model/entity/test/Milk.h
        include/model/entity/test/Person.h
        include/model/entity/Block.h
        include/model/entity/Entity.h
        include/util/data/Grid.tpp
        include/util/data/DataGridBuilder.h
        include/util/data/ObjectGridBuilder.h
        include/tests/sdl_test.h
        )

set(SOURCE_FILES
        src/model/entity/test/Dog.cc
        src/model/entity/test/Milk.cc
        src/model/entity/test/Person.cc
        src/model/entity/Block.cc
        src/model/entity/Entity.cc
        src/util/data/DataGridBuilder.cc
        src/util/data/ObjectGridBuilder.cc
        src/main.cc
        src/tests/sdl_test.cc
        )

add_executable(GameBaseCPP ${HEADER_FILES} ${SOURCE_FILES})
target_link_libraries(GameBaseCPP ${CMAKE_SOURCE_DIR}/lib/libEASTL.a ${SDL2_LIBRARY})
