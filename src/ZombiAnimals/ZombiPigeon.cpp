/**
 * @file ZombiPigeon.cpp
 * @brief Реализация класса ZombiPigeon
 */

#include "ZombiAnimals/ZombiPigeon.h"

/**
 * @brief Конструктор зомби-голубя
 * @param name Имя зомби-голубя
 * @param health Здоровье зомби-голубя
 * @param attack Сила атаки зомби-голубя
 * @param ability Уникальная способность зомби-голубя
 * @param price Цена зомби-голубя
 */
ZombiPigeon::ZombiPigeon(const std::string& name, int health, int attack,
                         const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void ZombiPigeon::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(6); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void ZombiPigeon::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли зомби-голубь
 * @return true, если зомби-голубь жив
 */
bool ZombiPigeon::isAlive() const {
    return health > 0;
} 