/**
 * @file Bear.cpp
 * @brief Реализация класса Bear
 */

#include "Entities/Bear.h"

/**
 * @brief Конструктор медведя
 * @param name Имя медведя
 * @param health Здоровье медведя
 * @param attack Сила атаки медведя
 * @param ability Уникальная способность медведя
 * @param price Цена медведя
 */
Bear::Bear(const std::string& name, int health, int attack,
           const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Bear::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(attack * 3); // Тройной урон
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Bear::takeDamage(int damage) {
    health -= damage;
}

/**
 * @brief Проверить, жив ли медведь
 * @return true, если медведь жив
 */
bool Bear::isAlive() const {
    return health > 0;
} 