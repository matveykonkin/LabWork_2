/**
 * @file Banker.cpp
 * @brief Реализация класса Banker
 */

#include "Elite/Banker.h"

/**
 * @brief Конструктор банкира
 * @param name Имя банкира
 * @param health Здоровье банкира
 * @param attack Сила атаки банкира
 * @param ability Уникальная способность банкира
 * @param price Цена банкира
 */
Banker::Banker(const std::string& name, int health, int attack,
               const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Banker::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(16); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Banker::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли банкир
 * @return true, если банкир жив
 */
bool Banker::isAlive() const {
    return health > 0;
} 