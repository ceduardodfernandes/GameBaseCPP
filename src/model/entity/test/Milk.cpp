//
// Created by Russell Templet on 11/26/17.
//

#include "model/entity/test/Milk.h"

Milk::Milk(int _instanceId, int _x, int _y, int _expiryDate, int _type) :
        GameObject(_instanceId, 2, _x, _y, false), expiryDate(_expiryDate), type(_type) {}

int Milk::getExpiryDate() const {
    return expiryDate;
}

int Milk::getType() const {
    return type;
}
