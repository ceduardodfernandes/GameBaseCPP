//
// Created by Russell Templet on 12/11/17.
//

#ifndef GAMEBASECPP_GRID_H
#define GAMEBASECPP_GRID_H

#include <vector>

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
    const T& operator[] (int index) const;

    const T& operator() (int index_x, int index_y) const;

    //returns modifiable reference
    T& modify (int index) const;

    T& modify (int index_x, int index_y) const;



};


#endif //GAMEBASECPP_GRID_H
