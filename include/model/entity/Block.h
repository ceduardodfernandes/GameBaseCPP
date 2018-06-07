#ifndef BLOCK_H
#define BLOCK_H

#include "model/entity/GameObject.h"

class Block : public GameObject {
public:
    Block(int _instanceId, int _x, int _y);
    void update();
};

#endif /* BLOCK_H */
