#ifndef BANKER_H
#define BANKER_H

#include "Entity.h"

class Banker : public Entity {
public:
    Banker();
    void useUniqueAbility(Entity* target) override;
};

#endif 