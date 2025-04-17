#include "ZombiBear.h"
#include "Entity.h"
#include <iostream>

ZombiBear::ZombiBear() : 
    Entity("Zombi Bear", 200, 30, "Рык", 250) {}

void ZombiBear::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (снижает атаку противника)" << std::endl;
        if (auto* enemy = dynamic_cast<Entity*>(target)) {
            enemy->setAttack(enemy->getAttack() * 0.7);
        }
}    
