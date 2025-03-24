#include "Entity.h"
#include <iostream>

Entity::Entity(const std::string& name, int health, int attack, const std::string& uniqueAbility)
    : name(name), health(health), attack(attack), uniqueAbility(uniqueAbility) {}

void Entity::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

bool Entity::isAlive() const {
    return health > 0;
}

void Entity::output() const {
    std::cout << name << " (Health: " << health << ", Attack: " << attack << ")" << std::endl;
}

void Entity::useUniqueAbility() {
    std::cout << name << " использует способность: " << uniqueAbility << std::endl;
}