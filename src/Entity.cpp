#include "Entity.h"
#include <iostream>

Entity::Entity(const std::string& name, int health, int attack, const std::string& uniqueAbility, int price)
    : name(name), health(health), attack(attack), uniqueAbility(uniqueAbility), price(price) {}

Entity::~Entity() {}

void Entity::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
    if (health > maxHealth) health = maxHealth;
}

bool Entity::isAlive() const {
    return health > 0;
}

void Entity::output() const {
    std::cout << name << " (Health: " << health << ", Attack: " << attack << ")" << std::endl;
}



void Entity::setSkipTurn(bool skip) {
    skipTurn = skip;
}

void Entity::setAbilitiesLocked(bool locked) {
    abilitiesLocked = locked; 
}

void Entity::setAttack(int value) {
    attack = value;
}