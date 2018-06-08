#ifndef ENTITY_H
#define ENTITY_H

class Entity {
protected:
    int instanceId, classId, x, y;
    bool solid;
public:
    Entity(int _instanceId, int _classId, int _x, int _y, bool _solid);

    int getInstanceId() const {
        return instanceId;
    }

    int getClassId() const {
        return classId;
    }

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    bool isSolid() const {
        return solid;
    }

    virtual void update() =0;
};

#endif /* ENTITY_H */