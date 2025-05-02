/**
 * @file ZombiTeacher.cpp
 * @brief Реализация класса ZombiTeacher
 */

#include "ZombiAnimals/ZombiTeacher.h"
#include <iostream>
#include <stdexcept>

ZombiTeacher::ZombiTeacher(const std::string& name, int health, int attack,
                           const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

void ZombiTeacher::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    std::cout << getName() << " использует " << getAbilityName() << "!\n";
    target->setAttack(target->getAttack() + 5);
}

void ZombiTeacher::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    health -= damage;
    if (health <= 0) {
        health = 0;
        isAliveFlag = false;
    }
}

bool ZombiTeacher::isAlive() const {
    return health > 0;
} 