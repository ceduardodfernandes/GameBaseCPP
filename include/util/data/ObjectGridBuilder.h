#include <model/entity/GameObject.h>
#include <memory>
#include <vector>
#include "DataGrid.h"

using AreaBlock = std::vector<std::unique_ptr<GameObject>>;

class ObjectGridBuilder {
private:
    const DataGrid dataGrid;

    int edgeBufferWidth;    //num AreaBlocks on EACH SIDE of the center block - horizontally
    int edgeBufferHeight;   //num AreaBlocks on EACH SIDE of the center block - vertically
    int objectGridWidth;
    int objectGridHeight;
    int playerPositionIndex;

    std::vector<AreaBlock> objectGrid;

    AreaBlock (*constructAreaBlock)(int dataIndex);

public:
    ObjectGridBuilder(const DataGrid &_dataGrid, int _edgeBufferWidth, int _edgeBufferHeight, AreaBlock (*_constructAreaBlock)(int));
    ObjectGridBuilder(const DataGrid &_dataGrid, int _edgeBufferWidth, int _edgeBufferHeight, AreaBlock (*_constructAreaBlock)(int), int _playerPositionIndex);

    int getEdgeBufferWidth() const {
        return edgeBufferWidth;
    }

    int getEdgeBufferHeight() const {
        return edgeBufferHeight;
    }

    int getObjectGridWidth() const {
        return objectGridWidth;
    }

    int getObjectGridHeight() const {
        return objectGridHeight;
    }

    int getPlayerPositionIndex() const {
        return playerPositionIndex;
    }

    const std::vector<AreaBlock> &getObjectGrid() const {
        return objectGrid;
    }

    void build();
};