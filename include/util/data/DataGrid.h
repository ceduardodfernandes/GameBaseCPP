#ifndef DATAGRID_H
#define DATAGRID_H

#include <string>

class DataGrid {
private:
    std::string* dataArray;
    int gridWidth;
    int gridHeight;

public:
    DataGrid(int _gridWidth, int _gridHeight);
    ~DataGrid();

    std::string *getDataArray() const;

    int getGridWidth() const;

    int getGridHeight() const;

    bool addData(const std::string& data, int index);
};

#endif /* DATAGRID_H */