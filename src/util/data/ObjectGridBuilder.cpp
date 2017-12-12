//
// Created by Russell Templet on 11/20/17.
//

#include "util/data/ObjectGridBuilder.h"

ObjectGridBuilder::ObjectGridBuilder(const Grid<std::string> &_dataGrid, int _bufferWidth, int _bufferHeight, int _playerPositionX, int _playerPositionY, ObjectGrid::AreaBlock (*_constructAreaBlock)(const std::string &)) :


void ObjectGridBuilder::build() {
    int coarseIndex, index, column;

    int dataGridWidth = dataGrid.getGridWidth();
    int dataGridHeight = dataGrid.getGridHeight();

    for (int i = -1 * bufferHeight; i <= bufferHeight; i++) {
        coarseIndex = playerPosition + (i * dataGridWidth);
        if (coarseIndex >= 0 && coarseIndex < dataGridWidth * dataGridHeight) {
            column = coarseIndex % dataGridWidth;
            for (int j = -1 * bufferWidth; j <= bufferWidth; j++) {
                if (column + j >= 0 && column + j < dataGridWidth) {
                    index = coarseIndex + j;
                    objectGrid.push(constructAreaBlock(dataGrid.));
                }
            }
        }
    }
}

const DataGrid &ObjectGridBuilder::getDataGrid() const {
    return dataGrid;
}

const ObjectGrid &ObjectGridBuilder::getObjectGrid() const {
    return objectGrid;
}

int ObjectGridBuilder::getPlayerPositionX() const {
    return playerPositionX;
}

int ObjectGridBuilder::getPlayerPositionY() const {
    return playerPositionY;
}


