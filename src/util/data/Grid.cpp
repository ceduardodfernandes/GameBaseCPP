//
// Created by Russell Templet on 12/11/17.
//

#include "util/data/Grid.h"

Grid::Grid (int _width, int _height) : width(_width), height(_height) {}

int Grid::getWidth() const {
    return width;
}

int Grid::getHeight() const {
    return height;
}

template <class T>
void Grid::appendData(const T &data) {
    grid.push_back(data);
}

template <class T>
void Grid::appendDataRV(T &&data) {
    grid.emplace_back(std::move(data));
}

template <class T>
const T& Grid::operator[] (int index) const {
    return grid[index];
}

template <class T>
const T& Grid::operator[] (int index_i, int index_j) const {
    int index = (index_i * width) + index_j;
    return grid[index];
}

template <class T>
T& Grid::modify (int index) const {
    return grid[index];
}

template <class T>
T& Grid::modify (int index_i, int index_j) const {
    int index = (index_i * width) + index_j;
    return grid[index];
}