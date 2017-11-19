//
// Created by Russell Templet on 11/19/17.
//

#include "model/GameObject.h"

GameObject::GameObject(int _instanceId, int _classId, int _x, int _y, bool _solid) : instanceId(_instanceId), classId(_classId), x(_x), y(_y), solid(_solid) {}