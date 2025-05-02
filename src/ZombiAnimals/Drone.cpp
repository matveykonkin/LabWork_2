/**
 * @file Drone.cpp
 * @brief Реализация класса Drone
 */

#include "ZombiAnimals/Drone.h"

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
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Drone::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(8); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Drone::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли дрон
 * @return true, если дрон жив
 */
bool Drone::isAlive() const {
    return health > 0;
} 