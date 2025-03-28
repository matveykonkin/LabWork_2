#ifndef ZOMBI_STUDENT_H
#define ZOMBI_STUDENT_H

#include "Entity.h"

class ZombiStudent : public Entity {
public:
    ZombiStudent();
    void useUniqueAbility(Entity* target) override;
};

#endif 