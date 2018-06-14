#ifndef PERSON_H
#define PERSON_H

#include "model/entity/entity.h"
#include <string>

class Person : public Entity {
private:
    int age, address;

public:
    Person(int _instanceId, int _x, int _y, int _age, int _address);

    int getAge() const;

    int getAddress() const;

};

#endif /* PERSON_H */