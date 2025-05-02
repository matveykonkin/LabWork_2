/**
 * @file Pigeon.cpp
 * @brief Реализация класса Pigeon
 */

#include "Entities/Pigeon.h"

/**
 * @brief Конструктор голубя
 * @param name Имя голубя
 * @param health Здоровье голубя
 * @param attack Сила атаки голубя
 * @param ability Уникальная способность голубя
 * @param price Цена голубя
 */
Pigeon::Pigeon(const std::string& name, int health, int attack,
               const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Pigeon::useUniqueAbility(Entity* target) {
    if (target) {
        health += 20; // Временное увеличение здоровья
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Pigeon::takeDamage(int damage) {
    health -= damage;
}

/**
 * @brief Проверить, жив ли голубь
 * @return true, если голубь жив
 */
bool Pigeon::isAlive() const {
    return health > 0;
} 