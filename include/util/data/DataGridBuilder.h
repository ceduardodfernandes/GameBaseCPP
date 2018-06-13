#ifndef ESO_ENGINE_UTIL_DATAGRIDBUILDER_H_
#define ESO_ENGINE_UTIL_DATAGRIDBUILDER_H_

#include <string>
#include <fstream>
#include <vector>
#include "Grid.h"

namespace esotericengine {

//TODO: This could perhaps be converted into a method instead of a class 
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

}

#endif /* ESO_ENGINE_UTIL_DATAGRIDBUILDER_H_ */