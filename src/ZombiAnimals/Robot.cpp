/**
 * @file Robot.cpp
 * @brief Реализация класса Robot
 */

#include "ZombiAnimals/Robot.h"

/**
 * @brief Конструктор робота
 * @param name Имя робота
 * @param health Здоровье робота
 * @param attack Сила атаки робота
 * @param ability Уникальная способность робота
 * @param price Цена робота
 */
Robot::Robot(const std::string& name, int health, int attack,
             const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Использовать уникальную способность
 * @param target Цель способности
 */
void Robot::useUniqueAbility(Entity* target) {
    if (target) {
        target->takeDamage(12); // Наносим урон
        std::cout << getName() << " использует способность " << getAbility()
                  << " на " << target->getName() << std::endl;
    }
}

/**
 * @brief Получить урон
 * @param damage Количество урона
 */
void Robot::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

/**
 * @brief Проверить, жив ли робот
 * @return true, если робот жив
 */
bool Robot::isAlive() const {
    return health > 0;
} 