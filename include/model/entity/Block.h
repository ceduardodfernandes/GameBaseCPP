#ifndef ESO_ENGINE_MODEL_BLOCK_H_
#define ESO_ENGINE_MODEL_BLOCK_H_

#include "model/entity/Entity.h"

namespace esotericengine {

class Block : public Entity {
public:
    Block(int instanceId, int x, int y);
    void update();
};

}

#endif /* ESO_ENGINE_MODEL_BLOCK_H_ */
