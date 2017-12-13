#ifndef DATAGRIDBUILDER_H
#define DATAGRIDBUILDER_H

#include <string>
#include <fstream>
#include <vector>
#include "Grid.h"


class DataGridBuilder {
private:
    std::string fileName;
    const char* delimiter;
    Grid<std::string> dataGrid;

    char* readFile();

public:
    DataGridBuilder(std::string _fileName, int _dataGridWidth, int _dataGridHeight, const char* _delimiter);

    const std::string &getFileName() const;

    const char *getDelimiter() const;

    const Grid<std::string> &getDataGrid() const;

    void build();
};

#endif /* DATAGRIDBUILDER_H */