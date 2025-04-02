#ifndef ZOMBI_BEAR_H
#define ZOMBI_BEAR_H

#include "Entity.h"

class ZombiBear : public Entity {
public:
    ZombiBear();
    void useUniqueAbility(Entity* target) override;
};

#endif 