/**
 * @file ZombiPolice.cpp
 * @brief Реализация класса ZombiPolice
 */

#include "ZombiAnimals/ZombiPolice.h"

/**
 * @brief Конструктор зомби-полицейского
 * @param name Имя зомби-полицейского
 * @param health Здоровье зомби-полицейского
 * @param attack Сила атаки зомби-полицейского
 * @param ability Уникальная способность зомби-полицейского
 * @param price Цена зомби-полицейского
 */
ZombiPolice::ZombiPolice(const std::string& name, int health, int attack,
                         const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void ZombiPolice::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(5); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void ZombiPolice::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли зомби-полицейский
 * @return true, если зомби-полицейский жив
 */
bool ZombiPolice::isAlive() const {
    return health > 0;
} 