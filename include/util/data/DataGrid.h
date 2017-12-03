#ifndef DATAGRID_H
#define DATAGRID_H

class DataGrid {
private:
    char** dataArray;
    int gridWidth;
    int gridHeight;

public:
    DataGrid(int _gridWidth, int _gridHeight);
    ~DataGrid();

    char **getDataArray() const {
        return dataArray;
    }

    int getGridWidth() const {
        return gridWidth;
    }

    int getGridHeight() const {
        return gridHeight;
    }

    bool addData(char *data, int index);
};

#endif /* DATAGRID_H */