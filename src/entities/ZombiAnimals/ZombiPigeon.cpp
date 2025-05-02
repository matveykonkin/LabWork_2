#include "ZombiAnimals/ZombiPigeon.h"
#include "Entity.h"
#include <iostream>
#include <stdexcept>

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
 * @brief Обрабатывает получение урона.
 * @param damage Количество полученного урона.
 * @details Уменьшает здоровье на величину урона, но не ниже 0.
 */
void ZombiPigeon::takeDamage(int damage) {
    if (damage < 0) {
        throw std::invalid_argument("Урон не может быть отрицательным");
    }
    health -= damage;
    if (health < 0) health = 0;
}

/**
 * @brief Проверяет, жив ли зомби-голубь.
 * @return true, если здоровье больше 0, иначе false.
 */
bool ZombiPigeon::isAlive() const {
    return health > 0;
}

/**
 * @brief Использует уникальную способность зомби-голубя
 * @param target Цель способности
 * @details Снижает атаку противника на 20%
 */
void ZombiPigeon::useUniqueAbility(Entity* target) {
    if (!target) {
        throw std::invalid_argument("Цель не может быть nullptr");
    }
    if (!target->isAlive()) {
        throw std::invalid_argument("Цель уже мертва");
    }
    std::cout << getName() << " использует способность: " << getAbilityName() 
              << " (снижает атаку противника)\n";
    target->setAttack(target->getAttack() * 0.8);
}