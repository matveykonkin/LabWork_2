#include "Technological Entities/Drone.h"
#include <iostream>
#include <stdexcept>

/**
 * @brief Конструктор дрона
 * @param name Имя дрона
 * @param health Здоровье дрона
 * @param attack Сила атаки дрона
 * @param ability Уникальная способность дрона
 * @param price Цена дрона
 */
Drone::Drone(const std::string& name, int health, int attack,
             const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void Drone::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли дрон.
 * @return true, если здоровье больше 0, иначе false.
 */
bool Drone::isAlive() const {
    return health > 0;
}

/**
 * @brief Использует уникальную способность дрона
 * @param target Цель способности
 * @details Показывает уникальную способность противника
 */
void Drone::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    if (!target->isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }
    std::cout << getName() << " использует способность: " << getAbilityName() 
              << " (показывает уникальную способность противника: "
              << target->getAbilityName() << ")\n";
}