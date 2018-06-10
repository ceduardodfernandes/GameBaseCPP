//
// Created by Russell Templet on 11/26/17.
//

#include "model/entity/test/Person.h"

Person::Person(int _instanceId, int _x, int _y, int _age, int _address) :
        Entity(_instanceId, 1, _x, _y, true), age(_age), address(_address) {}

int Person::getAge() const {
    return age;
}

int Person::getAddress() const {
    return address;
}
