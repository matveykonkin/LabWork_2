#ifndef OFFICIAL_H
#define OFFICIAL_H

#include "Entity.h"

class Official : public Entity {
public:
    Official();
    void useUniqueAbility() override;
};

#endif 