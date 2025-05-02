/**
 * @file Robot.cpp
 * @brief Реализация класса Robot (робот).
 */

#include "Technological Entities/Robot.h"
#include <iostream>

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
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 */
void Robot::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли робот.
 * @return true, если здоровье больше 0, иначе false.
 */
bool Robot::isAlive() const {
    return health > 0;
}

/**
 * @brief Использует уникальную способность робота.
 * @param target Цель для атаки (указатель на Entity).
 * @details Может перезагружаться, восстанавливая здоровье.
 */
void Robot::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    std::cout << name << " использует способность: " << uniqueAbility << "!" << std::endl;
    health += 30; // Восстанавливает здоровье
    if (health > 100) health = 100; // Ограничивает максимальное здоровье
} 