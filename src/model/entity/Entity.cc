//
// Created by Russell Templet on 11/19/17.
//

#include "model/entity/entity.h"

namespace esotericengine {

Entity::Entity(int instance_id, int class_id, int x, int y, bool solid) :
        instance_id_(instance_id), class_id_(class_id), x_(x), y_(y), solid_(solid) {}

}