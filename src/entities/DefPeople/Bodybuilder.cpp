#include "DefPeople/Bodybuilder.h"
#include <iostream>

Bodybuilder::Bodybuilder(const std::string& name, int health, int attack, 
                         const std::string& ability, int price) : 
    Entity(name, health, attack, ability, price) {}

void Bodybuilder::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

bool Bodybuilder::isAlive() const {
    return health > 0;
}

void Bodybuilder::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    std::cout << name << " использует способность: " << uniqueAbility << "!" << std::endl;
    attack *= 2;
}