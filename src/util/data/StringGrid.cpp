//
// Created by Russell Templet on 12/11/17.
//

#include "util/data/StringGrid.h"

StringGrid::StringGrid (int _width, int _height) : width(_width), height(_height) {}

int StringGrid::getWidth() const {
    return width;
}

int StringGrid::getHeight() const {
    return height;
}

void StringGrid::appendData(const std::string &data) {
    grid.push_back(data);
}

void StringGrid::appendDataRV(std::string &&data) {
    grid.emplace_back(std::move(data));
}

const std::string& StringGrid::operator[] (int index) const {
    return grid[index];
}

const std::string& StringGrid::operator() (int index_x, int index_y) const {
    int index = (index_y * width) + index_x;
    return grid[index];
}

std::string& StringGrid::modify (int index) const {
    return grid[index];
}

std::string& StringGrid::modify (int index_x, int index_y) const {
    int index = (index_y * width) + index_x;
    return grid[index];
}