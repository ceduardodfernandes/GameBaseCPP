cmake_minimum_required(VERSION 3.5)
project(GameBaseCPP)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(HEADER_FILES
        include/model/entity/test/Dog.h
        include/model/entity/test/Milk.h
        include/model/entity/test/Person.h
        include/model/entity/Block.h
        include/model/entity/GameObject.h
        include/util/data/DataGrid.h
        include/util/data/DataGridBuilder.h
        include/util/data/ObjectGridBuilder.h
        include/tests/test_data_read.h
        include/tests/test_write_data_example.h
        )

set(SOURCE_FILES
        src/model/entity/test/Dog.cpp
        src/model/entity/test/Milk.cpp
        src/model/entity/test/Person.cpp
        src/model/entity/Block.cpp
        src/model/entity/GameObject.cpp
        src/util/data/DataGrid.cpp
        src/util/data/DataGridBuilder.cpp
        src/util/data/ObjectGridBuilder.cpp
        src/main.cpp
        src/tests/test_data_read.cpp
        src/tests/test_write_data_example.cpp
        )

add_executable(GameBaseCPP ${HEADER_FILES} ${SOURCE_FILES})