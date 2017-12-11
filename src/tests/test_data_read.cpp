//
// Created by Russell Templet on 11/26/17.
//

#include <iostream>
#include "util/data/DataGridBuilder.h"
#include "util/data/ObjectGridBuilder.h"
#include "tests/test_data_read.h"

namespace test_data_read {

    //TODO: this code might be reusible, so maybe we can put it in it's own class or something
    //TODO: convert this to take in std::string, NOT char*
    AreaBlock constructAreaBlock(const char* blockData) {
        char* tempData;
        strcpy(blockData, tempData);

        char* objStr = strtok(tempData, ",");

        int i = 0;
        while (areaStr != nullptr) {
            if (dataGrid.addData(areaStr, i)) {
                areaStr = strtok(nullptr, delimiter);   //somehow this takes the next area chunk...
            } else {
                break;
            }
            i++;
        }
        delete[] memBlock;

        AreaBlock areaBlock;


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