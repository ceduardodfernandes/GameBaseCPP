#ifndef DATAGRIDBUILDER_H
#define DATAGRIDBUILDER_H

#include <string>
#include <fstream>
#include <vector>
#include "StringGrid.h"


class DataGridBuilder {
private:
    std::string fileName;
    const char* delimiter;
    StringGrid dataGrid;

    char* readFile();

public:
    DataGridBuilder(std::string _fileName, int _dataGridWidth, int _dataGridHeight, const char* _delimiter);

    const std::string &getFileName() const;

    const char *getDelimiter() const;

    const StringGrid &getDataGrid() const;

    void build();
};

#endif /* DATAGRIDBUILDER_H */