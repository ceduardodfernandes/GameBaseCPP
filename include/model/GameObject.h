class GameObject {
protected:
    int instanceId, classId, x, y;
    bool solid;
public:
    GameObject(int _instanceId, int _classId, int _x, int _y, bool _solid);

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
