#ifndef SCIENTIST_H
#define SCIENTIST_H

#include "Entity.h"

class Scientist : public Entity {
public:
    Scientist();
    void useUniqueAbility(Entity* target) override;
};

#endif 