#include <string>
#include <fstream>
#include <vector>
#include <model/entity/GameObject.h>
#include <util/data/DataGrid.h>

class DataGridBuilder {
private:
    std::string fileName;
    DataGrid dataGrid;

    char* readFile();

public:
    DataGridBuilder(const std::string &_fileName, int _dataGridWidth, int _dataGridHeight);

    const std::string &getFileName() const;

    const DataGrid &getDataGrid() const;

    void build();
};