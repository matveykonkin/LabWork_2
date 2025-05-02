/**
 * @file ZombiDoctor.cpp
 * @brief Реализация класса ZombiDoctor
 */

#include "ZombiAnimals/ZombiDoctor.h"

/**
 * @brief Конструктор зомби-доктора
 * @param name Имя зомби-доктора
 * @param health Здоровье зомби-доктора
 * @param attack Сила атаки зомби-доктора
 * @param ability Уникальная способность зомби-доктора
 * @param price Цена зомби-доктора
 */
ZombiDoctor::ZombiDoctor(const std::string& name, int health, int attack,
                         const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void ZombiDoctor::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(-10); // Восстанавливаем здоровье
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void ZombiDoctor::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли зомби-доктор
 * @return true, если зомби-доктор жив
 */
bool ZombiDoctor::isAlive() const {
    return health > 0;
} 