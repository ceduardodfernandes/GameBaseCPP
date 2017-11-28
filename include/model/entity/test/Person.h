#include "model/entity/GameObject.h"
#include <string>

class Person : public GameObject {
private:
    int age, address;

public:
    Person(int _instanceId, int _x, int _y, int _age, int _address);

    int getAge() const;

    int getAddress() const;

};
