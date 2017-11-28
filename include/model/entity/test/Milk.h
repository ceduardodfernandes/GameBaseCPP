#include "model/entity/GameObject.h"

class Milk : public GameObject {
private:
    int expiryDate, type;

public:
    Milk(int _instanceId, int _x, int _y, int _expiryDate, int _type);

    int getExpiryDate() const;

    int getType() const;
};