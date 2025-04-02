#ifndef BODYBUILDER_H
#define BODYBUILDER_H

#include "Entity.h"

class Bodybuilder : public Entity {
public:
    Bodybuilder();
    void useUniqueAbility(Entity* target) override;
};

#endif 