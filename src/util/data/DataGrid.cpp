//
// Created by Russell Templet on 11/20/17.
//

#include "util/data/DataGrid.h"

DataGrid::DataGrid(int _gridWidth, int _gridHeight) :
        gridWidth(_gridWidth), gridHeight(_gridHeight) {
    dataArray = new char* [gridWidth * gridHeight];
}

DataGrid::~DataGrid() {
    delete[] dataArray;
}

//returns true only if index is within bounds of grid
bool DataGrid::addData(const std::string &data, int index) {
    bool result = false;
    if (index < gridWidth * gridHeight) {
        dataArray[index] = data;
        result = true;
    }
    return result;
}

std::string *DataGrid::getDataArray() const {
    return dataArray;
}

int DataGrid::getGridWidth() const {
    return gridWidth;
}

int DataGrid::getGridHeight() const {
    return gridHeight;
}
