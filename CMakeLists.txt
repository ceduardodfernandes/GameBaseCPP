cmake_minimum_required(VERSION 3.5)
project(GameBaseCPP)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCE_FILES src/main.cpp src/model/entity/GameObject.cpp src/model/entity/Block.cpp include/model/entity/GameObject.h include/model/entity/Block.h include/util/data/DataGridBuilder.h src/util/data/DataGridBuilder.cpp include/util/data/ObjectGridBuilder.h src/util/data/ObjectGridBuilder.cpp include/util/data/DataGrid.h src/util/data/DataGrid.cpp src/tests/test_data_read.cpp src/model/entity/test/Person.cpp include/model/entity/test/Person.h src/model/entity/test/Milk.cpp include/model/entity/test/Milk.h src/model/entity/test/Dog.cpp include/model/entity/test/Dog.h src/tests/test_write_data_example.cpp)
add_executable(GameBaseCPP ${SOURCE_FILES})