//
// Created by Russell Templet on 12/11/17.
//

#include "util/data/GameObjectGrid.h"

GameObjectGrid::GameObjectGrid (int _width, int _height) : width(_width), height(_height) {}

int GameObjectGrid::getWidth() const {
    return width;
}

int GameObjectGrid::getHeight() const {
    return height;
}

void GameObjectGrid::appendData(const AreaBlock &data) {
    grid.push_back(data);
}

void GameObjectGrid::appendDataRV(AreaBlock &&data) {
    grid.emplace_back(std::move(data));
}

const AreaBlock& GameObjectGrid::operator[] (int index) const {
    return grid[index];
}

const AreaBlock& GameObjectGrid::operator() (int index_x, int index_y) const {
    int index = (index_y * width) + index_x;
    return grid[index];
}

AreaBlock& GameObjectGrid::modify (int index) {
    return grid[index];
}

AreaBlock& GameObjectGrid::modify (int index_x, int index_y) {
    int index = (index_y * width) + index_x;
    return grid[index];
}