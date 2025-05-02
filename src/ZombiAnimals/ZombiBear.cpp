/**
 * @file ZombiBear.cpp
 * @brief Реализация класса ZombiBear
 */

#include "ZombiAnimals/ZombiBear.h"

/**
 * @brief Конструктор зомби-медведя
 * @param name Имя зомби-медведя
 * @param health Здоровье зомби-медведя
 * @param attack Сила атаки зомби-медведя
 * @param ability Уникальная способность зомби-медведя
 * @param price Цена зомби-медведя
 */
ZombiBear::ZombiBear(const std::string& name, int health, int attack,
                     const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void ZombiBear::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(14); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void ZombiBear::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли зомби-медведь
 * @return true, если зомби-медведь жив
 */
bool ZombiBear::isAlive() const {
    return health > 0;
} 