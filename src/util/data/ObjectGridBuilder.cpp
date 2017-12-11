//
// Created by Russell Templet on 11/20/17.
//

#include "util/data/ObjectGridBuilder.h"

ObjectGridBuilder::ObjectGridBuilder(const DataGrid &_dataGrid, int _edgeBufferWidth, int _edgeBufferHeight, AreaBlock (*_constructAreaBlock)(const char*), int _playerPositionIndex = 0) :
        dataGrid(_dataGrid), objectGrid(_edgeBufferWidth, _edgeBufferHeight, _playerPositionIndex), constructAreaBlock(_constructAreaBlock) {}

void ObjectGridBuilder::build() {
    int coarseIndex, index, column;

    int dataGridWidth = dataGrid.getGridWidth();
    int dataGridHeight = dataGrid.getGridHeight();
    int bufferWidth = objectGrid.getEdgeBufferWidth();
    int bufferHeight = objectGrid.getEdgeBufferHeight();
    int playerPosition = objectGrid.getPlayerPositionIndex();

    for (int i = -1 * bufferHeight; i <= bufferHeight; i++) {
        coarseIndex = playerPosition + (i * dataGridWidth);
        if (coarseIndex >= 0 && coarseIndex < dataGridWidth * dataGridHeight) {
            column = coarseIndex % dataGridWidth;
            for (int j = -1 * bufferWidth; j <= bufferWidth; j++) {
                if (column + j >= 0 && column + j < dataGridWidth) {
                    index = coarseIndex + j;
                    objectGrid.push(constructAreaBlock(dataGrid, index));
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


