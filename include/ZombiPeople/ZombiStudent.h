#ifndef ZOMBI_STUDENT_H
#define ZOMBI_STUDENT_H

#include "/home/matvey/Документы/SimpleList/matveyKonkin83/LabWork_2/include/Entity.h"

class ZombiStudent : public Entity {
public:
    ZombiStudent();
    void useUniqueAbility(Entity* target) override;
};

#endif 