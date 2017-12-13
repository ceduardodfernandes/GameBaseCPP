//
// Created by Russell Templet on 11/26/17.
//

#include <iostream>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "util/data/DataGridBuilder.h"
#include "util/data/ObjectGridBuilder.h"
#include "tests/test_data_read.h"

namespace test_data_read {

    //TODO: this code might be reusible, so maybe we can put it in it's own class or something
    AreaBlock constructAreaBlock(const std::string& blockData) {
        std::vector<std::string> results;
        boost::split(results, blockData, [](char c) {return c == ',';});

        AreaBlock areaBlock;


        return AreaBlock();
    }

    int run() {

        std::cout << "Used test data read version!\n";

        const char* delimiter = std::string("|").c_str();
        DataGridBuilder dataGridBuilder("/Users/russelltemplet/Workstation/GameBaseCPP/resources/test/test_out.txt", 5, 5, delimiter);
        dataGridBuilder.build();
        Grid<std::string> grid = dataGridBuilder.getDataGrid();

        ObjectGridBuilder objectGridBuilder(&grid, 3, 3, 0, 0, constructAreaBlock);
        objectGridBuilder.build();



        std::cout << "got it!\n";


        return 0;
    }
}