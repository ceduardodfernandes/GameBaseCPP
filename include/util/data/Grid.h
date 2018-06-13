//
// Created by Russell Templet on 12/11/17.
//

#ifndef ESO_ENGINE_UTIL_GRID_H_
#define ESO_ENGINE_UTIL_GRID_H_

#include <vector>

namespace esotericengine {

template <class T>
class Grid {
private:
    int width;
    int height;

    std::vector<T> grid;

public:
    Grid(int _width, int _height);

    int getWidth() const;

    int getHeight() const;

    void appendData(const T &data);

    void appendDataRV(T &&data);

    //returns const reference
    const T& constAt (int index) const;

    const T& constAt(int index_x, int index_y) const;

    //returns modifiable reference
    T& modifiableAt(int index);

    T& modifiableAt(int index_x, int index_y);

};

template <class T>
Grid<T>::Grid (int _width, int _height) : width(_width), height(_height) {}

template <class T>
int Grid<T>::getWidth() const {
    return width;
}

template <class T>
int Grid<T>::getHeight() const {
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
const T& Grid<T>::constAt (int index) const {
    return grid[index];
}

template <class T>
const T& Grid<T>::constAt (int index_x, int index_y) const {
    int index = (index_y * width) + index_x;
    return grid[index];
}

template <class T>
T& Grid<T>::modifiableAt(int index) {
    return grid[index];
}

template <class T>
T& Grid<T>::modifiableAt(int index_x, int index_y) {
    int index = (index_y * width) + index_x;
    return grid[index];
}

}


#endif //ESO_ENGINE_UTIL_GRID_H_
