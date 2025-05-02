/**
 * @file ZombiDog.cpp
 * @brief Реализация класса ZombiDog
 */

#include "ZombiAnimals/ZombiDog.h"

/**
 * @brief Конструктор зомби-собаки
 * @param name Имя зомби-собаки
 * @param health Здоровье зомби-собаки
 * @param attack Сила атаки зомби-собаки
 * @param ability Уникальная способность зомби-собаки
 * @param price Цена зомби-собаки
 */
ZombiDog::ZombiDog(const std::string& name, int health, int attack,
                   const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void ZombiDog::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(9); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void ZombiDog::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли зомби-собака
 * @return true, если зомби-собака жив
 */
bool ZombiDog::isAlive() const {
    return health > 0;
} 