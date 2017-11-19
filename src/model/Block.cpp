//
// Created by Russell Templet on 11/19/17.
//

#include <model/GameObject.h>
#include <model/Block.h>

Block::Block(int _instanceId, int _x, int _y) : GameObject(_instanceId, 5, _x, _y, true) {}

void Block::update() {}