/**
 * @file Dog.cpp
 * @brief Реализация класса Dog
 */

#include "Entities/Dog.h"

/**
 * @brief Конструктор собаки
 * @param name Имя собаки
 * @param health Здоровье собаки
 * @param attack Сила атаки собаки
 * @param ability Уникальная способность собаки
 * @param price Цена собаки
 */
Dog::Dog(const std::string& name, int health, int attack,
         const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Dog::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(-40); // Восстановление здоровья союзника
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Dog::takeDamage(int damage) {
    health -= damage;
}

/**
 * @brief Проверить, жив ли собака
 * @return true, если собака жива
 */
bool Dog::isAlive() const {
    return health > 0;
} 