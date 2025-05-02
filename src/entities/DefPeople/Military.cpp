#include "DefPeople/Military.h"
#include <iostream>

Military::Military(const std::string& name, int health, int attack, 
                   const std::string& ability, int price) : 
    Entity(name, health, attack, ability, price) {}

void Military::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

bool Military::isAlive() const {
    return health > 0;
}

void Military::useUniqueAbility(Entity* target) {
    if (!target) return;
    
    std::cout << name << " использует способность: " << uniqueAbility 
              << " (наносит урон и снижает атаку противника)" << std::endl;
    target->takeDamage(attack);
    target->setAttack(target->getAttack() - 10);
}