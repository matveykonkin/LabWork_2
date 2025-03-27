#ifndef ZOMBI_DOCTOR_H
#define ZOMBI_DOCTOR_H

#include "Entity.h"

class ZombiDoctor : public Entity {
public:
    ZombiDoctor();
    void useUniqueAbility(Entity* target) override;
};

#endif 