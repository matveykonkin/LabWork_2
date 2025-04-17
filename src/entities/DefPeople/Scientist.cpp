#include "Scientist.h"
#include <iostream>

Scientist::Scientist() : 
    Entity("Scientist", 70, 10, "Изобретение", 140) {}

void Scientist::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (увеличивает атаку и защиту)" << std::endl;
            attack += 10;
            health += 20;
}