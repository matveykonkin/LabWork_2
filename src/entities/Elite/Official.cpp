#include "Elite/Official.h"
#include "Entity.h"
#include <iostream>
#include <stdexcept>

/**
 * @brief Конструктор чиновника
 * @param name Имя чиновника
 * @param health Здоровье чиновника
 * @param attack Сила атаки чиновника
 * @param ability Уникальная способность чиновника
 * @param price Цена чиновника
 */
Official::Official(const std::string& name, int health, int attack,
                  const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void Official::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли чиновник.
 * @return true, если здоровье больше 0, иначе false.
 */
bool Official::isAlive() const {
    return health > 0;
}

/**
 * @brief Использует уникальную способность чиновника
 * @param target Цель способности
 * @details Увеличивает атаку союзника на 45%
 */
void Official::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    if (!target->isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }
    std::cout << getName() << " использует способность: " << getAbilityName() 
              << " (увеличивает атаку союзника)\n";
    target->setAttack(target->getAttack() * 1.45);
}