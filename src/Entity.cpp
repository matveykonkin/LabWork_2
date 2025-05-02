/**
 * @file Entity.cpp
 * @brief Реализация базового класса сущности
 */

#include "Entity.h"
#include <stdexcept>

Entity::Entity(const std::string& name, int health, int attack, 
               const std::string& ability, int price)
    : name(name), health(health), maxHealth(health), 
      attack(attack), uniqueAbility(ability), price(price) {
    if (health <= 0) {
        throw std::invalid_argument("Здоровье должно быть положительным");
    }
    if (attack < 0) {
        throw std::invalid_argument("Атака не может быть отрицательной");
    }
    if (price < 0) {
        throw std::invalid_argument("Цена не может быть отрицательной");
    }
}

void Entity::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    if (health > 0) {
        health = std::max(0, health - damage);
    }
}

bool Entity::isAlive() const {
    return health > 0;
} 