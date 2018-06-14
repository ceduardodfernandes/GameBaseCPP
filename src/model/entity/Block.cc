//
// Created by Russell Templet on 11/19/17.
//

#include "model/entity/block.h"

namespace esotericengine {

Block::Block(int instance_id, int x, int y) :
        Entity(instance_id, 5, x, y, true) {}

void Block::Update() {}

}