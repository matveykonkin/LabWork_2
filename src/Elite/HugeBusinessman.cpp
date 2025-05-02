/**
 * @file HugeBusinessman.cpp
 * @brief Реализация класса HugeBusinessman
 */

#include "Elite/HugeBusinessman.h"

/**
 * @brief Конструктор крупного бизнесмена
 * @param name Имя крупного бизнесмена
 * @param health Здоровье крупного бизнесмена
 * @param attack Сила атаки крупного бизнесмена
 * @param ability Уникальная способность крупного бизнесмена
 * @param price Цена крупного бизнесмена
 */
HugeBusinessman::HugeBusinessman(const std::string& name, int health, int attack,
                                 const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void HugeBusinessman::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(11); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void HugeBusinessman::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли крупный бизнесмен
 * @return true, если крупный бизнесмен жив
 */
bool HugeBusinessman::isAlive() const {
 