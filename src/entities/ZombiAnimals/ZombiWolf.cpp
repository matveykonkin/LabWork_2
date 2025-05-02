#include "ZombiAnimals/ZombiWolf.h"
#include "Entity.h"
#include <iostream>
#include <stdexcept>

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
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void ZombiWolf::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли зомби-волк.
 * @return true, если здоровье больше 0, иначе false.
 */
bool ZombiWolf::isAlive() const {
    return health > 0;
}

/**
 * @brief Использует уникальную способность зомби-волка
 * @param target Цель способности
 * @details Снижает атаку противника на 35%
 */
void ZombiWolf::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    if (!target->isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }
    std::cout << getName() << " использует способность: " << getAbilityName() 
              << " (снижает атаку противника)\n";
    target->setAttack(target->getAttack() * 0.65);
}
