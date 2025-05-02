#include "ZombiAnimals/ZombiDog.h"
#include "Entity.h"
#include <iostream>
#include <stdexcept>

/**
 * @brief Конструктор зомби-собаки
 * @param name Имя зомби-собаки
 * @param health Здоровье зомби-собаки
 * @param attack Сила атаки зомби-собаки
 * @param ability Уникальная способность зомби-собаки
 * @param price Цена зомби-собаки
 */
ZombiDog::ZombiDog(const std::string& name, int health, int attack,
                   const std::string& ability, int price)
    : Entity(name, health, attack, ability, price) {}

/**
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void ZombiDog::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жива ли зомби-собака.
 * @return true, если здоровье больше 0, иначе false.
 */
bool ZombiDog::isAlive() const {
    return health > 0;
}

/**
 * @brief Использует уникальную способность зомби-собаки
 * @param target Цель способности
 * @details Снижает атаку противника на 25%
 */
void ZombiDog::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    if (!target->isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }
    std::cout << getName() << " использует способность: " << getAbilityName() 
              << " (снижает атаку противника)\n";
    target->setAttack(target->getAttack() * 0.75);
}
