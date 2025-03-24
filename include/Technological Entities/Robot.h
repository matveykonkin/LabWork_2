#ifndef ROBOT_H
#define ROBOT_H

#include "Entity.h"

class Robot : public Entity {
public:
    Robot();
    void useUniqueAbility() override;
};

#endif 