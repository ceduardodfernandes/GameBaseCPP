#ifndef OBJECTGRIDBUILDER_H
#define OBJECTGRIDBUILDER_H

#include <memory>
#include <vector>
#include "DataGrid.h"
#include "util/data/ObjectGrid.h"

class ObjectGridBuilder {
private:
    const DataGrid dataGrid;
    ObjectGrid objectGrid;

    AreaBlock (*constructAreaBlock)(const char* blockData);

public:
    ObjectGridBuilder(const DataGrid &_dataGrid, int _edgeBufferWidth, int _edgeBufferHeight, AreaBlock (*_constructAreaBlock)(const char*), int _playerPositionIndex);

    const DataGrid &getDataGrid() const;

    const ObjectGrid &getObjectGrid() const;

    void build();
};

#endif /* OBJECTGRIDBUILDER_H */