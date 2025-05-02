/**
 * @file Scientist.cpp
 * @brief Реализация класса Scientist
 */

#include "Entities/Scientist.h"

/**
 * @brief Конструктор ученого
 * @param name Имя ученого
 * @param health Здоровье ученого
 * @param attack Сила атаки ученого
 * @param ability Уникальная способность ученого
 * @param price Цена ученого
 */
Scientist::Scientist(const std::string& name, int health, int attack,
                     const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Scientist::useUniqueAbility(Entity* target) {
    if (target) {
        health += 50; // Временное увеличение здоровья
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Scientist::takeDamage(int damage) {
    health -= damage;
}

/**
 * @brief Проверить, жив ли ученый
 * @return true, если ученый жив
 */
bool Scientist::isAlive() const {
    return health > 0;
} 