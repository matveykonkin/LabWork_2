#include "DefPeople/Bodybuilder.h"
#include <iostream>

Bodybuilder::Bodybuilder() : 
    Entity("Bodybuilder", 150, 15, "Суперсила", 210) {}

void Bodybuilder::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (удваивает урон)" << std::endl;
            attack *= 2;  
}