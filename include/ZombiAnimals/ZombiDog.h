#ifndef ZOMBI_DOG_H
#define ZOMBI_DOG_H

#include "Entity.h"

class ZombiDog : public Entity {
public:
    ZombiDog();
    void useUniqueAbility() override;
};

#endif 