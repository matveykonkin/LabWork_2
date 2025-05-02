#include "Technological Entities/Robot.h"
#include <iostream>
#include <stdexcept>

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
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void Robot::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    if (health > 0) {
        health = std::max(0, health - damage);
    }
}

/**
 * @brief Проверяет, жив ли робот.
 * @return true, если здоровье больше 0, иначе false.
 */
bool Robot::isAlive() const {
    return health > 0;
}

/**
 * @brief Использует уникальную способность робота
 * @param target Цель способности
 * @details Восстанавливает здоровье робота
 */
void Robot::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    if (!target->isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }
    std::cout << getName() << " использует способность: " << getAbilityName() << "!\n";
    health += 50;
    if (health > getMaxHealth()) {
        health = getMaxHealth();
    }
}
