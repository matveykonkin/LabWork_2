#ifndef MILITARY_H
#define MILITARY_H

#include "Entity.h"

class Military : public Entity {
public:
    Military();
    void useUniqueAbility() override;
};

#endif 