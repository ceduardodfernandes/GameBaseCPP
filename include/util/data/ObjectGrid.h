//
// Created by Russell Templet on 12/2/17.
//

#ifndef OBJECTGRID_H
#define OBJECTGRID_H


#include <vector>
#include "model/entity/GameObject.h"

class ObjectGrid {
private:
    int width;
    int height;

    std::vector<AreaBlock> grid;

public:
    template <class T>
    using AreaBlock = std::vector<std::unique_ptr<T>>;

    ObjectGrid(int _width, int _height);

    void push(const AreaBlock &block);

    int getEdgeBufferWidth() const;

    int getEdgeBufferHeight() const;

    int getWidth() const;

    int getHeight() const;

    const std::vector<AreaBlock> &getGrid() const;
};


#endif // OBJECTGRID_H
