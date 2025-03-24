#ifndef ZOMBI_WOLF_H
#define ZOMBI_WOLF_H

#include "Entity.h"

class ZombiWolf : public Entity {
public:
    ZombiWolf();
    void useUniqueAbility() override;
};

#endif 