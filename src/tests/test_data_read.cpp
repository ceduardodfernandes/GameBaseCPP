//
// Created by Russell Templet on 11/26/17.
//

#include "tests/test_data_read.h"

namespace test_data_read {

    AreaBlock constructAreaBlock(int um) {
            //... put something proper here
            return AreaBlock();
    }

    int run() {

        std::cout << "Used test data read version!\n";

        DataGridBuilder dataGridBuilder("test_out.txt", 5, 5);
        dataGridBuilder.build();
        DataGrid grid = dataGridBuilder.getDataGrid();
            ObjectGridBuilder objectGridBuilder(grid, 1, 1, constructAreaBlock);



        std::cout << "got it!\n";


        return 0;
    }
}