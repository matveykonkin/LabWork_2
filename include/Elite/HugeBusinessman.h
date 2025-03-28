#ifndef HUGEBUSINESSMAN_H
#define HUGEBUSINESSMAN_H

#include "Entity.h"

class HugeBusinessman : public Entity {
public:
    HugeBusinessman();
    void useUniqueAbility(Entity* target) override;
};

#endif 