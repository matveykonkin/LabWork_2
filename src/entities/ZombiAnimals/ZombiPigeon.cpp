#include "ZombiPigeon.h"
#include <iostream>

ZombiPigeon::ZombiPigeon() : 
    Entity("Zombi Pigeon", 60, 10, "Посылка", 100) {}

void ZombiPigeon::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (восстанавливает здоровье)" << std::endl;
            health += 20;
}