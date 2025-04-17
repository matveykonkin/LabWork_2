#include "Child.h"
#include "BattleSystem.h"
#include <iostream>

Child::Child(BattleSystem* battle) : 
    Entity("Child", 60, 8, "План", 90),
    battleSystem(battle) {}  

void Child::useUniqueAbility(Entity* target, BattleSystem* battlesystem) {
    std::cout << name << " использует способность: " << uniqueAbility 
              << " (снижает атаку противника)" << std::endl;
    battlesystem->debuffAllEnemies(0.75);  
}