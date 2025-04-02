#include "ZombiPeople/ZombiPolice.h"
#include <iostream>

ZombiPolice::ZombiPolice() : 
    Entity("Zombi Police", 100, 20, "Arrest", 180) {}

void ZombiPolice::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (противник пропускает ход)" << std::endl;
    if (target) {
        target->setSkipTurn(true);
    }
}