#ifndef ZOMBIPOLICE_H  
#define ZOMBIPOLICE_H

#include "Entity.h"

class ZombiPolice : public Entity {
public:
    ZombiPolice();
    void useUniqueAbility(Entity* target) override;
};

#endif