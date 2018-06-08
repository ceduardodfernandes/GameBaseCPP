//
// Created by Russell Templet on 11/26/17.
//

#include "model/entity/test/Dog.h"

Dog::Dog(int _instanceId, int _x, int _y, std::string _name, int _dogYears) :
        Entity(_instanceId, 3, _x, _y, true), name(_name), dogYears(_dogYears) {}

const std::string &Dog::getName() const {
    return name;
}

int Dog::getDogYears() const {
    return dogYears;
}
