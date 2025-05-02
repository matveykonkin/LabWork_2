/**
 * @file Wolf.cpp
 * @brief Реализация класса Wolf
 */

#include "Entities/Wolf.h"

/**
 * @brief Конструктор волка
 * @param name Имя волка
 * @param health Здоровье волка
 * @param attack Сила атаки волка
 * @param ability Уникальная способность волка
 * @param price Цена волка
 */
Wolf::Wolf(const std::string& name, int health, int attack,
           const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Wolf::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(attack * 2);
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Wolf::takeDamage(int damage) {
    health -= damage;
}

/**
 * @brief Проверить, жив ли волк
 * @return true, если волк жив
 */
bool Wolf::isAlive() const {
    return health > 0;
} 