#ifndef ESO_ENGINE_UTIL_OBJECTGRIDBUILDER_H_
#define ESO_ENGINE_UTIL_OBJECTGRIDBUILDER_H_

#include <memory>
#include <vector>
#include <string>
#include "model/entity/Entity.h"
#include "util/data/Grid.tpp"

using AreaBlock = std::vector<std::unique_ptr<Entity>>;

//TODO: perhaps convert this from a class to a function
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

#endif /* ESO_ENGINE_UTIL_OBJECTGRIDBUILDER_H_ */