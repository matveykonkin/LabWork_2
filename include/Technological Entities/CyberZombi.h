#ifndef CYBERZOMBI_H
#define CYBERZOMBI_H

#include "Entity.h"

class CyberZombi : public Entity {
public:
    CyberZombi();
    void useUniqueAbility() override;
};

#endif 