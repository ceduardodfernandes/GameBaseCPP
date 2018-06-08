#ifndef MILK_H
#define MILK_H

#include "model/entity/Entity.h"

class Milk : public Entity {
private:
    int expiryDate, type;

public:
    Milk(int _instanceId, int _x, int _y, int _expiryDate, int _type);

    int getExpiryDate() const;

    int getType() const;
};

#endif /* MILK_H */
