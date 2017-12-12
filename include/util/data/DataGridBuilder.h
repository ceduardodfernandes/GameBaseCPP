#ifndef DATAGRIDBUILDER_H
#define DATAGRIDBUILDER_H

#include <string>
#include <fstream>
#include <vector>
#include "DataGrid.h"
#include "Grid.h"


class DataGridBuilder {
private:
    std::string fileName;
    char* delimiter;
    Grid<std::string> dataGrid;

    char* readFile();

public:
    DataGridBuilder(std::string _fileName, int _dataGridWidth, int _dataGridHeight, char* _delimiter="|");

    const std::string &getFileName() const;

    const DataGrid &getDataGrid() const;

    void build();
};

#endif /* DATAGRIDBUILDER_H */