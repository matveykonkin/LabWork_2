#ifndef ZOMBI_PIGEON_H
#define ZOMBI_PIGEON_H

#include "Entity.h"

class ZombiPigeon : public Entity {
public:
    ZombiPigeon();
    void useUniqueAbility() override;
};

#endif 