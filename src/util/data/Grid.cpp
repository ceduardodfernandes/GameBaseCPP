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
void Grid<T>::appendData(const T &data) {
    grid.push_back(data);
}

template <class T>
void Grid<T>::appendDataRV(T &&data) {
    grid.emplace_back(std::move(data));
}

template <class T>
const T& Grid<T>::operator[] (int index) const {
    return grid[index];
}

template <class T>
const T& Grid<T>::operator() (int index_x, int index_y) const {
    int index = (index_y * width) + index_x;
    return grid[index];
}

template <class T>
T& Grid<T>::modify (int index) const {
    return grid[index];
}

template <class T>
T& Grid<T>::modify (int index_x, int index_y) const {
    int index = (index_y * width) + index_x;
    return grid[index];
}