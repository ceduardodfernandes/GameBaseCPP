//
// Created by Russell Templet on 11/20/17.
//

#include "util/data/DataGrid.h"

DataGrid::DataGrid(int _gridWidth, int _gridHeight) :
        gridWidth(_gridWidth), gridHeight(_gridHeight) {}

//makes a copy of a potentially large string...
void DataGrid::addData(const char* value) {
    data.emplace_back(std::string(value));
}

int DataGrid::getGridWidth() const {
    return gridWidth;
}

int DataGrid::getGridHeight() const {
    return gridHeight;
}

const std::vector<std::string> &DataGrid::getData() const {
    return data;
}

const std::string& DataGrid::operator[] (int index) const {
    return data[index];
}

const std::string& DataGrid::operator[] (int index_i, int index_j) const {
    int index = (index_i * gridWidth) + index_j;
    return data[index];
}