//
// Created by Russell Templet on 11/26/17.
//

#include <iostream>
#include "util/data/DataGridBuilder.h"
#include "util/data/ObjectGridBuilder.h"
#include "tests/test_data_read.h"

namespace test_data_read {

    AreaBlock constructAreaBlock(const DataGrid &dataGrid, int index) {
            //... put something proper here
            return AreaBlock();
    }

    int run() {

        std::cout << "Used test data read version!\n";

        DataGridBuilder dataGridBuilder("/Users/russelltemplet/Workstation/GameBaseCPP/resources/test/test_out.txt", 5, 5);
        dataGridBuilder.build();
        DataGrid grid = dataGridBuilder.getDataGrid();

        ObjectGridBuilder objectGridBuilder(grid, 1, 1, constructAreaBlock, 0);
        objectGridBuilder.build();



        std::cout << "got it!\n";


        return 0;
    }
}