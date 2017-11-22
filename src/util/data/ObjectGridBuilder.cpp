//
// Created by Russell Templet on 11/20/17.
//

#include <util/data/ObjectGridBuilder.h>

using AreaBlock = std::vector<std::unique_ptr<GameObject>>;

ObjectGridBuilder::ObjectGridBuilder(const DataGrid &_dataGrid, int _edgeBufferWidth, int _edgeBufferHeight, AreaBlock (*_constructAreaBlock)(int)) :
        ObjectGridBuilder(_dataGrid, _edgeBufferWidth, _edgeBufferHeight, 0) {}

ObjectGridBuilder::ObjectGridBuilder(const DataGrid &_dataGrid, int _edgeBufferWidth, int _edgeBufferHeight, AreaBlock (*_constructAreaBlock)(int), int _playerPositionIndex) :
        objectGrid<AreaBlock, objectGridWidth * objectGridHeight>(), dataGrid(_dataGrid), edgeBufferWidth(_edgeBufferWidth), edgeBufferHeight(_edgeBufferHeight), constructAreaBlock(_constructAreaBlock), playerPositionIndex(_playerPositionIndex) {
    objectGridWidth = 2 * edgeBufferWidth + 1;
    objectGridHeight = 2 * edgeBufferHeight + 1;
}

ObjectGridBuilder::~ObjectGridBuilder() {
    delete objectGrid;
}

void ObjectGridBuilder::build() {
    int dataGridWidth = dataGrid.getGridWidth();
    int dataGridHeight = dataGrid.getGridHeight();

    int startI = playerPositionIndex - (dataGridWidth * edgeBufferHeight);
    int startJ = playerPositionIndex - edgeBufferWidth;

    int endI = playerPositionIndex + (dataGridWidth * edgeBufferHeight);
    int endJ = playerPositionIndex + edgeBufferWidth;

    for (int i = startI; i < endI; i += dataGridWidth) {
        if (i >= 0 && i < dataGridHeight) {
            for (int j = startJ; j < endJ; j++) {
                if (j >= 0 && j < dataGridWidth) {

                }
            }
        }
    }
}


