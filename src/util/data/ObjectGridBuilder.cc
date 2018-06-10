//
// Created by Russell Templet on 11/20/17.
//

#include "util/data/ObjectGridBuilder.h"

ObjectGridBuilder::ObjectGridBuilder(const Grid<std::string> *_dataGridPtr, int _bufferWidth, int _bufferHeight, int _playerPositionX, int _playerPositionY, AreaBlock (*_constructAreaBlock)(const std::string &)) :
        dataGridPtr(_dataGridPtr),
        bufferWidth(_bufferWidth),
        bufferHeight(_bufferHeight),
        playerPositionX(_playerPositionX),
        playerPositionY(_playerPositionY),
        constructAreaBlock(_constructAreaBlock),
        objectGrid(2 * _bufferWidth + 1, 2 * _bufferHeight + 1) {}

void ObjectGridBuilder::build() {
    int dataX, dataY;

    int dataGridWidth = dataGridPtr->getWidth();
    int dataGridHeight = dataGridPtr->getHeight();

    for (int i = -1 * bufferHeight; i <= bufferHeight; i++) {
        dataY = playerPositionY + i;
        if (dataY >= 0 && dataY < dataGridHeight) {
            for (int j = -1 * bufferWidth; j <= bufferWidth; j++) {
                dataX = playerPositionX + j;
                if (dataX >= 0 && dataX < dataGridWidth) {
                    objectGrid.modifiableAt(j + bufferWidth, i + bufferHeight) = constructAreaBlock(
                            dataGridPtr->constAt(dataX, dataY));
                }
            }
        }
    }
}



int ObjectGridBuilder::getPlayerPositionX() const {
    return playerPositionX;
}

int ObjectGridBuilder::getPlayerPositionY() const {
    return playerPositionY;
}

const Grid<AreaBlock> &ObjectGridBuilder::getObjectGrid() const {
    return objectGrid;
}


