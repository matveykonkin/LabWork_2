#include "Courier.h"
#include "BattleSystem.h"
#include <iostream>

Courier::Courier() :
    Entity("Courier", 75, 9, "Быстрая доставка", 150) {}

void Courier::useUniqueAbility(Entity* target, BattleSystem* battlesystem) {
    std::cout << name << " использует способность: " << uniqueAbility 
              << " (делает два хода подряд)" << std::endl;
    battlesystem->grantExtraTurn(this);  
}