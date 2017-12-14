//
// Created by Russell Templet on 12/11/17.
//

#ifndef GAMEBASECPP_OBJGRID_H
#define GAMEBASECPP_OBJGRID_H

#include <vector>
#include "model/entity/GameObject.h"

using AreaBlock = std::vector<std::unique_ptr<GameObject>>;

class GameObjectGrid {
private:
    int width;
    int height;

    std::vector<AreaBlock> grid;

public:
    GameObjectGrid(int _width, int _height);

    int getWidth() const;

    int getHeight() const;

    void appendData(const AreaBlock &data);

    void appendDataRV(AreaBlock &&data);

    //returns const reference
    const AreaBlock& operator[] (int index) const;

    const AreaBlock& operator() (int index_x, int index_y) const;

    //returns modifiable reference
    AreaBlock& modify (int index);

    AreaBlock& modify (int index_x, int index_y);



};


#endif //GAMEBASECPP_GRID_H
