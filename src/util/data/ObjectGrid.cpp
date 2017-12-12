//
// Created by Russell Templet on 12/2/17.
//

#include "util/data/ObjectGrid.h"

ObjectGrid::ObjectGrid(int _edgeBufferWidth, int _edgeBufferHeight) :
        edgeBufferWidth(_edgeBufferWidth), edgeBufferHeight(_edgeBufferHeight), width(2*_edgeBufferWidth + 1), height(2*_edgeBufferHeight + 1) {}

void ObjectGrid::push(const AreaBlock &block) {
    grid.push_back(block);
}

int ObjectGrid::getEdgeBufferWidth() const {
    return edgeBufferWidth;
}

int ObjectGrid::getEdgeBufferHeight() const {
    return edgeBufferHeight;
}

const std::vector<AreaBlock> &ObjectGrid::getGrid() const {
    return grid;
}

int ObjectGrid::getWidth() const {
    return width;
}

int ObjectGrid::getHeight() const {
    return height;
}
