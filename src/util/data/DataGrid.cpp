//
// Created by Russell Templet on 11/20/17.
//

#include "util/data/DataGrid.h"

DataGrid::DataGrid(int _gridWidth, int _gridHeight) :
        gridWidth(_gridWidth), gridHeight(_gridHeight) { }

DataGrid::~DataGrid() {
    delete[] dataArray;
}

bool DataGrid::appendData(char *data) {
    bool result = false;
    if (currentIndex < gridWidth * gridHeight) {
        dataArray[currentIndex] = data;
        currentIndex++;
        result = true;
    }
    return result;
}

void DataGrid::resetIndex() {
    currentIndex = 0;
}