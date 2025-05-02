#include "DefPeople/Child.h"
#include <iostream>

Child::Child(const std::string& name, int health, int attack, 
             const std::string& ability, int price) : 
    Entity(name, health, attack, ability, price) {}

void Child::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

bool Child::isAlive() const {
    return health > 0;
}

void Child::useUniqueAbility(Entity* target) {
    if (target) {
        std::cout << name << " использует способность: " << uniqueAbility 
                  << " (снижает атаку противника)" << std::endl;
        debuffEnemy(target, 0.75f);
    }
}

void Child::debuffEnemy(Entity* target, float multiplier) {
    if (target) {
        target->setAttack(static_cast<int>(target->getAttack() * multiplier));
    }
}