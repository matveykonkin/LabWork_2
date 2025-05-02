/**
 * @file SmallBusinessman.cpp
 * @brief Реализация класса SmallBusinessman
 */

#include "Elite/SmallBusinessman.h"

/**
 * @brief Конструктор малого бизнесмена
 * @param name Имя малого бизнесмена
 * @param health Здоровье малого бизнесмена
 * @param attack Сила атаки малого бизнесмена
 * @param ability Уникальная способность малого бизнесмена
 * @param price Цена малого бизнесмена
 */
SmallBusinessman::SmallBusinessman(const std::string& name, int health, int attack,
                                  const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void SmallBusinessman::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(7); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void SmallBusinessman::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли малый бизнесмен
 * @return true, если малый бизнесмен жив
 */
bool SmallBusinessman::isAlive() const {
    return health > 0;
} 