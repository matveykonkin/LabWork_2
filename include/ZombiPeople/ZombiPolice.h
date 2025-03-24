#ifndef ZOMBI_POLICE_H
#define ZOMBI_POLICE_H

#include "Entity.h"

class ZombiPolice : public Entity {
public:
    ZombiPolice();
    void useUniqueAbility() override;
};

#endif 