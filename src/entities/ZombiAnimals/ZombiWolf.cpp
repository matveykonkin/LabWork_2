#include "ZombiWolf.h"
#include <iostream>

ZombiWolf::ZombiWolf() : 
    Entity("Zombi Wolf", 120, 25, "Одиночка", 190) {}

void ZombiWolf::useUniqueAbility(Entity* target) {
    if (health < 50) {
        std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает атаку)" << std::endl;
        attack += 15;  
    }
}
