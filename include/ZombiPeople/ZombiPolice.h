#ifndef ZOMBI_POLICE_H
#define ZOMBI_POLICE_H

#include "/home/matvey/Документы/SimpleList/matveyKonkin83/LabWork_2/include/Entity.h"

class ZombiPolice : public Entity {
public:
    ZombiPolice();
    void useUniqueAbility(Entity* target) override;
};

#endif 