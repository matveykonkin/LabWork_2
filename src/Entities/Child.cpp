/**
 * @file Child.cpp
 * @brief Реализация класса Child
 */

#include "Entities/Child.h"

/**
 * @brief Конструктор ребенка
 * @param name Имя ребенка
 * @param health Здоровье ребенка
 * @param attack Сила атаки ребенка
 * @param ability Уникальная способность ребенка
 * @param price Цена ребенка
 */
Child::Child(const std::string& name, int health, int attack,
             const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Child::useUniqueAbility(Entity* target) {
    if (target) {
        attack += 15; // Временное увеличение атаки
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Child::takeDamage(int damage) {
    health -= damage;
}

/**
 * @brief Проверить, жив ли ребенок
 * @return true, если ребенок жив
 */
bool Child::isAlive() const {
    return health > 0;
} 