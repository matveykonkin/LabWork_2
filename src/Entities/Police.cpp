/**
 * @file Police.cpp
 * @brief Реализация класса Police
 */

#include "Entities/Police.h"

/**
 * @brief Конструктор полицейского
 * @param name Имя полицейского
 * @param health Здоровье полицейского
 * @param attack Сила атаки полицейского
 * @param ability Уникальная способность полицейского
 * @param price Цена полицейского
 */
Police::Police(const std::string& name, int health, int attack,
               const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Police::useUniqueAbility(Entity* target) {
    if (target) {
        target->setSkipTurn(true); // Обездвижить противника
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Police::takeDamage(int damage) {
    health -= damage;
}

/**
 * @brief Проверить, жив ли полицейский
 * @return true, если полицейский жив
 */
bool Police::isAlive() const {
    return health > 0;
} 