/**
 * @file ZombiWolf.cpp
 * @brief Реализация класса ZombiWolf
 */

#include "ZombiAnimals/ZombiWolf.h"

/**
 * @brief Конструктор зомби-волка
 * @param name Имя зомби-волка
 * @param health Здоровье зомби-волка
 * @param attack Сила атаки зомби-волка
 * @param ability Уникальная способность зомби-волка
 * @param price Цена зомби-волка
 */
ZombiWolf::ZombiWolf(const std::string& name, int health, int attack,
                     const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void ZombiWolf::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(10); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void ZombiWolf::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли зомби-волк
 * @return true, если зомби-волк жив
 */
bool ZombiWolf::isAlive() const {
    return health > 0;
} 