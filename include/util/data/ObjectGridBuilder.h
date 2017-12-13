#ifndef OBJECTGRIDBUILDER_H
#define OBJECTGRIDBUILDER_H

#include <memory>
#include <vector>
#include "model/entity/GameObject.h"
#include "util/data/Grid.h"

using AreaBlock = std::vector<std::unique_ptr<GameObject>>;

class ObjectGridBuilder {
private:
    const Grid<std::string>* dataGridPtr;
    Grid<AreaBlock> objectGrid;
    AreaBlock (*constructAreaBlock)(const std::string& blockData);

    int bufferWidth;
    int bufferHeight;

    int playerPositionX;
    int playerPositionY;


public:
    ObjectGridBuilder(const Grid<std::string> *_dataGridPtr, int _bufferWidth, int _bufferHeight, int _playerPositionX, int _playerPositionY, AreaBlock (*_constructAreaBlock)(const std::string&));

    const Grid<AreaBlock> &getObjectGrid() const;

    int getPlayerPositionX() const;

    int getPlayerPositionY() const;

    void build();
};

#endif /* OBJECTGRIDBUILDER_H */