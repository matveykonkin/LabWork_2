#ifndef DRONE_H
#define DRONE_H

#include "Entity.h"

class Drone : public Entity {
public:
    Drone();
    void useUniqueAbility() override;
};

#endif 