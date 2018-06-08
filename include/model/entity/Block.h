#ifndef BLOCK_H
#define BLOCK_H

#include "model/entity/Entity.h"

class Block : public Entity {
public:
    Block(int _instanceId, int _x, int _y);
    void update();
};

#endif /* BLOCK_H */
