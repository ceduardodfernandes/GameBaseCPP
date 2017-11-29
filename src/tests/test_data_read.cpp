//
// Created by Russell Templet on 11/26/17.
//

#include <iostream>
#include "util/data/DataGridBuilder.h"

namespace test_data_read {
    int run() {

        std::cout << "Used test data read version!\n";

        DataGridBuilder dataGridBuilder("test_out.txt", 5, 5);
        dataGridBuilder.build();
        DataGrid grid = dataGridBuilder.getDataGrid();

        std::cout << "got it!\n";


        return 0;
    }
}