/**
 * @file Official.cpp
 * @brief Реализация класса Official
 */

#include "Elite/Official.h"

/**
 * @brief Конструктор чиновника
 * @param name Имя чиновника
 * @param health Здоровье чиновника
 * @param attack Сила атаки чиновника
 * @param ability Уникальная способность чиновника
 * @param price Цена чиновника
 */
Official::Official(const std::string& name, int health, int attack,
                   const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Official::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(13); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Official::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли чиновник
 * @return true, если чиновник жив
 */
bool Official::isAlive() const {
    return health > 0;
} 