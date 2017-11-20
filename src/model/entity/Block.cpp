//
// Created by Russell Templet on 11/19/17.
//

#include <model/entity/GameObject.h>
#include <model/entity/Block.h>

Block::Block(int _instanceId, int _x, int _y) :
        GameObject(_instanceId, 5, _x, _y, true) {}

void Block::update() {}