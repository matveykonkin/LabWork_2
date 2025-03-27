#ifndef CHILD_H
#define CHILD_H

#include "Entity.h"

class Child : public Entity {
public:
    Child();
    void useUniqueAbility(Entity* target) override;
};

#endif 