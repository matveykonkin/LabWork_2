/**
 * @file Drone.cpp
 * @brief Реализация класса Drone (дрон).
 */

#include "Technological Entities/Drone.h"
#include <iostream>

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
 */
void Drone::takeDamage(int damage) {
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
 * @brief Использует уникальную способность дрона.
 * @param target Цель для разведки (указатель на Entity).
 * @details Может разведывать способности противника.
 */
void Drone::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    std::cout << name << " использует способность: " << uniqueAbility << "!" << std::endl;
    std::cout << "Разведана информация о противнике: " << target->getName() << std::endl;
    std::cout << "Здоровье: " << target->getHealth() << std::endl;
    std::cout << "Атака: " << target->getAttack() << std::endl;
} 