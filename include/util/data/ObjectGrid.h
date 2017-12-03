//
// Created by Russell Templet on 12/2/17.
//

#ifndef OBJECTGRID_H
#define OBJECTGRID_H


#include <vector>
#include "model/entity/GameObject.h"

using AreaBlock = std::vector<std::shared_ptr<GameObject>>;

class ObjectGrid {
private:
    int edgeBufferWidth;    //num AreaBlocks on EACH SIDE of the center block - horizontally
    int edgeBufferHeight;   //num AreaBlocks on EACH SIDE of the center block - vertically
    int width;
    int height;
    int playerPositionIndex;

    std::vector<AreaBlock> grid;

public:
    ObjectGrid(int _edgeBufferWidth, int _edgeBufferHeight, int _playerPositionIndex);

    void push(const AreaBlock &block);

    int getEdgeBufferWidth() const;

    int getEdgeBufferHeight() const;

    int getWidth() const;

    int getHeight() const;

    int getPlayerPositionIndex() const;

    const std::vector<AreaBlock> &getGrid() const;
};


#endif // OBJECTGRID_H
