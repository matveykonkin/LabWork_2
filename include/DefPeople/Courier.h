#ifndef COURIER_H
#define COURIER_H

#include "Entity.h"
class BattleSystem;

class Courier : public Entity {
public:
    Courier();
    void useUniqueAbility(Entity* target, BattleSystem* battleSystem);
};

#endif 