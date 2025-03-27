#ifndef SMALLBUSINESSMAN_H
#define SMALLBUSINESSMAM_H

#include "Entity.h"

class SmallBusinessman : public Entity {
public:
    SmallBusinessman();
    void useUniqueAbility(Entity* target) override;
};

#endif 