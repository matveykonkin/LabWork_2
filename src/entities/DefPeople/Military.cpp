#include "Military.h"
#include "Entity.h"
#include <iostream>

Military::Military() : 
    Entity("Soldier", 120, 18, "Штурм", 185) {}

void Military::useUniqueAbility(Entity* target) {
    std::cout << name << " использует способность: " << uniqueAbility << " (наносит урон и снижает атаку противника)" << std::endl;
            target->takeDamage(attack);
            target->setAttack(target->getAttack() - 10);
}