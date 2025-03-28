#ifndef ZOMBI_TEACHER_H
#define ZOMBI_TEACHER_H

#include "Entity.h"

class ZombiTeacher : public Entity {
public:
    ZombiTeacher();
    void useUniqueAbility(Entity* target) override;
};

#endif 