#ifndef DOG_H
#define DOG_H

#include <string>
#include "model/entity/GameObject.h"

class Dog : public GameObject {
private:
    std::string name;
    int dogYears;

public:
    Dog(int _instanceId, int _x, int _y, std::string _name, int _dogYears);

    const std::string &getName() const;

    int getDogYears() const;
};

#endif /* DOG_H */