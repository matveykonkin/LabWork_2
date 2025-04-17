#ifndef CHILD_H
#define CHILD_H

#include "Entity.h"
class BattleSystem;

class Child : public Entity {
    BattleSystem* battleSystem;
public:
    Child(BattleSystem* battle);
    void useUniqueAbility(Entity* target, BattleSystem* battleSystem);
};

#endif 