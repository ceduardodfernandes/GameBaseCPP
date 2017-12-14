#ifndef OBJECTGRIDBUILDER_H
#define OBJECTGRIDBUILDER_H

#include <memory>
#include <vector>
#include "model/entity/GameObject.h"
#include "util/data/StringGrid.h"
#include "GameObjectGrid.h"

class ObjectGridBuilder {
private:
    const StringGrid* dataGridPtr;
    GameObjectGrid objectGrid;
    AreaBlock (*constructAreaBlock)(const std::string& blockData);

    int bufferWidth;
    int bufferHeight;

    int playerPositionX;
    int playerPositionY;


public:
    ObjectGridBuilder(const StringGrid *_dataGridPtr, int _bufferWidth, int _bufferHeight, int _playerPositionX, int _playerPositionY, AreaBlock (*_constructAreaBlock)(const std::string&));

    const GameObjectGrid &getObjectGrid() const;

    int getPlayerPositionX() const;

    int getPlayerPositionY() const;

    void build();
};

#endif /* OBJECTGRIDBUILDER_H */