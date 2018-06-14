#ifndef DOG_H
#define DOG_H

#include <string>
#include "model/entity/entity.h"

class Dog : public Entity {
private:
    std::string name;
    int dogYears;

public:
    Dog(int _instanceId, int _x, int _y, std::string _name, int _dogYears);

    const std::string &getName() const;

    int getDogYears() const;
};

#endif /* DOG_H */