#include "ZombiDog.h"
#include <iostream>

ZombiDog::ZombiDog() : 
    Entity("Zombi Dog", 100, 20, "Защита", 160) {}

void ZombiDog::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает защиту)" << std::endl;
            health += 30;  
}
