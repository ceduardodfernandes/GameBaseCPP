#ifndef DATAGRID_H
#define DATAGRID_H

#include <string>
#include <vector>

class DataGrid {
private:
    std::vector<std::string> data;
    int gridWidth;
    int gridHeight;

public:
    DataGrid(int _gridWidth, int _gridHeight);

    const std::vector<std::string> &getData() const;

    const std::string& operator[] (int index) const;

    const std::string& operator[] (int index_i, int index_j) const;

    int getGridWidth() const;

    int getGridHeight() const;

    void addData(const char* value);
};

#endif /* DATAGRID_H */