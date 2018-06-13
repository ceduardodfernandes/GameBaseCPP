#ifndef ESO_ENGINE_MODEL_ENTITY_H_
#define ESO_ENGINE_MODEL_ENTITY_H_

namespace esotericengine {

class Entity {
protected:
    int instance_id_, class_id_, x_, y_;
    bool solid_;
public:
    Entity(int instance_id, int class_id, int x, int y, bool solid);

    int GetInstanceId() const {
        return instance_id_;
    }

    int GetClassId() const {
        return class_id_;
    }

    int GetX() const {
        return x_;
    }

    int GetY() const {
        return y_;
    }

    bool IsSolid() const {
        return solid_;
    }

    virtual void Update() =0;
};

}

#endif /* ESO_ENGINE_MODEL_ENTITY_H_ */