#include "Drone.h"
#include <iostream>

Drone::Drone() : 
    Entity("Drone", 80, 15, "Разведка", 120) {}

void Drone::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (показывает уникальную способность противника противника)"
                      << target->getAbilityName() << "\n";
}